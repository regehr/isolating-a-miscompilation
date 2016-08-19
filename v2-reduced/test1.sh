ulimit -t 30

FILES=merged.c

INCS=

gcc -w -O0 $INCS $FILES -o exe1a &&
./exe1a &&
echo here1 &&
clang -w -O0 $INCS $FILES -o exe1b &&
./exe1b &&
echo here2 &&
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
echo here3 &&
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
echo here4 &&
/home/regehr/z/compiler-install/llvm-r135022-install/bin/clang -w -O3 -fno-strict-aliasing $INCS $FILES -o exe2 &&
! ./exe2 > out.txt 2>&1 &&
grep wrong out.txt &&
~/tis-interpreter/tis-interpreter.sh -cpp-command "gcc -C -E -I/home/regehr/gmp-6.1.1/mpz -I/home/regehr/gmp-6.1.1/rand -I/home/regehr/gmp-6.1.1 -I/home/regehr/gmp-6.1.1/tests -I/home/regehr/gmp-6.1.1/build" $FILES > tis-out.txt 2>&1 &&
! grep -i error tis-out.txt &&
! grep -i assert tis-out.txt
