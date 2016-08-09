ulimit -t 40

FILES="t-lucnum_ui.c misc.c clear.c memory.c randclr.c randlc2x.c cfdiv_r_2exp.c neg.c com.c realloc.c init.c init2.c assert.c iset.c tal-reent.c lshift.c rshift.c add_n.c mul.c nussbaumer_mul.c mulmod_bnm1.c mul_fft.c sub_1.c add_1.c cmp.c sub.c sub_n.c add.c mul_n.c toom8h_mul.c toom_interpolate_16pts.c dive_1.c mp_minv_tab.c mp_clz_tab.c submul_1.c addmul_1.c toom6h_mul.c toom_interpolate_12pts.c bdiv_dbm1c.c toom44_mul.c toom_interpolate_7pts.c toom33_mul.c toom_interpolate_5pts.c toom22_mul.c mul_basecase.c mul_1.c toom32_mul.c zero_p.c toom_eval_dgr3_pm1.c toom_eval_dgr3_pm2.c toom_couple_handling.c toom_eval_pm2.c toom_eval_pm2rexp.c toom_eval_pm2exp.c toom_eval_pm1.c sqr.c toom8_sqr.c toom6_sqr.c toom2_sqr.c sqr_basecase.c toom4_sqr.c toom3_sqr.c lshiftc.c sqrmod_bnm1.c toom63_mul.c toom_interpolate_8pts.c toom42_mul.c toom53_mul.c toom43_mul.c toom_interpolate_6pts.c set_ui.c randlc2s.c iset_str.c set_str.c xset_str.c mp_bases.c mp_dv_tab.c randmts.c randmt.c export.c clrbit.c tstbit.c add_ui.c mod.c xadd.c tdiv_r.c tdiv_qr.c mu_div_qr.c invertappr.c sbpi1_divappr_q.c divrem_2.c dcpi1_div_qr.c sbpi1_div_qr.c divrem_1.c errno.c mp_bpl.c sub_ui.c setbit.c xmul.c aorsmul_i.c tdiv_r_2exp.c tdiv_q_2exp.c randdef.c rands.c xneg.c rrandomb.c randmui.c urandomb.c xxset_str.c divrem.c xxxset_str.c randsdui.c randsd.c xmemory.c mp_set_fns.c version.c trace.c out_str.c get_str.c pre_divrem_1.c swap.c xcmp.c lucnum_ui.c fib_table.c fib2_ui.c lucnum2_ui.c iset_ui.c iset_si.c"

INCS="-I$HOME/gmp-6.1.1/rand -I$HOME/gmp-6.1.1/mpz -I$HOME/gmp-6.1.1 -I$HOME/gmp-6.1.1/build -I$HOME/gmp-6.1.1/tests"

gcc -w -O0 $INCS $FILES -o exe1a &&
./exe1a &&
clang -w -O0 $INCS $FILES -o exe1b &&
./exe1b &&
gcc -Wall -Wextra -O3 $INCS $FILES -o exe1c > gcc-out.txt 2>&1 &&
  ! grep uninitialized gcc-out.txt &&
  ! grep 'without a cast' gcc-out.txt &&
  ! grep 'control reaches end' gcc-out.txt &&
  ! grep 'return type defaults' gcc-out.txt &&
  ! grep 'cast from pointer to integer' gcc-out.txt &&
  ! grep 'useless type name in empty declaration' gcc-out.txt &&
  ! grep 'no semicolon at end' gcc-out.txt &&
  ! grep 'type defaults to' gcc-out.txt &&
  ! grep 'too few arguments for format' gcc-out.txt &&
  ! grep 'incompatible pointer' gcc-out.txt &&
  ! grep 'ordered comparison of pointer with integer' gcc-out.txt &&
  ! grep 'declaration does not declare anything' gcc-out.txt &&
  ! grep 'expects type' gcc-out.txt &&
  ! grep 'pointer from integer' gcc-out.txt &&
  ! grep 'incompatible implicit' gcc-out.txt &&
  ! grep 'excess elements in struct initializer' gcc-out.txt &&
  ! grep 'comparison between pointer and integer' gcc-out.txt &&
./exe1c &&
clang -Wall -Wextra -O3 -fsanitize=undefined -fsanitize-trap=undefined $INCS $FILES -o exe1d > clang-out.txt 2>&1 &&
  ! grep 'conversions than data arguments' clang-out.txt &&
  ! grep 'incompatible redeclaration' clang-out.txt &&
  ! grep 'ordered comparison between pointer' clang-out.txt &&
  ! grep 'eliding middle term' clang-out.txt &&
  ! grep 'end of non-void function' clang-out.txt &&
  ! grep 'invalid in C99' clang-out.txt &&
  ! grep 'specifies type' clang-out.txt &&
  ! grep 'should return a value' clang-out.txt &&
  ! grep 'uninitialized' clang-out.txt &&
  ! grep 'incompatible pointer to' clang-out.txt &&
  ! grep 'incompatible integer to' clang-out.txt &&
  ! grep 'type specifier missing' clang-out.txt &&
./exe1d &&
$HOME/llvm-r135022-install/bin/clang -w -O3 -fno-strict-aliasing $INCS $FILES -o exe2 &&
! ./exe2 > out.txt 2>&1 &&
grep wrong out.txt &&
~/tis-interpreter/tis-interpreter.sh -cpp-command "gcc -C -E -I$HOME/gmp-6.1.1/mpz -I$HOME/gmp-6.1.1/rand -I$HOME/gmp-6.1.1 -I$HOME/gmp-6.1.1/tests -I$HOME/gmp-6.1.1/build" $FILES > tis-out.txt 2>&1 &&
! grep -i error tis-out.txt &&
! grep -i assert tis-out.txt
