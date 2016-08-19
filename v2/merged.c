# 1 "a.cil.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "a.cil.c"



typedef unsigned long size_t;
typedef unsigned long mp_limb_t;
typedef unsigned long mp_bitcnt_t;
struct __anonstruct___mpz_struct_688629798 {
   int _mp_alloc ;
   int _mp_size ;
   mp_limb_t *_mp_d ;
};
typedef struct __anonstruct___mpz_struct_688629798 __mpz_struct;
typedef mp_limb_t *mp_ptr;
typedef mp_limb_t const *mp_srcptr;
typedef long mp_size_t;
struct __anonstruct___mpq_struct_447598393 {
   __mpz_struct _mp_num ;
   __mpz_struct _mp_den ;
};
typedef struct __anonstruct___mpq_struct_447598393 __mpq_struct;
typedef __mpz_struct const *mpz_srcptr;
typedef __mpz_struct *mpz_ptr;
typedef __mpq_struct const *mpq_srcptr;
typedef __mpq_struct *mpq_ptr;
typedef mp_limb_t UWtype;
typedef unsigned int UHWtype;
typedef long __off_t;
typedef long __off64_t;

typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};

struct __anonstruct_gmp_pi1_t_376420164 {
   mp_limb_t inv32 ;
};
typedef struct __anonstruct_gmp_pi1_t_376420164 gmp_pi1_t;
struct tmp_reentrant_t {
   struct tmp_reentrant_t *next ;
   size_t size ;
};
struct bases {
   int chars_per_limb ;
   mp_limb_t logb2 ;
   mp_limb_t log2b ;
   mp_limb_t big_base ;
   mp_limb_t big_base_inverted ;
};
struct powers {
   mp_ptr p ;
   mp_size_t n ;
   mp_size_t shift ;
   size_t digits_in_base ;
   int base ;
};
typedef struct powers powers_t;
typedef long __time_t;
typedef long __suseconds_t;
struct __anonstruct___sigset_t_973126068 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_973126068 __sigset_t;
typedef void (*__sighandler_t)(int );

typedef struct timezone * __restrict __timezone_ptr_t;
typedef __mpz_struct mpz_t[1];
typedef long mp_exp_t;
struct __anonstruct___mpf_struct_748262066 {
   int _mp_prec ;
   int _mp_size ;
   mp_exp_t _mp_exp ;
   mp_limb_t *_mp_d ;
};
typedef struct __anonstruct___mpf_struct_748262066 __mpf_struct;
enum __anonenum_gmp_randalg_t_103797498 {
    GMP_RAND_ALG_DEFAULT = 0,
    GMP_RAND_ALG_LC = 0
} ;
typedef enum __anonenum_gmp_randalg_t_103797498 gmp_randalg_t;
union __anonunion__mp_algdata_642786129 {
   void *_mp_lc ;
};
struct __anonstruct___gmp_randstate_struct_1029968866 {
   mpz_t _mp_seed ;
   gmp_randalg_t _mp_alg ;
   union __anonunion__mp_algdata_642786129 _mp_algdata ;
};
typedef struct __anonstruct___gmp_randstate_struct_1029968866 __gmp_randstate_struct;
typedef __gmp_randstate_struct gmp_randstate_t[1];
typedef __mpf_struct *mpf_ptr;
typedef unsigned int uint_least32_t;
typedef long intptr_t;
typedef uint_least32_t gmp_uint_least32_t;
typedef intptr_t gmp_intptr_t;
typedef __gmp_randstate_struct *gmp_randstate_ptr;
typedef __gmp_randstate_struct const *gmp_randstate_srcptr;
struct __anonstruct_gmp_randfnptr_t_1027662539 {
   void (*randseed_fn)(__gmp_randstate_struct * , mpz_srcptr ) ;
   void (*randget_fn)(__gmp_randstate_struct * , mp_ptr , unsigned long ) ;
   void (*randclear_fn)(__gmp_randstate_struct * ) ;
   void (*randiset_fn)(gmp_randstate_ptr , gmp_randstate_srcptr ) ;
};
typedef struct __anonstruct_gmp_randfnptr_t_1027662539 gmp_randfnptr_t;
struct __anonstruct_s_182147055 {
   gmp_uint_least32_t manl : 32 ;
   gmp_uint_least32_t manh : 20 ;
   gmp_uint_least32_t exp : 11 ;
   gmp_uint_least32_t sig : 1 ;
};
union ieee_double_extract {
   struct __anonstruct_s_182147055 s ;
   double d ;
};
typedef long __jmp_buf[8];
struct __jmp_buf_tag {
   __jmp_buf __jmpbuf ;
   int __mask_was_saved ;
   __sigset_t __saved_mask ;
};
typedef struct __jmp_buf_tag jmp_buf[1];
typedef long mp_limb_signed_t;
struct __gmp_rand_lc_scheme_struct {
   unsigned long m2exp ;
   char const *astr ;
   unsigned long c ;
};
struct __anonstruct_gmp_randfnptr_t_1027662539___0 {
   void (*randseed_fn)(__gmp_randstate_struct * , mpz_srcptr ) ;
   void (*randget_fn)(__gmp_randstate_struct * , mp_ptr , unsigned long ) ;
   void (*randclear_fn)(__gmp_randstate_struct * ) ;
   void (*randiset_fn)(gmp_randstate_ptr , gmp_randstate_srcptr ) ;
};
struct __anonstruct_gmp_rand_lc_struct_755935027 {
   mpz_t _mp_seed ;
   mpz_t _mp_a ;
   mp_size_t _cn ;
   mp_limb_t _cp[1] ;
   unsigned long _mp_m2exp ;
};
typedef struct __anonstruct_gmp_rand_lc_struct_755935027 gmp_rand_lc_struct;
struct __anonstruct_gmp_randfnptr_t_1027662539___1 {
   void (*randseed_fn)(__gmp_randstate_struct * , mpz_srcptr ) ;
   void (*randget_fn)(__gmp_randstate_struct * , mp_ptr , unsigned long ) ;
   void (*randclear_fn)(__gmp_randstate_struct * ) ;
   void (*randiset_fn)(gmp_randstate_ptr , gmp_randstate_srcptr ) ;
};
struct __anonstruct_gmp_rand_mt_struct_1045451586 {
   gmp_uint_least32_t mt[624] ;
   int mti ;
};
typedef struct __anonstruct_gmp_rand_mt_struct_1045451586 gmp_rand_mt_struct;
struct __anonstruct_gmp_randfnptr_t_1027662539___2 {
   void (*randseed_fn)(__gmp_randstate_struct * , mpz_srcptr ) ;
   void (*randget_fn)(__gmp_randstate_struct * , mp_ptr , unsigned long ) ;
   void (*randclear_fn)(__gmp_randstate_struct * ) ;
   void (*randiset_fn)(gmp_randstate_ptr , gmp_randstate_srcptr ) ;
};
union tmp_align_t {
   mp_limb_t l ;
   char *p ;
};
enum toom6_flags {
    toom6_all_pos = 0,
    toom6_vm1_neg = 1,
    toom6_vm2_neg = 2
} ;
enum toom7_flags {
    toom7_w1_neg = 1,
    toom7_w3_neg = 2
} ;
typedef __mpq_struct mpq_t[1];
typedef __mpf_struct const *mpf_srcptr;
union __anonunion_u_63425915 {
   double d ;
   unsigned char b[sizeof(double )] ;
};
struct header {
   void *ptr ;
   size_t size ;
   struct header *next ;
};
struct lconv {
   char *decimal_point ;
   char *thousands_sep ;
   char *grouping ;
   char *int_curr_symbol ;
   char *currency_symbol ;
   char *mon_decimal_point ;
   char *mon_thousands_sep ;
   char *mon_grouping ;
   char *positive_sign ;
   char *negative_sign ;
   char int_frac_digits ;
   char frac_digits ;
   char p_cs_precedes ;
   char p_sep_by_space ;
   char n_cs_precedes ;
   char n_sep_by_space ;
   char p_sign_posn ;
   char n_sign_posn ;
   char int_p_cs_precedes ;
   char int_p_sep_by_space ;
   char int_n_cs_precedes ;
   char int_n_sep_by_space ;
   char int_p_sign_posn ;
   char int_n_sign_posn ;
};



#pragma merger("0","./add_1.i","")
__inline extern void __gmpz_abs(mpz_ptr __gmp_w , mpz_srcptr __gmp_u ) ;
__inline extern int __gmpz_fits_uint_p(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
__inline extern int __gmpz_fits_ulong_p(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
__inline extern int __gmpz_fits_ushort_p(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
__inline extern unsigned long __gmpz_get_ui(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
__inline extern mp_limb_t __gmpz_getlimbn(mpz_srcptr __gmp_z , mp_size_t __gmp_n ) __attribute__((__pure__)) ;

__inline extern int __gmpz_perfect_square_p(mpz_srcptr __gmp_a ) __attribute__((__pure__)) ;
__inline extern mp_bitcnt_t __gmpz_popcount(mpz_srcptr __gmp_u ) __attribute__((__pure__)) ;
extern void __gmpz_set(mpz_ptr , mpz_srcptr ) ;
__inline extern void __gmpz_set_q(mpz_ptr __gmp_w , mpq_srcptr __gmp_u ) ;
__inline extern size_t __gmpz_size(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
extern void __gmpz_tdiv_q(mpz_ptr , mpz_srcptr , mpz_srcptr ) ;
__inline extern void __gmpq_abs(mpq_ptr __gmp_w , mpq_srcptr __gmp_u ) ;
__inline extern void __gmpq_neg(mpq_ptr __gmp_w , mpq_srcptr __gmp_u ) ;
extern void __gmpq_set(mpq_ptr , mpq_srcptr ) ;

mp_limb_t __gmpn_add_1(mp_ptr __gmp_dst , mp_srcptr __gmp_src , mp_size_t __gmp_size ,
                       mp_limb_t __gmp_n ) ;
mp_limb_t __gmpn_add_n(mp_ptr rp , mp_srcptr up , mp_srcptr vp , mp_size_t n___0 ) ;

__inline int __gmpn_zero_p(mp_srcptr __gmp_p , mp_size_t __gmp_n ) __attribute__((__pure__)) ;

void __gmpn_com(mp_ptr rp , mp_srcptr up , mp_size_t n___0 ) ;
extern int __gmpn_perfect_square_p(mp_srcptr , mp_size_t ) __attribute__((__pure__)) ;
extern mp_bitcnt_t __gmpn_popcount(mp_srcptr , mp_size_t ) __attribute__((__pure__)) ;


mp_limb_t __gmpn_sub_n(mp_ptr rp , mp_srcptr up , mp_srcptr vp , mp_size_t n___0 ) ;
__inline extern void __gmpz_abs(mpz_ptr __gmp_w , mpz_srcptr __gmp_u )
{


  {
  if ((unsigned long )__gmp_w != (unsigned long )__gmp_u) {
    __gmpz_set(__gmp_w, __gmp_u);
  }
  if (__gmp_w->_mp_size >= 0) {
    __gmp_w->_mp_size = __gmp_w->_mp_size;
  } else {
    __gmp_w->_mp_size = - __gmp_w->_mp_size;
  }
  return;
}
}
__inline extern int __gmpz_fits_uint_p(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
__inline extern int __gmpz_fits_uint_p(mpz_srcptr __gmp_z )
{
  mp_size_t __gmp_n ;
  mp_ptr __gmp_p ;
  int tmp ;

  {
  __gmp_n = (mp_size_t )__gmp_z->_mp_size;
  __gmp_p = (mp_ptr )__gmp_z->_mp_d;
  if (__gmp_n == 0L) {
    tmp = 1;
  } else
  if (__gmp_n == 1L) {
    if (*(__gmp_p + 0) <= 4294967295UL) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return (tmp);
}
}
__inline extern int __gmpz_fits_ulong_p(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
__inline extern int __gmpz_fits_ulong_p(mpz_srcptr __gmp_z )
{
  mp_size_t __gmp_n ;
  mp_ptr __gmp_p ;
  int tmp ;

  {
  __gmp_n = (mp_size_t )__gmp_z->_mp_size;
  __gmp_p = (mp_ptr )__gmp_z->_mp_d;
  if (__gmp_n == 0L) {
    tmp = 1;
  } else
  if (__gmp_n == 1L) {
    if (*(__gmp_p + 0) <= 0xffffffffffffffffUL) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return (tmp);
}
}
__inline extern int __gmpz_fits_ushort_p(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
__inline extern int __gmpz_fits_ushort_p(mpz_srcptr __gmp_z )
{
  mp_size_t __gmp_n ;
  mp_ptr __gmp_p ;
  int tmp ;

  {
  __gmp_n = (mp_size_t )__gmp_z->_mp_size;
  __gmp_p = (mp_ptr )__gmp_z->_mp_d;
  if (__gmp_n == 0L) {
    tmp = 1;
  } else
  if (__gmp_n == 1L) {
    if (*(__gmp_p + 0) <= 65535UL) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return (tmp);
}
}
__inline extern unsigned long __gmpz_get_ui(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
__inline extern unsigned long __gmpz_get_ui(mpz_srcptr __gmp_z )
{
  mp_ptr __gmp_p ;
  mp_size_t __gmp_n ;
  mp_limb_t __gmp_l ;
  mp_limb_t tmp ;

  {
  __gmp_p = (mp_ptr )__gmp_z->_mp_d;
  __gmp_n = (mp_size_t )__gmp_z->_mp_size;
  __gmp_l = *(__gmp_p + 0);
  if (__gmp_n != 0L) {
    tmp = __gmp_l;
  } else {
    tmp = (mp_limb_t )0;
  }
  return (tmp);
}
}
__inline extern mp_limb_t __gmpz_getlimbn(mpz_srcptr __gmp_z , mp_size_t __gmp_n ) __attribute__((__pure__)) ;
__inline extern mp_limb_t __gmpz_getlimbn(mpz_srcptr __gmp_z , mp_size_t __gmp_n )
{
  mp_limb_t __gmp_result ;
  int tmp ;
  int tmp___0 ;
  long tmp___1 ;

  {
  __gmp_result = (mp_limb_t )0;
  if (__gmp_n >= 0L) {
    if (__gmp_z->_mp_size >= 0) {
      tmp = __gmp_z->_mp_size;
    } else {
      tmp = - __gmp_z->_mp_size;
    }
    if (__gmp_n < (mp_size_t )tmp) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )(tmp___0 != 0), 1L);
  if (tmp___1) {
    __gmp_result = *(__gmp_z->_mp_d + __gmp_n);
  }
  return (__gmp_result);
}
}
void __gmpz_neg(mpz_ptr __gmp_w , mpz_srcptr __gmp_u )
{


  {
  if ((unsigned long )__gmp_w != (unsigned long )__gmp_u) {
    __gmpz_set(__gmp_w, __gmp_u);
  }
  __gmp_w->_mp_size = - __gmp_w->_mp_size;
  return;
}
}
__inline extern int __gmpz_perfect_square_p(mpz_srcptr __gmp_a ) __attribute__((__pure__)) ;
__inline extern int __gmpz_perfect_square_p(mpz_srcptr __gmp_a )
{
  mp_size_t __gmp_asize ;
  int __gmp_result ;
  long tmp ;

  {
  __gmp_asize = (mp_size_t )__gmp_a->_mp_size;
  __gmp_result = __gmp_asize >= 0L;
  tmp = __builtin_expect((long )((__gmp_asize > 0L) != 0), 1L);
  if (tmp) {
    __gmp_result = __gmpn_perfect_square_p((mp_srcptr )__gmp_a->_mp_d, __gmp_asize);
  }
  return (__gmp_result);
}
}
__inline extern mp_bitcnt_t __gmpz_popcount(mpz_srcptr __gmp_u ) __attribute__((__pure__)) ;
__inline extern mp_bitcnt_t __gmpz_popcount(mpz_srcptr __gmp_u )
{
  mp_size_t __gmp_usize ;
  mp_bitcnt_t __gmp_result ;
  long tmp ;

  {
  __gmp_usize = (mp_size_t )__gmp_u->_mp_size;
  if (__gmp_usize < 0L) {
    __gmp_result = 0xffffffffffffffffUL;
  } else {
    __gmp_result = (mp_bitcnt_t )0;
  }
  tmp = __builtin_expect((long )((__gmp_usize > 0L) != 0), 1L);
  if (tmp) {
    __gmp_result = __gmpn_popcount((mp_srcptr )__gmp_u->_mp_d, __gmp_usize);
  }
  return (__gmp_result);
}
}
__inline extern void __gmpz_set_q(mpz_ptr __gmp_w , mpq_srcptr __gmp_u )
{


  {
  __gmpz_tdiv_q(__gmp_w, & __gmp_u->_mp_num, & __gmp_u->_mp_den);
  return;
}
}
__inline extern size_t __gmpz_size(mpz_srcptr __gmp_z ) __attribute__((__pure__)) ;
__inline extern size_t __gmpz_size(mpz_srcptr __gmp_z )
{
  int tmp ;

  {
  if (__gmp_z->_mp_size >= 0) {
    tmp = __gmp_z->_mp_size;
  } else {
    tmp = - __gmp_z->_mp_size;
  }
  return ((size_t )tmp);
}
}
__inline extern void __gmpq_abs(mpq_ptr __gmp_w , mpq_srcptr __gmp_u )
{


  {
  if ((unsigned long )__gmp_w != (unsigned long )__gmp_u) {
    __gmpq_set(__gmp_w, __gmp_u);
  }
  if (__gmp_w->_mp_num._mp_size >= 0) {
    __gmp_w->_mp_num._mp_size = __gmp_w->_mp_num._mp_size;
  } else {
    __gmp_w->_mp_num._mp_size = - __gmp_w->_mp_num._mp_size;
  }
  return;
}
}
__inline extern void __gmpq_neg(mpq_ptr __gmp_w , mpq_srcptr __gmp_u )
{


  {
  if ((unsigned long )__gmp_w != (unsigned long )__gmp_u) {
    __gmpq_set(__gmp_w, __gmp_u);
  }
  __gmp_w->_mp_num._mp_size = - __gmp_w->_mp_num._mp_size;
  return;
}
}

mp_limb_t __gmpn_add(mp_ptr __gmp_wp , mp_srcptr __gmp_xp , mp_size_t __gmp_xsize ,
                              mp_srcptr __gmp_yp , mp_size_t __gmp_ysize )
{
  mp_limb_t __gmp_c ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_size_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t tmp___1 ;
  mp_size_t __gmp_j ;

  {
  while (1) {
    __gmp_i = __gmp_ysize;
    if (__gmp_i != 0L) {
      tmp___1 = __gmpn_add_n(__gmp_wp, __gmp_xp, __gmp_yp, __gmp_i);
      if (tmp___1) {
        while (1) {
          if (__gmp_i >= __gmp_xsize) {
            __gmp_c = (mp_limb_t )1;
            goto __gmp_done;
          }
          __gmp_x = (mp_limb_t )*(__gmp_xp + __gmp_i);
          tmp = __gmp_i;
          __gmp_i ++;
          tmp___0 = (__gmp_x + 1UL) & 0xffffffffffffffffUL;
          *(__gmp_wp + tmp) = tmp___0;
          if (! (tmp___0 == 0UL)) {
            break;
          }
        }
      }
    }
    if ((unsigned long )__gmp_wp != (unsigned long )__gmp_xp) {
      while (1) {
        __gmp_j = __gmp_i;
        while (__gmp_j < __gmp_xsize) {
          *(__gmp_wp + __gmp_j) = (mp_limb_t )*(__gmp_xp + __gmp_j);
          __gmp_j ++;
        }
        break;
      }
    }
    __gmp_c = (mp_limb_t )0;
    __gmp_done: ;
    break;
  }
  return (__gmp_c);
}
}
mp_limb_t __gmpn_add_1(mp_ptr __gmp_dst , mp_srcptr __gmp_src , mp_size_t __gmp_size ,
                       mp_limb_t __gmp_n )
{
  mp_limb_t __gmp_c ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_limb_t __gmp_r ;
  mp_size_t __gmp_j ;
  mp_size_t __gmp_j___0 ;

  {
  while (1) {
    __gmp_x = (mp_limb_t )*(__gmp_src + 0);
    __gmp_r = __gmp_x + __gmp_n;
    *(__gmp_dst + 0) = __gmp_r;
    if (__gmp_r < __gmp_n) {
      __gmp_c = (mp_limb_t )1;
      __gmp_i = (mp_size_t )1;
      while (__gmp_i < __gmp_size) {
        __gmp_x = (mp_limb_t )*(__gmp_src + __gmp_i);
        __gmp_r = __gmp_x + 1UL;
        *(__gmp_dst + __gmp_i) = __gmp_r;
        __gmp_i ++;
        if (! (__gmp_r < 1UL)) {
          if ((unsigned long )__gmp_src != (unsigned long )__gmp_dst) {
            while (1) {
              __gmp_j = __gmp_i;
              while (__gmp_j < __gmp_size) {
                *(__gmp_dst + __gmp_j) = (mp_limb_t )*(__gmp_src + __gmp_j);
                __gmp_j ++;
              }
              break;
            }
          }
          __gmp_c = (mp_limb_t )0;
          break;
        }
      }
    } else {
      if ((unsigned long )__gmp_src != (unsigned long )__gmp_dst) {
        while (1) {
          __gmp_j___0 = (mp_size_t )1;
          while (__gmp_j___0 < __gmp_size) {
            *(__gmp_dst + __gmp_j___0) = (mp_limb_t )*(__gmp_src + __gmp_j___0);
            __gmp_j___0 ++;
          }
          break;
        }
      }
      __gmp_c = (mp_limb_t )0;
    }
    break;
  }
  return (__gmp_c);
}
}

int __gmpn_cmp(mp_srcptr __gmp_xp , mp_srcptr __gmp_yp , mp_size_t __gmp_size )
{
  int __gmp_result ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_limb_t __gmp_y ;

  {
  while (1) {
    __gmp_result = 0;
    __gmp_i = __gmp_size;
    while (1) {
      __gmp_i --;
      if (! (__gmp_i >= 0L)) {
        break;
      }
      __gmp_x = (mp_limb_t )*(__gmp_xp + __gmp_i);
      __gmp_y = (mp_limb_t )*(__gmp_yp + __gmp_i);
      if (__gmp_x != __gmp_y) {
        if (__gmp_x > __gmp_y) {
          __gmp_result = 1;
        } else {
          __gmp_result = -1;
        }
        break;
      }
    }
    break;
  }
  return (__gmp_result);
}
}

int __gmpn_zero_p(mp_srcptr __gmp_p , mp_size_t __gmp_n )
{


  {
  while (1) {
    __gmp_n --;
    if (*(__gmp_p + __gmp_n) != 0UL) {
      return (0);
    }
    if (! (__gmp_n != 0L)) {
      break;
    }
  }
  return (1);
}
}
mp_limb_t __gmpn_sub(mp_ptr __gmp_wp , mp_srcptr __gmp_xp , mp_size_t __gmp_xsize ,
                              mp_srcptr __gmp_yp , mp_size_t __gmp_ysize )
{
  mp_limb_t __gmp_c ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_size_t tmp ;
  mp_limb_t tmp___0 ;
  mp_size_t __gmp_j ;

  {
  while (1) {
    __gmp_i = __gmp_ysize;
    if (__gmp_i != 0L) {
      tmp___0 = __gmpn_sub_n(__gmp_wp, __gmp_xp, __gmp_yp, __gmp_i);
      if (tmp___0) {
        while (1) {
          if (__gmp_i >= __gmp_xsize) {
            __gmp_c = (mp_limb_t )1;
            goto __gmp_done;
          }
          __gmp_x = (mp_limb_t )*(__gmp_xp + __gmp_i);
          tmp = __gmp_i;
          __gmp_i ++;
          *(__gmp_wp + tmp) = (__gmp_x - 1UL) & 0xffffffffffffffffUL;
          if (! (__gmp_x == 0UL)) {
            break;
          }
        }
      }
    }
    if ((unsigned long )__gmp_wp != (unsigned long )__gmp_xp) {
      while (1) {
        __gmp_j = __gmp_i;
        while (__gmp_j < __gmp_xsize) {
          *(__gmp_wp + __gmp_j) = (mp_limb_t )*(__gmp_xp + __gmp_j);
          __gmp_j ++;
        }
        break;
      }
    }
    __gmp_c = (mp_limb_t )0;
    __gmp_done: ;
    break;
  }
  return (__gmp_c);
}
}
mp_limb_t __gmpn_sub_1(mp_ptr __gmp_dst , mp_srcptr __gmp_src , mp_size_t __gmp_size ,
                                mp_limb_t __gmp_n )
{
  mp_limb_t __gmp_c ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_limb_t __gmp_r ;
  mp_size_t __gmp_j ;
  mp_size_t __gmp_j___0 ;

  {
  while (1) {
    __gmp_x = (mp_limb_t )*(__gmp_src + 0);
    __gmp_r = __gmp_x - __gmp_n;
    *(__gmp_dst + 0) = __gmp_r;
    if (__gmp_x < __gmp_n) {
      __gmp_c = (mp_limb_t )1;
      __gmp_i = (mp_size_t )1;
      while (__gmp_i < __gmp_size) {
        __gmp_x = (mp_limb_t )*(__gmp_src + __gmp_i);
        __gmp_r = __gmp_x - 1UL;
        *(__gmp_dst + __gmp_i) = __gmp_r;
        __gmp_i ++;
        if (! (__gmp_x < 1UL)) {
          if ((unsigned long )__gmp_src != (unsigned long )__gmp_dst) {
            while (1) {
              __gmp_j = __gmp_i;
              while (__gmp_j < __gmp_size) {
                *(__gmp_dst + __gmp_j) = (mp_limb_t )*(__gmp_src + __gmp_j);
                __gmp_j ++;
              }
              break;
            }
          }
          __gmp_c = (mp_limb_t )0;
          break;
        }
      }
    } else {
      if ((unsigned long )__gmp_src != (unsigned long )__gmp_dst) {
        while (1) {
          __gmp_j___0 = (mp_size_t )1;
          while (__gmp_j___0 < __gmp_size) {
            *(__gmp_dst + __gmp_j___0) = (mp_limb_t )*(__gmp_src + __gmp_j___0);
            __gmp_j___0 ++;
          }
          break;
        }
      }
      __gmp_c = (mp_limb_t )0;
    }
    break;
  }
  return (__gmp_c);
}
}
 mp_limb_t __gmpn_neg(mp_ptr __gmp_rp , mp_srcptr __gmp_up , mp_size_t __gmp_n )
{


  {
  while (*__gmp_up == 0UL) {
    *__gmp_rp = (mp_limb_t )0;
    __gmp_n --;
    if (! __gmp_n) {
      return ((mp_limb_t )0);
    }
    __gmp_up ++;
    __gmp_rp ++;
  }
  *__gmp_rp = (mp_limb_t )(- *__gmp_up & 0xffffffffffffffffUL);
  __gmp_n --;
  if (__gmp_n) {
    __gmp_up ++;
    __gmp_rp ++;
    __gmpn_com(__gmp_rp, __gmp_up, __gmp_n);
  }
  return ((mp_limb_t )1);
}
}
#pragma merger("0","./add.i","")
#pragma merger("0","./addmul_1.i","")
mp_limb_t __gmpn_addmul_1(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , mp_limb_t vl ) ;
mp_limb_t __gmpn_addmul_1(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , mp_limb_t vl )
{
  mp_limb_t ul ;
  mp_limb_t cl ;
  mp_limb_t hpl ;
  mp_limb_t lpl ;
  mp_limb_t rl ;
  mp_srcptr tmp ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  mp_ptr tmp___0 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  cl = (mp_limb_t )0;
  while (1) {
    tmp = up;
    up ++;
    ul = (mp_limb_t )*tmp;
    while (1) {
      __u = ul;
      __v = vl;
      __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
      __uh = (UHWtype )(__u >> 32);
      __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
      __vh = (UHWtype )(__v >> 32);
      __x0 = (UWtype )__ul * (UWtype )__vl;
      __x1 = (UWtype )__ul * (UWtype )__vh;
      __x2 = (UWtype )__uh * (UWtype )__vl;
      __x3 = (UWtype )__uh * (UWtype )__vh;
      __x1 += __x0 >> 32;
      __x1 += __x2;
      if (__x1 < __x2) {
        __x3 += 1UL << 32;
      }
      hpl = __x3 + (__x1 >> 32);
      lpl = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
      break;
    }
    lpl += cl;
    cl = (mp_limb_t )(lpl < cl) + hpl;
    rl = *rp;
    lpl = rl + lpl;
    cl += (mp_limb_t )(lpl < rl);
    tmp___0 = rp;
    rp ++;
    *tmp___0 = lpl;
    n___0 --;
    if (! (n___0 != 0L)) {
      break;
    }
  }
  return (cl);
}
}
#pragma merger("0","./add_n.i","")
mp_limb_t __gmpn_add_n(mp_ptr rp , mp_srcptr up , mp_srcptr vp , mp_size_t n___0 )
{
  mp_limb_t ul ;
  mp_limb_t vl ;
  mp_limb_t sl ;
  mp_limb_t rl ;
  mp_limb_t cy ;
  mp_limb_t cy1 ;
  mp_limb_t cy2 ;
  mp_srcptr tmp ;
  mp_srcptr tmp___0 ;
  mp_ptr tmp___1 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  cy = (mp_limb_t )0;
  while (1) {
    tmp = up;
    up ++;
    ul = (mp_limb_t )*tmp;
    tmp___0 = vp;
    vp ++;
    vl = (mp_limb_t )*tmp___0;
    sl = ul + vl;
    cy1 = (mp_limb_t )(sl < ul);
    rl = sl + cy;
    cy2 = (mp_limb_t )(rl < sl);
    cy = cy1 | cy2;
    tmp___1 = rp;
    rp ++;
    *tmp___1 = rl;
    n___0 --;
    if (! (n___0 != 0L)) {
      break;
    }
  }
  return (cy);
}
}
#pragma merger("0","./add_ui.i","")
void *__gmpz_realloc(mpz_ptr m , mp_size_t new_alloc ) ;
void __gmpz_add_ui(mpz_ptr w , mpz_srcptr u , unsigned long vval ) ;
void __gmpz_add_ui(mpz_ptr w , mpz_srcptr u , unsigned long vval )
{
  mp_srcptr up ;
  mp_ptr wp ;
  mp_size_t usize ;
  mp_size_t wsize ;
  mp_size_t abs_usize ;
  void *tmp___0 ;
  long tmp___1 ;
  mp_limb_t cy ;

  {
  usize = (mp_size_t )u->_mp_size;
  if (usize == 0L) {
    *(w->_mp_d + 0) = vval;
    w->_mp_size = vval != 0UL;
    return;
  }
  if (usize >= 0L) {
    abs_usize = usize;
  } else {
    abs_usize = - usize;
  }
  tmp___1 = __builtin_expect((long )((abs_usize + 1L > (mp_size_t )w->_mp_alloc) != 0),
                             0L);
  if (tmp___1) {
    tmp___0 = __gmpz_realloc(w, abs_usize + 1L);
    wp = (mp_ptr )tmp___0;
  } else {
    wp = w->_mp_d;
  }
  up = (mp_srcptr )u->_mp_d;
  if (usize >= 0L) {
    cy = __gmpn_add_1(wp, up, abs_usize, vval);
    *(wp + abs_usize) = cy;
    wsize = (mp_size_t )((mp_limb_t )abs_usize + cy);
  } else
  if (abs_usize == 1L) {
    if (*(up + 0) < (mp_limb_t const )vval) {
      *(wp + 0) = vval - (unsigned long )*(up + 0);
      wsize = (mp_size_t )1;
    } else {
      __gmpn_sub_1(wp, up, abs_usize, vval);
      wsize = - (abs_usize - (mp_size_t )(*(wp + (abs_usize - 1L)) == 0UL));
    }
  } else {
    __gmpn_sub_1(wp, up, abs_usize, vval);
    wsize = - (abs_usize - (mp_size_t )(*(wp + (abs_usize - 1L)) == 0UL));
  }
  w->_mp_size = (int )wsize;
  return;
}
}
#pragma merger("0","./aorsmul_i.i","")
void __gmpz_addmul_ui(mpz_ptr w , mpz_srcptr x , unsigned long y ) ;
void __gmpz_submul_ui(mpz_ptr w , mpz_srcptr x , unsigned long y ) ;
mp_limb_t __gmpn_mul_1(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , mp_limb_t vl ) ;
mp_limb_t __gmpn_submul_1(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , mp_limb_t vl ) ;
void __gmpz_aorsmul_1(mpz_ptr w , mpz_srcptr x , mp_limb_t y , mp_size_t sub ) ;
void __gmpz_aorsmul_1(mpz_ptr w , mpz_srcptr x , mp_limb_t y , mp_size_t sub )
{
  mp_size_t xsize ;
  mp_size_t wsize ;
  mp_size_t wsize_signed ;
  mp_size_t new_wsize ;
  mp_size_t min_size ;
  mp_size_t dsize ;
  mp_srcptr xp ;
  mp_ptr wp ;
  mp_limb_t cy ;
  void *tmp___0 ;
  long tmp___1 ;
  void *tmp___3 ;
  long tmp___4 ;
  mp_limb_t cy2 ;
  mp_limb_t tmp___5 ;
  mp_ptr __d ;
  mp_srcptr __s ;
  mp_size_t __n ;
  mp_ptr tmp___6 ;
  mp_srcptr tmp___7 ;
  mp_ptr __p ;
  mp_ptr tmp___8 ;
  mp_limb_t cy2___0 ;
  mp_ptr __d___0 ;
  mp_srcptr __s___0 ;
  mp_size_t __n___0 ;
  mp_ptr tmp___9 ;
  mp_srcptr tmp___10 ;
  mp_limb_t tmp___11 ;
  mp_limb_t __cy ;
  mp_limb_t tmp___12 ;
  mp_ptr __p___0 ;
  mp_ptr tmp___13 ;
  mp_limb_t tmp___14 ;

  {
  xsize = (mp_size_t )x->_mp_size;
  if (xsize == 0L) {
    return;
  } else
  if (y == 0UL) {
    return;
  }
  sub ^= xsize;
  if (xsize >= 0L) {
    xsize = xsize;
  } else {
    xsize = - xsize;
  }
  wsize_signed = (mp_size_t )w->_mp_size;
  if (wsize_signed == 0L) {
    tmp___1 = __builtin_expect((long )((xsize + 1L > (mp_size_t )w->_mp_alloc) != 0),
                               0L);
    if (tmp___1) {
      tmp___0 = __gmpz_realloc(w, xsize + 1L);
      wp = (mp_ptr )tmp___0;
    } else {
      wp = w->_mp_d;
    }
    cy = __gmpn_mul_1(wp, (mp_srcptr )x->_mp_d, xsize, y);
    *(wp + xsize) = cy;
    xsize += (mp_size_t )(cy != 0UL);
    if (sub >= 0L) {
      w->_mp_size = (int )xsize;
    } else {
      w->_mp_size = (int )(- xsize);
    }
    return;
  }
  sub ^= wsize_signed;
  if (wsize_signed >= 0L) {
    wsize = wsize_signed;
  } else {
    wsize = - wsize_signed;
  }
  if (wsize > xsize) {
    new_wsize = wsize;
  } else {
    new_wsize = xsize;
  }
  tmp___4 = __builtin_expect((long )((new_wsize + 1L > (mp_size_t )w->_mp_alloc) != 0),
                             0L);
  if (tmp___4) {
    tmp___3 = __gmpz_realloc(w, new_wsize + 1L);
    wp = (mp_ptr )tmp___3;
  } else {
    wp = w->_mp_d;
  }
  xp = (mp_srcptr )x->_mp_d;
  if (wsize < xsize) {
    min_size = wsize;
  } else {
    min_size = xsize;
  }
  if (sub >= 0L) {
    cy = __gmpn_addmul_1(wp, xp, min_size, y);
    wp += min_size;
    xp += min_size;
    dsize = xsize - wsize;
    if (dsize != 0L) {
      if (dsize > 0L) {
        cy2 = __gmpn_mul_1(wp, xp, dsize, y);
      } else {
        dsize = - dsize;
        cy2 = (mp_limb_t )0;
      }
      tmp___5 = __gmpn_add_1(wp, (mp_srcptr )wp, dsize, cy);
      cy = cy2 + tmp___5;
    }
    *(wp + dsize) = cy;
    new_wsize += (mp_size_t )(cy != 0UL);
  } else {
    cy = __gmpn_submul_1(wp, xp, min_size, y);
    if (wsize >= xsize) {
      if (wsize != xsize) {
        cy = __gmpn_sub_1(wp + xsize, (mp_srcptr )(wp + xsize), wsize - xsize, cy);
      }
      if (cy != 0UL) {
        *(wp + new_wsize) = ~ (- cy);
        while (1) {
          __d = wp;
          __s = (mp_srcptr )wp;
          __n = new_wsize;
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          while (1) {
            tmp___6 = __d;
            __d ++;
            tmp___7 = __s;
            __s ++;
            *tmp___6 = (mp_limb_t )(~ *tmp___7 & 0xffffffffffffffffUL);
            __n --;
            if (! __n) {
              break;
            }
          }
          break;
        }
        new_wsize ++;
        while (1) {
          __p = wp;
          while (1) {
            tmp___8 = __p;
            __p ++;
            (*tmp___8) ++;
            if (! (*tmp___8 == 0UL)) {
              break;
            }
          }
          break;
        }
        wsize_signed = - wsize_signed;
      }
    } else {
      while (1) {
        __d___0 = wp;
        __s___0 = (mp_srcptr )wp;
        __n___0 = wsize;
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        while (1) {
          tmp___9 = __d___0;
          __d___0 ++;
          tmp___10 = __s___0;
          __s___0 ++;
          *tmp___9 = (mp_limb_t )(~ *tmp___10 & 0xffffffffffffffffUL);
          __n___0 --;
          if (! __n___0) {
            break;
          }
        }
        break;
      }
      tmp___11 = __gmpn_add_1(wp, (mp_srcptr )wp, wsize, (mp_limb_t )1L);
      cy += tmp___11;
      cy --;
      cy2___0 = (mp_limb_t )(cy == 0xffffffffffffffffUL);
      cy += cy2___0;
      while (1) {
        __cy = __gmpn_mul_1(wp + wsize, xp + wsize, xsize - wsize, y);
        tmp___12 = __gmpn_add_1(wp + wsize, (mp_srcptr )(wp + wsize), xsize - wsize,
                                cy);
        cy = __cy + tmp___12;
        break;
      }
      *(wp + new_wsize) = cy;
      new_wsize += (mp_size_t )(cy != 0UL);
      if (cy2___0) {
        while (1) {
          __p___0 = wp + wsize;
          while (1) {
            tmp___13 = __p___0;
            __p___0 ++;
            tmp___14 = *tmp___13;
            (*tmp___13) --;
            if (! (tmp___14 == 0UL)) {
              break;
            }
          }
          break;
        }
      }
      wsize_signed = - wsize_signed;
    }
    while (1) {
      while (new_wsize > 0L) {
        if (*(wp + (new_wsize - 1L)) != 0UL) {
          break;
        }
        new_wsize --;
      }
      break;
    }
  }
  if (wsize_signed >= 0L) {
    w->_mp_size = (int )new_wsize;
  } else {
    w->_mp_size = (int )(- new_wsize);
  }
  while (1) {
    break;
  }
  return;
}
}
void __gmpz_addmul_ui(mpz_ptr w , mpz_srcptr x , unsigned long y )
{


  {
  __gmpz_aorsmul_1(w, x, y, (mp_size_t )0);
  return;
}
}
void __gmpz_submul_ui(mpz_ptr w , mpz_srcptr x , unsigned long y )
{


  {
  __gmpz_aorsmul_1(w, x, y & 0xffffffffffffffffUL, (mp_size_t )-1);
  return;
}
}
#pragma merger("0","./assert.i","")
extern struct _IO_FILE *stderr ;

int printf(const char *, ...);



extern __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
void __gmp_assert_header(char const *filename , int linenum ) ;
 __attribute__((__noreturn__)) void __gmp_assert_fail(char const *filename , int linenum ,
                                                      char const *expr ) ;
void __gmp_assert_header(char const *filename , int linenum )
{


  {
  if ((unsigned long )filename != (unsigned long )((void *)0)) {
    if ((int const )*(filename + 0) != 0) {
      printf((char const * __restrict )"%s:", filename);
      if (linenum != -1) {
        printf((char const * __restrict )"%d: ", linenum)
                        ;
      }
    }
  }
  return;
}
}
 __attribute__((__noreturn__)) void __gmp_assert_fail(char const *filename , int linenum ,
                                                      char const *expr ) ;
void __gmp_assert_fail(char const *filename , int linenum , char const *expr )
{


  {
  __gmp_assert_header(filename, linenum);
  printf((char const * __restrict )"GNU MP assertion failed: %s\n", expr)
               ;
  abort();
}
}
#pragma merger("0","./bdiv_dbm1c.i","")
mp_limb_t __gmpn_bdiv_dbm1c(mp_ptr qp , mp_srcptr ap , mp_size_t n___0 , mp_limb_t bd ,
                            mp_limb_t h ) ;
mp_limb_t __gmpn_bdiv_dbm1c(mp_ptr qp , mp_srcptr ap , mp_size_t n___0 , mp_limb_t bd ,
                            mp_limb_t h )
{
  mp_limb_t a ;
  mp_limb_t p0 ;
  mp_limb_t p1 ;
  mp_limb_t cy ;
  mp_size_t i ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;

  {
  i = (mp_size_t )0;
  while (i < n___0) {
    a = (mp_limb_t )*(ap + i);
    while (1) {
      __u = a;
      __v = bd;
      __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
      __uh = (UHWtype )(__u >> 32);
      __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
      __vh = (UHWtype )(__v >> 32);
      __x0 = (UWtype )__ul * (UWtype )__vl;
      __x1 = (UWtype )__ul * (UWtype )__vh;
      __x2 = (UWtype )__uh * (UWtype )__vl;
      __x3 = (UWtype )__uh * (UWtype )__vh;
      __x1 += __x0 >> 32;
      __x1 += __x2;
      if (__x1 < __x2) {
        __x3 += 1UL << 32;
      }
      p1 = __x3 + (__x1 >> 32);
      p0 = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
      break;
    }
    p0 = p0;
    cy = (mp_limb_t )(h < p0);
    h = (h - p0) & 0xffffffffffffffffUL;
    *(qp + i) = h;
    h = (h - p1) - cy;
    i ++;
  }
  return (h);
}
}
#pragma merger("0","./cfdiv_r_2exp.i","")
void __gmpz_cdiv_r_2exp(mpz_ptr w , mpz_srcptr u , mp_bitcnt_t cnt ) ;
void __gmpz_fdiv_r_2exp(mpz_ptr w , mpz_srcptr u , mp_bitcnt_t cnt ) ;
static void __gmpz_cfdiv_r_2exp(mpz_ptr w , mpz_srcptr u , mp_bitcnt_t cnt , int dir ) ;
static void __gmpz_cfdiv_r_2exp(mpz_ptr w , mpz_srcptr u , mp_bitcnt_t cnt , int dir )
{
  mp_size_t usize ;
  mp_size_t abs_usize ;
  mp_size_t limb_cnt ;
  mp_size_t i ;
  mp_srcptr up ;
  mp_ptr wp ;
  mp_limb_t high ;
  void *tmp___0 ;
  long tmp___1 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___2 ;
  mp_ptr tmp___3 ;
  mp_srcptr tmp___4 ;
  mp_ptr tmp___5 ;
  void *tmp___7 ;
  long tmp___8 ;

  {
  usize = (mp_size_t )u->_mp_size;
  if (usize == 0L) {
    w->_mp_size = 0;
    return;
  }
  limb_cnt = (mp_size_t )(cnt / 64UL);
  cnt %= 64UL;
  if (usize >= 0L) {
    abs_usize = usize;
  } else {
    abs_usize = - usize;
  }
  up = (mp_srcptr )u->_mp_d;
  if ((usize ^ (long )dir) < 0L) {
    if ((unsigned long )w == (unsigned long )u) {
      if (abs_usize <= limb_cnt) {
        return;
      }
      wp = (mp_ptr )up;
    } else {
      if (abs_usize < limb_cnt + 1L) {
        i = abs_usize;
      } else {
        i = limb_cnt + 1L;
      }
      tmp___1 = __builtin_expect((long )((i > (mp_size_t )w->_mp_alloc) != 0), 0L);
      if (tmp___1) {
        tmp___0 = __gmpz_realloc(w, i);
        wp = (mp_ptr )tmp___0;
      } else {
        wp = w->_mp_d;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (i != 0L) {
            __n = i - 1L;
            __dst = wp;
            __src = up;
            tmp___2 = __src;
            __src ++;
            __x = (mp_limb_t )*tmp___2;
            if (__n != 0L) {
              while (1) {
                tmp___3 = __dst;
                __dst ++;
                *tmp___3 = __x;
                tmp___4 = __src;
                __src ++;
                __x = (mp_limb_t )*tmp___4;
                __n --;
                if (! __n) {
                  break;
                }
              }
            }
            tmp___5 = __dst;
            __dst ++;
            *tmp___5 = __x;
          }
          break;
        }
        break;
      }
      if (abs_usize <= limb_cnt) {
        w->_mp_size = (int )usize;
        return;
      }
    }
  } else {
    if (abs_usize <= limb_cnt) {
      goto negate;
    }
    i = (mp_size_t )0;
    while (i < limb_cnt) {
      if (*(up + i) != 0UL) {
        goto negate;
      }
      i ++;
    }
    if ((*(up + limb_cnt) & (unsigned long const )((1UL << cnt) - 1UL)) != 0UL) {
      goto negate;
    }
    w->_mp_size = 0;
    return;
    negate:
    tmp___8 = __builtin_expect((long )((limb_cnt + 1L > (mp_size_t )w->_mp_alloc) != 0),
                               0L);
    if (tmp___8) {
      tmp___7 = __gmpz_realloc(w, limb_cnt + 1L);
      wp = (mp_ptr )tmp___7;
    } else {
      wp = w->_mp_d;
    }
    up = (mp_srcptr )u->_mp_d;
    if (abs_usize < limb_cnt + 1L) {
      i = abs_usize;
    } else {
      i = limb_cnt + 1L;
    }
    __gmpn_neg(wp, up, i);
    while (i <= limb_cnt) {
      *(wp + i) = 0xffffffffffffffffUL;
      i ++;
    }
    usize = - usize;
  }
  high = *(wp + limb_cnt);
  high &= (1UL << cnt) - 1UL;
  *(wp + limb_cnt) = high;
  while (high == 0UL) {
    limb_cnt --;
    if (limb_cnt < 0L) {
      w->_mp_size = 0;
      return;
    }
    high = *(wp + limb_cnt);
  }
  limb_cnt ++;
  if (usize >= 0L) {
    w->_mp_size = (int )limb_cnt;
  } else {
    w->_mp_size = (int )(- limb_cnt);
  }
  return;
}
}
void __gmpz_cdiv_r_2exp(mpz_ptr w , mpz_srcptr u , mp_bitcnt_t cnt )
{


  {
  __gmpz_cfdiv_r_2exp(w, u, cnt, 1);
  return;
}
}
void __gmpz_fdiv_r_2exp(mpz_ptr w , mpz_srcptr u , mp_bitcnt_t cnt )
{


  {
  __gmpz_cfdiv_r_2exp(w, u, cnt, -1);
  return;
}
}
#pragma merger("0","./clear.i","")
void __gmpz_clear(mpz_ptr x ) ;
void (*__gmp_free_func)(void * , size_t ) ;
void __gmpz_clear(mpz_ptr x )
{


  {
  (*__gmp_free_func)((void *)x->_mp_d, (unsigned long )x->_mp_alloc * sizeof(mp_limb_t ));
  return;
}
}
#pragma merger("0","./clrbit.i","")
void __gmpz_clrbit(mpz_ptr d , mp_bitcnt_t bit_idx ) ;
void __gmpz_clrbit(mpz_ptr d , mp_bitcnt_t bit_idx )
{
  mp_size_t dsize ;
  mp_ptr dp ;
  mp_size_t limb_idx ;
  mp_limb_t mask ;
  mp_limb_t dlimb ;
  long tmp ;
  mp_size_t zero_bound ;
  mp_limb_t dlimb___0 ;
  void *tmp___1 ;
  long tmp___2 ;
  mp_ptr __p ;
  mp_ptr tmp___3 ;
  void *tmp___5 ;
  long tmp___6 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___7 ;

  {
  dsize = (mp_size_t )d->_mp_size;
  dp = d->_mp_d;
  limb_idx = (mp_size_t )(bit_idx / 64UL);
  mask = 1UL << bit_idx % 64UL;
  if (dsize >= 0L) {
    if (limb_idx < dsize) {
      dlimb = *(dp + limb_idx) & ~ mask;
      *(dp + limb_idx) = dlimb;
      tmp = __builtin_expect((long )(((mp_size_t )(dlimb == 0UL) + limb_idx == dsize) != 0),
                             0L);
      if (tmp) {
        while (1) {
          while (limb_idx > 0L) {
            if (*(dp + (limb_idx - 1L)) != 0UL) {
              break;
            }
            limb_idx --;
          }
          break;
        }
        d->_mp_size = (int )limb_idx;
      }
    }
  } else {
    dsize = - dsize;
    if (limb_idx < dsize) {
      zero_bound = (mp_size_t )0;
      while (*(dp + zero_bound) == 0UL) {
        zero_bound ++;
      }
      if (limb_idx > zero_bound) {
        *(dp + limb_idx) |= mask;
      } else
      if (limb_idx == zero_bound) {
        dlimb___0 = (((*(dp + limb_idx) - 1UL) | mask) + 1UL) & 0xffffffffffffffffUL;
        *(dp + limb_idx) = dlimb___0;
        if (dlimb___0 == 0UL) {
          tmp___2 = __builtin_expect((long )((dsize + 1L > (mp_size_t )d->_mp_alloc) != 0),
                                     0L);
          if (tmp___2) {
            tmp___1 = __gmpz_realloc(d, dsize + 1L);
            dp = (mp_ptr )tmp___1;
          } else {
            dp = d->_mp_d;
          }
          *(dp + dsize) = (mp_limb_t )0;
          while (1) {
            __p = (dp + limb_idx) + 1;
            while (1) {
              tmp___3 = __p;
              __p ++;
              (*tmp___3) ++;
              if (! (*tmp___3 == 0UL)) {
                break;
              }
            }
            break;
          }
          dsize = (mp_size_t )((mp_limb_t )dsize + *(dp + dsize));
          d->_mp_size = (int )(- dsize);
        }
      }
    } else {
      tmp___6 = __builtin_expect((long )((limb_idx + 1L > (mp_size_t )d->_mp_alloc) != 0),
                                 0L);
      if (tmp___6) {
        tmp___5 = __gmpz_realloc(d, limb_idx + 1L);
        dp = (mp_ptr )tmp___5;
      } else {
        dp = d->_mp_d;
      }
      d->_mp_size = (int )(- (limb_idx + 1L));
      while (1) {
        while (1) {
          break;
        }
        if (limb_idx - dsize != 0L) {
          while (1) {
            __dst = dp + dsize;
            __n = limb_idx - dsize;
            while (1) {
              break;
            }
            while (1) {
              tmp___7 = __dst;
              __dst ++;
              *tmp___7 = (mp_limb_t )0L;
              __n --;
              if (! __n) {
                break;
              }
            }
            break;
          }
        }
        break;
      }
      *(dp + limb_idx) = mask;
    }
  }
  return;
}
}
#pragma merger("0","./cmp.i","")
#pragma merger("0","./com.i","")
void __gmpn_com(mp_ptr rp , mp_srcptr up , mp_size_t n___0 )
{
  mp_limb_t ul ;
  mp_srcptr tmp ;
  mp_ptr tmp___0 ;

  {
  while (1) {
    tmp = up;
    up ++;
    ul = (mp_limb_t )*tmp;
    tmp___0 = rp;
    rp ++;
    *tmp___0 = ~ ul & 0xffffffffffffffffUL;
    n___0 --;
    if (! (n___0 != 0L)) {
      break;
    }
  }
  return;
}
}





void *alloca(size_t size);

#pragma merger("0","./dcpi1_div_qr.i","")
mp_limb_t __gmpn_divrem_2(mp_ptr qp , mp_size_t qxn , mp_ptr np , mp_size_t nn , mp_srcptr dp ) ;
mp_limb_t __gmpn_mul(mp_ptr prodp , mp_srcptr up , mp_size_t un , mp_srcptr vp , mp_size_t vn ) ;
void *__gmp_tmp_reentrant_alloc(struct tmp_reentrant_t **markp , size_t size ) __attribute__((__malloc__)) ;
void __gmp_tmp_reentrant_free(struct tmp_reentrant_t *mark ) ;
mp_limb_t __gmpn_sbpi1_div_qr(mp_ptr qp , mp_ptr np , mp_size_t nn , mp_srcptr dp ,
                              mp_size_t dn , mp_limb_t dinv ) ;
mp_limb_t __gmpn_dcpi1_div_qr(mp_ptr qp , mp_ptr np , mp_size_t nn , mp_srcptr dp ,
                              mp_size_t dn , gmp_pi1_t *dinv ) ;
mp_limb_t __gmpn_dcpi1_div_qr_n(mp_ptr qp , mp_ptr np , mp_srcptr dp , mp_size_t n___0 ,
                                gmp_pi1_t *dinv , mp_ptr tp ) ;
mp_limb_t __gmpn_dcpi1_div_qr_n(mp_ptr qp , mp_ptr np , mp_srcptr dp , mp_size_t n___0 ,
                                gmp_pi1_t *dinv , mp_ptr tp )
{
  mp_size_t lo ;
  mp_size_t hi ;
  mp_limb_t cy ;
  mp_limb_t qh ;
  mp_limb_t ql ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;

  {
  lo = n___0 >> 1;
  hi = n___0 - lo;
  if (! (hi >= 60L)) {
    qh = __gmpn_sbpi1_div_qr(qp + lo, np + 2L * lo, 2L * hi, dp + lo, hi, dinv->inv32);
  } else {
    qh = __gmpn_dcpi1_div_qr_n(qp + lo, np + 2L * lo, dp + lo, hi, dinv, tp);
  }
  __gmpn_mul(tp, (mp_srcptr )(qp + lo), hi, dp, lo);
  cy = __gmpn_sub_n(np + lo, (mp_srcptr )(np + lo), (mp_srcptr )tp, n___0);
  if (qh != 0UL) {
    tmp = __gmpn_sub_n(np + n___0, (mp_srcptr )(np + n___0), dp, lo);
    cy += tmp;
  }
  while (cy != 0UL) {
    tmp___0 = __gmpn_sub_1(qp + lo, (mp_srcptr )(qp + lo), hi, (mp_limb_t )1);
    qh -= tmp___0;
    tmp___1 = __gmpn_add_n(np + lo, (mp_srcptr )(np + lo), dp, n___0);
    cy -= tmp___1;
  }
  if (! (lo >= 60L)) {
    ql = __gmpn_sbpi1_div_qr(qp, np + hi, 2L * lo, dp + hi, lo, dinv->inv32);
  } else {
    ql = __gmpn_dcpi1_div_qr_n(qp, np + hi, dp + hi, lo, dinv, tp);
  }
  __gmpn_mul(tp, dp, hi, (mp_srcptr )qp, lo);
  cy = __gmpn_sub_n(np, (mp_srcptr )np, (mp_srcptr )tp, n___0);
  if (ql != 0UL) {
    tmp___2 = __gmpn_sub_n(np + lo, (mp_srcptr )(np + lo), dp, hi);
    cy += tmp___2;
  }
  while (cy != 0UL) {
    __gmpn_sub_1(qp, (mp_srcptr )qp, lo, (mp_limb_t )1);
    tmp___3 = __gmpn_add_n(np, (mp_srcptr )np, dp, n___0);
    cy -= tmp___3;
  }
  return (qh);
}
}

static mp_limb_t
__gmpn_dcpi1_divappr_q_n (mp_ptr qp, mp_ptr np, mp_srcptr dp, mp_size_t n,
     gmp_pi1_t *dinv, mp_ptr tp);

mp_limb_t
__gmpn_dcpi1_divappr_q (mp_ptr qp, mp_ptr np, mp_size_t nn,
   mp_srcptr dp, mp_size_t dn, gmp_pi1_t *dinv);


mp_limb_t
__gmpn_dcpi1_div_q (mp_ptr qp, mp_ptr np, mp_size_t nn,
   mp_srcptr dp, mp_size_t dn, gmp_pi1_t *dinv)
{
  mp_ptr tp, wp;
  mp_limb_t qh;
  mp_size_t qn;
  struct tmp_reentrant_t *__tmp_marker;

  __tmp_marker = 0;

  do {} while (0);
  do {} while (0);
  do {} while (0);

  tp = ((mp_limb_t *) (__builtin_expect ((((nn + 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((nn + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (nn + 1) * sizeof (mp_limb_t))));
  do { do {} while (0); do { do {} while (0); do {} while (0); if ((nn) != 0) { mp_size_t __n = (nn) - 1; mp_ptr __dst = (tp + 1); mp_srcptr __src = (np); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
  tp[0] = 0;

  qn = nn - dn;
  wp = ((mp_limb_t *) (__builtin_expect ((((qn + 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((qn + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (qn + 1) * sizeof (mp_limb_t))));

  qh = __gmpn_dcpi1_divappr_q (wp, tp, nn + 1, dp, dn, dinv);

  if (wp[0] == 0)
    {
      mp_limb_t cy;

      if (qn > dn)
 __gmpn_mul (tp, wp + 1, qn, dp, dn);
      else
 __gmpn_mul (tp, dp, dn, wp + 1, qn);

      cy = (qh != 0) ? __gmpn_add_n (tp + qn, tp + qn, dp, dn) : 0;

      if (cy || __gmpn_cmp (tp, np, nn) > 0)
 qh -= __gmpn_sub_1 (qp, wp + 1, qn, 1);
      else
 do { do {} while (0); do { do {} while (0); do {} while (0); if ((qn) != 0) { mp_size_t __n = (qn) - 1; mp_ptr __dst = (qp); mp_srcptr __src = (wp + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
    }
  else
    do { do {} while (0); do { do {} while (0); do {} while (0); if ((qn) != 0) { mp_size_t __n = (qn) - 1; mp_ptr __dst = (qp); mp_srcptr __src = (wp + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);

  do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);
  return qh;
}

mp_limb_t __gmpn_dcpi1_div_qr(mp_ptr qp , mp_ptr np , mp_size_t nn , mp_srcptr dp ,
                              mp_size_t dn , gmp_pi1_t *dinv )
{
  mp_size_t qn ;
  mp_limb_t qh ;
  mp_limb_t cy ;
  mp_ptr tp ;
  struct tmp_reentrant_t *__tmp_marker ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  mp_limb_t q ;
  mp_limb_t n2 ;
  mp_limb_t n1 ;
  mp_limb_t n0 ;
  mp_limb_t d1 ;
  mp_limb_t d0 ;
  int tmp___4 ;
  mp_limb_t _q0 ;
  mp_limb_t _t1 ;
  mp_limb_t _t0 ;
  mp_limb_t _mask ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  UWtype __x ;
  UWtype __x___0 ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  UWtype __x___1 ;
  UWtype __x___2 ;
  UWtype __x___3 ;
  long tmp___5 ;
  mp_limb_t cy___0 ;
  mp_limb_t cy1 ;
  mp_limb_t tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;
  mp_limb_t tmp___9 ;
  mp_limb_t tmp___10 ;
  mp_limb_t tmp___11 ;
  mp_limb_t tmp___12 ;
  mp_limb_t tmp___13 ;
  mp_limb_t tmp___14 ;
  long tmp___15 ;

  {
  __tmp_marker = (struct tmp_reentrant_t *)0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tmp___3 = __builtin_expect((long )(((unsigned long )dn * sizeof(mp_limb_t ) <= 32512UL) != 0),
                             1L);
  if (tmp___3) {
    tmp___0 = alloca((unsigned long )dn * sizeof(mp_limb_t ));
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )dn * sizeof(mp_limb_t ));
    tmp___2 = tmp___1;
  }
  tp = (mp_limb_t *)tmp___2;
  qn = nn - dn;
  qp += qn;
  np += nn;
  dp += dn;
  if (qn > dn) {
    while (1) {
      qn -= dn;
      if (! (qn > dn)) {
        break;
      }
    }
    qp -= qn;
    np -= qn;
    if (qn == 1L) {
      tmp___4 = __gmpn_cmp((mp_srcptr )((np - dn) + 1), dp - dn, dn);
      qh = (mp_limb_t )(tmp___4 >= 0);
      if (qh) {
        __gmpn_sub_n((np - dn) + 1, (mp_srcptr )((np - dn) + 1), dp - dn, dn);
      }
      n2 = *(np + 0);
      n1 = *(np + -1);
      n0 = *(np + -2);
      d1 = (mp_limb_t )*(dp + -1);
      d0 = (mp_limb_t )*(dp + -2);
      while (1) {
        break;
      }
      tmp___8 = __builtin_expect((long )((n2 == d1) != 0), 0L);
      if (tmp___8) {
        if (n1 == d0) {
          q = 0xffffffffffffffffUL;
          cy = __gmpn_submul_1(np - dn, dp - dn, dn, q);
          while (1) {
            break;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0:
        while (1) {
          while (1) {
            __u = n2;
            __v = dinv->inv32;
            __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
            __uh = (UHWtype )(__u >> 32);
            __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
            __vh = (UHWtype )(__v >> 32);
            __x0 = (UWtype )__ul * (UWtype )__vl;
            __x1 = (UWtype )__ul * (UWtype )__vh;
            __x2 = (UWtype )__uh * (UWtype )__vl;
            __x3 = (UWtype )__uh * (UWtype )__vh;
            __x1 += __x0 >> 32;
            __x1 += __x2;
            if (__x1 < __x2) {
              __x3 += 1UL << 32;
            }
            q = __x3 + (__x1 >> 32);
            _q0 = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
            break;
          }
          while (1) {
            __x = _q0 + n1;
            q = (q + n2) + (mp_limb_t )(__x < _q0);
            _q0 = __x;
            break;
          }
          n1 -= d1 * q;
          while (1) {
            __x___0 = n0 - d0;
            n1 = (n1 - d1) - (mp_limb_t )(n0 < d0);
            n0 = __x___0;
            break;
          }
          while (1) {
            __u___0 = d0;
            __v___0 = q;
            __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
            __uh___0 = (UHWtype )(__u___0 >> 32);
            __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
            __vh___0 = (UHWtype )(__v___0 >> 32);
            __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
            __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
            __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
            __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
            __x1___0 += __x0___0 >> 32;
            __x1___0 += __x2___0;
            if (__x1___0 < __x2___0) {
              __x3___0 += 1UL << 32;
            }
            _t1 = __x3___0 + (__x1___0 >> 32);
            _t0 = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
            break;
          }
          while (1) {
            __x___1 = n0 - _t0;
            n1 = (n1 - _t1) - (mp_limb_t )(n0 < _t0);
            n0 = __x___1;
            break;
          }
          q ++;
          _mask = - ((mp_limb_t )(n1 >= _q0));
          q += _mask;
          while (1) {
            __x___2 = n0 + (_mask & d0);
            n1 = (n1 + (_mask & d1)) + (mp_limb_t )(__x___2 < n0);
            n0 = __x___2;
            break;
          }
          tmp___5 = __builtin_expect((long )((n1 >= d1) != 0), 0L);
          if (tmp___5) {
            if (n1 > d1) {
              goto _L;
            } else
            if (n0 >= d0) {
              _L:
              q ++;
              while (1) {
                __x___3 = n0 - d0;
                n1 = (n1 - d1) - (mp_limb_t )(n0 < d0);
                n0 = __x___3;
                break;
              }
            }
          }
          break;
        }
        if (dn > 2L) {
          cy___0 = __gmpn_submul_1(np - dn, dp - dn, dn - 2L, q);
          cy1 = (mp_limb_t )(n0 < cy___0);
          n0 = (n0 - cy___0) & 0xffffffffffffffffUL;
          cy___0 = (mp_limb_t )(n1 < cy1);
          n1 = (n1 - cy1) & 0xffffffffffffffffUL;
          *(np + -2) = n0;
          tmp___7 = __builtin_expect((long )((cy___0 != 0UL) != 0), 0L);
          if (tmp___7) {
            tmp___6 = __gmpn_add_n(np - dn, (mp_srcptr )(np - dn), dp - dn, dn - 1L);
            n1 += d1 + tmp___6;
            qh -= (mp_limb_t )(q == 0UL);
            q = (q - 1UL) & 0xffffffffffffffffUL;
          }
        } else {
          *(np + -2) = n0;
        }
        *(np + -1) = n1;
      }
      *(qp + 0) = q;
    } else {
      if (qn == 2L) {
        qh = __gmpn_divrem_2(qp, 0L, np - 2, (mp_size_t )4, dp - 2);
      } else
      if (! (qn >= 60L)) {
        qh = __gmpn_sbpi1_div_qr(qp, np - qn, 2L * qn, dp - qn, qn, dinv->inv32);
      } else {
        qh = __gmpn_dcpi1_div_qr_n(qp, np - qn, dp - qn, qn, dinv, tp);
      }
      if (qn != dn) {
        if (qn > dn - qn) {
          __gmpn_mul(tp, (mp_srcptr )qp, qn, dp - dn, dn - qn);
        } else {
          __gmpn_mul(tp, dp - dn, dn - qn, (mp_srcptr )qp, qn);
        }
        cy = __gmpn_sub_n(np - dn, (mp_srcptr )(np - dn), (mp_srcptr )tp, dn);
        if (qh != 0UL) {
          tmp___9 = __gmpn_sub_n((np - dn) + qn, (mp_srcptr )((np - dn) + qn), dp - dn,
                                 dn - qn);
          cy += tmp___9;
        }
        while (cy != 0UL) {
          tmp___10 = __gmpn_sub_1(qp, (mp_srcptr )qp, qn, (mp_limb_t )1);
          qh -= tmp___10;
          tmp___11 = __gmpn_add_n(np - dn, (mp_srcptr )(np - dn), dp - dn, dn);
          cy -= tmp___11;
        }
      }
    }
    qn = (nn - dn) - qn;
    while (1) {
      qp -= dn;
      np -= dn;
      __gmpn_dcpi1_div_qr_n(qp, np - dn, dp - dn, dn, dinv, tp);
      qn -= dn;
      if (! (qn > 0L)) {
        break;
      }
    }
  } else {
    qp -= qn;
    np -= qn;
    if (! (qn >= 60L)) {
      qh = __gmpn_sbpi1_div_qr(qp, np - qn, 2L * qn, dp - qn, qn, dinv->inv32);
    } else {
      qh = __gmpn_dcpi1_div_qr_n(qp, np - qn, dp - qn, qn, dinv, tp);
    }
    if (qn != dn) {
      if (qn > dn - qn) {
        __gmpn_mul(tp, (mp_srcptr )qp, qn, dp - dn, dn - qn);
      } else {
        __gmpn_mul(tp, dp - dn, dn - qn, (mp_srcptr )qp, qn);
      }
      cy = __gmpn_sub_n(np - dn, (mp_srcptr )(np - dn), (mp_srcptr )tp, dn);
      if (qh != 0UL) {
        tmp___12 = __gmpn_sub_n((np - dn) + qn, (mp_srcptr )((np - dn) + qn), dp - dn,
                                dn - qn);
        cy += tmp___12;
      }
      while (cy != 0UL) {
        tmp___13 = __gmpn_sub_1(qp, (mp_srcptr )qp, qn, (mp_limb_t )1);
        qh -= tmp___13;
        tmp___14 = __gmpn_add_n(np - dn, (mp_srcptr )(np - dn), dp - dn, dn);
        cy -= tmp___14;
      }
    }
  }
  while (1) {
    tmp___15 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___15) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return (qh);
}
}
#pragma merger("0","./dive_1.i","")
void __gmpn_divexact_1(mp_ptr dst , mp_srcptr src , mp_size_t size , mp_limb_t divisor ) ;
unsigned char const __gmp_binvert_limb_table[128] ;
unsigned char const __gmpn_clz_tab[129] ;
void __gmpn_divexact_1(mp_ptr dst , mp_srcptr src , mp_size_t size , mp_limb_t divisor )
{
  mp_size_t i ;
  mp_limb_t c ;
  mp_limb_t h ;
  mp_limb_t l ;
  mp_limb_t ls ;
  mp_limb_t s ;
  mp_limb_t s_next ;
  mp_limb_t inverse ;
  mp_limb_t dummy ;
  unsigned int shift ;
  UWtype __ctz_x ;
  int __ctz_c ;
  long tmp ;
  long tmp___0 ;
  mp_limb_t __n ;
  mp_limb_t __inv ;
  mp_limb_t __x ;
  mp_limb_t __y ;
  mp_limb_t __w ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  mp_limb_t __x___0 ;
  mp_limb_t __y___0 ;
  mp_limb_t __w___0 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if ((divisor & 1UL) == 0UL) {
    while (1) {
      __ctz_x = divisor;
      tmp___0 = __builtin_expect((long )(((__ctz_x & 255UL) != 0UL) != 0), 1L);
      if (tmp___0) {
        shift = (unsigned int )((int const )__gmpn_clz_tab[__ctz_x & - __ctz_x] - 2);
      } else {
        __ctz_c = 6;
        while (__ctz_c < 62) {
          __ctz_x >>= 8;
          tmp = __builtin_expect((long )(((__ctz_x & 255UL) != 0UL) != 0), 1L);
          if (tmp) {
            break;
          }
          __ctz_c += 8;
        }
        shift = (unsigned int )(__ctz_c + (int )__gmpn_clz_tab[__ctz_x & - __ctz_x]);
      }
      break;
    }
    divisor >>= shift;
  } else {
    shift = 0U;
  }
  while (1) {
    __n = divisor;
    while (1) {
      break;
    }
    __inv = (mp_limb_t )__gmp_binvert_limb_table[__n / 2UL & 127UL];
    __inv = 2UL * __inv - (__inv * __inv) * __n;
    __inv = 2UL * __inv - (__inv * __inv) * __n;
    __inv = 2UL * __inv - (__inv * __inv) * __n;
    while (1) {
      break;
    }
    inverse = __inv & 0xffffffffffffffffUL;
    break;
  }
  divisor = divisor;
  if (shift != 0U) {
    c = (mp_limb_t )0;
    s = (mp_limb_t )*(src + 0);
    i = (mp_size_t )1;
    while (i < size) {
      s_next = (mp_limb_t )*(src + i);
      ls = ((s >> shift) | (s_next << (64U - shift))) & 0xffffffffffffffffUL;
      s = s_next;
      while (1) {
        __x = ls;
        __y = c;
        __w = __x - __y;
        l = __w;
        c = (mp_limb_t )(__w > __x);
        break;
      }
      l = l * inverse & 0xffffffffffffffffUL;
      *(dst + (i - 1L)) = l;
      while (1) {
        __u = l;
        __v = divisor;
        __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
        __uh = (UHWtype )(__u >> 32);
        __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
        __vh = (UHWtype )(__v >> 32);
        __x0 = (UWtype )__ul * (UWtype )__vl;
        __x1 = (UWtype )__ul * (UWtype )__vh;
        __x2 = (UWtype )__uh * (UWtype )__vl;
        __x3 = (UWtype )__uh * (UWtype )__vh;
        __x1 += __x0 >> 32;
        __x1 += __x2;
        if (__x1 < __x2) {
          __x3 += 1UL << 32;
        }
        h = __x3 + (__x1 >> 32);
        dummy = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
        break;
      }
      c += h;
      i ++;
    }
    while (i < size) {

    }
    ls = s >> shift;
    l = ls - c;
    l = l * inverse & 0xffffffffffffffffUL;
    *(dst + (size - 1L)) = l;
  } else {
    s = (mp_limb_t )*(src + 0);
    l = s * inverse & 0xffffffffffffffffUL;
    *(dst + 0) = l;
    c = (mp_limb_t )0;
    i = (mp_size_t )1;
    while (i < size) {
      while (1) {
        __u___0 = l;
        __v___0 = divisor;
        __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
        __uh___0 = (UHWtype )(__u___0 >> 32);
        __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
        __vh___0 = (UHWtype )(__v___0 >> 32);
        __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
        __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
        __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
        __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
        __x1___0 += __x0___0 >> 32;
        __x1___0 += __x2___0;
        if (__x1___0 < __x2___0) {
          __x3___0 += 1UL << 32;
        }
        h = __x3___0 + (__x1___0 >> 32);
        dummy = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
        break;
      }
      c += h;
      s = (mp_limb_t )*(src + i);
      while (1) {
        __x___0 = s;
        __y___0 = c;
        __w___0 = __x___0 - __y___0;
        l = __w___0;
        c = (mp_limb_t )(__w___0 > __x___0);
        break;
      }
      l = l * inverse & 0xffffffffffffffffUL;
      *(dst + i) = l;
      i ++;
    }
  }
  return;
}
}
#pragma merger("0","./divrem_1.i","")
mp_limb_t __gmpn_divrem_1(mp_ptr qp , mp_size_t qxn , mp_srcptr up , mp_size_t un ,
                          mp_limb_t d ) ;
mp_limb_t __gmpn_divrem_1(mp_ptr qp , mp_size_t qxn , mp_srcptr up , mp_size_t un ,
                          mp_limb_t d )
{
  mp_size_t n___0 ;
  mp_size_t i ;
  mp_limb_t n1 ;
  mp_limb_t n0 ;
  mp_limb_t r ;
  mp_limb_t q ;
  mp_ptr tmp ;
  UWtype __d1 ;
  UWtype __d0 ;
  UWtype __q1 ;
  UWtype __q0 ;
  UWtype __r1 ;
  UWtype __r0 ;
  UWtype __m ;
  UWtype __d1___0 ;
  UWtype __d0___0 ;
  UWtype __q1___0 ;
  UWtype __q0___0 ;
  UWtype __r1___0 ;
  UWtype __r0___0 ;
  UWtype __m___0 ;
  mp_limb_t dinv ;
  mp_limb_t _dummy ;
  UWtype __d1___1 ;
  UWtype __d0___1 ;
  UWtype __q1___1 ;
  UWtype __q0___1 ;
  UWtype __r1___1 ;
  UWtype __r0___1 ;
  UWtype __m___1 ;
  mp_limb_t _qh ;
  mp_limb_t _ql ;
  mp_limb_t _r ;
  mp_limb_t _mask ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  UWtype __x ;
  long tmp___0 ;
  mp_limb_t _qh___0 ;
  mp_limb_t _ql___0 ;
  mp_limb_t _r___0 ;
  mp_limb_t _mask___0 ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  int cnt ;
  mp_ptr tmp___2 ;
  UWtype __xr ;
  UWtype __a ;
  mp_limb_t dinv___0 ;
  mp_limb_t nshift___0 ;
  mp_limb_t _dummy___0 ;
  UWtype __d1___5 ;
  UWtype __d0___5 ;
  UWtype __q1___5 ;
  UWtype __q0___5 ;
  UWtype __r1___5 ;
  UWtype __r0___5 ;
  UWtype __m___5 ;
  mp_limb_t _qh___1 ;
  mp_limb_t _ql___1 ;
  mp_limb_t _r___1 ;
  mp_limb_t _mask___1 ;
  UWtype __x0___1 ;
  UWtype __x1___1 ;
  UWtype __x2___1 ;
  UWtype __x3___1 ;
  UHWtype __ul___1 ;
  UHWtype __vl___1 ;
  UHWtype __uh___1 ;
  UHWtype __vh___1 ;
  UWtype __u___1 ;
  UWtype __v___1 ;
  UWtype __x___1 ;
  long tmp___5 ;
  mp_limb_t _qh___2 ;
  mp_limb_t _ql___2 ;
  mp_limb_t _r___2 ;
  mp_limb_t _mask___2 ;
  UWtype __x0___2 ;
  UWtype __x1___2 ;
  UWtype __x2___2 ;
  UWtype __x3___2 ;
  UHWtype __ul___2 ;
  UHWtype __vl___2 ;
  UHWtype __uh___2 ;
  UHWtype __vh___2 ;
  UWtype __u___2 ;
  UWtype __v___2 ;
  UWtype __x___2 ;
  long tmp___6 ;
  mp_limb_t _qh___3 ;
  mp_limb_t _ql___3 ;
  mp_limb_t _r___3 ;
  mp_limb_t _mask___3 ;
  UWtype __x0___3 ;
  UWtype __x1___3 ;
  UWtype __x2___3 ;
  UWtype __x3___3 ;
  UHWtype __ul___3 ;
  UHWtype __vl___3 ;
  UHWtype __uh___3 ;
  UHWtype __vh___3 ;
  UWtype __u___3 ;
  UWtype __v___3 ;

  {
  r = (mp_limb_t )0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  n___0 = un + qxn;
  if (n___0 == 0L) {
    return ((mp_limb_t )0);
  }
  d = d;
  qp += n___0 - 1L;
  if ((d & (0xffffffffffffffffUL ^ (0xffffffffffffffffUL >> 1))) != 0UL) {
    if (un != 0L) {
      r = (mp_limb_t )*(up + (un - 1L));
      q = (mp_limb_t )(r >= d);
      tmp = qp;
      qp --;
      *tmp = q;
      r -= d & - q;
      r = r;
      n___0 --;
      un --;
    }
    if (0) {
      i = un - 1L;
      while (i >= 0L) {
        n0 = (mp_limb_t )*(up + i);
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          __d1 = d >> 32;
          __d0 = d & ((1UL << 32) - 1UL);
          __q1 = r / __d1;
          __r1 = r - __q1 * __d1;
          __m = __q1 * __d0;
          __r1 = __r1 * (1UL << 32) | (n0 >> 32);
          if (__r1 < __m) {
            __q1 --;
            __r1 += d;
            if (__r1 >= d) {
              if (__r1 < __m) {
                __q1 --;
                __r1 += d;
              }
            }
          }
          __r1 -= __m;
          __q0 = __r1 / __d1;
          __r0 = __r1 - __q0 * __d1;
          __m = __q0 * __d0;
          __r0 = __r0 * (1UL << 32) | (n0 & ((1UL << 32) - 1UL));
          if (__r0 < __m) {
            __q0 --;
            __r0 += d;
            if (__r0 >= d) {
              if (__r0 < __m) {
                __q0 --;
                __r0 += d;
              }
            }
          }
          __r0 -= __m;
          *qp = __q1 * (1UL << 32) | __q0;
          r = __r0;
          break;
        }
        r = r;
        qp --;
        i --;
      }
      i = qxn - 1L;
      while (i >= 0L) {
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          __d1___0 = d >> 32;
          __d0___0 = d & ((1UL << 32) - 1UL);
          __q1___0 = r / __d1___0;
          __r1___0 = r - __q1___0 * __d1___0;
          __m___0 = __q1___0 * __d0___0;
          __r1___0 *= 1UL << 32;
          if (__r1___0 < __m___0) {
            __q1___0 --;
            __r1___0 += d;
            if (__r1___0 >= d) {
              if (__r1___0 < __m___0) {
                __q1___0 --;
                __r1___0 += d;
              }
            }
          }
          __r1___0 -= __m___0;
          __q0___0 = __r1___0 / __d1___0;
          __r0___0 = __r1___0 - __q0___0 * __d1___0;
          __m___0 = __q0___0 * __d0___0;
          __r0___0 *= 1UL << 32;
          if (__r0___0 < __m___0) {
            __q0___0 --;
            __r0___0 += d;
            if (__r0___0 >= d) {
              if (__r0___0 < __m___0) {
                __q0___0 --;
                __r0___0 += d;
              }
            }
          }
          __r0___0 -= __m___0;
          *qp = __q1___0 * (1UL << 32) | __q0___0;
          r = __r0___0;
          break;
        }
        r = r;
        qp --;
        i --;
      }
      return (r);
    } else {
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          __d1___1 = d >> 32;
          __d0___1 = d & ((1UL << 32) - 1UL);
          __q1___1 = ~ d / __d1___1;
          __r1___1 = ~ d - __q1___1 * __d1___1;
          __m___1 = __q1___1 * __d0___1;
          __r1___1 = __r1___1 * (1UL << 32) | (0xffffffffffffffffUL >> 32);
          if (__r1___1 < __m___1) {
            __q1___1 --;
            __r1___1 += d;
            if (__r1___1 >= d) {
              if (__r1___1 < __m___1) {
                __q1___1 --;
                __r1___1 += d;
              }
            }
          }
          __r1___1 -= __m___1;
          __q0___1 = __r1___1 / __d1___1;
          __r0___1 = __r1___1 - __q0___1 * __d1___1;
          __m___1 = __q0___1 * __d0___1;
          __r0___1 = __r0___1 * (1UL << 32) | (0xffffffffffffffffUL & ((1UL << 32) - 1UL));
          if (__r0___1 < __m___1) {
            __q0___1 --;
            __r0___1 += d;
            if (__r0___1 >= d) {
              if (__r0___1 < __m___1) {
                __q0___1 --;
                __r0___1 += d;
              }
            }
          }
          __r0___1 -= __m___1;
          dinv = __q1___1 * (1UL << 32) | __q0___1;
          _dummy = __r0___1;
          break;
        }
        break;
      }
      i = un - 1L;
      while (i >= 0L) {
        n0 = (mp_limb_t )*(up + i);
        while (1) {
          while (1) {
            __u = r;
            __v = dinv;
            __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
            __uh = (UHWtype )(__u >> 32);
            __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
            __vh = (UHWtype )(__v >> 32);
            __x0 = (UWtype )__ul * (UWtype )__vl;
            __x1 = (UWtype )__ul * (UWtype )__vh;
            __x2 = (UWtype )__uh * (UWtype )__vl;
            __x3 = (UWtype )__uh * (UWtype )__vh;
            __x1 += __x0 >> 32;
            __x1 += __x2;
            if (__x1 < __x2) {
              __x3 += 1UL << 32;
            }
            _qh = __x3 + (__x1 >> 32);
            _ql = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
            break;
          }
          while (1) {
            __x = _ql + n0;
            _qh = (_qh + (r + 1UL)) + (mp_limb_t )(__x < _ql);
            _ql = __x;
            break;
          }
          _r = n0 - _qh * d;
          _mask = - ((mp_limb_t )(_r > _ql));
          _qh += _mask;
          _r += _mask & d;
          tmp___0 = __builtin_expect((long )((_r >= d) != 0), 0L);
          if (tmp___0) {
            _r -= d;
            _qh ++;
          }
          r = _r;
          *qp = _qh;
          break;
        }
        r = r;
        qp --;
        i --;
      }
      i = qxn - 1L;
      while (i >= 0L) {
        while (1) {
          while (1) {
            __u___0 = r;
            __v___0 = dinv;
            __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
            __uh___0 = (UHWtype )(__u___0 >> 32);
            __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
            __vh___0 = (UHWtype )(__v___0 >> 32);
            __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
            __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
            __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
            __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
            __x1___0 += __x0___0 >> 32;
            __x1___0 += __x2___0;
            if (__x1___0 < __x2___0) {
              __x3___0 += 1UL << 32;
            }
            _qh___0 = __x3___0 + (__x1___0 >> 32);
            _ql___0 = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
            break;
          }
          _qh___0 += r + 1UL;
          _r___0 = - _qh___0 * d;
          _mask___0 = - ((mp_limb_t )(_r___0 > _ql___0));
          _qh___0 += _mask___0;
          _r___0 += _mask___0 & d;
          r = _r___0;
          *qp = _qh___0;
          break;
        }
        r = r;
        qp --;
        i --;
      }
      return (r);
    }
  } else {
    if (un != 0L) {
      n1 = (mp_limb_t )*(up + (un - 1L));
      if (n1 < d) {
        r = n1;
        tmp___2 = qp;
        qp --;
        *tmp___2 = (mp_limb_t )0;
        n___0 --;
        if (n___0 == 0L) {
          return (r);
        }
        un --;
      }
    }
    while (1) {
      __xr = d;
      __a = (UWtype )56;
      while (__a > 0UL) {
        if (((__xr >> __a) & 255UL) != 0UL) {
          break;
        }
        __a -= 8UL;
      }
      __a ++;
      cnt = (int )((65UL - __a) - (UWtype )__gmpn_clz_tab[__xr >> __a]);
      break;
    }
    d <<= cnt;
    r <<= cnt;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        __d1___5 = d >> 32;
        __d0___5 = d & ((1UL << 32) - 1UL);
        __q1___5 = ~ d / __d1___5;
        __r1___5 = ~ d - __q1___5 * __d1___5;
        __m___5 = __q1___5 * __d0___5;
        __r1___5 = __r1___5 * (1UL << 32) | (0xffffffffffffffffUL >> 32);
        if (__r1___5 < __m___5) {
          __q1___5 --;
          __r1___5 += d;
          if (__r1___5 >= d) {
            if (__r1___5 < __m___5) {
              __q1___5 --;
              __r1___5 += d;
            }
          }
        }
        __r1___5 -= __m___5;
        __q0___5 = __r1___5 / __d1___5;
        __r0___5 = __r1___5 - __q0___5 * __d1___5;
        __m___5 = __q0___5 * __d0___5;
        __r0___5 = __r0___5 * (1UL << 32) | (0xffffffffffffffffUL & ((1UL << 32) - 1UL));
        if (__r0___5 < __m___5) {
          __q0___5 --;
          __r0___5 += d;
          if (__r0___5 >= d) {
            if (__r0___5 < __m___5) {
              __q0___5 --;
              __r0___5 += d;
            }
          }
        }
        __r0___5 -= __m___5;
        dinv___0 = __q1___5 * (1UL << 32) | __q0___5;
        _dummy___0 = __r0___5;
        break;
      }
      break;
    }
    if (un != 0L) {
      n1 = (mp_limb_t )*(up + (un - 1L));
      r |= n1 >> (64 - cnt);
      i = un - 2L;
      while (i >= 0L) {
        n0 = (mp_limb_t )*(up + i);
        nshift___0 = (n1 << cnt) | (n0 >> (64 - cnt));
        while (1) {
          while (1) {
            __u___1 = r;
            __v___1 = dinv___0;
            __ul___1 = (UHWtype )(__u___1 & ((1UL << 32) - 1UL));
            __uh___1 = (UHWtype )(__u___1 >> 32);
            __vl___1 = (UHWtype )(__v___1 & ((1UL << 32) - 1UL));
            __vh___1 = (UHWtype )(__v___1 >> 32);
            __x0___1 = (UWtype )__ul___1 * (UWtype )__vl___1;
            __x1___1 = (UWtype )__ul___1 * (UWtype )__vh___1;
            __x2___1 = (UWtype )__uh___1 * (UWtype )__vl___1;
            __x3___1 = (UWtype )__uh___1 * (UWtype )__vh___1;
            __x1___1 += __x0___1 >> 32;
            __x1___1 += __x2___1;
            if (__x1___1 < __x2___1) {
              __x3___1 += 1UL << 32;
            }
            _qh___1 = __x3___1 + (__x1___1 >> 32);
            _ql___1 = (__x1___1 << 32) + (__x0___1 & ((1UL << 32) - 1UL));
            break;
          }
          while (1) {
            __x___1 = _ql___1 + nshift___0;
            _qh___1 = (_qh___1 + (r + 1UL)) + (mp_limb_t )(__x___1 < _ql___1);
            _ql___1 = __x___1;
            break;
          }
          _r___1 = nshift___0 - _qh___1 * d;
          _mask___1 = - ((mp_limb_t )(_r___1 > _ql___1));
          _qh___1 += _mask___1;
          _r___1 += _mask___1 & d;
          tmp___5 = __builtin_expect((long )((_r___1 >= d) != 0), 0L);
          if (tmp___5) {
            _r___1 -= d;
            _qh___1 ++;
          }
          r = _r___1;
          *qp = _qh___1;
          break;
        }
        r = r;
        qp --;
        n1 = n0;
        i --;
      }
      while (1) {
        while (1) {
          __u___2 = r;
          __v___2 = dinv___0;
          __ul___2 = (UHWtype )(__u___2 & ((1UL << 32) - 1UL));
          __uh___2 = (UHWtype )(__u___2 >> 32);
          __vl___2 = (UHWtype )(__v___2 & ((1UL << 32) - 1UL));
          __vh___2 = (UHWtype )(__v___2 >> 32);
          __x0___2 = (UWtype )__ul___2 * (UWtype )__vl___2;
          __x1___2 = (UWtype )__ul___2 * (UWtype )__vh___2;
          __x2___2 = (UWtype )__uh___2 * (UWtype )__vl___2;
          __x3___2 = (UWtype )__uh___2 * (UWtype )__vh___2;
          __x1___2 += __x0___2 >> 32;
          __x1___2 += __x2___2;
          if (__x1___2 < __x2___2) {
            __x3___2 += 1UL << 32;
          }
          _qh___2 = __x3___2 + (__x1___2 >> 32);
          _ql___2 = (__x1___2 << 32) + (__x0___2 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x___2 = _ql___2 + (n1 << cnt);
          _qh___2 = (_qh___2 + (r + 1UL)) + (mp_limb_t )(__x___2 < _ql___2);
          _ql___2 = __x___2;
          break;
        }
        _r___2 = (n1 << cnt) - _qh___2 * d;
        _mask___2 = - ((mp_limb_t )(_r___2 > _ql___2));
        _qh___2 += _mask___2;
        _r___2 += _mask___2 & d;
        tmp___6 = __builtin_expect((long )((_r___2 >= d) != 0), 0L);
        if (tmp___6) {
          _r___2 -= d;
          _qh___2 ++;
        }
        r = _r___2;
        *qp = _qh___2;
        break;
      }
      r = r;
      qp --;
    }
    i = qxn - 1L;
    while (i >= 0L) {
      while (1) {
        while (1) {
          __u___3 = r;
          __v___3 = dinv___0;
          __ul___3 = (UHWtype )(__u___3 & ((1UL << 32) - 1UL));
          __uh___3 = (UHWtype )(__u___3 >> 32);
          __vl___3 = (UHWtype )(__v___3 & ((1UL << 32) - 1UL));
          __vh___3 = (UHWtype )(__v___3 >> 32);
          __x0___3 = (UWtype )__ul___3 * (UWtype )__vl___3;
          __x1___3 = (UWtype )__ul___3 * (UWtype )__vh___3;
          __x2___3 = (UWtype )__uh___3 * (UWtype )__vl___3;
          __x3___3 = (UWtype )__uh___3 * (UWtype )__vh___3;
          __x1___3 += __x0___3 >> 32;
          __x1___3 += __x2___3;
          if (__x1___3 < __x2___3) {
            __x3___3 += 1UL << 32;
          }
          _qh___3 = __x3___3 + (__x1___3 >> 32);
          _ql___3 = (__x1___3 << 32) + (__x0___3 & ((1UL << 32) - 1UL));
          break;
        }
        _qh___3 += r + 1UL;
        _r___3 = - _qh___3 * d;
        _mask___3 = - ((mp_limb_t )(_r___3 > _ql___3));
        _qh___3 += _mask___3;
        _r___3 += _mask___3 & d;
        r = _r___3;
        *qp = _qh___3;
        break;
      }
      r = r;
      qp --;
      i --;
    }
    return (r >> cnt);
  }
}
}
#pragma merger("0","./divrem_2.i","")
mp_limb_t __gmpn_divrem_2(mp_ptr qp , mp_size_t qxn , mp_ptr np , mp_size_t nn , mp_srcptr dp )
{
  mp_limb_t most_significant_q_limb ;
  mp_size_t i ;
  mp_limb_t r1 ;
  mp_limb_t r0 ;
  mp_limb_t d1 ;
  mp_limb_t d0 ;
  gmp_pi1_t di ;
  UWtype __x ;
  mp_limb_t _v ;
  mp_limb_t _p ;
  mp_limb_t _t1 ;
  mp_limb_t _t0 ;
  mp_limb_t _mask ;
  mp_limb_t _dummy ;
  UWtype __d1 ;
  UWtype __d0 ;
  UWtype __q1 ;
  UWtype __q0 ;
  UWtype __r1 ;
  UWtype __r0 ;
  UWtype __m ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  long tmp ;
  mp_limb_t n0 ;
  mp_limb_t q ;
  mp_limb_t _q0 ;
  mp_limb_t _t1___0 ;
  mp_limb_t _t0___0 ;
  mp_limb_t _mask___0 ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  UWtype __x___0 ;
  UWtype __x___1 ;
  UWtype __x0___1 ;
  UWtype __x1___1 ;
  UWtype __x2___1 ;
  UWtype __x3___1 ;
  UHWtype __ul___1 ;
  UHWtype __vl___1 ;
  UHWtype __uh___1 ;
  UHWtype __vh___1 ;
  UWtype __u___1 ;
  UWtype __v___1 ;
  UWtype __x___2 ;
  UWtype __x___3 ;
  UWtype __x___4 ;
  long tmp___0 ;
  mp_limb_t q___0 ;
  mp_limb_t _q0___0 ;
  mp_limb_t _t1___1 ;
  mp_limb_t _t0___1 ;
  mp_limb_t _mask___1 ;
  UWtype __x0___2 ;
  UWtype __x1___2 ;
  UWtype __x2___2 ;
  UWtype __x3___2 ;
  UHWtype __ul___2 ;
  UHWtype __vl___2 ;
  UHWtype __uh___2 ;
  UHWtype __vh___2 ;
  UWtype __u___2 ;
  UWtype __v___2 ;
  UWtype __x___5 ;
  UWtype __x___6 ;
  UWtype __x0___3 ;
  UWtype __x1___3 ;
  UWtype __x2___3 ;
  UWtype __x3___3 ;
  UHWtype __ul___3 ;
  UHWtype __vl___3 ;
  UHWtype __uh___3 ;
  UHWtype __vh___3 ;
  UWtype __u___3 ;
  UWtype __v___3 ;
  UWtype __x___7 ;
  UWtype __x___8 ;
  UWtype __x___9 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  np += nn - 2L;
  d1 = (mp_limb_t )*(dp + 1);
  d0 = (mp_limb_t )*(dp + 0);
  r1 = *(np + 1);
  r0 = *(np + 0);
  most_significant_q_limb = (mp_limb_t )0;
  if (r1 >= d1) {
    if (r1 > d1) {
      goto _L;
    } else
    if (r0 >= d0) {
      _L:
      while (1) {
        __x = r0 - d0;
        r1 = (r1 - d1) - (mp_limb_t )(r0 < d0);
        r0 = __x;
        break;
      }
      most_significant_q_limb = (mp_limb_t )1;
    }
  }
  while (1) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        __d1 = d1 >> 32;
        __d0 = d1 & ((1UL << 32) - 1UL);
        __q1 = ~ d1 / __d1;
        __r1 = ~ d1 - __q1 * __d1;
        __m = __q1 * __d0;
        __r1 = __r1 * (1UL << 32) | (0xffffffffffffffffUL >> 32);
        if (__r1 < __m) {
          __q1 --;
          __r1 += d1;
          if (__r1 >= d1) {
            if (__r1 < __m) {
              __q1 --;
              __r1 += d1;
            }
          }
        }
        __r1 -= __m;
        __q0 = __r1 / __d1;
        __r0 = __r1 - __q0 * __d1;
        __m = __q0 * __d0;
        __r0 = __r0 * (1UL << 32) | (0xffffffffffffffffUL & ((1UL << 32) - 1UL));
        if (__r0 < __m) {
          __q0 --;
          __r0 += d1;
          if (__r0 >= d1) {
            if (__r0 < __m) {
              __q0 --;
              __r0 += d1;
            }
          }
        }
        __r0 -= __m;
        _v = __q1 * (1UL << 32) | __q0;
        _dummy = __r0;
        break;
      }
      break;
    }
    _p = d1 * _v;
    _p += d0;
    if (_p < d0) {
      _v --;
      _mask = - ((mp_limb_t )(_p >= d1));
      _p -= d1;
      _v += _mask;
      _p -= _mask & d1;
    }
    while (1) {
      __u = d0;
      __v = _v;
      __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
      __uh = (UHWtype )(__u >> 32);
      __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
      __vh = (UHWtype )(__v >> 32);
      __x0 = (UWtype )__ul * (UWtype )__vl;
      __x1 = (UWtype )__ul * (UWtype )__vh;
      __x2 = (UWtype )__uh * (UWtype )__vl;
      __x3 = (UWtype )__uh * (UWtype )__vh;
      __x1 += __x0 >> 32;
      __x1 += __x2;
      if (__x1 < __x2) {
        __x3 += 1UL << 32;
      }
      _t1 = __x3 + (__x1 >> 32);
      _t0 = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
      break;
    }
    _p += _t1;
    if (_p < _t1) {
      _v --;
      tmp = __builtin_expect((long )((_p >= d1) != 0), 0L);
      if (tmp) {
        if (_p > d1) {
          _v --;
        } else
        if (_t0 >= d0) {
          _v --;
        }
      }
    }
    di.inv32 = _v;
    break;
  }
  qp += qxn;
  i = (nn - 2L) - 1L;
  while (i >= 0L) {
    n0 = *(np + -1);
    while (1) {
      while (1) {
        __u___0 = r1;
        __v___0 = di.inv32;
        __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
        __uh___0 = (UHWtype )(__u___0 >> 32);
        __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
        __vh___0 = (UHWtype )(__v___0 >> 32);
        __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
        __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
        __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
        __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
        __x1___0 += __x0___0 >> 32;
        __x1___0 += __x2___0;
        if (__x1___0 < __x2___0) {
          __x3___0 += 1UL << 32;
        }
        q = __x3___0 + (__x1___0 >> 32);
        _q0 = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
        break;
      }
      while (1) {
        __x___0 = _q0 + r0;
        q = (q + r1) + (mp_limb_t )(__x___0 < _q0);
        _q0 = __x___0;
        break;
      }
      r1 = r0 - d1 * q;
      while (1) {
        __x___1 = n0 - d0;
        r1 = (r1 - d1) - (mp_limb_t )(n0 < d0);
        r0 = __x___1;
        break;
      }
      while (1) {
        __u___1 = d0;
        __v___1 = q;
        __ul___1 = (UHWtype )(__u___1 & ((1UL << 32) - 1UL));
        __uh___1 = (UHWtype )(__u___1 >> 32);
        __vl___1 = (UHWtype )(__v___1 & ((1UL << 32) - 1UL));
        __vh___1 = (UHWtype )(__v___1 >> 32);
        __x0___1 = (UWtype )__ul___1 * (UWtype )__vl___1;
        __x1___1 = (UWtype )__ul___1 * (UWtype )__vh___1;
        __x2___1 = (UWtype )__uh___1 * (UWtype )__vl___1;
        __x3___1 = (UWtype )__uh___1 * (UWtype )__vh___1;
        __x1___1 += __x0___1 >> 32;
        __x1___1 += __x2___1;
        if (__x1___1 < __x2___1) {
          __x3___1 += 1UL << 32;
        }
        _t1___0 = __x3___1 + (__x1___1 >> 32);
        _t0___0 = (__x1___1 << 32) + (__x0___1 & ((1UL << 32) - 1UL));
        break;
      }
      while (1) {
        __x___2 = r0 - _t0___0;
        r1 = (r1 - _t1___0) - (mp_limb_t )(r0 < _t0___0);
        r0 = __x___2;
        break;
      }
      q ++;
      _mask___0 = - ((mp_limb_t )(r1 >= _q0));
      q += _mask___0;
      while (1) {
        __x___3 = r0 + (_mask___0 & d0);
        r1 = (r1 + (_mask___0 & d1)) + (mp_limb_t )(__x___3 < r0);
        r0 = __x___3;
        break;
      }
      tmp___0 = __builtin_expect((long )((r1 >= d1) != 0), 0L);
      if (tmp___0) {
        if (r1 > d1) {
          goto _L___0;
        } else
        if (r0 >= d0) {
          _L___0:
          q ++;
          while (1) {
            __x___4 = r0 - d0;
            r1 = (r1 - d1) - (mp_limb_t )(r0 < d0);
            r0 = __x___4;
            break;
          }
        }
      }
      break;
    }
    np --;
    *(qp + i) = q;
    i --;
  }
  tmp___2 = __builtin_expect((long )((qxn != 0L) != 0), 0L);
  if (tmp___2) {
    qp -= qxn;
    i = qxn - 1L;
    while (i >= 0L) {
      while (1) {
        while (1) {
          __u___2 = r1;
          __v___2 = di.inv32;
          __ul___2 = (UHWtype )(__u___2 & ((1UL << 32) - 1UL));
          __uh___2 = (UHWtype )(__u___2 >> 32);
          __vl___2 = (UHWtype )(__v___2 & ((1UL << 32) - 1UL));
          __vh___2 = (UHWtype )(__v___2 >> 32);
          __x0___2 = (UWtype )__ul___2 * (UWtype )__vl___2;
          __x1___2 = (UWtype )__ul___2 * (UWtype )__vh___2;
          __x2___2 = (UWtype )__uh___2 * (UWtype )__vl___2;
          __x3___2 = (UWtype )__uh___2 * (UWtype )__vh___2;
          __x1___2 += __x0___2 >> 32;
          __x1___2 += __x2___2;
          if (__x1___2 < __x2___2) {
            __x3___2 += 1UL << 32;
          }
          q___0 = __x3___2 + (__x1___2 >> 32);
          _q0___0 = (__x1___2 << 32) + (__x0___2 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x___5 = _q0___0 + r0;
          q___0 = (q___0 + r1) + (mp_limb_t )(__x___5 < _q0___0);
          _q0___0 = __x___5;
          break;
        }
        r1 = r0 - d1 * q___0;
        while (1) {
          __x___6 = 0UL - d0;
          r1 = (r1 - d1) - (mp_limb_t )(0UL < d0);
          r0 = __x___6;
          break;
        }
        while (1) {
          __u___3 = d0;
          __v___3 = q___0;
          __ul___3 = (UHWtype )(__u___3 & ((1UL << 32) - 1UL));
          __uh___3 = (UHWtype )(__u___3 >> 32);
          __vl___3 = (UHWtype )(__v___3 & ((1UL << 32) - 1UL));
          __vh___3 = (UHWtype )(__v___3 >> 32);
          __x0___3 = (UWtype )__ul___3 * (UWtype )__vl___3;
          __x1___3 = (UWtype )__ul___3 * (UWtype )__vh___3;
          __x2___3 = (UWtype )__uh___3 * (UWtype )__vl___3;
          __x3___3 = (UWtype )__uh___3 * (UWtype )__vh___3;
          __x1___3 += __x0___3 >> 32;
          __x1___3 += __x2___3;
          if (__x1___3 < __x2___3) {
            __x3___3 += 1UL << 32;
          }
          _t1___1 = __x3___3 + (__x1___3 >> 32);
          _t0___1 = (__x1___3 << 32) + (__x0___3 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x___7 = r0 - _t0___1;
          r1 = (r1 - _t1___1) - (mp_limb_t )(r0 < _t0___1);
          r0 = __x___7;
          break;
        }
        q___0 ++;
        _mask___1 = - ((mp_limb_t )(r1 >= _q0___0));
        q___0 += _mask___1;
        while (1) {
          __x___8 = r0 + (_mask___1 & d0);
          r1 = (r1 + (_mask___1 & d1)) + (mp_limb_t )(__x___8 < r0);
          r0 = __x___8;
          break;
        }
        tmp___1 = __builtin_expect((long )((r1 >= d1) != 0), 0L);
        if (tmp___1) {
          if (r1 > d1) {
            goto _L___1;
          } else
          if (r0 >= d0) {
            _L___1:
            q___0 ++;
            while (1) {
              __x___9 = r0 - d0;
              r1 = (r1 - d1) - (mp_limb_t )(r0 < d0);
              r0 = __x___9;
              break;
            }
          }
        }
        break;
      }
      *(qp + i) = q___0;
      i --;
    }
  }
  *(np + 1) = r1;
  *(np + 0) = r0;
  return (most_significant_q_limb);
}
}
#pragma merger("0","./divrem.i","")
mp_limb_t __gmpn_divrem(mp_ptr qp , mp_size_t qxn , mp_ptr np , mp_size_t nn , mp_srcptr dp ,
                        mp_size_t dn ) ;
void __gmpn_tdiv_qr(mp_ptr qp , mp_ptr rp , mp_size_t qxn , mp_srcptr np , mp_size_t nn ,
                    mp_srcptr dp , mp_size_t dn ) ;
mp_limb_t __gmpn_divrem(mp_ptr qp , mp_size_t qxn , mp_ptr np , mp_size_t nn , mp_srcptr dp ,
                        mp_size_t dn )
{
  mp_limb_t ret ;
  mp_ptr q2p ;
  mp_size_t qn ;
  struct tmp_reentrant_t *__tmp_marker ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___4 ;
  mp_ptr tmp___5 ;
  mp_srcptr tmp___6 ;
  mp_ptr tmp___7 ;
  long tmp___8 ;
  mp_limb_t tmp___9 ;
  mp_ptr rp ;
  mp_ptr q2p___0 ;
  mp_limb_t qhl ;
  mp_size_t qn___0 ;
  struct tmp_reentrant_t *__tmp_marker___0 ;
  mp_ptr n2p ;
  void *tmp___11 ;
  void *tmp___12 ;
  void *tmp___13 ;
  long tmp___14 ;
  mp_ptr __dst___0 ;
  mp_size_t __n___0 ;
  mp_ptr tmp___15 ;
  mp_size_t __n___1 ;
  mp_ptr __dst___1 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___0 ;
  mp_srcptr tmp___16 ;
  mp_ptr tmp___17 ;
  mp_srcptr tmp___18 ;
  mp_ptr tmp___19 ;
  void *tmp___21 ;
  void *tmp___22 ;
  void *tmp___23 ;
  long tmp___24 ;
  void *tmp___26 ;
  void *tmp___27 ;
  void *tmp___28 ;
  long tmp___29 ;
  mp_size_t __n___2 ;
  mp_ptr __dst___2 ;
  mp_srcptr __src___1 ;
  mp_limb_t __x___1 ;
  mp_srcptr tmp___30 ;
  mp_ptr tmp___31 ;
  mp_srcptr tmp___32 ;
  mp_ptr tmp___33 ;
  mp_size_t __n___3 ;
  mp_ptr __dst___3 ;
  mp_srcptr __src___2 ;
  mp_limb_t __x___2 ;
  mp_srcptr tmp___34 ;
  mp_ptr tmp___35 ;
  mp_srcptr tmp___36 ;
  mp_ptr tmp___37 ;
  void *tmp___39 ;
  void *tmp___40 ;
  void *tmp___41 ;
  long tmp___42 ;
  void *tmp___44 ;
  void *tmp___45 ;
  void *tmp___46 ;
  long tmp___47 ;
  mp_size_t __n___4 ;
  mp_ptr __dst___4 ;
  mp_srcptr __src___3 ;
  mp_limb_t __x___3 ;
  mp_srcptr tmp___48 ;
  mp_ptr tmp___49 ;
  mp_srcptr tmp___50 ;
  mp_ptr tmp___51 ;
  mp_size_t __n___5 ;
  mp_ptr __dst___5 ;
  mp_srcptr __src___4 ;
  mp_limb_t __x___4 ;
  mp_srcptr tmp___52 ;
  mp_ptr tmp___53 ;
  mp_srcptr tmp___54 ;
  mp_ptr tmp___55 ;
  long tmp___56 ;
  long tmp___57 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if (dn == 1L) {
    __tmp_marker = (struct tmp_reentrant_t *)0;
    tmp___3 = __builtin_expect((long )(((unsigned long )(nn + qxn) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                               1L);
    if (tmp___3) {
      tmp___0 = alloca((unsigned long )(nn + qxn) * sizeof(mp_limb_t ));
      tmp___2 = tmp___0;
    } else {
      tmp___1 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(nn + qxn) * sizeof(mp_limb_t ));
      tmp___2 = tmp___1;
    }
    q2p = (mp_limb_t *)tmp___2;
    *(np + 0) = __gmpn_divrem_1(q2p, qxn, (mp_srcptr )np, nn, (mp_limb_t )*(dp + 0));
    qn = (nn + qxn) - 1L;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (qn != 0L) {
          __n = qn - 1L;
          __dst = qp;
          __src = (mp_srcptr )q2p;
          tmp___4 = __src;
          __src ++;
          __x = (mp_limb_t )*tmp___4;
          if (__n != 0L) {
            while (1) {
              tmp___5 = __dst;
              __dst ++;
              *tmp___5 = __x;
              tmp___6 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___6;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___7 = __dst;
          __dst ++;
          *tmp___7 = __x;
        }
        break;
      }
      break;
    }
    ret = *(q2p + qn);
    while (1) {
      tmp___8 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                 0L);
      if (tmp___8) {
        __gmp_tmp_reentrant_free(__tmp_marker);
      }
      break;
    }
    return (ret);
  } else
  if (dn == 2L) {
    tmp___9 = __gmpn_divrem_2(qp, qxn, np, nn, dp);
    return (tmp___9);
  } else {
    __tmp_marker___0 = (struct tmp_reentrant_t *)0;
    tmp___56 = __builtin_expect((long )((qxn != 0L) != 0), 0L);
    if (tmp___56) {
      tmp___14 = __builtin_expect((long )(((unsigned long )(nn + qxn) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___14) {
        tmp___11 = alloca((unsigned long )(nn + qxn) * sizeof(mp_limb_t ));
        tmp___13 = tmp___11;
      } else {
        tmp___12 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )(nn + qxn) * sizeof(mp_limb_t ));
        tmp___13 = tmp___12;
      }
      n2p = (mp_limb_t *)tmp___13;
      while (1) {
        while (1) {
          break;
        }
        if (qxn != 0L) {
          while (1) {
            __dst___0 = n2p;
            __n___0 = qxn;
            while (1) {
              break;
            }
            while (1) {
              tmp___15 = __dst___0;
              __dst___0 ++;
              *tmp___15 = (mp_limb_t )0L;
              __n___0 --;
              if (! __n___0) {
                break;
              }
            }
            break;
          }
        }
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (nn != 0L) {
            __n___1 = nn - 1L;
            __dst___1 = n2p + qxn;
            __src___0 = (mp_srcptr )np;
            tmp___16 = __src___0;
            __src___0 ++;
            __x___0 = (mp_limb_t )*tmp___16;
            if (__n___1 != 0L) {
              while (1) {
                tmp___17 = __dst___1;
                __dst___1 ++;
                *tmp___17 = __x___0;
                tmp___18 = __src___0;
                __src___0 ++;
                __x___0 = (mp_limb_t )*tmp___18;
                __n___1 --;
                if (! __n___1) {
                  break;
                }
              }
            }
            tmp___19 = __dst___1;
            __dst___1 ++;
            *tmp___19 = __x___0;
          }
          break;
        }
        break;
      }
      tmp___24 = __builtin_expect((long )(((unsigned long )(((nn - dn) + qxn) + 1L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___24) {
        tmp___21 = alloca((unsigned long )(((nn - dn) + qxn) + 1L) * sizeof(mp_limb_t ));
        tmp___23 = tmp___21;
      } else {
        tmp___22 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )(((nn - dn) + qxn) + 1L) * sizeof(mp_limb_t ));
        tmp___23 = tmp___22;
      }
      q2p___0 = (mp_limb_t *)tmp___23;
      tmp___29 = __builtin_expect((long )(((unsigned long )dn * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___29) {
        tmp___26 = alloca((unsigned long )dn * sizeof(mp_limb_t ));
        tmp___28 = tmp___26;
      } else {
        tmp___27 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )dn * sizeof(mp_limb_t ));
        tmp___28 = tmp___27;
      }
      rp = (mp_limb_t *)tmp___28;
      __gmpn_tdiv_qr(q2p___0, rp, 0L, (mp_srcptr )n2p, nn + qxn, dp, dn);
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (dn != 0L) {
            __n___2 = dn - 1L;
            __dst___2 = np;
            __src___1 = (mp_srcptr )rp;
            tmp___30 = __src___1;
            __src___1 ++;
            __x___1 = (mp_limb_t )*tmp___30;
            if (__n___2 != 0L) {
              while (1) {
                tmp___31 = __dst___2;
                __dst___2 ++;
                *tmp___31 = __x___1;
                tmp___32 = __src___1;
                __src___1 ++;
                __x___1 = (mp_limb_t )*tmp___32;
                __n___2 --;
                if (! __n___2) {
                  break;
                }
              }
            }
            tmp___33 = __dst___2;
            __dst___2 ++;
            *tmp___33 = __x___1;
          }
          break;
        }
        break;
      }
      qn___0 = (nn - dn) + qxn;
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (qn___0 != 0L) {
            __n___3 = qn___0 - 1L;
            __dst___3 = qp;
            __src___2 = (mp_srcptr )q2p___0;
            tmp___34 = __src___2;
            __src___2 ++;
            __x___2 = (mp_limb_t )*tmp___34;
            if (__n___3 != 0L) {
              while (1) {
                tmp___35 = __dst___3;
                __dst___3 ++;
                *tmp___35 = __x___2;
                tmp___36 = __src___2;
                __src___2 ++;
                __x___2 = (mp_limb_t )*tmp___36;
                __n___3 --;
                if (! __n___3) {
                  break;
                }
              }
            }
            tmp___37 = __dst___3;
            __dst___3 ++;
            *tmp___37 = __x___2;
          }
          break;
        }
        break;
      }
      qhl = *(q2p___0 + qn___0);
    } else {
      tmp___42 = __builtin_expect((long )(((unsigned long )((nn - dn) + 1L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___42) {
        tmp___39 = alloca((unsigned long )((nn - dn) + 1L) * sizeof(mp_limb_t ));
        tmp___41 = tmp___39;
      } else {
        tmp___40 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )((nn - dn) + 1L) * sizeof(mp_limb_t ));
        tmp___41 = tmp___40;
      }
      q2p___0 = (mp_limb_t *)tmp___41;
      tmp___47 = __builtin_expect((long )(((unsigned long )dn * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___47) {
        tmp___44 = alloca((unsigned long )dn * sizeof(mp_limb_t ));
        tmp___46 = tmp___44;
      } else {
        tmp___45 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )dn * sizeof(mp_limb_t ));
        tmp___46 = tmp___45;
      }
      rp = (mp_limb_t *)tmp___46;
      __gmpn_tdiv_qr(q2p___0, rp, 0L, (mp_srcptr )np, nn, dp, dn);
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (dn != 0L) {
            __n___4 = dn - 1L;
            __dst___4 = np;
            __src___3 = (mp_srcptr )rp;
            tmp___48 = __src___3;
            __src___3 ++;
            __x___3 = (mp_limb_t )*tmp___48;
            if (__n___4 != 0L) {
              while (1) {
                tmp___49 = __dst___4;
                __dst___4 ++;
                *tmp___49 = __x___3;
                tmp___50 = __src___3;
                __src___3 ++;
                __x___3 = (mp_limb_t )*tmp___50;
                __n___4 --;
                if (! __n___4) {
                  break;
                }
              }
            }
            tmp___51 = __dst___4;
            __dst___4 ++;
            *tmp___51 = __x___3;
          }
          break;
        }
        break;
      }
      qn___0 = nn - dn;
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (qn___0 != 0L) {
            __n___5 = qn___0 - 1L;
            __dst___5 = qp;
            __src___4 = (mp_srcptr )q2p___0;
            tmp___52 = __src___4;
            __src___4 ++;
            __x___4 = (mp_limb_t )*tmp___52;
            if (__n___5 != 0L) {
              while (1) {
                tmp___53 = __dst___5;
                __dst___5 ++;
                *tmp___53 = __x___4;
                tmp___54 = __src___4;
                __src___4 ++;
                __x___4 = (mp_limb_t )*tmp___54;
                __n___5 --;
                if (! __n___5) {
                  break;
                }
              }
            }
            tmp___55 = __dst___5;
            __dst___5 ++;
            *tmp___55 = __x___4;
          }
          break;
        }
        break;
      }
      qhl = *(q2p___0 + qn___0);
    }
    while (1) {
      tmp___57 = __builtin_expect((long )(((unsigned long )__tmp_marker___0 != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                  0L);
      if (tmp___57) {
        __gmp_tmp_reentrant_free(__tmp_marker___0);
      }
      break;
    }
    return (qhl);
  }
}
}
#pragma merger("0","./errno.i","")
int __gmp_errno ;
int __gmp_junk ;
int const __gmp_0 ;
 __attribute__((__noreturn__)) void __gmp_exception(int error_bit ) ;
 __attribute__((__noreturn__)) void __gmp_divide_by_zero(void) ;
 __attribute__((__noreturn__)) void __gmp_sqrt_of_negative(void) ;
int __gmp_errno = 0;
 __attribute__((__noreturn__)) void __gmp_exception(int error_bit ) ;
void __gmp_exception(int error_bit )
{


  {
  __gmp_errno |= error_bit;
  __gmp_junk = 10 / (int )__gmp_0;
  abort();
}
}
 __attribute__((__noreturn__)) void __gmp_sqrt_of_negative(void) ;
void __gmp_sqrt_of_negative(void)
{


  {
  __gmp_exception(4);
}
}
 __attribute__((__noreturn__)) void __gmp_divide_by_zero(void) ;
void __gmp_divide_by_zero(void)
{


  {
  __gmp_exception(2);
}
}
#pragma merger("0","./export.i","")
void *__gmpz_export(void *data , size_t *countp , int order , size_t size , int endian ,
                    size_t nail , mpz_srcptr z ) ;
void *(*__gmp_allocate_func)(size_t ) ;
void *__gmpz_export(void *data , size_t *countp , int order , size_t size , int endian ,
                    size_t nail , mpz_srcptr z )
{
  mp_size_t zsize ;
  mp_srcptr zp ;
  size_t count ;
  size_t dummy ;
  unsigned long numb ;
  unsigned int align ;
  int __cnt ;
  mp_bitcnt_t __totbits ;
  UWtype __xr ;
  UWtype __a ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___1 ;
  mp_ptr tmp___2 ;
  mp_srcptr tmp___3 ;
  mp_ptr tmp___4 ;
  mp_ptr __dst___0 ;
  mp_size_t __size ;
  mp_srcptr __src___0 ;
  mp_size_t __i ;
  mp_ptr __dst___1 ;
  mp_srcptr __src___1 ;
  mp_size_t __size___0 ;
  mp_size_t __i___0 ;
  mp_ptr __dst___2 ;
  mp_size_t __size___1 ;
  mp_srcptr __src___2 ;
  mp_size_t __i___1 ;
  mp_limb_t limb ;
  mp_limb_t wbitsmask ;
  size_t i ;
  size_t numb___0 ;
  mp_size_t j ;
  mp_size_t wbytes ;
  mp_size_t woffset ;
  unsigned char *dp ;
  int lbits ;
  int wbits ;
  mp_srcptr zend ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  mp_limb_t newlimb ;
  mp_srcptr tmp___9 ;
  mp_limb_t newlimb___0 ;
  mp_srcptr tmp___10 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if ((unsigned long )countp == (unsigned long )((void *)0)) {
    countp = & dummy;
  }
  zsize = (mp_size_t )z->_mp_size;
  if (zsize == 0L) {
    *countp = (size_t )0;
    return (data);
  }
  if (zsize >= 0L) {
    zsize = zsize;
  } else {
    zsize = - zsize;
  }
  zp = (mp_srcptr )z->_mp_d;
  numb = 8UL * size - nail;
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      break;
    }
    while (1) {
      __xr = (UWtype )*(zp + (zsize - 1L));
      __a = (UWtype )56;
      while (__a > 0UL) {
        if (((__xr >> __a) & 255UL) != 0UL) {
          break;
        }
        __a -= 8UL;
      }
      __a ++;
      __cnt = (int )((65UL - __a) - (UWtype )__gmpn_clz_tab[__xr >> __a]);
      break;
    }
    __totbits = (mp_bitcnt_t )zsize * 64UL - (mp_bitcnt_t )__cnt;
    count = ((__totbits + numb) - 1UL) / numb;
    break;
  }
  *countp = count;
  if ((unsigned long )data == (unsigned long )((void *)0)) {
    data = (*__gmp_allocate_func)(count * size);
  }
  if (endian == 0) {
    endian = -1;
  }
  align = (unsigned int )((unsigned long )((char *)data - (char *)((void *)0)) % sizeof(mp_limb_t ));
  if (nail == 0UL) {
    if (size == sizeof(mp_limb_t )) {
      if (align == 0U) {
        if (order == -1) {
          if (endian == -1) {
            while (1) {
              while (1) {
                break;
              }
              while (1) {
                while (1) {
                  break;
                }
                while (1) {
                  break;
                }
                if ((mp_size_t )count != 0L) {
                  __n = (mp_size_t )count - 1L;
                  __dst = (mp_ptr )data;
                  __src = zp;
                  tmp___1 = __src;
                  __src ++;
                  __x = (mp_limb_t )*tmp___1;
                  if (__n != 0L) {
                    while (1) {
                      tmp___2 = __dst;
                      __dst ++;
                      *tmp___2 = __x;
                      tmp___3 = __src;
                      __src ++;
                      __x = (mp_limb_t )*tmp___3;
                      __n --;
                      if (! __n) {
                        break;
                      }
                    }
                  }
                  tmp___4 = __dst;
                  __dst ++;
                  *tmp___4 = __x;
                }
                break;
              }
              break;
            }
            return (data);
          }
        }
        if (order == 1) {
          if (endian == -1) {
            while (1) {
              __dst___0 = (mp_ptr )data;
              __size = (mp_size_t )count;
              __src___0 = (zp + __size) - 1;
              while (1) {
                break;
              }
              while (1) {
                break;
              }
              __i = (mp_size_t )0;
              while (__i < __size) {
                *__dst___0 = (mp_limb_t )*__src___0;
                __dst___0 ++;
                __src___0 --;
                __i ++;
              }
              break;
            }
            return (data);
          }
        }
        if (order == -1) {
          if (endian == 1) {
            while (1) {
              __dst___1 = (mp_ptr )data;
              __src___1 = zp;
              __size___0 = (mp_size_t )count;
              while (1) {
                break;
              }
              while (1) {
                break;
              }
              __i___0 = (mp_size_t )0;
              while (__i___0 < __size___0) {
                while (1) {
                  *__dst___1 = (mp_limb_t )((((((((*__src___1 << 56) + ((*__src___1 & 65280UL) << 40)) + ((*__src___1 & 16711680UL) << 24)) + ((*__src___1 & 4278190080UL) << 8)) + ((*__src___1 >> 8) & 4278190080UL)) + ((*__src___1 >> 24) & 16711680UL)) + ((*__src___1 >> 40) & 65280UL)) + (*__src___1 >> 56));
                  break;
                }
                __dst___1 ++;
                __src___1 ++;
                __i___0 ++;
              }
              break;
            }
            return (data);
          }
        }
        if (order == 1) {
          if (endian == 1) {
            while (1) {
              __dst___2 = (mp_ptr )data;
              __size___1 = (mp_size_t )count;
              __src___2 = (zp + __size___1) - 1;
              while (1) {
                break;
              }
              while (1) {
                break;
              }
              __i___1 = (mp_size_t )0;
              while (__i___1 < __size___1) {
                while (1) {
                  *__dst___2 = (mp_limb_t )((((((((*__src___2 << 56) + ((*__src___2 & 65280UL) << 40)) + ((*__src___2 & 16711680UL) << 24)) + ((*__src___2 & 4278190080UL) << 8)) + ((*__src___2 >> 8) & 4278190080UL)) + ((*__src___2 >> 24) & 16711680UL)) + ((*__src___2 >> 40) & 65280UL)) + (*__src___2 >> 56));
                  break;
                }
                __dst___2 ++;
                __src___2 --;
                __i___1 ++;
              }
              break;
            }
            return (data);
          }
        }
      }
    }
  }
  numb___0 = size * 8UL - nail;
  wbytes = (mp_size_t )(numb___0 / 8UL);
  wbits = (int )(numb___0 % 8UL);
  wbitsmask = (1UL << wbits) - 1UL;
  if (endian >= 0) {
    tmp___5 = size;
  } else {
    tmp___5 = (size_t )(- ((mp_size_t )size));
  }
  if (order < 0) {
    tmp___6 = size;
  } else {
    tmp___6 = (size_t )(- ((mp_size_t )size));
  }
  woffset = (mp_size_t )(tmp___5 + tmp___6);
  if (order >= 0) {
    tmp___7 = (count - 1UL) * size;
  } else {
    tmp___7 = (size_t )0;
  }
  if (endian >= 0) {
    tmp___8 = size - 1UL;
  } else {
    tmp___8 = (size_t )0;
  }
  dp = ((unsigned char *)data + tmp___7) + tmp___8;
  zend = zp + zsize;
  lbits = 0;
  limb = (mp_limb_t )0;
  i = (size_t )0;
  while (i < count) {
    j = (mp_size_t )0;
    while (j < wbytes) {
      while (1) {
        if (lbits >= 8) {
          *dp = (unsigned char )limb;
          limb >>= 8;
          lbits -= 8;
        } else {
          if ((unsigned long )zp == (unsigned long )zend) {
            newlimb = (mp_limb_t )0;
          } else {
            tmp___9 = zp;
            zp ++;
            newlimb = (mp_limb_t )*tmp___9;
          }
          *dp = (unsigned char )(limb | (newlimb << lbits));
          limb = newlimb >> (8 - lbits);
          lbits += 56;
        }
        break;
      }
      dp -= endian;
      j ++;
    }
    if (wbits != 0) {
      while (1) {
        if (lbits >= wbits) {
          *dp = (unsigned char )(limb & wbitsmask);
          limb >>= wbits;
          lbits -= wbits;
        } else {
          if ((unsigned long )zp == (unsigned long )zend) {
            newlimb___0 = (mp_limb_t )0;
          } else {
            tmp___10 = zp;
            zp ++;
            newlimb___0 = (mp_limb_t )*tmp___10;
          }
          *dp = (unsigned char )((limb | (newlimb___0 << lbits)) & wbitsmask);
          limb = newlimb___0 >> (wbits - lbits);
          lbits += 64 - wbits;
        }
        break;
      }
      dp -= endian;
      j ++;
    }
    while ((size_t )j < size) {
      *dp = (unsigned char )'\000';
      dp -= endian;
      j ++;
    }
    dp += woffset;
    i ++;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  return (data);
}
}
#pragma merger("0","./fib2_ui.i","")
mp_limb_t __gmpn_lshift(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , unsigned int cnt ) ;
void __gmpn_sqr(mp_ptr p , mp_srcptr a , mp_size_t n___0 ) ;
mp_size_t __gmpn_fib2_ui(mp_ptr fp , mp_ptr f1p , unsigned long n___0 ) ;
mp_limb_t const __gmp_fib_table[95] ;
mp_size_t __gmpn_fib2_ui(mp_ptr fp , mp_ptr f1p , unsigned long n___0 )
{
  mp_size_t size ;
  unsigned long nfirst ;
  unsigned long mask ;
  mp_size_t alloc ;
  mp_ptr xp ;
  struct tmp_reentrant_t *__tmp_marker ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  mp_limb_t c ;
  int tmp___4 ;
  mp_limb_t tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;

  {
  while (1) {
    break;
  }
  mask = 1UL;
  nfirst = n___0;
  while (nfirst > 93UL) {
    mask <<= 1;
    nfirst /= 2UL;
  }
  *(f1p + 0) = (mp_limb_t )__gmp_fib_table[((int )nfirst - 1) + 1];
  *(fp + 0) = (mp_limb_t )__gmp_fib_table[nfirst + 1UL];
  size = (mp_size_t )1;
  if (mask != 1UL) {
    __tmp_marker = (struct tmp_reentrant_t *)0;
    alloc = (mp_size_t )(((n___0 / 32UL) * 23UL) / 64UL) + 4L;
    tmp___3 = __builtin_expect((long )(((unsigned long )alloc * sizeof(mp_limb_t ) <= 32512UL) != 0),
                               1L);
    if (tmp___3) {
      tmp___0 = alloca((unsigned long )alloc * sizeof(mp_limb_t ));
      tmp___2 = tmp___0;
    } else {
      tmp___1 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )alloc * sizeof(mp_limb_t ));
      tmp___2 = tmp___1;
    }
    xp = (mp_limb_t *)tmp___2;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      __gmpn_sqr(xp, (mp_srcptr )fp, size);
      __gmpn_sqr(fp, (mp_srcptr )f1p, size);
      size *= 2L;
      while (1) {
        break;
      }
      size -= (mp_size_t )(*(xp + (size - 1L)) == 0UL);
      while (1) {
        break;
      }
      *(f1p + size) = __gmpn_add_n(f1p, (mp_srcptr )xp, (mp_srcptr )fp, size);
      c = __gmpn_lshift(xp, (mp_srcptr )xp, size, 2U);
      if (n___0 & mask) {
        tmp___4 = 0;
      } else {
        tmp___4 = 2;
      }
      *(xp + 0) |= (unsigned long )tmp___4;
      tmp___5 = __gmpn_sub_n(fp, (mp_srcptr )xp, (mp_srcptr )fp, size);
      c -= tmp___5;
      while (1) {
        break;
      }
      if (n___0 & mask) {
        tmp___6 = 2;
      } else {
        tmp___6 = 0;
      }
      *(fp + 0) -= (mp_limb_t )tmp___6;
      *(fp + size) = c;
      while (1) {
        break;
      }
      size += (mp_size_t )(*(fp + size) != 0UL);
      mask >>= 1;
      if (n___0 & mask) {
        __gmpn_sub_n(f1p, (mp_srcptr )fp, (mp_srcptr )f1p, size);
      } else {
        __gmpn_sub_n(fp, (mp_srcptr )fp, (mp_srcptr )f1p, size);
        while (1) {
          break;
        }
        size -= (mp_size_t )(*(fp + (size - 1L)) == 0UL);
      }
      if (! (mask != 1UL)) {
        break;
      }
    }
    while (1) {
      tmp___7 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                 0L);
      if (tmp___7) {
        __gmp_tmp_reentrant_free(__tmp_marker);
      }
      break;
    }
  }
  return (size);
}
}
#pragma merger("0","./fib_table.i","")
mp_limb_t const __gmp_fib_table[95] =
  { (mp_limb_t const )((mp_limb_t )1L), (mp_limb_t const )((mp_limb_t )0L), (mp_limb_t const )((mp_limb_t )1L), (mp_limb_t const )((mp_limb_t )1L),
        (mp_limb_t const )((mp_limb_t )2L), (mp_limb_t const )((mp_limb_t )3L), (mp_limb_t const )((mp_limb_t )5L), (mp_limb_t const )((mp_limb_t )8L),
        (mp_limb_t const )((mp_limb_t )13L), (mp_limb_t const )((mp_limb_t )21L), (mp_limb_t const )((mp_limb_t )34L), (mp_limb_t const )((mp_limb_t )55L),
        (mp_limb_t const )((mp_limb_t )89L), (mp_limb_t const )((mp_limb_t )144L), (mp_limb_t const )((mp_limb_t )233L), (mp_limb_t const )((mp_limb_t )377L),
        (mp_limb_t const )((mp_limb_t )610L), (mp_limb_t const )((mp_limb_t )987L), (mp_limb_t const )((mp_limb_t )1597L), (mp_limb_t const )((mp_limb_t )2584L),
        (mp_limb_t const )((mp_limb_t )4181L), (mp_limb_t const )((mp_limb_t )6765L), (mp_limb_t const )((mp_limb_t )10946L), (mp_limb_t const )((mp_limb_t )17711L),
        (mp_limb_t const )((mp_limb_t )28657L), (mp_limb_t const )((mp_limb_t )46368L), (mp_limb_t const )((mp_limb_t )75025L), (mp_limb_t const )((mp_limb_t )121393L),
        (mp_limb_t const )((mp_limb_t )196418L), (mp_limb_t const )((mp_limb_t )317811L), (mp_limb_t const )((mp_limb_t )514229L), (mp_limb_t const )((mp_limb_t )832040L),
        (mp_limb_t const )((mp_limb_t )1346269L), (mp_limb_t const )((mp_limb_t )2178309L), (mp_limb_t const )((mp_limb_t )3524578L), (mp_limb_t const )((mp_limb_t )5702887L),
        (mp_limb_t const )((mp_limb_t )9227465L), (mp_limb_t const )((mp_limb_t )14930352L), (mp_limb_t const )((mp_limb_t )24157817L), (mp_limb_t const )((mp_limb_t )39088169L),
        (mp_limb_t const )((mp_limb_t )63245986L), (mp_limb_t const )((mp_limb_t )102334155L), (mp_limb_t const )((mp_limb_t )165580141L), (mp_limb_t const )((mp_limb_t )267914296L),
        (mp_limb_t const )((mp_limb_t )433494437L), (mp_limb_t const )((mp_limb_t )701408733L), (mp_limb_t const )((mp_limb_t )1134903170L), (mp_limb_t const )((mp_limb_t )1836311903L),
        (mp_limb_t const )((mp_limb_t )2971215073L), (mp_limb_t const )((mp_limb_t )4807526976L), (mp_limb_t const )((mp_limb_t )7778742049L), (mp_limb_t const )((mp_limb_t )12586269025L),
        (mp_limb_t const )((mp_limb_t )20365011074L), (mp_limb_t const )((mp_limb_t )32951280099L), (mp_limb_t const )((mp_limb_t )53316291173L), (mp_limb_t const )((mp_limb_t )86267571272L),
        (mp_limb_t const )((mp_limb_t )139583862445L), (mp_limb_t const )((mp_limb_t )225851433717L), (mp_limb_t const )((mp_limb_t )365435296162L), (mp_limb_t const )((mp_limb_t )591286729879L),
        (mp_limb_t const )((mp_limb_t )956722026041L), (mp_limb_t const )((mp_limb_t )1548008755920L), (mp_limb_t const )((mp_limb_t )2504730781961L), (mp_limb_t const )((mp_limb_t )4052739537881L),
        (mp_limb_t const )((mp_limb_t )6557470319842L), (mp_limb_t const )((mp_limb_t )10610209857723L), (mp_limb_t const )((mp_limb_t )17167680177565L), (mp_limb_t const )((mp_limb_t )27777890035288L),
        (mp_limb_t const )((mp_limb_t )44945570212853L), (mp_limb_t const )((mp_limb_t )72723460248141L), (mp_limb_t const )((mp_limb_t )117669030460994L), (mp_limb_t const )((mp_limb_t )190392490709135L),
        (mp_limb_t const )((mp_limb_t )308061521170129L), (mp_limb_t const )((mp_limb_t )498454011879264L), (mp_limb_t const )((mp_limb_t )806515533049393L), (mp_limb_t const )((mp_limb_t )1304969544928657L),
        (mp_limb_t const )((mp_limb_t )2111485077978050L), (mp_limb_t const )((mp_limb_t )3416454622906707L), (mp_limb_t const )((mp_limb_t )5527939700884757L), (mp_limb_t const )((mp_limb_t )8944394323791464L),
        (mp_limb_t const )((mp_limb_t )14472334024676221L), (mp_limb_t const )((mp_limb_t )23416728348467685L), (mp_limb_t const )((mp_limb_t )37889062373143906L), (mp_limb_t const )((mp_limb_t )61305790721611591L),
        (mp_limb_t const )((mp_limb_t )99194853094755497L), (mp_limb_t const )((mp_limb_t )160500643816367088L), (mp_limb_t const )((mp_limb_t )259695496911122585L), (mp_limb_t const )((mp_limb_t )420196140727489673L),
        (mp_limb_t const )((mp_limb_t )679891637638612258L), (mp_limb_t const )((mp_limb_t )1100087778366101931L), (mp_limb_t const )((mp_limb_t )1779979416004714189L), (mp_limb_t const )((mp_limb_t )2880067194370816120L),
        (mp_limb_t const )((mp_limb_t )4660046610375530309L), (mp_limb_t const )((mp_limb_t )7540113804746346429L), (mp_limb_t const )0xa94fad42221f2702UL};
#pragma merger("0","./get_str.i","")
size_t __gmpn_get_str(unsigned char *str , int base , mp_ptr up , mp_size_t un ) ;
struct bases const __gmpn_bases[257] ;
mp_limb_t __gmpn_preinv_divrem_1(mp_ptr qp , mp_size_t xsize , mp_srcptr ap , mp_size_t size ,
                                 mp_limb_t d_unnorm , mp_limb_t dinv , int shift ) ;
static unsigned char *mpn_sb_get_str(unsigned char *str , size_t len , mp_ptr up ,
                                     mp_size_t un , int base )
{
  mp_limb_t rl ;
  mp_limb_t ul ;
  unsigned char *s ;
  size_t l ;
  unsigned char buf[1425] ;
  mp_limb_t rp[35] ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp ;
  mp_ptr tmp___0 ;
  mp_srcptr tmp___1 ;
  mp_ptr tmp___2 ;
  int i ;
  mp_limb_t frac ;
  mp_limb_t digit ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  unsigned char *tmp___3 ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  unsigned char *tmp___4 ;
  UWtype __x0___1 ;
  UWtype __x1___1 ;
  UWtype __x2___1 ;
  UWtype __x3___1 ;
  UHWtype __ul___1 ;
  UHWtype __vl___1 ;
  UHWtype __uh___1 ;
  UHWtype __vh___1 ;
  UWtype __u___1 ;
  UWtype __v___1 ;
  unsigned char *tmp___5 ;
  UWtype __x0___2 ;
  UWtype __x1___2 ;
  UWtype __x2___2 ;
  UWtype __x3___2 ;
  UHWtype __ul___2 ;
  UHWtype __vl___2 ;
  UHWtype __uh___2 ;
  UHWtype __vh___2 ;
  UWtype __u___2 ;
  UWtype __v___2 ;
  unsigned char *tmp___6 ;
  unsigned char *tmp___7 ;
  mp_limb_t __q ;
  mp_limb_t __r ;
  unsigned int chars_per_limb ;
  mp_limb_t big_base ;
  mp_limb_t big_base_inverted ;
  unsigned int normalization_steps ;
  UWtype __xr ;
  UWtype __a ;
  mp_size_t __n___0 ;
  mp_ptr __dst___0 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___0 ;
  mp_srcptr tmp___10 ;
  mp_ptr tmp___11 ;
  mp_srcptr tmp___12 ;
  mp_ptr tmp___13 ;
  int i___0 ;
  mp_limb_t frac___0 ;
  mp_limb_t digit___0 ;
  UWtype __x0___3 ;
  UWtype __x1___3 ;
  UWtype __x2___3 ;
  UWtype __x3___3 ;
  UHWtype __ul___3 ;
  UHWtype __vl___3 ;
  UHWtype __uh___3 ;
  UHWtype __vh___3 ;
  UWtype __u___3 ;
  UWtype __v___3 ;
  unsigned char *tmp___14 ;
  mp_limb_t __q___0 ;
  mp_limb_t __r___0 ;
  unsigned char *tmp___15 ;
  unsigned char *tmp___16 ;
  unsigned char *tmp___17 ;

  {
  if (base == 10) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (un != 0L) {
          __n = un - 1L;
          __dst = rp + 1;
          __src = (mp_srcptr )up;
          tmp = __src;
          __src ++;
          __x = (mp_limb_t )*tmp;
          if (__n != 0L) {
            while (1) {
              tmp___0 = __dst;
              __dst ++;
              *tmp___0 = __x;
              tmp___1 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___1;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___2 = __dst;
          __dst ++;
          *tmp___2 = __x;
        }
        break;
      }
      break;
    }
    s = buf + 1425;
    while (un > 1L) {
      __gmpn_preinv_divrem_1(rp, (mp_size_t )1, (mp_srcptr )(rp + 1), un, 0x8ac7230489e80000UL,
                             0xd83c94fb6d2ac34aUL, 0);
      un -= (mp_size_t )(rp[un] == 0UL);
      frac = rp[0] + 1UL;
      s -= 19;
      while (1) {
        __u = frac;
        __v = (UWtype )10;
        __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
        __uh = (UHWtype )(__u >> 32);
        __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
        __vh = (UHWtype )(__v >> 32);
        __x0 = (UWtype )__ul * (UWtype )__vl;
        __x1 = (UWtype )__ul * (UWtype )__vh;
        __x2 = (UWtype )__uh * (UWtype )__vl;
        __x3 = (UWtype )__uh * (UWtype )__vh;
        __x1 += __x0 >> 32;
        __x1 += __x2;
        if (__x1 < __x2) {
          __x3 += 1UL << 32;
        }
        digit = __x3 + (__x1 >> 32);
        frac = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
        break;
      }
      tmp___3 = s;
      s ++;
      *tmp___3 = (unsigned char )digit;
      while (1) {
        __u___0 = frac;
        __v___0 = (UWtype )10;
        __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
        __uh___0 = (UHWtype )(__u___0 >> 32);
        __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
        __vh___0 = (UHWtype )(__v___0 >> 32);
        __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
        __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
        __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
        __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
        __x1___0 += __x0___0 >> 32;
        __x1___0 += __x2___0;
        if (__x1___0 < __x2___0) {
          __x3___0 += 1UL << 32;
        }
        digit = __x3___0 + (__x1___0 >> 32);
        frac = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
        break;
      }
      tmp___4 = s;
      s ++;
      *tmp___4 = (unsigned char )digit;
      while (1) {
        __u___1 = frac;
        __v___1 = (UWtype )10;
        __ul___1 = (UHWtype )(__u___1 & ((1UL << 32) - 1UL));
        __uh___1 = (UHWtype )(__u___1 >> 32);
        __vl___1 = (UHWtype )(__v___1 & ((1UL << 32) - 1UL));
        __vh___1 = (UHWtype )(__v___1 >> 32);
        __x0___1 = (UWtype )__ul___1 * (UWtype )__vl___1;
        __x1___1 = (UWtype )__ul___1 * (UWtype )__vh___1;
        __x2___1 = (UWtype )__uh___1 * (UWtype )__vl___1;
        __x3___1 = (UWtype )__uh___1 * (UWtype )__vh___1;
        __x1___1 += __x0___1 >> 32;
        __x1___1 += __x2___1;
        if (__x1___1 < __x2___1) {
          __x3___1 += 1UL << 32;
        }
        digit = __x3___1 + (__x1___1 >> 32);
        frac = (__x1___1 << 32) + (__x0___1 & ((1UL << 32) - 1UL));
        break;
      }
      tmp___5 = s;
      s ++;
      *tmp___5 = (unsigned char )digit;
      while (1) {
        __u___2 = frac;
        __v___2 = (UWtype )10;
        __ul___2 = (UHWtype )(__u___2 & ((1UL << 32) - 1UL));
        __uh___2 = (UHWtype )(__u___2 >> 32);
        __vl___2 = (UHWtype )(__v___2 & ((1UL << 32) - 1UL));
        __vh___2 = (UHWtype )(__v___2 >> 32);
        __x0___2 = (UWtype )__ul___2 * (UWtype )__vl___2;
        __x1___2 = (UWtype )__ul___2 * (UWtype )__vh___2;
        __x2___2 = (UWtype )__uh___2 * (UWtype )__vl___2;
        __x3___2 = (UWtype )__uh___2 * (UWtype )__vh___2;
        __x1___2 += __x0___2 >> 32;
        __x1___2 += __x2___2;
        if (__x1___2 < __x2___2) {
          __x3___2 += 1UL << 32;
        }
        digit = __x3___2 + (__x1___2 >> 32);
        frac = (__x1___2 << 32) + (__x0___2 & ((1UL << 32) - 1UL));
        break;
      }
      tmp___6 = s;
      s ++;
      *tmp___6 = (unsigned char )digit;
      i = 15;
      frac = (frac + 15UL) >> 4;
      while (1) {
        frac *= 10UL;
        digit = frac >> 60;
        tmp___7 = s;
        s ++;
        *tmp___7 = (unsigned char )digit;
        frac &= 0xffffffffffffffffUL >> 4;
        i --;
        if (! i) {
          break;
        }
      }
      s -= 19;
    }
    ul = rp[1];
    while (ul != 0UL) {
      while (1) {
        __q = ul / 10UL;
        __r = ul - __q * 10UL;
        ul = __q;
        rl = __r;
        break;
      }
      s --;
      *s = (unsigned char )rl;
    }
  } else {
    chars_per_limb = (unsigned int )__gmpn_bases[base].chars_per_limb;
    big_base = (mp_limb_t )__gmpn_bases[base].big_base;
    big_base_inverted = (mp_limb_t )__gmpn_bases[base].big_base_inverted;
    while (1) {
      __xr = big_base;
      __a = (UWtype )56;
      while (__a > 0UL) {
        if (((__xr >> __a) & 255UL) != 0UL) {
          break;
        }
        __a -= 8UL;
      }
      __a ++;
      normalization_steps = (unsigned int )((65UL - __a) - (UWtype )__gmpn_clz_tab[__xr >> __a]);
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (un != 0L) {
          __n___0 = un - 1L;
          __dst___0 = rp + 1;
          __src___0 = (mp_srcptr )up;
          tmp___10 = __src___0;
          __src___0 ++;
          __x___0 = (mp_limb_t )*tmp___10;
          if (__n___0 != 0L) {
            while (1) {
              tmp___11 = __dst___0;
              __dst___0 ++;
              *tmp___11 = __x___0;
              tmp___12 = __src___0;
              __src___0 ++;
              __x___0 = (mp_limb_t )*tmp___12;
              __n___0 --;
              if (! __n___0) {
                break;
              }
            }
          }
          tmp___13 = __dst___0;
          __dst___0 ++;
          *tmp___13 = __x___0;
        }
        break;
      }
      break;
    }
    s = buf + 1425;
    while (un > 1L) {
      __gmpn_preinv_divrem_1(rp, (mp_size_t )1, (mp_srcptr )(rp + 1), un, big_base,
                             big_base_inverted, (int )normalization_steps);
      un -= (mp_size_t )(rp[un] == 0UL);
      frac___0 = rp[0] + 1UL;
      s -= chars_per_limb;
      i___0 = (int )chars_per_limb;
      while (1) {
        while (1) {
          __u___3 = frac___0;
          __v___3 = (UWtype )base;
          __ul___3 = (UHWtype )(__u___3 & ((1UL << 32) - 1UL));
          __uh___3 = (UHWtype )(__u___3 >> 32);
          __vl___3 = (UHWtype )(__v___3 & ((1UL << 32) - 1UL));
          __vh___3 = (UHWtype )(__v___3 >> 32);
          __x0___3 = (UWtype )__ul___3 * (UWtype )__vl___3;
          __x1___3 = (UWtype )__ul___3 * (UWtype )__vh___3;
          __x2___3 = (UWtype )__uh___3 * (UWtype )__vl___3;
          __x3___3 = (UWtype )__uh___3 * (UWtype )__vh___3;
          __x1___3 += __x0___3 >> 32;
          __x1___3 += __x2___3;
          if (__x1___3 < __x2___3) {
            __x3___3 += 1UL << 32;
          }
          digit___0 = __x3___3 + (__x1___3 >> 32);
          frac___0 = (__x1___3 << 32) + (__x0___3 & ((1UL << 32) - 1UL));
          break;
        }
        tmp___14 = s;
        s ++;
        *tmp___14 = (unsigned char )digit___0;
        i___0 --;
        if (! i___0) {
          break;
        }
      }
      s -= chars_per_limb;
    }
    ul = rp[1];
    while (ul != 0UL) {
      while (1) {
        __q___0 = ul / (mp_limb_t )base;
        __r___0 = ul - __q___0 * (mp_limb_t )base;
        ul = __q___0;
        rl = __r___0;
        break;
      }
      s --;
      *s = (unsigned char )rl;
    }
  }
  l = (size_t )((buf + 1425) - s);
  while (l < len) {
    tmp___15 = str;
    str ++;
    *tmp___15 = (unsigned char)0;
    len --;
  }
  while (l != 0UL) {
    tmp___16 = str;
    str ++;
    tmp___17 = s;
    s ++;
    *tmp___16 = *tmp___17;
    l --;
  }
  return (str);
}
}
static unsigned char *mpn_dc_get_str(unsigned char *str , size_t len , mp_ptr up ,
                                     mp_size_t un , powers_t const *powtab , mp_ptr tmp )
{
  unsigned char *tmp___0 ;
  mp_ptr pwp ;
  mp_ptr qp ;
  mp_ptr rp ;
  mp_size_t pwn ;
  mp_size_t qn ;
  mp_size_t sn ;
  int tmp___1 ;

  {
  if (! (un >= 18L)) {
    if (un != 0L) {
      str = mpn_sb_get_str(str, len, up, un, (int )powtab->base);
    } else {
      while (len != 0UL) {
        tmp___0 = str;
        str ++;
        *tmp___0 = (unsigned char)0;
        len --;
      }
    }
  } else {
    pwp = (mp_ptr )powtab->p;
    pwn = (mp_size_t )powtab->n;
    sn = (mp_size_t )powtab->shift;
    if (un < pwn + sn) {
      str = mpn_dc_get_str(str, len, up, un, powtab - 1, tmp);
    } else
    if (un == pwn + sn) {
      tmp___1 = __gmpn_cmp((mp_srcptr )(up + sn), (mp_srcptr )pwp, un - sn);
      if (tmp___1 < 0) {
        str = mpn_dc_get_str(str, len, up, un, powtab - 1, tmp);
      } else {
        goto _L;
      }
    } else {
      _L:
      qp = tmp;
      rp = up;
      __gmpn_tdiv_qr(qp, rp + sn, 0L, (mp_srcptr )(up + sn), un - sn, (mp_srcptr )pwp,
                     pwn);
      qn = (un - sn) - pwn;
      qn += (mp_size_t )(*(qp + qn) != 0UL);
      while (1) {
        break;
      }
      if (len != 0UL) {
        len -= (size_t )powtab->digits_in_base;
      }
      str = mpn_dc_get_str(str, len, qp, qn, powtab - 1, tmp + qn);
      str = mpn_dc_get_str(str, (size_t )powtab->digits_in_base, rp, pwn + sn, powtab - 1,
                           tmp);
    }
  }
  return (str);
}
}
size_t __gmpn_get_str(unsigned char *str , int base , mp_ptr up , mp_size_t un )
{
  mp_ptr powtab_mem ;
  mp_ptr powtab_mem_ptr ;
  mp_limb_t big_base ;
  size_t digits_in_base ;
  powers_t powtab[64] ;
  int pi ;
  mp_size_t n___0 ;
  mp_ptr p ;
  mp_ptr t ;
  size_t out_len ;
  mp_ptr tmp ;
  struct tmp_reentrant_t *__tmp_marker ;
  mp_limb_t n1 ;
  mp_limb_t n0 ;
  int bits_per_digit ;
  int cnt ;
  int bit_pos ;
  mp_size_t i ;
  unsigned char *s ;
  mp_bitcnt_t bits ;
  UWtype __xr ;
  UWtype __a ;
  unsigned char *tmp___2 ;
  unsigned char *tmp___3 ;
  unsigned char *tmp___4 ;
  void *tmp___5 ;
  mp_size_t n_pows ;
  mp_size_t xn ;
  mp_size_t pn ;
  mp_size_t exptab[64] ;
  mp_size_t bexp ;
  mp_limb_t cy ;
  mp_size_t shift ;
  size_t ndig ;
  mp_limb_t _ph ;
  mp_limb_t _dummy ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  long tmp___6 ;
  void *tmp___7 ;
  unsigned char *tmp___8 ;
  long tmp___9 ;

  {
  if (un == 0L) {
    *(str + 0) = (unsigned char)0;
    return ((size_t )1);
  }
  if ((base & (base - 1)) == 0) {
    bits_per_digit = (int )__gmpn_bases[base].big_base;
    s = str;
    n1 = *(up + (un - 1L));
    while (1) {
      __xr = n1;
      __a = (UWtype )56;
      while (__a > 0UL) {
        if (((__xr >> __a) & 255UL) != 0UL) {
          break;
        }
        __a -= 8UL;
      }
      __a ++;
      cnt = (int )((65UL - __a) - (UWtype )__gmpn_clz_tab[__xr >> __a]);
      break;
    }
    bits = 64UL * (mp_bitcnt_t )un - (mp_bitcnt_t )cnt;
    cnt = (int )(bits % (unsigned long )bits_per_digit);
    if (cnt != 0) {
      bits += (mp_bitcnt_t )(bits_per_digit - cnt);
    }
    bit_pos = (int )(bits - (mp_bitcnt_t )(un - 1L) * 64UL);
    i = un - 1L;
    while (1) {
      bit_pos -= bits_per_digit;
      while (bit_pos >= 0) {
        tmp___2 = s;
        s ++;
        *tmp___2 = (unsigned char )((n1 >> bit_pos) & (unsigned long )((1 << bits_per_digit) - 1));
        bit_pos -= bits_per_digit;
      }
      i --;
      if (i < 0L) {
        break;
      }
      n0 = (n1 << - bit_pos) & (unsigned long )((1 << bits_per_digit) - 1);
      n1 = *(up + i);
      bit_pos += 64;
      tmp___3 = s;
      s ++;
      *tmp___3 = (unsigned char )(n0 | (n1 >> bit_pos));
    }
    return ((size_t )(s - str));
  }
  if (! (un >= 35L)) {
    tmp___4 = mpn_sb_get_str(str, (size_t )0, up, un, base);
    return ((size_t )(tmp___4 - str));
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  tmp___5 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(un + 128L) * sizeof(mp_limb_t ));
  powtab_mem = (mp_limb_t *)tmp___5;
  powtab_mem_ptr = powtab_mem;
  big_base = (mp_limb_t )__gmpn_bases[base].big_base;
  digits_in_base = (size_t )__gmpn_bases[base].chars_per_limb;
  while (1) {
    while (1) {
      __u = (UWtype )__gmpn_bases[base].logb2;
      __v = 64UL * (mp_limb_t )un;
      __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
      __uh = (UHWtype )(__u >> 32);
      __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
      __vh = (UHWtype )(__v >> 32);
      __x0 = (UWtype )__ul * (UWtype )__vl;
      __x1 = (UWtype )__ul * (UWtype )__vh;
      __x2 = (UWtype )__uh * (UWtype )__vl;
      __x3 = (UWtype )__uh * (UWtype )__vh;
      __x1 += __x0 >> 32;
      __x1 += __x2;
      if (__x1 < __x2) {
        __x3 += 1UL << 32;
      }
      _ph = __x3 + (__x1 >> 32);
      _dummy = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
      break;
    }
    ndig = _ph;
    break;
  }
  xn = (mp_size_t )(1UL + ndig / (size_t )__gmpn_bases[base].chars_per_limb);
  n_pows = (mp_size_t )0;
  pn = xn;
  while (pn != 1L) {
    exptab[n_pows] = pn;
    n_pows ++;
    pn = (pn + 1L) >> 1;
  }
  exptab[n_pows] = (mp_size_t )1;
  powtab[0].p = & big_base;
  powtab[0].n = (mp_size_t )1;
  powtab[0].digits_in_base = digits_in_base;
  powtab[0].base = base;
  powtab[0].shift = (mp_size_t )0;
  powtab[1].p = powtab_mem_ptr;
  powtab_mem_ptr += 2;
  *(powtab[1].p + 0) = big_base;
  powtab[1].n = (mp_size_t )1;
  powtab[1].digits_in_base = digits_in_base;
  powtab[1].base = base;
  powtab[1].shift = (mp_size_t )0;
  n___0 = (mp_size_t )1;
  p = & big_base;
  bexp = (mp_size_t )1;
  shift = (mp_size_t )0;
  pi = 2;
  while ((mp_size_t )pi < n_pows) {
    t = powtab_mem_ptr;
    powtab_mem_ptr += 2L * n___0 + 2L;
    while (1) {
      tmp___6 = __builtin_expect((long )(! ((unsigned long )powtab_mem_ptr < (unsigned long )(powtab_mem + (un + 128L))) != 0),
                                 0L);
      if (tmp___6) {
        __gmp_assert_fail("get_str.c", 489, "powtab_mem_ptr < powtab_mem + ((un) + 2 * 64)");
      }
      break;
    }
    __gmpn_sqr(t, (mp_srcptr )p, n___0);
    digits_in_base *= 2UL;
    n___0 *= 2L;
    n___0 -= (mp_size_t )(*(t + (n___0 - 1L)) == 0UL);
    bexp *= 2L;
    if (bexp + 1L < exptab[n_pows - (mp_size_t )pi]) {
      digits_in_base += (size_t )__gmpn_bases[base].chars_per_limb;
      cy = __gmpn_mul_1(t, (mp_srcptr )t, n___0, big_base);
      *(t + n___0) = cy;
      n___0 += (mp_size_t )(cy != 0UL);
      bexp ++;
    }
    shift *= 2L;
    while (*(t + 0) == 0UL) {
      t ++;
      n___0 --;
      shift ++;
    }
    p = t;
    powtab[pi].p = p;
    powtab[pi].n = n___0;
    powtab[pi].digits_in_base = digits_in_base;
    powtab[pi].base = base;
    powtab[pi].shift = shift;
    pi ++;
  }
  pi = 1;
  while ((mp_size_t )pi < n_pows) {
    t = powtab[pi].p;
    n___0 = powtab[pi].n;
    cy = __gmpn_mul_1(t, (mp_srcptr )t, n___0, big_base);
    *(t + n___0) = cy;
    n___0 += (mp_size_t )(cy != 0UL);
    if (*(t + 0) == 0UL) {
      powtab[pi].p = t + 1;
      n___0 --;
      (powtab[pi].shift) ++;
    }
    powtab[pi].n = n___0;
    powtab[pi].digits_in_base += (size_t )__gmpn_bases[base].chars_per_limb;
    pi ++;
  }
  tmp___7 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(un + 64L) * sizeof(mp_limb_t ));
  tmp = (mp_limb_t *)tmp___7;
  tmp___8 = mpn_dc_get_str(str, (size_t )0, up, un, (powers_t const *)(powtab + (pi - 1)),
                           tmp);
  out_len = (size_t )(tmp___8 - str);
  while (1) {
    tmp___9 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                               0L);
    if (tmp___9) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return (out_len);
}
}
#pragma merger("0","./init2.i","")
void __gmpz_init2(mpz_ptr x , mp_bitcnt_t bits ) ;
void __gmpz_init2(mpz_ptr x , mp_bitcnt_t bits )
{
  mp_size_t new_alloc ;
  long tmp ;
  void *tmp___0 ;

  {
  bits -= (mp_bitcnt_t )(bits != 0UL);
  new_alloc = (mp_size_t )(1UL + bits / 64UL);
  if (sizeof(unsigned long ) > sizeof(int )) {
    tmp = __builtin_expect((long )((new_alloc > 2147483647L) != 0), 0L);
    if (tmp) {
      printf((char const * __restrict )"gmp: overflow in mpz type\n");
      abort();
    }
  }
  tmp___0 = (*__gmp_allocate_func)((unsigned long )new_alloc * sizeof(mp_limb_t ));
  x->_mp_d = (mp_limb_t *)tmp___0;
  x->_mp_alloc = (int )new_alloc;
  x->_mp_size = 0;
  return;
}
}
#pragma merger("0","./init.i","")
void __gmpz_init(mpz_ptr x ) ;
void __gmpz_init(mpz_ptr x )
{
  void *tmp ;

  {
  x->_mp_alloc = 1;
  tmp = (*__gmp_allocate_func)(sizeof(mp_limb_t ));
  x->_mp_d = (mp_limb_t *)tmp;
  x->_mp_size = 0;
  return;
}
}
#pragma merger("0","./invertappr.i","")
void __gmpn_mul_n(mp_ptr p , mp_srcptr a , mp_srcptr b , mp_size_t n___0 ) ;
void __gmpn_mulmod_bnm1(mp_ptr rp , mp_size_t rn , mp_srcptr ap , mp_size_t an , mp_srcptr bp ,
                        mp_size_t bn , mp_ptr tp ) ;
mp_size_t __gmpn_mulmod_bnm1_next_size(mp_size_t n___0 ) __attribute__((__const__)) ;
__inline static mp_size_t mpn_mulmod_bnm1_itch(mp_size_t rn , mp_size_t an , mp_size_t bn )
{
  mp_size_t n___0 ;
  mp_size_t itch ;
  mp_size_t tmp ;
  mp_size_t tmp___0 ;

  {
  n___0 = rn >> 1;
  if (an > n___0) {
    if (bn > n___0) {
      tmp = rn;
    } else {
      tmp = n___0;
    }
    tmp___0 = tmp;
  } else {
    tmp___0 = (mp_size_t )0;
  }
  itch = (rn + 4L) + tmp___0;
  return (itch);
}
}
mp_limb_t __gmpn_sbpi1_divappr_q(mp_ptr qp , mp_ptr np , mp_size_t nn , mp_srcptr dp ,
                                 mp_size_t dn , mp_limb_t dinv ) ;
mp_limb_t __gmpn_ni_invertappr(mp_ptr ip , mp_srcptr dp , mp_size_t n___0 , mp_ptr scratch ) ;
mp_limb_t __gmpn_invertappr(mp_ptr ip , mp_srcptr dp , mp_size_t n___0 , mp_ptr scratch ) ;
__inline static mp_limb_t mpn_add_nc(mp_ptr rp , mp_srcptr up , mp_srcptr vp , mp_size_t n___0 ,
                                     mp_limb_t ci )
{
  mp_limb_t co ;
  mp_limb_t tmp ;

  {
  co = __gmpn_add_n(rp, up, vp, n___0);
  tmp = __gmpn_add_1(rp, (mp_srcptr )rp, n___0, ci);
  co += tmp;
  return (co);
}
}
__inline static mp_limb_t mpn_sub_nc(mp_ptr rp , mp_srcptr up , mp_srcptr vp , mp_size_t n___0 ,
                                     mp_limb_t ci )
{
  mp_limb_t co ;
  mp_limb_t tmp ;

  {
  co = __gmpn_sub_n(rp, up, vp, n___0);
  tmp = __gmpn_sub_1(rp, (mp_srcptr )rp, n___0, ci);
  co += tmp;
  return (co);
}
}
static mp_limb_t mpn_bc_invertappr(mp_ptr ip , mp_srcptr dp , mp_size_t n___0 , mp_ptr xp )
{
  mp_limb_t _dummy ;
  UWtype __d1 ;
  UWtype __d0 ;
  UWtype __q1 ;
  UWtype __q0 ;
  UWtype __r1 ;
  UWtype __r0 ;
  UWtype __m ;
  mp_size_t i ;
  mp_ptr __d ;
  mp_srcptr __s ;
  mp_size_t __n ;
  mp_ptr tmp ;
  mp_srcptr tmp___0 ;
  gmp_pi1_t inv ;
  mp_limb_t _v ;
  mp_limb_t _p ;
  mp_limb_t _t1 ;
  mp_limb_t _t0 ;
  mp_limb_t _mask ;
  mp_limb_t _dummy___0 ;
  UWtype __d1___0 ;
  UWtype __d0___0 ;
  UWtype __q1___0 ;
  UWtype __q0___0 ;
  UWtype __r1___0 ;
  UWtype __r0___0 ;
  UWtype __m___0 ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  long tmp___1 ;
  mp_ptr __p ;
  mp_ptr tmp___2 ;
  mp_limb_t tmp___3 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if (n___0 == 1L) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        __d1 = (UWtype )*dp >> 32;
        __d0 = (UWtype )*dp & ((1UL << 32) - 1UL);
        __q1 = (UWtype )(~ *dp / (mp_limb_t const )__d1);
        __r1 = (UWtype )(~ *dp - (mp_limb_t const )(__q1 * __d1));
        __m = __q1 * __d0;
        __r1 = __r1 * (1UL << 32) | (0xffffffffffffffffUL >> 32);
        if (__r1 < __m) {
          __q1 --;
          __r1 += (UWtype )*dp;
          if (__r1 >= (UWtype )*dp) {
            if (__r1 < __m) {
              __q1 --;
              __r1 += (UWtype )*dp;
            }
          }
        }
        __r1 -= __m;
        __q0 = __r1 / __d1;
        __r0 = __r1 - __q0 * __d1;
        __m = __q0 * __d0;
        __r0 = __r0 * (1UL << 32) | (0xffffffffffffffffUL & ((1UL << 32) - 1UL));
        if (__r0 < __m) {
          __q0 --;
          __r0 += (UWtype )*dp;
          if (__r0 >= (UWtype )*dp) {
            if (__r0 < __m) {
              __q0 --;
              __r0 += (UWtype )*dp;
            }
          }
        }
        __r0 -= __m;
        *ip = __q1 * (1UL << 32) | __q0;
        _dummy = __r0;
        break;
      }
      break;
    }
  } else {
    i = n___0;
    while (1) {
      i --;
      *(xp + i) = 0xffffffffffffffffUL;
      if (! i) {
        break;
      }
    }
    while (1) {
      __d = xp + n___0;
      __s = dp;
      __n = n___0;
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      while (1) {
        tmp = __d;
        __d ++;
        tmp___0 = __s;
        __s ++;
        *tmp = (mp_limb_t )(~ *tmp___0 & 0xffffffffffffffffUL);
        __n --;
        if (! __n) {
          break;
        }
      }
      break;
    }
    if (n___0 == 2L) {
      __gmpn_divrem_2(ip, (mp_size_t )0, xp, (mp_size_t )4, dp);
    } else {
      while (1) {
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            while (1) {
              break;
            }
            while (1) {
              break;
            }
            __d1___0 = (UWtype )*(dp + (n___0 - 1L)) >> 32;
            __d0___0 = (UWtype )*(dp + (n___0 - 1L)) & ((1UL << 32) - 1UL);
            __q1___0 = (UWtype )(~ *(dp + (n___0 - 1L)) / (mp_limb_t const )__d1___0);
            __r1___0 = (UWtype )(~ *(dp + (n___0 - 1L)) - (mp_limb_t const )(__q1___0 * __d1___0));
            __m___0 = __q1___0 * __d0___0;
            __r1___0 = __r1___0 * (1UL << 32) | (0xffffffffffffffffUL >> 32);
            if (__r1___0 < __m___0) {
              __q1___0 --;
              __r1___0 += (UWtype )*(dp + (n___0 - 1L));
              if (__r1___0 >= (UWtype )*(dp + (n___0 - 1L))) {
                if (__r1___0 < __m___0) {
                  __q1___0 --;
                  __r1___0 += (UWtype )*(dp + (n___0 - 1L));
                }
              }
            }
            __r1___0 -= __m___0;
            __q0___0 = __r1___0 / __d1___0;
            __r0___0 = __r1___0 - __q0___0 * __d1___0;
            __m___0 = __q0___0 * __d0___0;
            __r0___0 = __r0___0 * (1UL << 32) | (0xffffffffffffffffUL & ((1UL << 32) - 1UL));
            if (__r0___0 < __m___0) {
              __q0___0 --;
              __r0___0 += (UWtype )*(dp + (n___0 - 1L));
              if (__r0___0 >= (UWtype )*(dp + (n___0 - 1L))) {
                if (__r0___0 < __m___0) {
                  __q0___0 --;
                  __r0___0 += (UWtype )*(dp + (n___0 - 1L));
                }
              }
            }
            __r0___0 -= __m___0;
            _v = __q1___0 * (1UL << 32) | __q0___0;
            _dummy___0 = __r0___0;
            break;
          }
          break;
        }
        _p = (mp_limb_t )(*(dp + (n___0 - 1L)) * (mp_limb_t const )_v);
        _p += (mp_limb_t )*(dp + (n___0 - 2L));
        if (_p < (mp_limb_t )*(dp + (n___0 - 2L))) {
          _v --;
          _mask = - ((mp_limb_t )(_p >= (mp_limb_t )*(dp + (n___0 - 1L))));
          _p -= (mp_limb_t )*(dp + (n___0 - 1L));
          _v += _mask;
          _p -= _mask & (unsigned long )*(dp + (n___0 - 1L));
        }
        while (1) {
          __u = (UWtype )*(dp + (n___0 - 2L));
          __v = _v;
          __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
          __uh = (UHWtype )(__u >> 32);
          __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
          __vh = (UHWtype )(__v >> 32);
          __x0 = (UWtype )__ul * (UWtype )__vl;
          __x1 = (UWtype )__ul * (UWtype )__vh;
          __x2 = (UWtype )__uh * (UWtype )__vl;
          __x3 = (UWtype )__uh * (UWtype )__vh;
          __x1 += __x0 >> 32;
          __x1 += __x2;
          if (__x1 < __x2) {
            __x3 += 1UL << 32;
          }
          _t1 = __x3 + (__x1 >> 32);
          _t0 = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
          break;
        }
        _p += _t1;
        if (_p < _t1) {
          _v --;
          tmp___1 = __builtin_expect((long )((_p >= (mp_limb_t )*(dp + (n___0 - 1L))) != 0),
                                     0L);
          if (tmp___1) {
            if (_p > (mp_limb_t )*(dp + (n___0 - 1L))) {
              _v --;
            } else
            if (_t0 >= (mp_limb_t )*(dp + (n___0 - 2L))) {
              _v --;
            }
          }
        }
        inv.inv32 = _v;
        break;
      }
      __gmpn_sbpi1_divappr_q(ip, xp, 2L * n___0, dp, n___0, inv.inv32);
      while (1) {
        __p = ip;
        while (1) {
          tmp___2 = __p;
          __p ++;
          tmp___3 = *tmp___2;
          (*tmp___2) --;
          if (! (tmp___3 == 0UL)) {
            break;
          }
        }
        break;
      }
      return ((mp_limb_t )1);
    }
  }
  return ((mp_limb_t )0);
}
}
mp_limb_t __gmpn_ni_invertappr(mp_ptr ip , mp_srcptr dp , mp_size_t n___0 , mp_ptr scratch )
{
  mp_limb_t cy ;
  mp_size_t rn ;
  mp_size_t mn ;
  mp_size_t sizes[40UL] ;
  mp_size_t *sizp ;
  mp_ptr tp ;
  struct tmp_reentrant_t *__tmp_marker ;
  mp_size_t tmp___1 ;
  void *tmp___2 ;
  mp_size_t tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  mp_size_t tmp___6 ;
  long tmp___7 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___10 ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t tmp___13 ;
  mp_limb_t tmp___14 ;
  mp_limb_t tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  mp_limb_t tmp___20 ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  mp_limb_t tmp___23 ;
  mp_ptr __p___3 ;
  mp_ptr tmp___24 ;
  mp_ptr __d ;
  mp_srcptr __s ;
  mp_size_t __n ;
  mp_ptr tmp___25 ;
  mp_srcptr tmp___26 ;
  mp_limb_t __x___4 ;
  mp_ptr __p___4 ;
  long tmp___28 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  sizp = sizes;
  rn = n___0;
  while (1) {
    *sizp = rn;
    rn = (rn >> 1) + 1L;
    sizp ++;
    if (! (rn >= 200L)) {
      break;
    }
  }
  dp += n___0;
  ip += n___0;
  mpn_bc_invertappr(ip - rn, dp - rn, rn, scratch);
  __tmp_marker = (struct tmp_reentrant_t *)0;
  mn = __gmpn_mulmod_bnm1_next_size(n___0 + 1L);
  tmp___6 = mpn_mulmod_bnm1_itch(mn, n___0, (n___0 >> 1) + 1L);
  tmp___7 = __builtin_expect((long )(((unsigned long )tmp___6 * sizeof(mp_limb_t ) <= 32512UL) != 0),
                             1L);
  if (tmp___7) {
    tmp___1 = mpn_mulmod_bnm1_itch(mn, n___0, (n___0 >> 1) + 1L);
    tmp___2 = alloca((unsigned long )tmp___1 * sizeof(mp_limb_t ));
    tmp___5 = tmp___2;
  } else {
    tmp___3 = mpn_mulmod_bnm1_itch(mn, n___0, (n___0 >> 1) + 1L);
    tmp___4 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )tmp___3 * sizeof(mp_limb_t ));
    tmp___5 = tmp___4;
  }
  tp = (mp_limb_t *)tmp___5;
  while (1) {
    sizp --;
    n___0 = *sizp;
    mn = __gmpn_mulmod_bnm1_next_size(n___0 + 1L);
    if (mn > n___0 + rn) {
      __gmpn_mul(scratch, dp - n___0, n___0, (mp_srcptr )(ip - rn), rn);
      __gmpn_add_n(scratch + rn, (mp_srcptr )(scratch + rn), dp - n___0, (n___0 - rn) + 1L);
      cy = (mp_limb_t )1L;
    } else {
      __gmpn_mulmod_bnm1(scratch, mn, dp - n___0, n___0, (mp_srcptr )(ip - rn), rn,
                         tp);
      while (1) {
        break;
      }
      cy = __gmpn_add_n(scratch + rn, (mp_srcptr )(scratch + rn), dp - n___0, mn - rn);
      cy = mpn_add_nc(scratch, (mp_srcptr )scratch, dp - (n___0 - (mn - rn)), n___0 - (mn - rn),
                      cy);
      *(scratch + mn) = (mp_limb_t )1L;
      while (1) {
        __p = ((scratch + rn) + n___0) - mn;
        __x = *__p;
        *__p = __x - (1UL - cy);
        if (__x < 1UL - cy) {
          while (1) {
            __p ++;
            tmp___10 = *__p;
            (*__p) --;
            if (! (tmp___10 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      while (1) {
        __p___0 = scratch;
        __x___0 = *__p___0;
        *__p___0 = __x___0 - (1UL - *(scratch + mn));
        if (__x___0 < 1UL - *(scratch + mn)) {
          while (1) {
            __p___0 ++;
            tmp___13 = *__p___0;
            (*__p___0) --;
            if (! (tmp___13 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      cy = (mp_limb_t )0L;
    }
    if (*(scratch + n___0) < 2UL) {
      cy = *(scratch + n___0);
      tmp___14 = cy;
      cy ++;
      if (tmp___14) {
        tmp___15 = __gmpn_sub_n(scratch, (mp_srcptr )scratch, dp - n___0, n___0);
        if (! tmp___15) {
          __gmpn_sub_n(scratch, (mp_srcptr )scratch, dp - n___0, n___0);
          cy ++;
        }
      }
      tmp___16 = __gmpn_cmp((mp_srcptr )scratch, dp - n___0, n___0);
      if (tmp___16 > 0) {
        __gmpn_sub_n(scratch, (mp_srcptr )scratch, dp - n___0, n___0);
        cy ++;
      }
      tmp___17 = __gmpn_cmp((mp_srcptr )scratch, dp - n___0, n___0 - rn);
      mpn_sub_nc((scratch + 2L * n___0) - rn, dp - rn, (mp_srcptr )((scratch + n___0) - rn),
                 rn, (mp_limb_t )(tmp___17 > 0));
      while (1) {
        __p___1 = ip - rn;
        __x___1 = *__p___1;
        *__p___1 = __x___1 - cy;
        if (__x___1 < cy) {
          while (1) {
            __p___1 ++;
            tmp___20 = *__p___1;
            (*__p___1) --;
            if (! (tmp___20 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    } else {
      while (1) {
        break;
      }
      while (1) {
        __p___2 = scratch;
        __x___2 = *__p___2;
        *__p___2 = __x___2 - cy;
        if (__x___2 < cy) {
          while (1) {
            __p___2 ++;
            tmp___23 = *__p___2;
            (*__p___2) --;
            if (! (tmp___23 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      if (*(scratch + n___0) != 0xffffffffffffffffUL) {
        while (1) {
          __p___3 = ip - rn;
          while (1) {
            tmp___24 = __p___3;
            __p___3 ++;
            (*tmp___24) ++;
            if (! (*tmp___24 == 0UL)) {
              break;
            }
          }
          break;
        }
        __gmpn_add_n(scratch, (mp_srcptr )scratch, dp - n___0, n___0);
      }
      while (1) {
        __d = (scratch + 2L * n___0) - rn;
        __s = (mp_srcptr )((scratch + n___0) - rn);
        __n = rn;
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        while (1) {
          tmp___25 = __d;
          __d ++;
          tmp___26 = __s;
          __s ++;
          *tmp___25 = (mp_limb_t )(~ *tmp___26 & 0xffffffffffffffffUL);
          __n --;
          if (! __n) {
            break;
          }
        }
        break;
      }
    }
    __gmpn_mul_n(scratch, (mp_srcptr )((scratch + 2L * n___0) - rn), (mp_srcptr )(ip - rn),
                 rn);
    cy = __gmpn_add_n(scratch + rn, (mp_srcptr )(scratch + rn), (mp_srcptr )((scratch + 2L * n___0) - rn),
                      2L * rn - n___0);
    cy = mpn_add_nc(ip - n___0, (mp_srcptr )((scratch + 3L * rn) - n___0), (mp_srcptr )((scratch + n___0) + rn),
                    n___0 - rn, cy);
    while (1) {
      __p___4 = ip - rn;
      __x___4 = *__p___4 + cy;
      *__p___4 = __x___4;
      if (__x___4 < cy) {
        while (1) {
          __p___4 ++;
          (*__p___4) ++;
          if (! (*__p___4 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    if ((unsigned long )sizp == (unsigned long )(sizes)) {
      cy = (mp_limb_t )(*(scratch + ((3L * rn - n___0) - 1L)) > 0xfffffffffffffff8UL);
      break;
    }
    rn = n___0;
  }
  while (1) {
    tmp___28 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___28) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return (cy);
}
}
mp_limb_t __gmpn_invertappr(mp_ptr ip , mp_srcptr dp , mp_size_t n___0 , mp_ptr scratch )
{
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if (! (n___0 >= 200L)) {
    tmp = mpn_bc_invertappr(ip, dp, n___0, scratch);
    return (tmp);
  } else {
    tmp___0 = __gmpn_ni_invertappr(ip, dp, n___0, scratch);
    return (tmp___0);
  }
}
}
#pragma merger("0","./iset.i","")
void __gmpz_init_set(mpz_ptr w , mpz_srcptr u ) ;
void __gmpz_init_set(mpz_ptr w , mpz_srcptr u )
{
  mp_ptr wp ;
  mp_ptr up ;
  mp_size_t usize ;
  mp_size_t size ;
  void *tmp ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___0 ;
  mp_ptr tmp___1 ;
  mp_srcptr tmp___2 ;
  mp_ptr tmp___3 ;

  {
  usize = (mp_size_t )u->_mp_size;
  if (usize >= 0L) {
    size = usize;
  } else {
    size = - usize;
  }
  if (size > 1L) {
    w->_mp_alloc = (int )size;
  } else {
    w->_mp_alloc = 1;
  }
  tmp = (*__gmp_allocate_func)((unsigned long )w->_mp_alloc * sizeof(mp_limb_t ));
  w->_mp_d = (mp_limb_t *)tmp;
  wp = w->_mp_d;
  up = (mp_ptr )u->_mp_d;
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      if (size != 0L) {
        __n = size - 1L;
        __dst = wp;
        __src = (mp_srcptr )up;
        tmp___0 = __src;
        __src ++;
        __x = (mp_limb_t )*tmp___0;
        if (__n != 0L) {
          while (1) {
            tmp___1 = __dst;
            __dst ++;
            *tmp___1 = __x;
            tmp___2 = __src;
            __src ++;
            __x = (mp_limb_t )*tmp___2;
            __n --;
            if (! __n) {
              break;
            }
          }
        }
        tmp___3 = __dst;
        __dst ++;
        *tmp___3 = __x;
      }
      break;
    }
    break;
  }
  w->_mp_size = (int )usize;
  return;
}
}
#pragma merger("0","./iset_si.i","")
void __gmpz_init_set_si(mpz_ptr dest , long val ) ;
void __gmpz_init_set_si(mpz_ptr dest , long val )
{
  mp_size_t size ;
  mp_limb_t vl ;
  void *tmp ;
  unsigned long tmp___0 ;

  {
  dest->_mp_alloc = 1;
  tmp = (*__gmp_allocate_func)(sizeof(mp_limb_t ));
  dest->_mp_d = (mp_limb_t *)tmp;
  if (val >= 0L) {
    tmp___0 = (unsigned long )val;
  } else {
    tmp___0 = - ((unsigned long )(val + 1L) - 1UL);
  }
  vl = tmp___0;
  *(dest->_mp_d + 0) = vl & 0xffffffffffffffffUL;
  size = (mp_size_t )(vl != 0UL);
  if (val >= 0L) {
    dest->_mp_size = (int )size;
  } else {
    dest->_mp_size = (int )(- size);
  }
  return;
}
}
#pragma merger("0","./iset_str.i","")
int __gmpz_init_set_str(mpz_ptr x , char const *str , int base ) ;
int __gmpz_set_str(mpz_ptr x , char const *str , int base ) ;
int __gmpz_init_set_str(mpz_ptr x , char const *str , int base )
{
  void *tmp ;
  int tmp___0 ;

  {
  x->_mp_alloc = 1;
  tmp = (*__gmp_allocate_func)(sizeof(mp_limb_t ));
  x->_mp_d = (mp_limb_t *)tmp;
  x->_mp_size = 0;
  tmp___0 = __gmpz_set_str(x, str, base);
  return (tmp___0);
}
}
#pragma merger("0","./iset_ui.i","")
void __gmpz_init_set_ui(mpz_ptr dest , unsigned long val ) ;
void __gmpz_init_set_ui(mpz_ptr dest , unsigned long val )
{
  mp_size_t size ;
  void *tmp ;

  {
  dest->_mp_alloc = 1;
  tmp = (*__gmp_allocate_func)(sizeof(mp_limb_t ));
  dest->_mp_d = (mp_limb_t *)tmp;
  size = (mp_size_t )(val != 0UL);
  *(dest->_mp_d + 0) = val & 0xffffffffffffffffUL;
  dest->_mp_size = (int )size;
  return;
}
}
#pragma merger("0","./lshift.i","")
mp_limb_t __gmpn_lshift(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , unsigned int cnt )
{
  mp_limb_t high_limb ;
  mp_limb_t low_limb ;
  unsigned int tnc ;
  mp_size_t i ;
  mp_limb_t retval ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  up += n___0;
  rp += n___0;
  tnc = 64U - cnt;
  up --;
  low_limb = (mp_limb_t )*up;
  retval = low_limb >> tnc;
  high_limb = (low_limb << cnt) & 0xffffffffffffffffUL;
  i = n___0 - 1L;
  while (i != 0L) {
    up --;
    low_limb = (mp_limb_t )*up;
    rp --;
    *rp = high_limb | (low_limb >> tnc);
    high_limb = (low_limb << cnt) & 0xffffffffffffffffUL;
    i --;
  }
  rp --;
  *rp = high_limb;
  return (retval);
}
}
#pragma merger("0","./lshiftc.i","")
mp_limb_t __gmpn_lshiftc(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , unsigned int cnt ) ;
mp_limb_t __gmpn_lshiftc(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , unsigned int cnt )
{
  mp_limb_t high_limb ;
  mp_limb_t low_limb ;
  unsigned int tnc ;
  mp_size_t i ;
  mp_limb_t retval ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  up += n___0;
  rp += n___0;
  tnc = 64U - cnt;
  up --;
  low_limb = (mp_limb_t )*up;
  retval = low_limb >> tnc;
  high_limb = low_limb << cnt;
  i = n___0 - 1L;
  while (i != 0L) {
    up --;
    low_limb = (mp_limb_t )*up;
    rp --;
    *rp = ~ (high_limb | (low_limb >> tnc)) & 0xffffffffffffffffUL;
    high_limb = low_limb << cnt;
    i --;
  }
  rp --;
  *rp = ~ high_limb & 0xffffffffffffffffUL;
  return (retval);
}
}
#pragma merger("0","./lucnum2_ui.i","")
void __gmpz_lucnum2_ui(mpz_ptr ln , mpz_ptr lnsub1 , unsigned long n___0 ) ;
void __gmpz_lucnum2_ui(mpz_ptr ln , mpz_ptr lnsub1 , unsigned long n___0 )
{
  mp_ptr lp ;
  mp_ptr l1p ;
  mp_ptr f1p ;
  mp_size_t size ;
  mp_limb_t c ;
  struct tmp_reentrant_t *__tmp_marker ;
  mp_limb_t f ;
  mp_limb_t f1 ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  void *tmp___5 ;
  long tmp___6 ;
  void *tmp___8 ;
  long tmp___9 ;
  mp_limb_t tmp___10 ;
  mp_limb_t tmp___11 ;
  long tmp___12 ;

  {
  while (1) {
    break;
  }
  if (n___0 <= 92UL) {
    f = (mp_limb_t )__gmp_fib_table[n___0 + 1UL];
    f1 = (mp_limb_t )__gmp_fib_table[((int )n___0 - 1) + 1];
    *(ln->_mp_d + 0) = f + 2UL * f1;
    ln->_mp_size = 1;
    if (n___0 == 0UL) {
      *(lnsub1->_mp_d + 0) = (mp_limb_t )1;
    } else {
      *(lnsub1->_mp_d + 0) = 2UL * f - f1;
    }
    if (n___0 == 0UL) {
      lnsub1->_mp_size = -1;
    } else {
      lnsub1->_mp_size = 1;
    }
    return;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  size = (mp_size_t )(((n___0 / 32UL) * 23UL) / 64UL) + 4L;
  tmp___3 = __builtin_expect((long )(((unsigned long )size * sizeof(mp_limb_t ) <= 32512UL) != 0),
                             1L);
  if (tmp___3) {
    tmp___0 = alloca((unsigned long )size * sizeof(mp_limb_t ));
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )size * sizeof(mp_limb_t ));
    tmp___2 = tmp___1;
  }
  f1p = (mp_limb_t *)tmp___2;
  tmp___6 = __builtin_expect((long )((size + 1L > (mp_size_t )ln->_mp_alloc) != 0),
                             0L);
  if (tmp___6) {
    tmp___5 = __gmpz_realloc(ln, size + 1L);
    lp = (mp_ptr )tmp___5;
  } else {
    lp = ln->_mp_d;
  }
  tmp___9 = __builtin_expect((long )((size + 1L > (mp_size_t )lnsub1->_mp_alloc) != 0),
                             0L);
  if (tmp___9) {
    tmp___8 = __gmpz_realloc(lnsub1, size + 1L);
    l1p = (mp_ptr )tmp___8;
  } else {
    l1p = lnsub1->_mp_d;
  }
  size = __gmpn_fib2_ui(l1p, f1p, n___0);
  c = __gmpn_lshift(lp, (mp_srcptr )f1p, size, 1U);
  tmp___10 = __gmpn_add_n(lp, (mp_srcptr )lp, (mp_srcptr )l1p, size);
  c += tmp___10;
  *(lp + size) = c;
  ln->_mp_size = (int )(size + (mp_size_t )(c != 0UL));
  c = __gmpn_lshift(l1p, (mp_srcptr )l1p, size, 1U);
  tmp___11 = __gmpn_sub_n(l1p, (mp_srcptr )l1p, (mp_srcptr )f1p, size);
  c -= tmp___11;
  while (1) {
    break;
  }
  *(l1p + size) = c;
  lnsub1->_mp_size = (int )(size + (mp_size_t )(c != 0UL));
  while (1) {
    tmp___12 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___12) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
#pragma merger("0","./lucnum_ui.i","")
void __gmpz_lucnum_ui(mpz_ptr ln , unsigned long n___0 ) ;
void __gmpz_lucnum_ui(mpz_ptr ln , unsigned long n___0 )
{
  mp_size_t lalloc ;
  mp_size_t xalloc ;
  mp_size_t lsize ;
  mp_size_t xsize ;
  mp_ptr lp ;
  mp_ptr xp ;
  mp_limb_t c ;
  int zeros ;
  struct tmp_reentrant_t *__tmp_marker ;
  void *tmp___0 ;
  long tmp___1 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  long tmp___6 ;
  mp_size_t yalloc ;
  mp_size_t ysize ;
  mp_ptr yp ;
  void *tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  long tmp___11 ;
  mp_limb_t tmp___12 ;
  mp_limb_t tmp___13 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___16 ;
  mp_ptr __mp_ptr_swap__tmp ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t tmp___19 ;
  mp_ptr __mp_ptr_swap__tmp___0 ;
  long tmp___20 ;

  {
  if (n___0 <= 92UL) {
    *(ln->_mp_d + 0) = (mp_limb_t )(__gmp_fib_table[n___0 + 1UL] + 2UL * __gmp_fib_table[((int )n___0 - 1) + 1]);
    ln->_mp_size = 1;
    return;
  }
  lalloc = ((mp_size_t )(((n___0 / 32UL) * 23UL) / 64UL) + 4L) + 2L;
  tmp___1 = __builtin_expect((long )((lalloc > (mp_size_t )ln->_mp_alloc) != 0), 0L);
  if (tmp___1) {
    tmp___0 = __gmpz_realloc(ln, lalloc);
    lp = (mp_ptr )tmp___0;
  } else {
    lp = ln->_mp_d;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  xalloc = lalloc;
  tmp___6 = __builtin_expect((long )(((unsigned long )xalloc * sizeof(mp_limb_t ) <= 32512UL) != 0),
                             1L);
  if (tmp___6) {
    tmp___3 = alloca((unsigned long )xalloc * sizeof(mp_limb_t ));
    tmp___5 = tmp___3;
  } else {
    tmp___4 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )xalloc * sizeof(mp_limb_t ));
    tmp___5 = tmp___4;
  }
  xp = (mp_limb_t *)tmp___5;
  zeros = 0;
  while (1) {
    if (n___0 & 1UL) {
      yalloc = (mp_size_t )((((n___0 / 2UL) / 32UL) * 23UL) / 64UL) + 4L;
      tmp___11 = __builtin_expect((long )(((unsigned long )yalloc * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___11) {
        tmp___8 = alloca((unsigned long )yalloc * sizeof(mp_limb_t ));
        tmp___10 = tmp___8;
      } else {
        tmp___9 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )yalloc * sizeof(mp_limb_t ));
        tmp___10 = tmp___9;
      }
      yp = (mp_limb_t *)tmp___10;
      while (1) {
        break;
      }
      xsize = __gmpn_fib2_ui(xp, yp, n___0 / 2UL);
      ysize = xsize;
      ysize -= (mp_size_t )(*(yp + (ysize - 1L)) == 0UL);
      while (1) {
        break;
      }
      c = __gmpn_lshift(xp, (mp_srcptr )xp, xsize, 1U);
      tmp___12 = __gmpn_add_n(xp, (mp_srcptr )xp, (mp_srcptr )yp, xsize);
      c += tmp___12;
      while (1) {
        break;
      }
      *(xp + xsize) = c;
      xsize += (mp_size_t )(c != 0UL);
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      c = __gmpn_mul(lp, (mp_srcptr )xp, xsize, (mp_srcptr )yp, ysize);
      lsize = xsize + ysize;
      lsize -= (mp_size_t )(c == 0UL);
      c = __gmpn_lshift(xp, (mp_srcptr )lp, lsize, 2U);
      tmp___13 = __gmpn_add_n(lp, (mp_srcptr )lp, (mp_srcptr )xp, lsize);
      c += tmp___13;
      while (1) {
        break;
      }
      *(lp + lsize) = c;
      lsize += (mp_size_t )(c != 0UL);
      if (n___0 & 2UL) {
        while (1) {
          break;
        }
        *(lp + 0) += 4UL;
      } else {
        while (1) {
          __p = lp;
          __x = *__p;
          *__p = __x - 4UL;
          if (__x < 4UL) {
            while (1) {
              __p ++;
              tmp___16 = *__p;
              (*__p) --;
              if (! (tmp___16 == 0UL)) {
                break;
              }
            }
          }
          break;
        }
      }
      break;
    }
    while (1) {
      __mp_ptr_swap__tmp = xp;
      xp = lp;
      lp = __mp_ptr_swap__tmp;
      break;
    }
    zeros ++;
    n___0 /= 2UL;
    if (n___0 <= 92UL) {
      *(lp + 0) = (mp_limb_t )(__gmp_fib_table[n___0 + 1UL] + 2UL * __gmp_fib_table[((int )n___0 - 1) + 1]);
      lsize = (mp_size_t )1;
      break;
    }
  }
  while (zeros != 0) {
    while (1) {
      break;
    }
    __gmpn_sqr(xp, (mp_srcptr )lp, lsize);
    lsize *= 2L;
    lsize -= (mp_size_t )(*(xp + (lsize - 1L)) == 0UL);
    if (n___0 & 1UL) {
      while (1) {
        break;
      }
      *(xp + 0) += 2UL;
      n___0 = 0UL;
    } else {
      while (1) {
        __p___0 = xp;
        __x___0 = *__p___0;
        *__p___0 = __x___0 - 2UL;
        if (__x___0 < 2UL) {
          while (1) {
            __p___0 ++;
            tmp___19 = *__p___0;
            (*__p___0) --;
            if (! (tmp___19 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    }
    while (1) {
      __mp_ptr_swap__tmp___0 = xp;
      xp = lp;
      lp = __mp_ptr_swap__tmp___0;
      break;
    }
    while (1) {
      break;
    }
    zeros --;
  }
  while (1) {
    break;
  }
  ln->_mp_size = (int )lsize;
  while (1) {
    tmp___20 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___20) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
#pragma merger("0","./memory.i","")
extern __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size ) __attribute__((__malloc__)) ;
extern __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
extern __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
void *(*__gmp_reallocate_func)(void * , size_t , size_t ) ;
void *__gmp_default_allocate(size_t size ) ;
void *__gmp_default_reallocate(void *oldptr , size_t old_size , size_t new_size ) ;
void __gmp_default_free(void *blk_ptr , size_t blk_size ) ;
void *(*__gmp_allocate_func)(size_t ) = & __gmp_default_allocate;
void *(*__gmp_reallocate_func)(void * , size_t , size_t ) = & __gmp_default_reallocate;
void (*__gmp_free_func)(void * , size_t ) = & __gmp_default_free;
void *__gmp_default_allocate(size_t size )
{
  void *ret ;

  {
  ret = malloc(size);
  if ((unsigned long )ret == (unsigned long )((void *)0)) {
    printf((char const * __restrict )"GNU MP: Cannot allocate memory (size=%lu)\n", (long )size)
                        ;
    abort();
  }
  return (ret);
}
}
void *__gmp_default_reallocate(void *oldptr , size_t old_size , size_t new_size )
{
  void *ret ;

  {
  ret = realloc(oldptr, new_size);
  if ((unsigned long )ret == (unsigned long )((void *)0)) {
    printf((char const * __restrict )"GNU MP: Cannot reallocate memory (old_size=%lu new_size=%lu)\n", (long )old_size, (long )new_size)
                                             ;
    abort();
  }
  return (ret);
}
}
void __gmp_default_free(void *blk_ptr , size_t blk_size )
{


  {
  free(blk_ptr);
  return;
}
}
#pragma merger("0","./misc.i","")
extern __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) toupper)(int __c ) ;
extern __attribute__((__nothrow__)) __sighandler_t ( __attribute__((__leaf__)) signal)(int __sig ,
                                                                                        void (*__handler)(int ) ) ;
extern struct _IO_FILE *stdout ;

extern int printf(char const * __restrict __format , ...) ;
extern __attribute__((__nothrow__)) int ( snprintf)(char * __restrict __s ,
                                                                             size_t __maxlen ,
                                                                             char const * __restrict __format
                                                                             , ...) ;
extern __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1),
__leaf__)) strtoul)(char const * __restrict __nptr , char ** __restrict __endptr ,
                    int __base ) ;
extern __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) getenv)(char const *__name ) ;
extern __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict __dest ,
                                                                                                 void const * __restrict __src ,
                                                                                                 size_t __n ) ;
extern __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const *__s1 ,
                                                                                               char const *__s2 ) __attribute__((__pure__)) ;
extern __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s ) __attribute__((__pure__)) ;
extern __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) gettimeofday)(struct timeval * __restrict __tv ,
                                                                                                   __timezone_ptr_t __tz ) ;
char const * const __gmp_version ;
void __gmp_randinit_default(__gmp_randstate_struct *rstate ) ;
void __gmp_randinit_lc_2exp(__gmp_randstate_struct *rstate , mpz_srcptr a , unsigned long c ,
                            mp_bitcnt_t m2exp ) ;
int __gmp_randinit_lc_2exp_size(__gmp_randstate_struct *rstate , mp_bitcnt_t size ) ;
void __gmp_randinit_mt(__gmp_randstate_struct *rstate ) ;
void __gmp_randseed_ui(__gmp_randstate_struct *rstate , unsigned long seed ) ;
void __gmp_randclear(__gmp_randstate_struct *rstate ) ;
unsigned long __gmp_urandomm_ui(__gmp_randstate_struct *rstate , unsigned long n___0 ) ;
void __gmpz_rrandomb(mpz_ptr x , __gmp_randstate_struct *rstate , mp_bitcnt_t nbits ) ;
void __gmpz_set_ui(mpz_ptr dest , unsigned long val ) ;
void __gmpz_urandomb(mpz_ptr rop , __gmp_randstate_struct *rstate , mp_bitcnt_t nbits ) ;
int __gmpq_set_str(mpq_ptr q , char const *str , int base ) ;
int __gmpf_set_str(mpf_ptr x , char const *str , int base ) ;
void __gmp_randinit_mt_noseed(__gmp_randstate_struct *dst ) ;
char __gmp_rands_initialized ;
gmp_randstate_t __gmp_rands ;

void tests_start(void) ;
void tests_end(void) ;
void tests_memory_start(void) ;
void tests_memory_end(void) ;
void tests_rand_start(void) ;
void tests_rand_end(void) ;
double tests_infinity_d(void) ;
int tests_hardware_getround(void) ;
int tests_hardware_setround(int mode ) ;
int tests_isinf(double d ) ;
int tests_dbl_mant_bits(void) ;
void tests_sigfpe_handler(int sig ) ;
void tests_sigfpe_done(void) ;
jmp_buf tests_sigfpe_target ;
void *align_pointer(void *p , size_t align ) ;
void *__gmp_allocate_func_aligned(size_t bytes , size_t align ) ;
void *__gmp_allocate_or_reallocate(void *ptr , size_t oldsize , size_t newsize ) ;
char *__gmp_allocate_strdup(char const *s ) ;
char *strtoupper(char *s_orig ) ;
mp_limb_t urandom(void) ;
void call_rand_algs(void (*func)(char const * , __gmp_randstate_struct * ) ) ;
void mpf_set_str_or_abort(mpf_ptr f , char const *str , int base ) ;
void mpq_set_str_or_abort(mpq_ptr q , char const *str , int base ) ;
void mpz_erandomb(mpz_ptr rop , __gmp_randstate_struct *rstate , unsigned long nbits ) ;
void mpz_erandomb_nonzero(mpz_ptr rop , __gmp_randstate_struct *rstate , unsigned long nbits ) ;
void mpz_errandomb(mpz_ptr rop , __gmp_randstate_struct *rstate , unsigned long nbits ) ;
void mpz_errandomb_nonzero(mpz_ptr rop , __gmp_randstate_struct *rstate , unsigned long nbits ) ;
void mpz_init_set_n(mpz_ptr z , mp_srcptr p , mp_size_t size ) ;
void mpz_negrandom(mpz_ptr rop , __gmp_randstate_struct *rstate ) ;
int mpz_pow2abs_p(mpz_srcptr z ) __attribute__((__pure__)) ;
void mpz_set_n(mpz_ptr z , mp_srcptr p , mp_size_t size ) ;
void mpz_set_str_or_abort(mpz_ptr z , char const *str , int base ) ;
mp_size_t mpn_diff_highest(mp_srcptr p1 , mp_srcptr p2 , mp_size_t size ) __attribute__((__pure__)) ;
mp_size_t mpn_diff_lowest(mp_srcptr p1 , mp_srcptr p2 , mp_size_t size ) __attribute__((__pure__)) ;
mp_size_t byte_diff_highest(void const *p1 , void const *p2 , mp_size_t size ) __attribute__((__pure__)) ;
mp_size_t byte_diff_lowest(void const *p1 , void const *p2 , mp_size_t size ) __attribute__((__pure__)) ;
void tests_start(void)
{
  char version[10] ;
  int tmp ;

  {
  snprintf((char * __restrict )(version), (size_t )10, (char const * __restrict )"%u.%u.%u",
           6, 1, 1);
  tmp = strcmp((char const *)__gmp_version, (char const *)(version));
  if (tmp != 0) {
    printf((char const * __restrict )"tests are not linked to the newly compiled library\n");
    printf((char const * __restrict )"  local version is: %s\n", version)
                    ;
    printf((char const * __restrict )"  linked version is: %s\n", __gmp_version)
                          ;
    abort();
  }
  tests_memory_start();
  tests_rand_start();
  return;
}
}
void tests_end(void)
{


  {
  tests_rand_end();
  tests_memory_end();
  return;
}
}
void tests_rand_start(void)
{
  gmp_randstate_ptr rands ;
  char *perform_seed ;
  unsigned long seed ;


  {
  if (__gmp_rands_initialized) {
    printf((char const * __restrict )"Please let tests_start() initialize the global __gmp_rands.\n");
    printf((char const * __restrict )"ie. ensure that function is called before the first use of RANDS.\n");
    abort();
  }
  __gmp_randinit_default((__gmp_randstate_struct *)(__gmp_rands));
  __gmp_rands_initialized = (char)1;
  rands = __gmp_rands;
  perform_seed = getenv("GMP_CHECK_RANDOMIZE");
  if ((unsigned long )perform_seed != (unsigned long )((void *)0)) {
    seed = strtoul((char const * __restrict )perform_seed, (char ** __restrict )0,
                   0);
    if (seed == 0UL) {


      seed &= 4294967295UL;
      __gmp_randseed_ui((__gmp_randstate_struct *)rands, seed);
      printf((char const * __restrict )"Seed GMP_CHECK_RANDOMIZE=%lu (include this in bug reports)\n",
             seed);
    } else
    if (seed == 1UL) {


      seed &= 4294967295UL;
      __gmp_randseed_ui((__gmp_randstate_struct *)rands, seed);
      printf((char const * __restrict )"Seed GMP_CHECK_RANDOMIZE=%lu (include this in bug reports)\n",
             seed);
    } else {
      printf((char const * __restrict )"Re-seeding with GMP_CHECK_RANDOMIZE=%lu\n",
             seed);
      __gmp_randseed_ui((__gmp_randstate_struct *)rands, seed);
    }

  }
  return;
}
}
void tests_rand_end(void)
{


  {
  while (1) {
    if (__gmp_rands_initialized) {
      __gmp_rands_initialized = (char)0;
      __gmp_randclear((__gmp_randstate_struct *)(__gmp_rands));
    }
    break;
  }
  return;
}
}
mp_limb_t (*calling_conventions_function)() ;
void *align_pointer(void *p , size_t align )
{
  gmp_intptr_t d ;

  {
  d = (gmp_intptr_t )((unsigned long )((gmp_intptr_t )p) & (align - 1UL));
  if (d != 0L) {
    d = (gmp_intptr_t )(align - (size_t )d);
  } else {
    d = (gmp_intptr_t )0;
  }
  return ((void *)((char *)p + d));
}
}
void *__gmp_allocate_func_aligned(size_t bytes , size_t align )
{
  void *tmp ;
  void *tmp___0 ;

  {
  tmp = (*__gmp_allocate_func)((bytes + align) - 1UL);
  tmp___0 = align_pointer(tmp, align);
  return (tmp___0);
}
}
void *__gmp_allocate_or_reallocate(void *ptr , size_t oldsize , size_t newsize )
{
  void *tmp ;
  void *tmp___0 ;

  {
  if ((unsigned long )ptr == (unsigned long )((void *)0)) {
    tmp = (*__gmp_allocate_func)(newsize);
    return (tmp);
  } else {
    tmp___0 = (*__gmp_reallocate_func)(ptr, oldsize, newsize);
    return (tmp___0);
  }
}
}
char *__gmp_allocate_strdup(char const *s )
{
  size_t len ;
  char *t ;
  void *tmp ;

  {
  len = strlen(s);
  tmp = (*__gmp_allocate_func)(len + 1UL);
  t = (char *)tmp;
  memcpy((void * __restrict )t, (void const * __restrict )s, len + 1UL);
  return (t);
}
}
char *strtoupper(char *s_orig )
{
  char *s ;
  int tmp ;

  {
  s = s_orig;
  while ((int )*s != 0) {
    if (((int )*s & -128) == 0) {
      tmp = toupper((int )*s);
      *s = (char )tmp;
    }
    s ++;
  }
  return (s_orig);
}
}
void mpz_set_n(mpz_ptr z , mp_srcptr p , mp_size_t size )
{
  long tmp ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___0 ;
  mp_ptr tmp___1 ;
  mp_srcptr tmp___2 ;
  mp_ptr tmp___3 ;

  {
  while (1) {
    break;
  }
  while (1) {
    while (size > 0L) {
      if (*(p + (size - 1L)) != 0UL) {
        break;
      }
      size --;
    }
    break;
  }
  tmp = __builtin_expect((long )((size > (mp_size_t )z->_mp_alloc) != 0), 0L);
  if (tmp) {
    __gmpz_realloc(z, size);
  }
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      if (size != 0L) {
        __n = size - 1L;
        __dst = z->_mp_d;
        __src = p;
        tmp___0 = __src;
        __src ++;
        __x = (mp_limb_t )*tmp___0;
        if (__n != 0L) {
          while (1) {
            tmp___1 = __dst;
            __dst ++;
            *tmp___1 = __x;
            tmp___2 = __src;
            __src ++;
            __x = (mp_limb_t )*tmp___2;
            __n --;
            if (! __n) {
              break;
            }
          }
        }
        tmp___3 = __dst;
        __dst ++;
        *tmp___3 = __x;
      }
      break;
    }
    break;
  }
  z->_mp_size = (int )size;
  return;
}
}
void mpz_init_set_n(mpz_ptr z , mp_srcptr p , mp_size_t size )
{
  void *tmp ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___0 ;
  mp_ptr tmp___1 ;
  mp_srcptr tmp___2 ;
  mp_ptr tmp___3 ;

  {
  while (1) {
    break;
  }
  while (1) {
    while (size > 0L) {
      if (*(p + (size - 1L)) != 0UL) {
        break;
      }
      size --;
    }
    break;
  }
  if (size > 1L) {
    z->_mp_alloc = (int )size;
  } else {
    z->_mp_alloc = 1;
  }
  tmp = (*__gmp_allocate_func)((unsigned long )z->_mp_alloc * sizeof(mp_limb_t ));
  z->_mp_d = (mp_limb_t *)tmp;
  z->_mp_size = (int )size;
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      if (size != 0L) {
        __n = size - 1L;
        __dst = z->_mp_d;
        __src = p;
        tmp___0 = __src;
        __src ++;
        __x = (mp_limb_t )*tmp___0;
        if (__n != 0L) {
          while (1) {
            tmp___1 = __dst;
            __dst ++;
            *tmp___1 = __x;
            tmp___2 = __src;
            __src ++;
            __x = (mp_limb_t )*tmp___2;
            __n --;
            if (! __n) {
              break;
            }
          }
        }
        tmp___3 = __dst;
        __dst ++;
        *tmp___3 = __x;
      }
      break;
    }
    break;
  }
  return;
}
}
mp_size_t mpn_diff_lowest(mp_srcptr p1 , mp_srcptr p2 , mp_size_t size ) __attribute__((__pure__)) ;
mp_size_t mpn_diff_lowest(mp_srcptr p1 , mp_srcptr p2 , mp_size_t size )
{
  mp_size_t i ;

  {
  i = (mp_size_t )0;
  while (i < size) {
    if (*(p1 + i) != *(p2 + i)) {
      return (i);
    }
    i ++;
  }
  return ((mp_size_t )-1);
}
}
mp_size_t mpn_diff_highest(mp_srcptr p1 , mp_srcptr p2 , mp_size_t size ) __attribute__((__pure__)) ;
mp_size_t mpn_diff_highest(mp_srcptr p1 , mp_srcptr p2 , mp_size_t size )
{
  mp_size_t i ;

  {
  i = size - 1L;
  while (i >= 0L) {
    if (*(p1 + i) != *(p2 + i)) {
      return (i);
    }
    i --;
  }
  return ((mp_size_t )-1);
}
}
mp_size_t byte_diff_lowest(void const *p1 , void const *p2 , mp_size_t size ) __attribute__((__pure__)) ;
mp_size_t byte_diff_lowest(void const *p1 , void const *p2 , mp_size_t size )
{
  mp_size_t i ;

  {
  i = (mp_size_t )0;
  while (i < size) {
    if ((int const )*((char const *)p1 + i) != (int const )*((char const *)p2 + i)) {
      return (i);
    }
    i ++;
  }
  return ((mp_size_t )-1);
}
}
mp_size_t byte_diff_highest(void const *p1 , void const *p2 , mp_size_t size ) __attribute__((__pure__)) ;
mp_size_t byte_diff_highest(void const *p1 , void const *p2 , mp_size_t size )
{
  mp_size_t i ;

  {
  i = size - 1L;
  while (i >= 0L) {
    if ((int const )*((char const *)p1 + i) != (int const )*((char const *)p2 + i)) {
      return (i);
    }
    i --;
  }
  return ((mp_size_t )-1);
}
}
void mpz_set_str_or_abort(mpz_ptr z , char const *str , int base )
{
  int tmp ;

  {
  tmp = __gmpz_set_str(z, str, base);
  if (tmp != 0) {
    printf((char const * __restrict )"ERROR: mpz_set_str failed\n");
    printf((char const * __restrict )"   str  = \"%s\"\n", str)
                ;
    printf((char const * __restrict )"   base = %d\n", base)
                 ;
    abort();
  }
  return;
}
}
void mpq_set_str_or_abort(mpq_ptr q , char const *str , int base )
{
  int tmp ;

  {
  tmp = __gmpq_set_str(q, str, base);
  if (tmp != 0) {
    printf((char const * __restrict )"ERROR: mpq_set_str failed\n");
    printf((char const * __restrict )"   str  = \"%s\"\n", str)
                ;
    printf((char const * __restrict )"   base = %d\n", base)
                 ;
    abort();
  }
  return;
}
}
void mpf_set_str_or_abort(mpf_ptr f , char const *str , int base )
{
  int tmp ;

  {
  tmp = __gmpf_set_str(f, str, base);
  if (tmp != 0) {
    printf((char const * __restrict )"ERROR mpf_set_str failed\n");
    printf((char const * __restrict )"   str  = \"%s\"\n", str)
                ;
    printf((char const * __restrict )"   base = %d\n", base)
                 ;
    abort();
  }
  return;
}
}
int mpz_pow2abs_p(mpz_srcptr z ) __attribute__((__pure__)) ;
int mpz_pow2abs_p(mpz_srcptr z )
{
  mp_size_t size ;
  mp_size_t i ;
  mp_srcptr ptr ;

  {
  size = (mp_size_t )z->_mp_size;
  if (size == 0L) {
    return (0);
  }
  if (size >= 0L) {
    size = size;
  } else {
    size = - size;
  }
  ptr = (mp_srcptr )z->_mp_d;
  i = (mp_size_t )0;
  while (i < size - 1L) {
    if (*(ptr + i) != 0UL) {
      return (0);
    }
    i ++;
  }
  return ((*(ptr + i) & (*(ptr + i) - 1UL)) == 0UL);
}
}
void mpz_erandomb(mpz_ptr rop , __gmp_randstate_struct *rstate , unsigned long nbits )
{
  unsigned long tmp ;

  {
  tmp = __gmp_urandomm_ui(rstate, nbits);
  __gmpz_urandomb(rop, rstate, tmp);
  return;
}
}
void mpz_erandomb_nonzero(mpz_ptr rop , __gmp_randstate_struct *rstate , unsigned long nbits )
{
  int tmp ;

  {
  mpz_erandomb(rop, rstate, nbits);
  if (rop->_mp_size < 0) {
    tmp = -1;
  } else {
    tmp = rop->_mp_size > 0;
  }
  if (tmp == 0) {
    __gmpz_set_ui(rop, 1UL);
  }
  return;
}
}
void mpz_errandomb(mpz_ptr rop , __gmp_randstate_struct *rstate , unsigned long nbits )
{
  unsigned long tmp ;

  {
  tmp = __gmp_urandomm_ui(rstate, nbits);
  __gmpz_rrandomb(rop, rstate, tmp);
  return;
}
}
void mpz_errandomb_nonzero(mpz_ptr rop , __gmp_randstate_struct *rstate , unsigned long nbits )
{
  int tmp ;

  {
  mpz_errandomb(rop, rstate, nbits);
  if (rop->_mp_size < 0) {
    tmp = -1;
  } else {
    tmp = rop->_mp_size > 0;
  }
  if (tmp == 0) {
    __gmpz_set_ui(rop, 1UL);
  }
  return;
}
}
void mpz_negrandom(mpz_ptr rop , __gmp_randstate_struct *rstate )
{
  mp_limb_t n___0 ;
  gmp_randstate_ptr __rstate ;

  {
  while (1) {
    __rstate = (gmp_randstate_ptr )rstate;
    (*(((gmp_randfnptr_t *)__rstate->_mp_algdata._mp_lc)->randget_fn))((__gmp_randstate_struct *)__rstate,
                                                                       & n___0, 1UL);
    break;
  }
  if (n___0 != 0UL) {
    __gmpz_neg(rop, (mpz_srcptr )rop);
  }
  return;
}
}
mp_limb_t urandom(void)
{
  mp_limb_t n___0 ;
  gmp_randstate_ptr __rstate ;

  {
  while (1) {
    if (! __gmp_rands_initialized) {
      __gmp_rands_initialized = (char)1;
      __gmp_randinit_mt_noseed((__gmp_randstate_struct *)(__gmp_rands));
    }
    __rstate = __gmp_rands;
    (*(((gmp_randfnptr_t *)__rstate->_mp_algdata._mp_lc)->randget_fn))((__gmp_randstate_struct *)__rstate,
                                                                       & n___0, 64UL);
    break;
  }
  return (n___0);
}
}
void call_rand_algs(void (*func)(char const * , __gmp_randstate_struct * ) )
{
  gmp_randstate_t rstate ;
  mpz_t a ;

  {
  __gmpz_init(a);
  __gmp_randinit_default((__gmp_randstate_struct *)(rstate));
  (*func)("gmp_randinit_default", (__gmp_randstate_struct *)(rstate));
  __gmp_randclear((__gmp_randstate_struct *)(rstate));
  __gmp_randinit_mt((__gmp_randstate_struct *)(rstate));
  (*func)("gmp_randinit_mt", (__gmp_randstate_struct *)(rstate));
  __gmp_randclear((__gmp_randstate_struct *)(rstate));
  __gmp_randinit_lc_2exp_size((__gmp_randstate_struct *)(rstate), (mp_bitcnt_t )8L);
  (*func)("gmp_randinit_lc_2exp_size 8", (__gmp_randstate_struct *)(rstate));
  __gmp_randclear((__gmp_randstate_struct *)(rstate));
  __gmp_randinit_lc_2exp_size((__gmp_randstate_struct *)(rstate), (mp_bitcnt_t )16L);
  (*func)("gmp_randinit_lc_2exp_size 16", (__gmp_randstate_struct *)(rstate));
  __gmp_randclear((__gmp_randstate_struct *)(rstate));
  __gmp_randinit_lc_2exp_size((__gmp_randstate_struct *)(rstate), (mp_bitcnt_t )128L);
  (*func)("gmp_randinit_lc_2exp_size 128", (__gmp_randstate_struct *)(rstate));
  __gmp_randclear((__gmp_randstate_struct *)(rstate));
  __gmpz_set_ui(a, 0UL);
  __gmp_randinit_lc_2exp((__gmp_randstate_struct *)(rstate), (mpz_srcptr )(a), 0UL,
                         (mp_bitcnt_t )8L);
  (*func)("gmp_randinit_lc_2exp a=0 c=0 m=8", (__gmp_randstate_struct *)(rstate));
  __gmp_randclear((__gmp_randstate_struct *)(rstate));
  __gmpz_set_ui(a, 0UL);
  __gmp_randinit_lc_2exp((__gmp_randstate_struct *)(rstate), (mpz_srcptr )(a), 255UL,
                         (mp_bitcnt_t )8L);
  (*func)("gmp_randinit_lc_2exp a=0 c=0xFF m=8", (__gmp_randstate_struct *)(rstate));
  __gmp_randclear((__gmp_randstate_struct *)(rstate));
  __gmpz_clear(a);
  return;
}
}
double tests_infinity_d(void)
{
  union ieee_double_extract x ;

  {
  x.s.exp = (gmp_uint_least32_t )2047;
  x.s.manl = (gmp_uint_least32_t )0;
  x.s.manh = (gmp_uint_least32_t )0;
  x.s.sig = (gmp_uint_least32_t )0;
  return (x.d);
}
}
int tests_isinf(double d )
{
  union ieee_double_extract x ;
  int tmp ;

  {
  x.d = d;
  if (x.s.exp == 2047U) {
    if (x.s.manl == 0U) {
      if (x.s.manh == 0U) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return (tmp);
}
}
int tests_hardware_setround(int mode )
{


  {
  return (0);
}
}
int tests_hardware_getround(void)
{


  {
  return (-1);
}
}
static int n = -1;
int tests_dbl_mant_bits(void)
{
  double volatile x ;
  double volatile y ;
  double volatile d ;

  {
  if (n != -1) {
    return (n);
  }
  n = 1;
  x = (double volatile )2.0;
  while (1) {
    y = x + (double volatile )1.0;
    d = y - x;
    if (d != (double volatile )1.0) {
      break;
    }
    x *= (double volatile )2;
    n ++;
    if (n > 1000) {
      printf((char const * __restrict )"Oops, tests_dbl_mant_bits can\'t determine mantissa size\n");
      n = 0;
      break;
    }
  }
  return (n);
}
}
void tests_sigfpe_handler(int sig )
{


  {

}
}
void tests_sigfpe_done(void)
{


  {
  signal(8, (void (*)(int ))0);
  return;
}
}
#pragma merger("0","./mod.i","")
void __gmpz_add(mpz_ptr w , mpz_srcptr u , mpz_srcptr v ) ;
void __gmpz_mod(mpz_ptr rem , mpz_srcptr dividend , mpz_srcptr divisor ) ;
void __gmpz_tdiv_r(mpz_ptr rem , mpz_srcptr num , mpz_srcptr den ) ;
void __gmpz_mod(mpz_ptr rem , mpz_srcptr dividend , mpz_srcptr divisor )
{
  mp_size_t rn ;
  mp_size_t bn ;
  mpz_t temp_divisor ;
  struct tmp_reentrant_t *__tmp_marker ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___4 ;
  mp_ptr tmp___5 ;
  mp_srcptr tmp___6 ;
  mp_ptr tmp___7 ;
  long tmp___8 ;

  {
  __tmp_marker = (struct tmp_reentrant_t *)0;
  if (divisor->_mp_size >= 0) {
    bn = (mp_size_t )divisor->_mp_size;
  } else {
    bn = (mp_size_t )(- divisor->_mp_size);
  }
  if ((unsigned long )rem == (unsigned long )divisor) {
    tmp___3 = __builtin_expect((long )(((unsigned long )bn * sizeof(mp_limb_t ) <= 32512UL) != 0),
                               1L);
    if (tmp___3) {
      tmp___0 = alloca((unsigned long )bn * sizeof(mp_limb_t ));
      tmp___2 = tmp___0;
    } else {
      tmp___1 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )bn * sizeof(mp_limb_t ));
      tmp___2 = tmp___1;
    }
    temp_divisor[0]._mp_d = (mp_limb_t *)tmp___2;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (bn != 0L) {
          __n = bn - 1L;
          __dst = temp_divisor[0]._mp_d;
          __src = (mp_srcptr )divisor->_mp_d;
          tmp___4 = __src;
          __src ++;
          __x = (mp_limb_t )*tmp___4;
          if (__n != 0L) {
            while (1) {
              tmp___5 = __dst;
              __dst ++;
              *tmp___5 = __x;
              tmp___6 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___6;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___7 = __dst;
          __dst ++;
          *tmp___7 = __x;
        }
        break;
      }
      break;
    }
  } else {
    temp_divisor[0]._mp_d = (mp_limb_t *)divisor->_mp_d;
  }
  temp_divisor[0]._mp_size = (int )bn;
  divisor = (mpz_srcptr )(temp_divisor);
  __gmpz_tdiv_r(rem, dividend, divisor);
  rn = (mp_size_t )rem->_mp_size;
  if (rn < 0L) {
    __gmpz_add(rem, (mpz_srcptr )rem, divisor);
  }
  while (1) {
    tmp___8 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                               0L);
    if (tmp___8) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
#pragma merger("0","./mp_bases.i","")
struct bases const __gmpn_bases[257] =
  { {0, (mp_limb_t )0, (mp_limb_t )0, (mp_limb_t )0, (mp_limb_t )0},
        {0, (mp_limb_t )0, (mp_limb_t )0, (mp_limb_t )0, (mp_limb_t )0},
        {64, 0xffffffffffffffffUL, (mp_limb_t )2305843009213693951L, (mp_limb_t )1L,
      (mp_limb_t )0L},
        {40, 0xa1849cc1a9a9e94eUL, (mp_limb_t )3654674702153732339L, 0xa8b8b452291fe821UL,
      0x846d550e37b5063dUL},
        {32, (mp_limb_t )9223372036854775807L, (mp_limb_t )4611686018427387903L, (mp_limb_t )2L,
      (mp_limb_t )0L},
        {27, (mp_limb_t )7944580245325990804L, (mp_limb_t )5354001665492895103L, (mp_limb_t )7450580596923828125L,
      (mp_limb_t )4389219009585806480L},
        {24, (mp_limb_t )7136174729251683572L, (mp_limb_t )5960517711367426291L, (mp_limb_t )4738381338321616896L,
      0xf24f62335024a295UL},
        {22, (mp_limb_t )6570862817797657480L, (mp_limb_t )6473319721408181094L, (mp_limb_t )3909821048582988049L,
      (mp_limb_t )3311436332287857787L},
        {21, (mp_limb_t )6148914691236517205L, (mp_limb_t )6917529027641081855L, (mp_limb_t )3L,
      (mp_limb_t )0L},
        {20, (mp_limb_t )5819299846310655143L, (mp_limb_t )7309349404307464679L, 0xa8b8b452291fe821UL,
      0x846d550e37b5063dUL},
        {19, (mp_limb_t )5553023288523357132L, (mp_limb_t )7659844674706589055L, 0x8ac7230489e80000UL,
      0xd83c94fb6d2ac34aUL},
        {18, (mp_limb_t )5332304871797378696L, (mp_limb_t )7976906213687625599L, (mp_limb_t )5559917313492231481L,
      0xa8adf7ae45e7577bUL},
        {17, (mp_limb_t )5145589129593064978L, (mp_limb_t )8266360720581120243L, (mp_limb_t )2218611106740436992L,
      (mp_limb_t )725293664625659791L},
        {17, (mp_limb_t )4985014073672367066L, (mp_limb_t )8532633055092329421L, (mp_limb_t )8650415919381337933L,
      (mp_limb_t )1221811177982602947L},
        {16, (mp_limb_t )4845028753909919317L, (mp_limb_t )8779162730621875046L, (mp_limb_t )2177953337809371136L,
      (mp_limb_t )1083194941375204998L},
        {16, (mp_limb_t )4721592177278866261L, (mp_limb_t )9008676367646627443L, (mp_limb_t )6568408355712890625L,
      (mp_limb_t )7456210530580311880L},
        {16, (mp_limb_t )4611686018427387903L, (mp_limb_t )9223372036854775807L, (mp_limb_t )4L,
      (mp_limb_t )0L},
        {15, (mp_limb_t )4513005937949215078L, 0x82cc7edf592262cfUL, (mp_limb_t )2862423051509815793L,
      0x9c71e11bab279323UL},
        {15, (mp_limb_t )4423759196467348702L, 0x8570068e7ef5a1e7UL, (mp_limb_t )6746640616477458432L,
      (mp_limb_t )6771908161141959196L},
        {15, (mp_limb_t )4342527977544439139L, 0x87ef05ae409a0288UL, 0xd2ae3299c1c4aedbUL,
      (mp_limb_t )3968084960478751212L},
        {14, (mp_limb_t )4268174682390292935L, 0x8a4d3c25e68dc57fUL, (mp_limb_t )1638400000000000000L,
      (mp_limb_t )7514740218964586526L},
        {14, (mp_limb_t )4199774810910497481L, 0x8c8ddd448f8b845aUL, (mp_limb_t )3243919932521508681L,
      (mp_limb_t )7777883383142933049L},
        {14, (mp_limb_t )4136568435451526168L, 0x8eb3a9f01975077fUL, (mp_limb_t )6221821273427820544L,
      (mp_limb_t )8899136816040349448L},
        {14, (mp_limb_t )4077924488026412570L, 0x90c10500d63aa658UL, 0xa0e2073737609371UL,
      0x975a24b3a3151b38UL},
        {13, (mp_limb_t )4023314055634721944L, 0x92b803473f7ad0f3UL, (mp_limb_t )876488338465357824L,
      (mp_limb_t )5817866188870950321L},
        {13, (mp_limb_t )3972290122662995402L, 0x949a784bcd1b8afeUL, (mp_limb_t )1490116119384765625L,
      0x8c240c4aecb13bb5UL},
        {13, (mp_limb_t )3924472002590596649L, 0x966a008e4788cbcdUL, (mp_limb_t )2481152873203736576L,
      0xdbd2e56854e118c9UL},
        {13, (mp_limb_t )3879533230873770095L, 0x982809d5be7072dbUL, (mp_limb_t )4052555153018976267L,
      (mp_limb_t )2545096510337959086L},
        {13, (mp_limb_t )3837192046934227502L, 0x99d5d9fd5010b366UL, (mp_limb_t )6502111422497947648L,
      (mp_limb_t )7720322653532915254L},
        {13, (mp_limb_t )3797203836781402284L, 0x9b74948f5532da4bUL, 0x8e65137388122bcdUL,
      0xcc3dceaf2b8ba99dUL},
        {13, (mp_limb_t )3759355077168154060L, 0x9d053f6d26089673UL, 0xdd41bb36d259e000UL,
      (mp_limb_t )2896632828018546358L},
        {12, (mp_limb_t )3723458441692036594L, 0x9e88c6b3626a72aaUL, (mp_limb_t )787662783788549761L,
      (mp_limb_t )8554211627490636741L},
        {12, (mp_limb_t )3689348814741910323L, 0x9fffffffffffffffUL, (mp_limb_t )5L,
      (mp_limb_t )0L},
        {12, (mp_limb_t )3656880021114529889L, 0xa16bad3758efd873UL, (mp_limb_t )1667889514952984961L,
      (mp_limb_t )7055722057157820239L},
        {12, (mp_limb_t )3625922124509496818L, 0xa2cc7edf592262cfUL, (mp_limb_t )2386420683693101056L,
      0xeeb658123ffb27ecUL},
        {12, (mp_limb_t )3596359181735413296L, 0xa4231623369e78e5UL, (mp_limb_t )3379220508056640625L,
      (mp_limb_t )6727875791259825417L},
        {12, (mp_limb_t )3568087364625841786L, 0xa570068e7ef5a1e7UL, (mp_limb_t )4738381338321616896L,
      0xf24f62335024a295UL},
        {12, (mp_limb_t )3541013380677884621L, 0xa6b3d78b6d3b24fbUL, (mp_limb_t )6582952005840035281L,
      (mp_limb_t )7398983391647824751L},
        {12, (mp_limb_t )3515053137920566593L, 0xa7ef05ae409a0288UL, (mp_limb_t )9065737908494995456L,
      (mp_limb_t )320750109090444612L},
        {12, (mp_limb_t )3490130610661538925L, 0xa92203d587039cc1UL, 0xabd4211662a6b2a1UL,
      (mp_limb_t )9036257369786660172L},
        {12, (mp_limb_t )3466176871391941202L, 0xaa4d3c25e68dc57fUL, 0xe8d4a51000000000UL,
      (mp_limb_t )1835665529942118807L},
        {11, (mp_limb_t )3443129260865576763L, 0xab7110e6ce866f2bUL, (mp_limb_t )550329031716248441L,
      (mp_limb_t )875921737899245230L},
        {11, (mp_limb_t )3420930673662680137L, 0xac8ddd448f8b845aUL, (mp_limb_t )717368321110468608L,
      0x9b6e7507064ce7c7UL},
        {11, (mp_limb_t )3399528940736744109L, 0xada3f5fb9c415052UL, (mp_limb_t )929293739471222707L,
      (mp_limb_t )4439074510046490004L},
        {11, (mp_limb_t )3378876293776888740L, 0xaeb3a9f01975077fUL, (mp_limb_t )1196683881290399744L,
      0xed46bc50ce59712aUL},
        {11, (mp_limb_t )3358928898888048061L, 0xafbd42b465836767UL, (mp_limb_t )1532278301220703125L,
      0x813d97e2c89b8d46UL},
        {11, (mp_limb_t )3339646449241194820L, 0xb0c10500d63aa658UL, (mp_limb_t )1951354384207722496L,
      (mp_limb_t )3351088349429334147L},
        {11, (mp_limb_t )3320991808086413388L, 0xb1bf311e95d00de3UL, (mp_limb_t )2472159215084012303L,
      0xdd8e0a95e30c0988UL},
        {11, (mp_limb_t )3302930694937991567L, 0xb2b803473f7ad0f3UL, (mp_limb_t )3116402981210161152L,
      (mp_limb_t )8850942471693513063L},
        {11, (mp_limb_t )3285431408898828740L, 0xb3abb3faa02166ccUL, (mp_limb_t )3909821048582988049L,
      (mp_limb_t )3311436332287857787L},
        {11, (mp_limb_t )3268464584042821964L, 0xb49a784bcd1b8afeUL, (mp_limb_t )4882812500000000000L,
      0xe392010175ee5962UL},
        {11, (mp_limb_t )3252002972558867050L, 0xb5848226989d33c3UL, (mp_limb_t )6071163615208263051L,
      0x84eaf11b2fe7738eUL},
        {11, (mp_limb_t )3236021252010540844L, 0xb66a008e4788cbcdUL, (mp_limb_t )7516865509350965248L,
      (mp_limb_t )4187847864753887581L},
        {11, (mp_limb_t )3220495853606658866L, 0xb74b1fd64e0753c6UL, 0x80a23b117c8feb6dUL,
      0xfd7a462344ffce25UL},
        {11, (mp_limb_t )3205404808829844048L, 0xb82809d5be7072dbUL, 0x9dff7d32d5dc1800UL,
      0x9eca40b40ebcef8aUL},
        {11, (mp_limb_t )3190727612149101667L, 0xb900e6160002ccfeUL, 0xc155af6faeffe6a7UL,
      (mp_limb_t )5979115757459006525L},
        {11, (mp_limb_t )3176445097861124894L, 0xb9d5d9fd5010b366UL, 0xebb7392e00000000UL,
      (mp_limb_t )1587416389335462081L},
        {10, (mp_limb_t )3162539329374117971L, 0xbaa708f58014d37cUL, (mp_limb_t )362033331456891249L,
      0x97a014f8e3be55f1UL},
        {10, (mp_limb_t )3148993499475808360L, 0xbb74948f5532da4bUL, (mp_limb_t )430804206899405824L,
      (mp_limb_t )6236914525665173804L},
        {10, (mp_limb_t )3135791840320939511L, 0xbc3e9ca2e1a05533UL, (mp_limb_t )511116753300641401L,
      (mp_limb_t )2358334017762161810L},
        {10, (mp_limb_t )3122919542038546459L, 0xbd053f6d26089673UL, (mp_limb_t )604661760000000000L,
      0xe81ee46b9ef492f5UL},
        {10, (mp_limb_t )3110362679000358357L, 0xbdc899ab3ff56c5eUL, (mp_limb_t )713342911662882601L,
      0x9dc0d10d51940416UL},
        {10, (mp_limb_t )3098108142912568897L, 0xbe88c6b3626a72aaUL, (mp_limb_t )839299365868340224L,
      (mp_limb_t )6893020016967578277L},
        {10, (mp_limb_t )3086143581997128028L, 0xbf45e08bcf06554eUL, (mp_limb_t )984930291881790849L,
      (mp_limb_t )3146304802800330305L},
        {10, (mp_limb_t )3074457345618258602L, 0xbfffffffffffffffUL, (mp_limb_t )6L,
      (mp_limb_t )0L},
        {10, (mp_limb_t )3063038433787271299L, 0xc0b73cb42e16914cUL, (mp_limb_t )1346274334462890625L,
      0xb67759cc00287bf1UL},
        {10, (mp_limb_t )3051876451045762128L, 0xc16bad3758efd873UL, (mp_limb_t )1568336880910795776L,
      (mp_limb_t )8674530942417956147L},
        {10, (mp_limb_t )3040961564285454108L, 0xc21d6713f453f356UL, (mp_limb_t )1822837804551761449L,
      (mp_limb_t )4887913436082879424L},
        {10, (mp_limb_t )3030284464113569444L, 0xc2cc7edf592262cfUL, (mp_limb_t )2113922820157210624L,
      (mp_limb_t )1674754904173659145L},
        {10, (mp_limb_t )3019836329416769455L, 0xc379084815b5774cUL, (mp_limb_t )2446194060654759801L,
      0xe29fb54fd6b6074fUL},
        {10, (mp_limb_t )3009608794815287782L, 0xc4231623369e78e5UL, (mp_limb_t )2824752490000000000L,
      0xa1f1f5c210d54e62UL},
        {10, (mp_limb_t )2999593920732679540L, 0xc4caba789e2b8687UL, (mp_limb_t )3255243551009881201L,
      (mp_limb_t )7686658971922159538L},
        {10, (mp_limb_t )2989784165836270125L, 0xc570068e7ef5a1e7UL, (mp_limb_t )3743906242624487424L,
      (mp_limb_t )4275671023576624866L},
        {10, (mp_limb_t )2980172361629469723L, 0xc6130af40bc0ecbfUL, (mp_limb_t )4297625829703557649L,
      (mp_limb_t )1348043816445750555L},
        {10, (mp_limb_t )2970751689000098962L, 0xc6b3d78b6d3b24fbUL, (mp_limb_t )4923990397355877376L,
      0xdf86c03020404fa5UL},
        {10, (mp_limb_t )2961515656549154207L, 0xc7527b930c965bf2UL, (mp_limb_t )5631351470947265625L,
      0xa34adf02234eea8eUL},
        {10, (mp_limb_t )2952458080542376490L, 0xc7ef05ae409a0288UL, (mp_limb_t )6428888932339941376L,
      (mp_limb_t )8018355145004505565L},
        {10, (mp_limb_t )2943573066342875415L, 0xc88983ed6985bae5UL, (mp_limb_t )7326680472586200649L,
      (mp_limb_t )4775393713938791660L},
        {10, (mp_limb_t )2934854991197156472L, 0xc92203d587039cc1UL, (mp_limb_t )8335775831236199424L,
      (mp_limb_t )1964215494433875205L},
        {10, (mp_limb_t )2926298488259429481L, 0xc9b892675266f66cUL, 0x836612ee9c4ce1e1UL,
      0xf2c1b982203a0dacUL},
        {10, (mp_limb_t )2917898431750229649L, 0xca4d3c25e68dc57fUL, 0x9502f90000000000UL,
      0xb7cdfd9d7bdbab7dUL},
        {10, (mp_limb_t )2909649923155327571L, 0xcae00d1cfdeb43cfUL, 0xa8b8b452291fe821UL,
      0x846d550e37b5063dUL},
        {10, (mp_limb_t )2901548278379784990L, 0xcb7110e6ce866f2bUL, 0xbebf59a07dab4400UL,
      (mp_limb_t )6310421497414219343L},
        {10, (mp_limb_t )2893589015779954938L, 0xcc0052b18b0e2a19UL, 0xd7540d4093bc3109UL,
      (mp_limb_t )3484260285928714055L},
        {10, (mp_limb_t )2885767845003337541L, 0xcc8ddd448f8b845aUL, 0xf2b96616f1900000UL,
      (mp_limb_t )1008943534765668378L},
        {9, (mp_limb_t )2878080656572581837L, 0xcd19bb053fb0284eUL, (mp_limb_t )231616946283203125L,
      (mp_limb_t )4508881878799806164L},
        {9, (mp_limb_t )2870523512155652928L, 0xcda3f5fb9c415052UL, (mp_limb_t )257327417311663616L,
      (mp_limb_t )2215306005081913694L},
        {9, (mp_limb_t )2863092635469335877L, 0xce2c97d694adab3fUL, (mp_limb_t )285544154243029527L,
      (mp_limb_t )173535501737073545L},
        {9, (mp_limb_t )2855784403767887066L, 0xceb3a9f01975077fUL, (mp_limb_t )316478381828866048L,
      0xd24cde0463108cfaUL},
        {9, (mp_limb_t )2848595339872826648L, 0xcf393550f3aa6906UL, (mp_limb_t )350356403707485209L,
      0xa536009f37adc383UL},
        {9, (mp_limb_t )2841522104703641870L, 0xcfbd42b465836767UL, (mp_limb_t )387420489000000000L,
      (mp_limb_t )9001014287566294544L},
        {9, (mp_limb_t )2834561490272584081L, 0xd03fda8b97997f33UL, (mp_limb_t )427929800129788411L,
      (mp_limb_t )6402714793268525635L},
        {9, (mp_limb_t )2827710413109830779L, 0xd0c10500d63aa658UL, (mp_limb_t )472161363286556672L,
      (mp_limb_t )4074844504103867463L},
        {9, (mp_limb_t )2820965908088082179L, 0xd140c9faa1e5439eUL, (mp_limb_t )520411082988487293L,
      (mp_limb_t )1986763808586206432L},
        {9, (mp_limb_t )2814325122618199707L, 0xd1bf311e95d00de3UL, (mp_limb_t )572994802228616704L,
      (mp_limb_t )111581280935783908L},
        {9, (mp_limb_t )2807785311189798241L, 0xd23c41d42727c808UL, (mp_limb_t )630249409724609375L,
      0xd44da7da8e44b24fUL},
        {9, (mp_limb_t )2801343830232798622L, 0xd2b803473f7ad0f3UL, (mp_limb_t )692533995824480256L,
      0xaa2f78f1b4cc6794UL},
        {9, (mp_limb_t )2794998133277853080L, 0xd3327c6ab49ca6c8UL, (mp_limb_t )760231058654565217L,
      0x843c067d091ee4ccUL},
        {9, (mp_limb_t )2788745766395292424L, 0xd3abb3faa02166ccUL, (mp_limb_t )833747762130149888L,
      (mp_limb_t )7061747701095028451L},
        {9, (mp_limb_t )2782584363893827020L, 0xd423b07e986aa967UL, (mp_limb_t )913517247483640899L,
      (mp_limb_t )4834313827651540248L},
        {9, (mp_limb_t )2776511644261678566L, 0xd49a784bcd1b8afeUL, (mp_limb_t )1000000000000000000L,
      (mp_limb_t )2820903858849102350L},
        {9, (mp_limb_t )2770525406334139807L, 0xd510118708a8f8ddUL, (mp_limb_t )1093685272684360901L,
      (mp_limb_t )999113398942479695L},
        {9, (mp_limb_t )2764623525672766617L, 0xd5848226989d33c3UL, (mp_limb_t )1195092568622310912L,
      0xedeee175a736d2a1UL},
        {9, (mp_limb_t )2758803951142511892L, 0xd5f7cff41e09aeb8UL, (mp_limb_t )1304773183829244583L,
      0xc4699f3df8b6b328UL},
        {9, (mp_limb_t )2753064701674123138L, 0xd66a008e4788cbcdUL, (mp_limb_t )1423311812421484544L,
      0x9ebbe7d859cb5a7cUL},
        {9, (mp_limb_t )2747403863200053980L, 0xd6db196a761949d9UL, (mp_limb_t )1551328215978515625L,
      (mp_limb_t )8971886894907072889L},
        {9, (mp_limb_t )2741819585752991882L, 0xd74b1fd64e0753c6UL, (mp_limb_t )1689478959002692096L,
      (mp_limb_t )6729832194648419791L},
        {9, (mp_limb_t )2736310080716887037L, 0xd7ba18f93502e409UL, (mp_limb_t )1838459212420154507L,
      (mp_limb_t )4689638598127745842L},
        {9, (mp_limb_t )2730873618221086945L, 0xd82809d5be7072dbUL, (mp_limb_t )1999004627104432128L,
      (mp_limb_t )2831493749446410632L},
        {9, (mp_limb_t )2725508524668843253L, 0xd894f74b06ef8b40UL, (mp_limb_t )2171893279442309389L,
      (mp_limb_t )1137687752535318796L},
        {9, (mp_limb_t )2720213180392067139L, 0xd900e6160002ccfeUL, (mp_limb_t )2357947691000000000L,
      0xf4afa3e594f8ea1fUL},
        {9, (mp_limb_t )2714986017424771335L, 0xd96bdad2acb5f5efUL, (mp_limb_t )2558036924386500591L,
      0xcd85c32e9e4437b0UL},
        {9, (mp_limb_t )2709825517388155148L, 0xd9d5d9fd5010b366UL, (mp_limb_t )2773078757450186752L,
      0xa9bbb147e0dd92a8UL},
        {9, (mp_limb_t )2704730209480767123L, 0xda3ee7f38e181ed0UL, (mp_limb_t )3004041937984268273L,
      0x8900447b70e8eb82UL},
        {9, (mp_limb_t )2699698668567621807L, 0xdaa708f58014d37cUL, (mp_limb_t )3251948521156637184L,
      (mp_limb_t )7713138586418513034L},
        {9, (mp_limb_t )2694729513362555517L, 0xdb0e4126bcc86bd7UL, (mp_limb_t )3517876291919921875L,
      (mp_limb_t )5735627525209394917L},
        {9, (mp_limb_t )2689821404698483769L, 0xdb74948f5532da4bUL, (mp_limb_t )3802961274698203136L,
      (mp_limb_t )3922821531973793296L},
        {9, (mp_limb_t )2684973043880572797L, 0xdbda071cc67e6db5UL, (mp_limb_t )4108400332687853397L,
      (mp_limb_t )2259755985056284220L},
        {9, (mp_limb_t )2680183171117661540L, 0xdc3e9ca2e1a05533UL, (mp_limb_t )4435453859151328768L,
      (mp_limb_t )732937291865934199L},
        {9, (mp_limb_t )2675450564027570798L, 0xdca258dca9331635UL, (mp_limb_t )4785448563124474679L,
      0xed68b23033c3637eUL},
        {9, (mp_limb_t )2670774036212214843L, 0xdd053f6d26089673UL, (mp_limb_t )5159780352000000000L,
      0xc99cf624e50549c5UL},
        {9, (mp_limb_t )2666152435898689348L, 0xdd6753e032ea0efeUL, (mp_limb_t )5559917313492231481L,
      0xa8adf7ae45e7577bUL},
        {9, (mp_limb_t )2661584644642749667L, 0xddc899ab3ff56c5eUL, (mp_limb_t )5987402799531080192L,
      0x8a5bc740b1c113e5UL},
        {9, (mp_limb_t )2657069576091316739L, 0xde29142e0e01401fUL, (mp_limb_t )6443858614676334363L,
      (mp_limb_t )7956874260336589723L},
        {9, (mp_limb_t )2652606174800855463L, 0xde88c6b3626a72aaUL, (mp_limb_t )6930988311686938624L,
      (mp_limb_t )6101152389133917968L},
        {9, (mp_limb_t )2648193415108663601L, 0xdee7b471b3a9507dUL, (mp_limb_t )7450580596923828125L,
      (mp_limb_t )4389219009585806480L},
        {9, (mp_limb_t )2643830300054289122L, 0xdf45e08bcf06554eUL, (mp_limb_t )8004512848309157376L,
      (mp_limb_t )2808913414104863400L},
        {9, (mp_limb_t )2639515860348461512L, 0xdfa34e1177c23362UL, (mp_limb_t )8594754748609397887L,
      (mp_limb_t )1349188263742834337L},
        {9, (mp_limb_t )2635249153387078802L, 0xdfffffffffffffffUL, (mp_limb_t )7L, (mp_limb_t )0L},
        {9,
      (mp_limb_t )2631029262307937790L, 0xe05bf942dbbc2145UL, 0x894953f7ea890481UL,
      0xdd5deca404c0156dUL},
        {9, (mp_limb_t )2626855295088030977L, 0xe0b73cb42e16914cUL, 0x932abffea4848200UL,
      0xbd51373330291de0UL},
        {9, (mp_limb_t )2622726383679360704L, 0xe111cd1d5133412eUL, 0x9dacb687d3d6a163UL,
      0x9fa4025d66f23085UL},
        {9, (mp_limb_t )2618641683181339687L, 0xe16bad3758efd873UL, 0xa8d8102a44840000UL,
      0x842530ee2db4949dUL},
        {9, (mp_limb_t )2614600371047958067L, 0xe1c4dfab90aab5efUL, 0xb4b60f9d140541e5UL,
      (mp_limb_t )7685377879546518565L},
        {9, (mp_limb_t )2610601646328000871L, 0xe21d6713f453f356UL, 0xc15065d4856e4600UL,
      (mp_limb_t )5981725506854399629L},
        {9, (mp_limb_t )2606644728936696856L, 0xe27545fba4fe385aUL, 0xceb1363f396d23c7UL,
      (mp_limb_t )4400589818031720724L},
        {9, (mp_limb_t )2602728858957270688L, 0xe2cc7edf592262cfUL, 0xdce31b2488000000UL,
      (mp_limb_t )2932348590291359817L},
        {9, (mp_limb_t )2598853295970955516L, 0xe323142dc8c66b55UL, 0xebf12a24bca135c9UL,
      (mp_limb_t )1568198140717425353L},
        {9, (mp_limb_t )2595017318414102878L, 0xe379084815b5774cUL, 0xfbe6f8dbf88f4a00UL,
      (mp_limb_t )300078425853272048L},
        {8, (mp_limb_t )2591220222961101725L, 0xe3ce5d822ff4b643UL, (mp_limb_t )139353667211683681L,
      (mp_limb_t )630299571876989887L},
        {8, (mp_limb_t )2587461323931888561L, 0xe4231623369e78e5UL, (mp_limb_t )147578905600000000L,
      0xf3fbb43f68a32d05UL},
        {8, (mp_limb_t )2583739952722896638L, 0xe4773465d54aded7UL, (mp_limb_t )156225851787813921L,
      0xd84f44c48564dc19UL},
        {8, (mp_limb_t )2580055457260354037L, 0xe4caba789e2b8687UL, (mp_limb_t )165312903998914816L,
      0xbe58ebcce7956abeUL},
        {8, (mp_limb_t )2576407201474898615L, 0xe51daa7e60fdd34cUL, (mp_limb_t )174859124550883201L,
      0xa5fac463c7c134b7UL},
        {8, (mp_limb_t )2572794564796532489L, 0xe570068e7ef5a1e7UL, (mp_limb_t )184884258895036416L,
      0x8f19241e28c7d757UL},
        {8, (mp_limb_t )2569216941668990091L, 0xe5c1d0b53bc09fcaUL, (mp_limb_t )195408755062890625L,
      (mp_limb_t )8762435890762670510L},
        {8, (mp_limb_t )2565673741082642216L, 0xe6130af40bc0ecbfUL, (mp_limb_t )206453783524884736L,
      (mp_limb_t )7306777573418769984L},
        {8, (mp_limb_t )2562164386125103993L, 0xe663b741df9c37c0UL, (mp_limb_t )218041257467152161L,
      (mp_limb_t )5938145487572924559L},
        {8, (mp_limb_t )2558688313548757542L, 0xe6b3d78b6d3b24fbUL, (mp_limb_t )230193853492166656L,
      (mp_limb_t )4650796987787967805L},
        {8, (mp_limb_t )2555244973354440489L, 0xe7036db376537b90UL, (mp_limb_t )242935032749128801L,
      (mp_limb_t )3439403522920809969L},
        {8, (mp_limb_t )2551833828390589502L, 0xe7527b930c965bf2UL, (mp_limb_t )256289062500000000L,
      (mp_limb_t )2299018274770159614L},
        {8, (mp_limb_t )2548454353967163932L, 0xe7a102f9d39a9331UL, (mp_limb_t )270281038127131201L,
      (mp_limb_t )1225046518713602862L},
        {8, (mp_limb_t )2545106037483708413L, 0xe7ef05ae409a0288UL, (mp_limb_t )284936905588473856L,
      (mp_limb_t )213218461360320732L},
        {8, (mp_limb_t )2541788378070945239L, 0xe83c856dd81804b7UL, (mp_limb_t )300283484326400961L,
      0xeb72e35e7840d910UL},
        {8, (mp_limb_t )2538500886245317436L, 0xe88983ed6985bae5UL, (mp_limb_t )316348490636206336L,
      0xd27de19593dc3614UL},
        {8, (mp_limb_t )2535243083575931897L, 0xe8d602d948f83829UL, (mp_limb_t )333160561500390625L,
      0xbaf391fd3e5e6fc2UL},
        {8, (mp_limb_t )2532014502363378821L, 0xe92203d587039cc1UL, (mp_limb_t )350749278894882816L,
      0xa4bd38c55228c81dUL},
        {8, (mp_limb_t )2528814685329929115L, 0xe96d887e26cd57b7UL, (mp_limb_t )369145194573386401L,
      0x8fc5a8de8e1de782UL},
        {8, (mp_limb_t )2525643185320635369L, 0xe9b892675266f66cUL, (mp_limb_t )388379855336079616L,
      (mp_limb_t )8933213512086141499L},
        {8, (mp_limb_t )2522499565014884795L, 0xea03231d8d8224baUL, (mp_limb_t )408485828788939521L,
      (mp_limb_t )7585551826997730509L},
        {8, (mp_limb_t )2519383396647973916L, 0xea4d3c25e68dc57fUL, (mp_limb_t )429496729600000000L,
      (mp_limb_t )6312056711998053881L},
        {8, (mp_limb_t )2516294261742295199L, 0xea96defe264b59beUL, (mp_limb_t )451447246258894081L,
      (mp_limb_t )5108220663368689491L},
        {8, (mp_limb_t )2513231750847745003L, 0xeae00d1cfdeb43cfUL, (mp_limb_t )474373168346071296L,
      (mp_limb_t )3969835690602902439L},
        {8, (mp_limb_t )2510195463290980486L, 0xeb28c7f233bdd372UL, (mp_limb_t )498311414318121121L,
      (mp_limb_t )2892971735992356331L},
        {8, (mp_limb_t )2507185006933170356L, 0xeb7110e6ce866f2bUL, (mp_limb_t )523300059815673856L,
      (mp_limb_t )1873956768604442028L},
        {8, (mp_limb_t )2504199997935900734L, 0xebb8e95d3f7d9df2UL, (mp_limb_t )549378366500390625L,
      (mp_limb_t )909358413576441662L},
        {8, (mp_limb_t )2501240060534912890L, 0xec0052b18b0e2a19UL, (mp_limb_t )576586811427594496L,
      0xffe357ff59e6a004UL},
        {8, (mp_limb_t )2498304826821364348L, 0xec474e39705912d2UL, (mp_limb_t )604967116961135041L,
      0xe7dfd1be05fa61a8UL},
        {8, (mp_limb_t )2495393936530318802L, 0xec8ddd448f8b845aUL, (mp_limb_t )634562281237118976L,
      0xd11ed6fc78f760e5UL},
        {8, (mp_limb_t )2492507036836183533L, 0xecd4011c8f11979aUL, (mp_limb_t )665416609183179841L,
      0xbb8db609dd29ebfeUL},
        {8, (mp_limb_t )2489643782154825592L, 0xed19bb053fb0284eUL, (mp_limb_t )697575744100000000L,
      0xa71aec8d1813d532UL},
        {8, (mp_limb_t )2486803833952109960L, 0xed5f0c3cbf8fa470UL, (mp_limb_t )731086699811838561L,
      0x93b612a9f20fbc02UL},
        {8, (mp_limb_t )2483986860558614223L, 0xeda3f5fb9c415052UL, (mp_limb_t )765997893392859136L,
      0x814fc7b19a67d317UL},
        {8, (mp_limb_t )2481192536990285097L, 0xede87974f3c81855UL, (mp_limb_t )802359178476091681L,
      (mp_limb_t )8059649201372023676L},
        {8, (mp_limb_t )2478420544774812368L, 0xee2c97d694adab3fUL, (mp_limb_t )840221879151902976L,
      (mp_limb_t )6865198474163204462L},
        {8, (mp_limb_t )2475670571783505556L, 0xee7052491d2c3e64UL, (mp_limb_t )879638824462890625L,
      (mp_limb_t )5730960844607038086L},
        {8, (mp_limb_t )2472942312068467877L, 0xeeb3a9f01975077fUL, (mp_limb_t )920664383502155776L,
      (mp_limb_t )4653582509640737003L},
        {8, (mp_limb_t )2470235465704870873L, 0xeef69fea211b2627UL, (mp_limb_t )963354501121950081L,
      (mp_limb_t )3629914007806386331L},
        {8, (mp_limb_t )2467549738638141500L, 0xef393550f3aa6906UL, (mp_limb_t )1007766734259732736L,
      (mp_limb_t )2656996712278053361L},
        {8, (mp_limb_t )2464884842535881406L, 0xef7b6b399471103eUL, (mp_limb_t )1053960288888713761L,
      (mp_limb_t )1732050285784837359L},
        {8, (mp_limb_t )2462240494644345758L, 0xefbd42b465836767UL, (mp_limb_t )1101996057600000000L,
      (mp_limb_t )852461024062527715L},
        {8, (mp_limb_t )2459616417649316204L, 0xeffebccd41ffcd5cUL, (mp_limb_t )1151936657823500641L,
      (mp_limb_t )15771020429657595L},
        {8, (mp_limb_t )2457012339541209458L, 0xf03fda8b97997f33UL, (mp_limb_t )1203846470694789376L,
      0xea5768860b62e8d8UL},
        {8, (mp_limb_t )2454427993484269569L, 0xf0809cf27f703d52UL, (mp_limb_t )1257791680575160641L,
      0xd54faf5b635c5005UL},
        {8, (mp_limb_t )2451863117689698182L, 0xf0c10500d63aa658UL, (mp_limb_t )1313840315232157696L,
      0xc14a56233a377926UL},
        {8, (mp_limb_t )2449317455292583109L, 0xf10113b153c8ea7bUL, (mp_limb_t )1372062286687890625L,
      0xae39a88db7cd329fUL},
        {8, (mp_limb_t )2446790754232491178L, 0xf140c9faa1e5439eUL, (mp_limb_t )1432529432742502656L,
      0x9c10bde69efa7ab6UL},
        {8, (mp_limb_t )2444282767137596804L, 0xf18028cf72976a4eUL, (mp_limb_t )1495315559180183521L,
      0x8ac36c42a2836497UL},
        {8, (mp_limb_t )2441793251212222886L, 0xf1bf311e95d00de3UL, (mp_limb_t )1560496482665168896L,
      (mp_limb_t )8810796290925784935L},
        {8, (mp_limb_t )2439321968127675595L, 0xf1fde3d30e812642UL, (mp_limb_t )1628150074335205281L,
      (mp_limb_t )7678179258364132683L},
        {8, (mp_limb_t )2436868683916259342L, 0xf23c41d42727c808UL, (mp_limb_t )1698356304100000000L,
      (mp_limb_t )6598233686512434262L},
        {8, (mp_limb_t )2434433168868362721L, 0xf27a4c0585cbf805UL, (mp_limb_t )1771197285652216321L,
      (mp_limb_t )5568252002492279024L},
        {8, (mp_limb_t )2432015197432510552L, 0xf2b803473f7ad0f3UL, (mp_limb_t )1846757322198614016L,
      (mp_limb_t )4585678948974284207L},
        {8, (mp_limb_t )2429614548118281242L, 0xf2f56875eb3f2614UL, (mp_limb_t )1925122952918976001L,
      (mp_limb_t )3648102284349283882L},
        {8, (mp_limb_t )2427231003401992634L, 0xf3327c6ab49ca6c8UL, (mp_limb_t )2006383000160502016L,
      (mp_limb_t )2753244094907640162L},
        {8, (mp_limb_t )2424864349635063280L, 0xf36f3ffb6d916240UL, (mp_limb_t )2090628617375390625L,
      (mp_limb_t )1898952675872310686L},
        {8, (mp_limb_t )2422514376954959658L, 0xf3abb3faa02166ccUL, (mp_limb_t )2177953337809371136L,
      (mp_limb_t )1083194941375204998L},
        {8, (mp_limb_t )2420180879198643309L, 0xf3e7d9379f70166aUL, (mp_limb_t )2268453123948987361L,
      (mp_limb_t )304049326451462858L},
        {8, (mp_limb_t )2417863653818435139L, 0xf423b07e986aa967UL, (mp_limb_t )2362226417735475456L,
      0xf3c77969ee4be5a2UL},
        {8, (mp_limb_t )2415562501800217314L, 0xf45f3a98a20738a4UL, (mp_limb_t )2459374191553118401L,
      0xe00993cc187c5ec9UL},
        {8, (mp_limb_t )2413277227583896156L, 0xf49a784bcd1b8afeUL, (mp_limb_t )2560000000000000000L,
      0xcd2b297d889bc2b6UL},
        {8, (mp_limb_t )2411007638986052350L, 0xf4d56a5b33cec44aUL, (mp_limb_t )2664210032449121601L,
      0xbb214d5064862b22UL},
        {8, (mp_limb_t )2408753547124707540L, 0xf510118708a8f8ddUL, (mp_limb_t )2772113166407885056L,
      0xa9e1a7ca7ea10e20UL},
        {8, (mp_limb_t )2406514766346139020L, 0xf54a6e8ca5438db1UL, (mp_limb_t )2883821021683985761L,
      0x99626e72b39ea0cfUL},
        {8, (mp_limb_t )2404291114153676767L, 0xf5848226989d33c3UL, (mp_limb_t )2999448015365799936L,
      0x899a5ba9c13fafd9UL},
        {8, (mp_limb_t )2402082411138419511L, 0xf5be4d0cb51434aaUL, (mp_limb_t )3119111417625390625L,
      (mp_limb_t )8827238910521153279L},
        {8, (mp_limb_t )2399888480911808819L, 0xf5f7cff41e09aeb8UL, (mp_limb_t )3242931408352297216L,
      (mp_limb_t )7785877285820892202L},
        {8, (mp_limb_t )2397709150040002456L, 0xf6310b8f55304840UL, (mp_limb_t )3371031134626313601L,
      (mp_limb_t )6789033447421199581L},
        {8, (mp_limb_t )2395544247979990368L, 0xf66a008e4788cbcdUL, (mp_limb_t )3503536769037500416L,
      (mp_limb_t )5834602844651862405L},
        {8, (mp_limb_t )2393393607017398726L, 0xf6a2af9e5a0f0a08UL, (mp_limb_t )3640577568861717121L,
      (mp_limb_t )4920589850954839479L},
        {8, (mp_limb_t )2391257062205929419L, 0xf6db196a761949d9UL, (mp_limb_t )3782285936100000000L,
      (mp_limb_t )4045101642733773173L},
        {8, (mp_limb_t )2389134451308384260L, 0xf7133e9b156c7be5UL, (mp_limb_t )3928797478390152481L,
      (mp_limb_t )3206342449114420334L},
        {8, (mp_limb_t )2387025614739224999L, 0xf74b1fd64e0753c6UL, (mp_limb_t )4080251070798954496L,
      (mp_limb_t )2402608148524393455L},
        {8, (mp_limb_t )2384930395508621967L, 0xf782bdbfdda6577bUL, (mp_limb_t )4236788918503437921L,
      (mp_limb_t )1632281189669423529L},
        {8, (mp_limb_t )2382848639167945830L, 0xf7ba18f93502e409UL, (mp_limb_t )4398556620369715456L,
      (mp_limb_t )893825816029439228L},
        {8, (mp_limb_t )2380780193756658552L, 0xf7f1322182cf15d1UL, (mp_limb_t )4565703233437890625L,
      (mp_limb_t )185783574430650379L},
        {8, (mp_limb_t )2378724909750561190L, 0xf82809d5be7072dbUL, (mp_limb_t )4738381338321616896L,
      0xf24f62335024a295UL},
        {8, (mp_limb_t )2376682640011357634L, 0xf85ea0b0b27b2610UL, (mp_limb_t )4916747105530914241L,
      0xe03b98f103fad6d2UL},
        {8, (mp_limb_t )2374653239737494792L, 0xf894f74b06ef8b40UL, (mp_limb_t )5100960362726891776L,
      0xcee3d32cad2a9049UL},
        {8, (mp_limb_t )2372636566416241136L, 0xf8cb0e3b4b3bbdb3UL, (mp_limb_t )5291184662917065441L,
      0xbe3f9df9277fdadaUL},
        {8, (mp_limb_t )2370632479776966778L, 0xf900e6160002ccfeUL, (mp_limb_t )5487587353600000000L,
      0xae46f0d94c05e933UL},
        {8, (mp_limb_t )2368640841745589541L, 0xf9367f6da0ab2e9cUL, (mp_limb_t )5690339646868044961L,
      0x9ef2280fb437a33dUL},
        {8, (mp_limb_t )2366661516400152686L, 0xf96bdad2acb5f5efUL, (mp_limb_t )5899616690476974336L,
      0x9039ff426d3f284bUL},
        {8, (mp_limb_t )2364694369927501129L, 0xf9a0f8d3b0e04fdeUL, (mp_limb_t )6115597639891380481L,
      0x82178c6d6b51f8f4UL},
        {8, (mp_limb_t )2362739270581024077L, 0xf9d5d9fd5010b366UL, (mp_limb_t )6338465731314712576L,
      (mp_limb_t )8395900609198415955L},
        {8, (mp_limb_t )2360796088639433130L, 0xfa0a7eda4c112ce6UL, (mp_limb_t )6568408355712890625L,
      (mp_limb_t )7456210530580311880L},
        {8, (mp_limb_t )2358864696366545887L, 0xfa3ee7f38e181ed0UL, (mp_limb_t )6805617133840466176L,
      (mp_limb_t )6553366880880271337L},
        {8, (mp_limb_t )2356944967972046118L, 0xfa7315d02f20c7bdUL, (mp_limb_t )7050287992278341281L,
      (mp_limb_t )5685771313862173054L},
        {8, (mp_limb_t )2355036779573192525L, 0xfaa708f58014d37cUL, (mp_limb_t )7302621240492097536L,
      (mp_limb_t )4851901420467005963L},
        {8, (mp_limb_t )2353140009157449008L, 0xfadac1e711c832d1UL, (mp_limb_t )7562821648920027361L,
      (mp_limb_t )4050306810039033297L},
        {8, (mp_limb_t )2351254536546010289L, 0xfb0e4126bcc86bd7UL, (mp_limb_t )7831098528100000000L,
      (mp_limb_t )3279605409694189410L},
        {8, (mp_limb_t )2349380243358197550L, 0xfb418734a9008bd9UL, (mp_limb_t )8107665808844335041L,
      (mp_limb_t )2538479968809428309L},
        {8, (mp_limb_t )2347517012976699607L, 0xfb74948f5532da4bUL, (mp_limb_t )8392742123471896576L,
      (mp_limb_t )1825674756440979710L},
        {8, (mp_limb_t )2345664730513635911L, 0xfba769b39e49640eUL, (mp_limb_t )8686550888106661441L,
      (mp_limb_t )1139992440252614927L},
        {8, (mp_limb_t )2343823282777418451L, 0xfbda071cc67e6db5UL, (mp_limb_t )8989320386052055296L,
      (mp_limb_t )480291136256095203L},
        {8, (mp_limb_t )2341992558240390342L, 0xfc0c6d447c5dd362UL, 0x8114cc6220762061UL,
      0xfbb614b3f2d3b14cUL},
        {8, (mp_limb_t )2340172447007219630L, 0xfc3e9ca2e1a05533UL, 0x858aa0135be10000UL,
      0xeac0f8837fb05773UL},
        {8, (mp_limb_t )2338362840784027491L, 0xfc7095ae91e1c760UL, 0x8a22d3b53c54c321UL,
      0xda6e4c10e8615ca5UL},
        {8, (mp_limb_t )2336563632848230697L, 0xfca258dca9331635UL, 0x8ede496339f34100UL,
      0xcab755a8d01fa67fUL},
        {8, (mp_limb_t )2334774718019078824L, 0xfcd3e6a0ca8906c2UL, 0x93bde80aec3a1481UL,
      0xbb95a9ae71aa3e0cUL},
        {8, (mp_limb_t )2332995992628867318L, 0xfd053f6d26089673UL, 0x98c29b8100000000UL,
      0xad0326c296b4f529UL},
        {8, (mp_limb_t )2331227354494808114L, 0xfd3663b27f31d529UL, 0x9ded549671832381UL,
      0x9ef9f21eed31b7c1UL},
        {8, (mp_limb_t )2329468702891540074L, 0xfd6753e032ea0efeUL, 0xa33f092e0b1ac100UL,
      0x91747422be14b0b2UL},
        {8, (mp_limb_t )2327719938524262057L, 0xfd9810643d6614c3UL, 0xa8b8b452291fe821UL,
      0x846d550e37b5063dUL},
        {8, (mp_limb_t )2325980963502471983L, 0xfdc899ab3ff56c5eUL, 0xae5b564ac3a10000UL,
      (mp_limb_t )8637756654796670710L},
        {8, (mp_limb_t )2324251681314295743L, 0xfdf8f02086af2c4bUL, 0xb427f4b3be74c361UL,
      (mp_limb_t )7765896352122785986L},
        {8, (mp_limb_t )2322531996801390311L, 0xfe29142e0e01401fUL, 0xba1f9a938041e100UL,
      (mp_limb_t )6925482919162912327L},
        {8, (mp_limb_t )2320821816134405901L, 0xfe59063c8822ce56UL, 0xc0435871d1110f41UL,
      (mp_limb_t )6115261122828324886L},
        {8, (mp_limb_t )2319121046788992460L, 0xfe88c6b3626a72aaUL, 0xc694446f01000000UL,
      (mp_limb_t )5334030624670059544L},
        {8, (mp_limb_t )2317429597522336233L, 0xfeb855f8ca88fb0dUL, 0xcd137a5b57ac3ec1UL,
      (mp_limb_t )4580643372342576445L},
        {8, (mp_limb_t )2315747378350212587L, 0xfee7b471b3a9507dUL, 0xd3c21bcecceda100UL,
      (mp_limb_t )3854001124821071525L},
        {8, (mp_limb_t )2314074300524541659L, 0xff16e281db76303bUL, 0xdaa150410b788de1UL,
      (mp_limb_t )3153053104015693539L},
        {8, (mp_limb_t )2312410276511433837L, 0xff45e08bcf06554eUL, 0xe1b24521be010000UL,
      (mp_limb_t )2476793765857763165L},
        {8, (mp_limb_t )2310755219969712437L, 0xff74aef0efafadd7UL, 0xe8f62df12777c1a1UL,
      (mp_limb_t )1824260684337996716L},
        {8, (mp_limb_t )2309109045729901331L, 0xffa34e1177c23362UL, 0xf06e445906fc0100UL,
      (mp_limb_t )1194532542356487571L},
        {8, (mp_limb_t )2307471669773665640L, 0xffd1be4c7f2af942UL, 0xf81bc845c81bf801UL,
      (mp_limb_t )586727223600447823L},
        {8, (mp_limb_t )2305843009213693951L, 0xffffffffffffffffUL, (mp_limb_t )8L, (mp_limb_t )0L}};
#pragma merger("0","./mp_bpl.i","")
int const __gmp_bits_per_limb ;
int __gmp_junk ;
int const __gmp_bits_per_limb = (int const )64;
int const __gmp_0 = (int const )0;
#pragma merger("0","./mp_clz_tab.i","")
unsigned char const __gmpn_clz_tab[129] =
  { (unsigned char const )1, (unsigned char const )2, (unsigned char const )3, (unsigned char const )3,
        (unsigned char const )4, (unsigned char const )4, (unsigned char const )4, (unsigned char const )4,
        (unsigned char const )5, (unsigned char const )5, (unsigned char const )5, (unsigned char const )5,
        (unsigned char const )5, (unsigned char const )5, (unsigned char const )5, (unsigned char const )5,
        (unsigned char const )6, (unsigned char const )6, (unsigned char const )6, (unsigned char const )6,
        (unsigned char const )6, (unsigned char const )6, (unsigned char const )6, (unsigned char const )6,
        (unsigned char const )6, (unsigned char const )6, (unsigned char const )6, (unsigned char const )6,
        (unsigned char const )6, (unsigned char const )6, (unsigned char const )6, (unsigned char const )6,
        (unsigned char const )7, (unsigned char const )7, (unsigned char const )7, (unsigned char const )7,
        (unsigned char const )7, (unsigned char const )7, (unsigned char const )7, (unsigned char const )7,
        (unsigned char const )7, (unsigned char const )7, (unsigned char const )7, (unsigned char const )7,
        (unsigned char const )7, (unsigned char const )7, (unsigned char const )7, (unsigned char const )7,
        (unsigned char const )7, (unsigned char const )7, (unsigned char const )7, (unsigned char const )7,
        (unsigned char const )7, (unsigned char const )7, (unsigned char const )7, (unsigned char const )7,
        (unsigned char const )7, (unsigned char const )7, (unsigned char const )7, (unsigned char const )7,
        (unsigned char const )7, (unsigned char const )7, (unsigned char const )7, (unsigned char const )7,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )8, (unsigned char const )8, (unsigned char const )8, (unsigned char const )8,
        (unsigned char const )9};
#pragma merger("0","./mp_dv_tab.i","")
unsigned char const __gmp_digit_value_tab[464] ;
unsigned char const __gmp_digit_value_tab[464] =
  { (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )0, (unsigned char const )1, (unsigned char const )2, (unsigned char const )3,
        (unsigned char const )4, (unsigned char const )5, (unsigned char const )6, (unsigned char const )7,
        (unsigned char const )8, (unsigned char const )9, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )10, (unsigned char const )11, (unsigned char const )12,
        (unsigned char const )13, (unsigned char const )14, (unsigned char const )15, (unsigned char const )16,
        (unsigned char const )17, (unsigned char const )18, (unsigned char const )19, (unsigned char const )20,
        (unsigned char const )21, (unsigned char const )22, (unsigned char const )23, (unsigned char const )24,
        (unsigned char const )25, (unsigned char const )26, (unsigned char const )27, (unsigned char const )28,
        (unsigned char const )29, (unsigned char const )30, (unsigned char const )31, (unsigned char const )32,
        (unsigned char const )33, (unsigned char const )34, (unsigned char const )35, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )10, (unsigned char const )11, (unsigned char const )12,
        (unsigned char const )13, (unsigned char const )14, (unsigned char const )15, (unsigned char const )16,
        (unsigned char const )17, (unsigned char const )18, (unsigned char const )19, (unsigned char const )20,
        (unsigned char const )21, (unsigned char const )22, (unsigned char const )23, (unsigned char const )24,
        (unsigned char const )25, (unsigned char const )26, (unsigned char const )27, (unsigned char const )28,
        (unsigned char const )29, (unsigned char const )30, (unsigned char const )31, (unsigned char const )32,
        (unsigned char const )33, (unsigned char const )34, (unsigned char const )35, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )0, (unsigned char const )1, (unsigned char const )2, (unsigned char const )3,
        (unsigned char const )4, (unsigned char const )5, (unsigned char const )6, (unsigned char const )7,
        (unsigned char const )8, (unsigned char const )9, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )10, (unsigned char const )11, (unsigned char const )12,
        (unsigned char const )13, (unsigned char const )14, (unsigned char const )15, (unsigned char const )16,
        (unsigned char const )17, (unsigned char const )18, (unsigned char const )19, (unsigned char const )20,
        (unsigned char const )21, (unsigned char const )22, (unsigned char const )23, (unsigned char const )24,
        (unsigned char const )25, (unsigned char const )26, (unsigned char const )27, (unsigned char const )28,
        (unsigned char const )29, (unsigned char const )30, (unsigned char const )31, (unsigned char const )32,
        (unsigned char const )33, (unsigned char const )34, (unsigned char const )35, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )36, (unsigned char const )37, (unsigned char const )38,
        (unsigned char const )39, (unsigned char const )40, (unsigned char const )41, (unsigned char const )42,
        (unsigned char const )43, (unsigned char const )44, (unsigned char const )45, (unsigned char const )46,
        (unsigned char const )47, (unsigned char const )48, (unsigned char const )49, (unsigned char const )50,
        (unsigned char const )51, (unsigned char const )52, (unsigned char const )53, (unsigned char const )54,
        (unsigned char const )55, (unsigned char const )56, (unsigned char const )57, (unsigned char const )58,
        (unsigned char const )59, (unsigned char const )60, (unsigned char const )61, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255,
        (unsigned char const )255, (unsigned char const )255, (unsigned char const )255, (unsigned char const )255};
#pragma merger("0","./mp_minv_tab.i","")
unsigned char const __gmp_binvert_limb_table[128] =
  { (unsigned char const )1, (unsigned char const )171, (unsigned char const )205, (unsigned char const )183,
        (unsigned char const )57, (unsigned char const )163, (unsigned char const )197, (unsigned char const )239,
        (unsigned char const )241, (unsigned char const )27, (unsigned char const )61, (unsigned char const )167,
        (unsigned char const )41, (unsigned char const )19, (unsigned char const )53, (unsigned char const )223,
        (unsigned char const )225, (unsigned char const )139, (unsigned char const )173, (unsigned char const )151,
        (unsigned char const )25, (unsigned char const )131, (unsigned char const )165, (unsigned char const )207,
        (unsigned char const )209, (unsigned char const )251, (unsigned char const )29, (unsigned char const )135,
        (unsigned char const )9, (unsigned char const )243, (unsigned char const )21, (unsigned char const )191,
        (unsigned char const )193, (unsigned char const )107, (unsigned char const )141, (unsigned char const )119,
        (unsigned char const )249, (unsigned char const )99, (unsigned char const )133, (unsigned char const )175,
        (unsigned char const )177, (unsigned char const )219, (unsigned char const )253, (unsigned char const )103,
        (unsigned char const )233, (unsigned char const )211, (unsigned char const )245, (unsigned char const )159,
        (unsigned char const )161, (unsigned char const )75, (unsigned char const )109, (unsigned char const )87,
        (unsigned char const )217, (unsigned char const )67, (unsigned char const )101, (unsigned char const )143,
        (unsigned char const )145, (unsigned char const )187, (unsigned char const )221, (unsigned char const )71,
        (unsigned char const )201, (unsigned char const )179, (unsigned char const )213, (unsigned char const )127,
        (unsigned char const )129, (unsigned char const )43, (unsigned char const )77, (unsigned char const )55,
        (unsigned char const )185, (unsigned char const )35, (unsigned char const )69, (unsigned char const )111,
        (unsigned char const )113, (unsigned char const )155, (unsigned char const )189, (unsigned char const )39,
        (unsigned char const )169, (unsigned char const )147, (unsigned char const )181, (unsigned char const )95,
        (unsigned char const )97, (unsigned char const )11, (unsigned char const )45, (unsigned char const )23,
        (unsigned char const )153, (unsigned char const )3, (unsigned char const )37, (unsigned char const )79,
        (unsigned char const )81, (unsigned char const )123, (unsigned char const )157, (unsigned char const )7,
        (unsigned char const )137, (unsigned char const )115, (unsigned char const )149, (unsigned char const )63,
        (unsigned char const )65, (unsigned char const )235, (unsigned char const )13, (unsigned char const )247,
        (unsigned char const )121, (unsigned char const )227, (unsigned char const )5, (unsigned char const )47,
        (unsigned char const )49, (unsigned char const )91, (unsigned char const )125, (unsigned char const )231,
        (unsigned char const )105, (unsigned char const )83, (unsigned char const )117, (unsigned char const )31,
        (unsigned char const )33, (unsigned char const )203, (unsigned char const )237, (unsigned char const )215,
        (unsigned char const )89, (unsigned char const )195, (unsigned char const )229, (unsigned char const )15,
        (unsigned char const )17, (unsigned char const )59, (unsigned char const )93, (unsigned char const )199,
        (unsigned char const )73, (unsigned char const )51, (unsigned char const )85, (unsigned char const )255};
#pragma merger("0","./mp_set_fns.i","")
void __gmp_set_memory_functions(void *(*alloc_func)(size_t ) , void *(*realloc_func)(void * ,
                                                                                      size_t ,
                                                                                      size_t ) ,
                                void (*free_func)(void * , size_t ) ) ;
void __gmp_set_memory_functions(void *(*alloc_func)(size_t ) , void *(*realloc_func)(void * ,
                                                                                      size_t ,
                                                                                      size_t ) ,
                                void (*free_func)(void * , size_t ) )
{


  {
  if ((unsigned long )alloc_func == (unsigned long )((void *(*)(size_t ))0)) {
    alloc_func = & __gmp_default_allocate;
  }
  if ((unsigned long )realloc_func == (unsigned long )((void *(*)(void * , size_t ,
                                                                  size_t ))0)) {
    realloc_func = & __gmp_default_reallocate;
  }
  if ((unsigned long )free_func == (unsigned long )((void (*)(void * , size_t ))0)) {
    free_func = & __gmp_default_free;
  }
  __gmp_allocate_func = alloc_func;
  __gmp_reallocate_func = realloc_func;
  __gmp_free_func = free_func;
  return;
}
}
#pragma merger("0","./mu_div_qr.i","")
mp_limb_t __gmpn_mu_div_qr(mp_ptr qp , mp_ptr rp , mp_srcptr np , mp_size_t nn , mp_srcptr dp ,
                           mp_size_t dn , mp_ptr scratch ) ;
mp_size_t __gmpn_mu_div_qr_itch(mp_size_t nn , mp_size_t dn , int mua_k ) __attribute__((__const__)) ;
mp_size_t __gmpn_mu_div_qr_choose_in(mp_size_t qn , mp_size_t dn , int k ) ;
mp_limb_t __gmpn_preinv_mu_div_qr(mp_ptr qp , mp_ptr rp , mp_srcptr np , mp_size_t nn ,
                                  mp_srcptr dp , mp_size_t dn , mp_srcptr ip , mp_size_t in ,
                                  mp_ptr scratch ) ;
mp_size_t __gmpn_preinv_mu_div_qr_itch(mp_size_t nn , mp_size_t dn , mp_size_t in ) __attribute__((__const__)) ;
static mp_limb_t mpn_mu_div_qr2(mp_ptr qp , mp_ptr rp , mp_srcptr np , mp_size_t nn ,
                                mp_srcptr dp , mp_size_t dn , mp_ptr scratch ) ;
mp_limb_t __gmpn_mu_div_qr(mp_ptr qp , mp_ptr rp , mp_srcptr np , mp_size_t nn , mp_srcptr dp ,
                           mp_size_t dn , mp_ptr scratch )
{
  mp_size_t qn ;
  mp_limb_t cy ;
  mp_limb_t qh ;
  mp_limb_t tmp ;

  {
  qn = nn - dn;
  if (qn + 100L < dn) {
    qh = mpn_mu_div_qr2(qp, (rp + nn) - (2L * qn + 1L), (np + nn) - (2L * qn + 1L),
                        2L * qn + 1L, (dp + dn) - (qn + 1L), qn + 1L, scratch);
    if (dn - (qn + 1L) > qn) {
      __gmpn_mul(scratch, dp, dn - (qn + 1L), (mp_srcptr )qp, qn);
    } else {
      __gmpn_mul(scratch, (mp_srcptr )qp, qn, dp, dn - (qn + 1L));
    }
    if (qh) {
      cy = __gmpn_add_n(scratch + qn, (mp_srcptr )(scratch + qn), dp, dn - (qn + 1L));
    } else {
      cy = (mp_limb_t )0;
    }
    *(scratch + (dn - 1L)) = cy;
    cy = __gmpn_sub_n(rp, np, (mp_srcptr )scratch, nn - (2L * qn + 1L));
    cy = mpn_sub_nc((rp + nn) - (2L * qn + 1L), (mp_srcptr )((rp + nn) - (2L * qn + 1L)),
                    (mp_srcptr )((scratch + nn) - (2L * qn + 1L)), qn + 1L, cy);
    if (cy) {
      tmp = __gmpn_sub_1(qp, (mp_srcptr )qp, qn, (mp_limb_t )1);
      qh -= tmp;
      __gmpn_add_n(rp, (mp_srcptr )rp, dp, dn);
    }
  } else {
    qh = mpn_mu_div_qr2(qp, rp, np, nn, dp, dn, scratch);
  }
  return (qh);
}
}
static mp_limb_t mpn_mu_div_qr2(mp_ptr qp , mp_ptr rp , mp_srcptr np , mp_size_t nn ,
                                mp_srcptr dp , mp_size_t dn , mp_ptr scratch )
{
  mp_size_t qn ;
  mp_size_t in ;
  mp_limb_t cy ;
  mp_limb_t qh ;
  mp_ptr ip ;
  mp_ptr tp ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp ;
  mp_ptr tmp___0 ;
  mp_srcptr tmp___1 ;
  mp_ptr tmp___2 ;
  mp_size_t __n___0 ;
  mp_ptr __dst___0 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___0 ;
  mp_srcptr tmp___3 ;
  mp_ptr tmp___4 ;
  mp_srcptr tmp___5 ;
  mp_ptr tmp___6 ;
  mp_ptr __dst___1 ;
  mp_size_t __n___1 ;
  mp_ptr tmp___7 ;
  mp_size_t __n___2 ;
  mp_ptr __dst___2 ;
  mp_srcptr __src___1 ;
  mp_limb_t __x___1 ;
  mp_srcptr tmp___8 ;
  mp_ptr tmp___9 ;
  mp_srcptr tmp___10 ;
  mp_ptr tmp___11 ;
  long tmp___12 ;

  {
  while (1) {
    break;
  }
  qn = nn - dn;
  in = __gmpn_mu_div_qr_choose_in(qn, dn, 0);
  while (1) {
    break;
  }
  ip = scratch;
  tp = (scratch + in) + 1;
  if (dn == in) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (in != 0L) {
          __n = in - 1L;
          __dst = tp + 1;
          __src = dp;
          tmp = __src;
          __src ++;
          __x = (mp_limb_t )*tmp;
          if (__n != 0L) {
            while (1) {
              tmp___0 = __dst;
              __dst ++;
              *tmp___0 = __x;
              tmp___1 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___1;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___2 = __dst;
          __dst ++;
          *tmp___2 = __x;
        }
        break;
      }
      break;
    }
    *(tp + 0) = (mp_limb_t )1;
    __gmpn_invertappr(ip, (mp_srcptr )tp, in + 1L, (tp + in) + 1);
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      if (in != 0L) {
        __n___0 = in - 1L;
        __dst___0 = ip;
        __src___0 = (mp_srcptr )(ip + 1);
        tmp___3 = __src___0;
        __src___0 ++;
        __x___0 = (mp_limb_t )*tmp___3;
        if (__n___0 != 0L) {
          while (1) {
            tmp___4 = __dst___0;
            __dst___0 ++;
            *tmp___4 = __x___0;
            tmp___5 = __src___0;
            __src___0 ++;
            __x___0 = (mp_limb_t )*tmp___5;
            __n___0 --;
            if (! __n___0) {
              break;
            }
          }
        }
        tmp___6 = __dst___0;
        __dst___0 ++;
        *tmp___6 = __x___0;
      }
      break;
    }
  } else {
    cy = __gmpn_add_1(tp, (dp + dn) - (in + 1L), in + 1L, (mp_limb_t )1);
    tmp___12 = __builtin_expect((long )((cy != 0UL) != 0), 0L);
    if (tmp___12) {
      while (1) {
        while (1) {
          break;
        }
        if (in != 0L) {
          while (1) {
            __dst___1 = ip;
            __n___1 = in;
            while (1) {
              break;
            }
            while (1) {
              tmp___7 = __dst___1;
              __dst___1 ++;
              *tmp___7 = (mp_limb_t )0L;
              __n___1 --;
              if (! __n___1) {
                break;
              }
            }
            break;
          }
        }
        break;
      }
    } else {
      __gmpn_invertappr(ip, (mp_srcptr )tp, in + 1L, (tp + in) + 1);
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (in != 0L) {
          __n___2 = in - 1L;
          __dst___2 = ip;
          __src___1 = (mp_srcptr )(ip + 1);
          tmp___8 = __src___1;
          __src___1 ++;
          __x___1 = (mp_limb_t )*tmp___8;
          if (__n___2 != 0L) {
            while (1) {
              tmp___9 = __dst___2;
              __dst___2 ++;
              *tmp___9 = __x___1;
              tmp___10 = __src___1;
              __src___1 ++;
              __x___1 = (mp_limb_t )*tmp___10;
              __n___2 --;
              if (! __n___2) {
                break;
              }
            }
          }
          tmp___11 = __dst___2;
          __dst___2 ++;
          *tmp___11 = __x___1;
        }
        break;
      }
    }
  }
  qh = __gmpn_preinv_mu_div_qr(qp, rp, np, nn, dp, dn, (mp_srcptr )ip, in, scratch + in);
  return (qh);
}
}
mp_limb_t __gmpn_preinv_mu_div_qr(mp_ptr qp , mp_ptr rp , mp_srcptr np , mp_size_t nn ,
                                  mp_srcptr dp , mp_size_t dn , mp_srcptr ip , mp_size_t in ,
                                  mp_ptr scratch )
{
  mp_size_t qn ;
  mp_limb_t cy ;
  mp_limb_t cx ;
  mp_limb_t qh ;
  mp_limb_t r ;
  mp_size_t tn ;
  mp_size_t wn ;
  int tmp ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___0 ;
  mp_ptr tmp___1 ;
  mp_srcptr tmp___2 ;
  mp_ptr tmp___3 ;
  long tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  mp_limb_t __x___0 ;
  mp_ptr __p ;
  mp_size_t __n___0 ;
  mp_ptr __dst___0 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___1 ;
  mp_srcptr tmp___8 ;
  mp_ptr tmp___9 ;
  mp_srcptr tmp___10 ;
  mp_ptr tmp___11 ;
  mp_ptr __p___0 ;
  mp_ptr tmp___12 ;
  mp_ptr __p___1 ;
  mp_ptr tmp___13 ;
  int tmp___14 ;

  {
  qn = nn - dn;
  np += qn;
  qp += qn;
  tmp = __gmpn_cmp(np, dp, dn);
  qh = (mp_limb_t )(tmp >= 0);
  if (qh != 0UL) {
    __gmpn_sub_n(rp, np, dp, dn);
  } else {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      if (dn != 0L) {
        __n = dn - 1L;
        __dst = rp;
        __src = np;
        tmp___0 = __src;
        __src ++;
        __x = (mp_limb_t )*tmp___0;
        if (__n != 0L) {
          while (1) {
            tmp___1 = __dst;
            __dst ++;
            *tmp___1 = __x;
            tmp___2 = __src;
            __src ++;
            __x = (mp_limb_t )*tmp___2;
            __n --;
            if (! __n) {
              break;
            }
          }
        }
        tmp___3 = __dst;
        __dst ++;
        *tmp___3 = __x;
      }
      break;
    }
  }
  while (qn > 0L) {
    if (qn < in) {
      ip += in - qn;
      in = qn;
    }
    np -= in;
    qp -= in;
    __gmpn_mul_n(scratch, (mp_srcptr )((rp + dn) - in), ip, in);
    cy = __gmpn_add_n(qp, (mp_srcptr )(scratch + in), (mp_srcptr )((rp + dn) - in),
                      in);
    while (1) {
      tmp___4 = __builtin_expect((long )(! (cy == 0UL) != 0), 0L);
      if (tmp___4) {
        __gmp_assert_fail("mu_div_qr.c", 280, "cy == 0");
      }
      break;
    }
    qn -= in;
    if (! (in >= 32L)) {
      __gmpn_mul(scratch, dp, dn, (mp_srcptr )qp, in);
    } else {
      tn = __gmpn_mulmod_bnm1_next_size(dn + 1L);
      __gmpn_mulmod_bnm1(scratch, tn, dp, dn, (mp_srcptr )qp, in, scratch + tn);
      wn = (dn + in) - tn;
      if (wn > 0L) {
        cy = __gmpn_sub_n(scratch, (mp_srcptr )scratch, (mp_srcptr )((rp + dn) - wn),
                          wn);
        cy = __gmpn_sub_1(scratch + wn, (mp_srcptr )(scratch + wn), tn - wn, cy);
        tmp___5 = __gmpn_cmp((mp_srcptr )((rp + dn) - in), (mp_srcptr )(scratch + dn),
                             tn - dn);
        cx = (mp_limb_t )(tmp___5 < 0);
        while (1) {
          tmp___6 = __builtin_expect((long )(! (cx >= cy) != 0), 0L);
          if (tmp___6) {
            __gmp_assert_fail("mu_div_qr.c", 300, "cx >= cy");
          }
          break;
        }
        while (1) {
          __p = scratch;
          __x___0 = *__p + (cx - cy);
          *__p = __x___0;
          if (__x___0 < cx - cy) {
            while (1) {
              __p ++;
              (*__p) ++;
              if (! (*__p == 0UL)) {
                break;
              }
            }
          }
          break;
        }
      }
    }
    r = *(rp + (dn - in)) - *(scratch + dn);
    if (dn != in) {
      cy = __gmpn_sub_n(scratch, np, (mp_srcptr )scratch, in);
      cy = mpn_sub_nc(scratch + in, (mp_srcptr )rp, (mp_srcptr )(scratch + in), dn - in,
                      cy);
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (dn != 0L) {
            __n___0 = dn - 1L;
            __dst___0 = rp;
            __src___0 = (mp_srcptr )scratch;
            tmp___8 = __src___0;
            __src___0 ++;
            __x___1 = (mp_limb_t )*tmp___8;
            if (__n___0 != 0L) {
              while (1) {
                tmp___9 = __dst___0;
                __dst___0 ++;
                *tmp___9 = __x___1;
                tmp___10 = __src___0;
                __src___0 ++;
                __x___1 = (mp_limb_t )*tmp___10;
                __n___0 --;
                if (! __n___0) {
                  break;
                }
              }
            }
            tmp___11 = __dst___0;
            __dst___0 ++;
            *tmp___11 = __x___1;
          }
          break;
        }
        break;
      }
    } else {
      cy = __gmpn_sub_n(rp, np, (mp_srcptr )scratch, in);
    }
    r -= cy;
    while (r != 0UL) {
      while (1) {
        __p___0 = qp;
        while (1) {
          tmp___12 = __p___0;
          __p___0 ++;
          (*tmp___12) ++;
          if (! (*tmp___12 == 0UL)) {
            break;
          }
        }
        break;
      }
      cy = __gmpn_sub_n(rp, (mp_srcptr )rp, dp, dn);
      r -= cy;
    }
    tmp___14 = __gmpn_cmp((mp_srcptr )rp, dp, dn);
    if (tmp___14 >= 0) {
      while (1) {
        __p___1 = qp;
        while (1) {
          tmp___13 = __p___1;
          __p___1 ++;
          (*tmp___13) ++;
          if (! (*tmp___13 == 0UL)) {
            break;
          }
        }
        break;
      }
      cy = __gmpn_sub_n(rp, (mp_srcptr )rp, dp, dn);
    }
  }
  return (qh);
}
}
mp_size_t __gmpn_mu_div_qr_choose_in(mp_size_t qn , mp_size_t dn , int k )
{
  mp_size_t in ;
  mp_size_t b ;
  mp_size_t xn ;

  {
  if (k == 0) {
    if (qn > dn) {
      b = (qn - 1L) / dn + 1L;
      in = (qn - 1L) / b + 1L;
    } else
    if (3L * qn > dn) {
      in = (qn - 1L) / 2L + 1L;
    } else {
      in = (qn - 1L) + 1L;
    }
  } else {
    if (dn < qn) {
      xn = dn;
    } else {
      xn = qn;
    }
    in = (xn - 1L) / (mp_size_t )k + 1L;
  }
  return (in);
}
}
mp_size_t __gmpn_mu_div_qr_itch(mp_size_t nn , mp_size_t dn , int mua_k ) __attribute__((__const__)) ;
mp_size_t __gmpn_mu_div_qr_itch(mp_size_t nn , mp_size_t dn , int mua_k )
{
  mp_size_t in ;
  mp_size_t tmp ;
  mp_size_t itch_preinv ;
  mp_size_t tmp___0 ;
  mp_size_t itch_invapp ;
  mp_size_t tmp___1 ;

  {
  tmp = __gmpn_mu_div_qr_choose_in(nn - dn, dn, mua_k);
  in = tmp;
  tmp___0 = __gmpn_preinv_mu_div_qr_itch(nn, dn, in);
  itch_preinv = tmp___0;
  itch_invapp = (2L * (in + 1L) + in) + 2L;
  while (1) {
    break;
  }
  if (itch_invapp > itch_preinv) {
    tmp___1 = itch_invapp;
  } else {
    tmp___1 = itch_preinv;
  }
  return (in + tmp___1);
}
}
mp_size_t __gmpn_preinv_mu_div_qr_itch(mp_size_t nn , mp_size_t dn , mp_size_t in ) __attribute__((__const__)) ;
mp_size_t __gmpn_preinv_mu_div_qr_itch(mp_size_t nn , mp_size_t dn , mp_size_t in )
{
  mp_size_t itch_local ;
  mp_size_t tmp ;
  mp_size_t itch_out ;
  mp_size_t tmp___0 ;

  {
  tmp = __gmpn_mulmod_bnm1_next_size(dn + 1L);
  itch_local = tmp;
  tmp___0 = mpn_mulmod_bnm1_itch(itch_local, dn, in);
  itch_out = tmp___0;
  return (itch_local + itch_out);
}
}
#pragma merger("0","./mul_1.i","")
mp_limb_t __gmpn_mul_1(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , mp_limb_t vl )
{
  mp_limb_t ul ;
  mp_limb_t cl ;
  mp_limb_t hpl ;
  mp_limb_t lpl ;
  mp_srcptr tmp ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  mp_ptr tmp___0 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  cl = (mp_limb_t )0;
  while (1) {
    tmp = up;
    up ++;
    ul = (mp_limb_t )*tmp;
    while (1) {
      __u = ul;
      __v = vl;
      __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
      __uh = (UHWtype )(__u >> 32);
      __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
      __vh = (UHWtype )(__v >> 32);
      __x0 = (UWtype )__ul * (UWtype )__vl;
      __x1 = (UWtype )__ul * (UWtype )__vh;
      __x2 = (UWtype )__uh * (UWtype )__vl;
      __x3 = (UWtype )__uh * (UWtype )__vh;
      __x1 += __x0 >> 32;
      __x1 += __x2;
      if (__x1 < __x2) {
        __x3 += 1UL << 32;
      }
      hpl = __x3 + (__x1 >> 32);
      lpl = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
      break;
    }
    lpl += cl;
    cl = (mp_limb_t )(lpl < cl) + hpl;
    tmp___0 = rp;
    rp ++;
    *tmp___0 = lpl;
    n___0 --;
    if (! (n___0 != 0L)) {
      break;
    }
  }
  return (cl);
}
}
#pragma merger("0","./mul_basecase.i","")
void __gmpn_mul_basecase(mp_ptr rp , mp_srcptr up , mp_size_t un , mp_srcptr vp ,
                         mp_size_t vn ) ;
void __gmpn_mul_basecase(mp_ptr rp , mp_srcptr up , mp_size_t un , mp_srcptr vp ,
                         mp_size_t vn )
{


  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  *(rp + un) = __gmpn_mul_1(rp, up, un, (mp_limb_t )*(vp + 0));
  rp ++;
  vp ++;
  vn --;
  while (vn >= 1L) {
    *(rp + un) = __gmpn_addmul_1(rp, up, un, (mp_limb_t )*(vp + 0));
    rp ++;
    vp ++;
    vn --;
  }
  return;
}
}
#pragma merger("0","./mul.i","")
void __gmpn_toom22_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_toom32_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_toom42_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_toom33_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_toom43_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_toom53_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_toom63_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_toom44_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_toom6h_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_toom8h_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch ) ;
void __gmpn_nussbaumer_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp ,
                           mp_size_t bn ) ;
__inline static mp_size_t mpn_toom6h_mul_itch(mp_size_t an , mp_size_t bn )
{
  mp_size_t estimatedN ;

  {
  estimatedN = (mp_size_t )((size_t )(an + bn) / 10UL + 1UL);
  return ((estimatedN * 6L - 350L) * 2L + 1114L);
}
}
__inline static mp_size_t mpn_toom8h_mul_itch(mp_size_t an , mp_size_t bn )
{
  mp_size_t estimatedN ;
  int tmp ;

  {
  estimatedN = (mp_size_t )((size_t )(an + bn) / 14UL + 1UL);
  if ((6750 >> 3) + 384 > 1314) {
    tmp = (6750 >> 3) + 384;
  } else {
    tmp = 1314;
  }
  return ((((estimatedN * 8L) * 15L >> 3) - (mp_size_t )(6750 >> 3)) + (mp_size_t )tmp);
}
}
mp_limb_t __gmpn_mul(mp_ptr prodp , mp_srcptr up , mp_size_t un , mp_srcptr vp , mp_size_t vn )
{
  mp_limb_t tp[30] ;
  mp_limb_t cy ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp ;
  mp_ptr tmp___0 ;
  mp_srcptr tmp___1 ;
  mp_ptr tmp___2 ;
  mp_limb_t __x___0 ;
  mp_ptr __p ;
  mp_size_t __n___0 ;
  mp_ptr __dst___0 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___1 ;
  mp_srcptr tmp___4 ;
  mp_ptr tmp___5 ;
  mp_srcptr tmp___6 ;
  mp_ptr tmp___7 ;
  mp_limb_t __x___2 ;
  mp_ptr __p___0 ;
  mp_ptr scratch ;
  void *tmp___9 ;
  mp_limb_t cy___0 ;
  mp_ptr ws ;
  void *tmp___10 ;
  mp_size_t __n___1 ;
  mp_ptr __dst___1 ;
  mp_srcptr __src___1 ;
  mp_limb_t __x___3 ;
  mp_srcptr tmp___11 ;
  mp_ptr tmp___12 ;
  mp_srcptr tmp___13 ;
  mp_ptr tmp___14 ;
  mp_limb_t __x___4 ;
  mp_ptr __p___1 ;
  mp_size_t __n___2 ;
  mp_ptr __dst___2 ;
  mp_srcptr __src___2 ;
  mp_limb_t __x___5 ;
  mp_srcptr tmp___16 ;
  mp_ptr tmp___17 ;
  mp_srcptr tmp___18 ;
  mp_ptr tmp___19 ;
  mp_limb_t __x___6 ;
  mp_ptr __p___2 ;
  mp_ptr scratch___0 ;
  struct tmp_reentrant_t *__tmp_marker ;
  void *tmp___22 ;
  void *tmp___23 ;
  void *tmp___24 ;
  long tmp___25 ;
  mp_limb_t cy___1 ;
  mp_ptr ws___0 ;
  void *tmp___27 ;
  void *tmp___28 ;
  void *tmp___29 ;
  long tmp___30 ;
  mp_size_t __n___3 ;
  mp_ptr __dst___3 ;
  mp_srcptr __src___3 ;
  mp_limb_t __x___7 ;
  mp_srcptr tmp___31 ;
  mp_ptr tmp___32 ;
  mp_srcptr tmp___33 ;
  mp_ptr tmp___34 ;
  mp_limb_t __x___8 ;
  mp_ptr __p___3 ;
  mp_size_t __n___4 ;
  mp_ptr __dst___4 ;
  mp_srcptr __src___4 ;
  mp_limb_t __x___9 ;
  mp_srcptr tmp___36 ;
  mp_ptr tmp___37 ;
  mp_srcptr tmp___38 ;
  mp_ptr tmp___39 ;
  mp_limb_t __x___10 ;
  mp_ptr __p___4 ;
  long tmp___41 ;
  mp_ptr scratch___1 ;
  struct tmp_reentrant_t *__tmp_marker___0 ;
  void *tmp___42 ;
  mp_size_t tmp___43 ;
  void *tmp___44 ;
  mp_size_t tmp___47 ;
  void *tmp___48 ;
  mp_size_t tmp___49 ;
  void *tmp___50 ;
  void *tmp___51 ;
  mp_size_t tmp___52 ;
  long tmp___53 ;
  long tmp___54 ;
  mp_limb_t cy___2 ;
  mp_ptr ws___1 ;
  struct tmp_reentrant_t *__tmp_marker___1 ;
  void *tmp___55 ;
  mp_size_t __n___5 ;
  mp_ptr __dst___5 ;
  mp_srcptr __src___5 ;
  mp_limb_t __x___11 ;
  mp_srcptr tmp___56 ;
  mp_ptr tmp___57 ;
  mp_srcptr tmp___58 ;
  mp_ptr tmp___59 ;
  mp_limb_t __x___12 ;
  mp_ptr __p___5 ;
  mp_size_t __n___6 ;
  mp_ptr __dst___6 ;
  mp_srcptr __src___6 ;
  mp_limb_t __x___13 ;
  mp_srcptr tmp___61 ;
  mp_ptr tmp___62 ;
  mp_srcptr tmp___63 ;
  mp_ptr tmp___64 ;
  mp_limb_t __x___14 ;
  mp_ptr __p___6 ;
  long tmp___66 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if (un == vn) {
    if ((unsigned long )up == (unsigned long )vp) {
      __gmpn_sqr(prodp, up, un);
    } else {
      __gmpn_mul_n(prodp, up, vp, un);
    }
  } else
  if (vn < 30L) {
    if (un <= 500L) {
      __gmpn_mul_basecase(prodp, up, un, vp, vn);
    } else
    if (vn == 1L) {
      __gmpn_mul_basecase(prodp, up, un, vp, vn);
    } else {
      while (1) {
        break;
      }
      __gmpn_mul_basecase(prodp, up, (mp_size_t )500, vp, vn);
      prodp += 500;
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (vn != 0L) {
            __n = vn - 1L;
            __dst = tp;
            __src = (mp_srcptr )prodp;
            tmp = __src;
            __src ++;
            __x = (mp_limb_t )*tmp;
            if (__n != 0L) {
              while (1) {
                tmp___0 = __dst;
                __dst ++;
                *tmp___0 = __x;
                tmp___1 = __src;
                __src ++;
                __x = (mp_limb_t )*tmp___1;
                __n --;
                if (! __n) {
                  break;
                }
              }
            }
            tmp___2 = __dst;
            __dst ++;
            *tmp___2 = __x;
          }
          break;
        }
        break;
      }
      up += 500;
      un -= 500L;
      while (un > 500L) {
        __gmpn_mul_basecase(prodp, up, (mp_size_t )500, vp, vn);
        cy = __gmpn_add_n(prodp, (mp_srcptr )prodp, (mp_srcptr )(tp), vn);
        while (1) {
          __p = prodp + vn;
          __x___0 = *__p + cy;
          *__p = __x___0;
          if (__x___0 < cy) {
            while (1) {
              __p ++;
              (*__p) ++;
              if (! (*__p == 0UL)) {
                break;
              }
            }
          }
          break;
        }
        prodp += 500;
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            while (1) {
              break;
            }
            while (1) {
              break;
            }
            if (vn != 0L) {
              __n___0 = vn - 1L;
              __dst___0 = tp;
              __src___0 = (mp_srcptr )prodp;
              tmp___4 = __src___0;
              __src___0 ++;
              __x___1 = (mp_limb_t )*tmp___4;
              if (__n___0 != 0L) {
                while (1) {
                  tmp___5 = __dst___0;
                  __dst___0 ++;
                  *tmp___5 = __x___1;
                  tmp___6 = __src___0;
                  __src___0 ++;
                  __x___1 = (mp_limb_t )*tmp___6;
                  __n___0 --;
                  if (! __n___0) {
                    break;
                  }
                }
              }
              tmp___7 = __dst___0;
              __dst___0 ++;
              *tmp___7 = __x___1;
            }
            break;
          }
          break;
        }
        up += 500;
        un -= 500L;
      }
      if (un > vn) {
        __gmpn_mul_basecase(prodp, up, un, vp, vn);
      } else {
        while (1) {
          break;
        }
        __gmpn_mul_basecase(prodp, vp, vn, up, un);
      }
      cy = __gmpn_add_n(prodp, (mp_srcptr )prodp, (mp_srcptr )(tp), vn);
      while (1) {
        __p___0 = prodp + vn;
        __x___2 = *__p___0 + cy;
        *__p___0 = __x___2;
        if (__x___2 < cy) {
          while (1) {
            __p___0 ++;
            (*__p___0) ++;
            if (! (*__p___0 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    }
  } else
  if (! (vn >= 100L)) {
    tmp___9 = alloca((unsigned long )((9L * vn) / 2L + 128L) * sizeof(mp_limb_t ));
    scratch = (mp_limb_t *)tmp___9;
    while (1) {
      break;
    }
    while (1) {
      break;
    }
    while (1) {
      break;
    }
    if (un >= 3L * vn) {
      tmp___10 = alloca((unsigned long )(4L * vn) * sizeof(mp_limb_t ));
      ws = (mp_limb_t *)tmp___10;
      __gmpn_toom42_mul(prodp, up, 2L * vn, vp, vn, scratch);
      un -= 2L * vn;
      up += 2L * vn;
      prodp += 2L * vn;
      while (un >= 3L * vn) {
        __gmpn_toom42_mul(ws, up, 2L * vn, vp, vn, scratch);
        un -= 2L * vn;
        up += 2L * vn;
        cy___0 = __gmpn_add_n(prodp, (mp_srcptr )prodp, (mp_srcptr )ws, vn);
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            while (1) {
              break;
            }
            while (1) {
              break;
            }
            if (2L * vn != 0L) {
              __n___1 = 2L * vn - 1L;
              __dst___1 = prodp + vn;
              __src___1 = (mp_srcptr )(ws + vn);
              tmp___11 = __src___1;
              __src___1 ++;
              __x___3 = (mp_limb_t )*tmp___11;
              if (__n___1 != 0L) {
                while (1) {
                  tmp___12 = __dst___1;
                  __dst___1 ++;
                  *tmp___12 = __x___3;
                  tmp___13 = __src___1;
                  __src___1 ++;
                  __x___3 = (mp_limb_t )*tmp___13;
                  __n___1 --;
                  if (! __n___1) {
                    break;
                  }
                }
              }
              tmp___14 = __dst___1;
              __dst___1 ++;
              *tmp___14 = __x___3;
            }
            break;
          }
          break;
        }
        while (1) {
          __p___1 = prodp + vn;
          __x___4 = *__p___1 + cy___0;
          *__p___1 = __x___4;
          if (__x___4 < cy___0) {
            while (1) {
              __p___1 ++;
              (*__p___1) ++;
              if (! (*__p___1 == 0UL)) {
                break;
              }
            }
          }
          break;
        }
        prodp += 2L * vn;
      }
      if (4L * un < 5L * vn) {
        __gmpn_toom22_mul(ws, up, un, vp, vn, scratch);
      } else
      if (4L * un < 7L * vn) {
        __gmpn_toom32_mul(ws, up, un, vp, vn, scratch);
      } else {
        __gmpn_toom42_mul(ws, up, un, vp, vn, scratch);
      }
      cy___0 = __gmpn_add_n(prodp, (mp_srcptr )prodp, (mp_srcptr )ws, vn);
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (un != 0L) {
            __n___2 = un - 1L;
            __dst___2 = prodp + vn;
            __src___2 = (mp_srcptr )(ws + vn);
            tmp___16 = __src___2;
            __src___2 ++;
            __x___5 = (mp_limb_t )*tmp___16;
            if (__n___2 != 0L) {
              while (1) {
                tmp___17 = __dst___2;
                __dst___2 ++;
                *tmp___17 = __x___5;
                tmp___18 = __src___2;
                __src___2 ++;
                __x___5 = (mp_limb_t )*tmp___18;
                __n___2 --;
                if (! __n___2) {
                  break;
                }
              }
            }
            tmp___19 = __dst___2;
            __dst___2 ++;
            *tmp___19 = __x___5;
          }
          break;
        }
        break;
      }
      while (1) {
        __p___2 = prodp + vn;
        __x___6 = *__p___2 + cy___0;
        *__p___2 = __x___6;
        if (__x___6 < cy___0) {
          while (1) {
            __p___2 ++;
            (*__p___2) ++;
            if (! (*__p___2 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    } else
    if (4L * un < 5L * vn) {
      __gmpn_toom22_mul(prodp, up, un, vp, vn, scratch);
    } else
    if (4L * un < 7L * vn) {
      __gmpn_toom32_mul(prodp, up, un, vp, vn, scratch);
    } else {
      __gmpn_toom42_mul(prodp, up, un, vp, vn, scratch);
    }
  } else
  if (! ((un + vn) >> 1 >= 3000L)) {
    goto _L___0;
  } else
  if (! (3L * vn >= 3000L)) {
    _L___0:
    if (! (vn >= 300L)) {
      goto _L;
    } else
    if (! (12L + 3L * un < 4L * vn)) {
      _L:
      __tmp_marker = (struct tmp_reentrant_t *)0;
      tmp___25 = __builtin_expect((long )(((unsigned long )(4L * vn + 64L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___25) {
        tmp___22 = alloca((unsigned long )(4L * vn + 64L) * sizeof(mp_limb_t ));
        tmp___24 = tmp___22;
      } else {
        tmp___23 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(4L * vn + 64L) * sizeof(mp_limb_t ));
        tmp___24 = tmp___23;
      }
      scratch___0 = (mp_limb_t *)tmp___24;
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      if (2L * un >= 5L * vn) {
        tmp___30 = __builtin_expect((long )(((unsigned long )(7L * vn >> 1) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                    1L);
        if (tmp___30) {
          tmp___27 = alloca((unsigned long )(7L * vn >> 1) * sizeof(mp_limb_t ));
          tmp___29 = tmp___27;
        } else {
          tmp___28 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(7L * vn >> 1) * sizeof(mp_limb_t ));
          tmp___29 = tmp___28;
        }
        ws___0 = (mp_limb_t *)tmp___29;
        if (! (vn >= 110L)) {
          __gmpn_toom42_mul(prodp, up, 2L * vn, vp, vn, scratch___0);
        } else {
          __gmpn_toom63_mul(prodp, up, 2L * vn, vp, vn, scratch___0);
        }
        un -= 2L * vn;
        up += 2L * vn;
        prodp += 2L * vn;
        while (2L * un >= 5L * vn) {
          if (! (vn >= 110L)) {
            __gmpn_toom42_mul(ws___0, up, 2L * vn, vp, vn, scratch___0);
          } else {
            __gmpn_toom63_mul(ws___0, up, 2L * vn, vp, vn, scratch___0);
          }
          un -= 2L * vn;
          up += 2L * vn;
          cy___1 = __gmpn_add_n(prodp, (mp_srcptr )prodp, (mp_srcptr )ws___0, vn);
          while (1) {
            while (1) {
              break;
            }
            while (1) {
              while (1) {
                break;
              }
              while (1) {
                break;
              }
              if (2L * vn != 0L) {
                __n___3 = 2L * vn - 1L;
                __dst___3 = prodp + vn;
                __src___3 = (mp_srcptr )(ws___0 + vn);
                tmp___31 = __src___3;
                __src___3 ++;
                __x___7 = (mp_limb_t )*tmp___31;
                if (__n___3 != 0L) {
                  while (1) {
                    tmp___32 = __dst___3;
                    __dst___3 ++;
                    *tmp___32 = __x___7;
                    tmp___33 = __src___3;
                    __src___3 ++;
                    __x___7 = (mp_limb_t )*tmp___33;
                    __n___3 --;
                    if (! __n___3) {
                      break;
                    }
                  }
                }
                tmp___34 = __dst___3;
                __dst___3 ++;
                *tmp___34 = __x___7;
              }
              break;
            }
            break;
          }
          while (1) {
            __p___3 = prodp + vn;
            __x___8 = *__p___3 + cy___1;
            *__p___3 = __x___8;
            if (__x___8 < cy___1) {
              while (1) {
                __p___3 ++;
                (*__p___3) ++;
                if (! (*__p___3 == 0UL)) {
                  break;
                }
              }
            }
            break;
          }
          prodp += 2L * vn;
        }
        if (un < vn) {
          __gmpn_mul(ws___0, vp, vn, up, un);
        } else {
          __gmpn_mul(ws___0, up, un, vp, vn);
        }
        cy___1 = __gmpn_add_n(prodp, (mp_srcptr )prodp, (mp_srcptr )ws___0, vn);
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            while (1) {
              break;
            }
            while (1) {
              break;
            }
            if (un != 0L) {
              __n___4 = un - 1L;
              __dst___4 = prodp + vn;
              __src___4 = (mp_srcptr )(ws___0 + vn);
              tmp___36 = __src___4;
              __src___4 ++;
              __x___9 = (mp_limb_t )*tmp___36;
              if (__n___4 != 0L) {
                while (1) {
                  tmp___37 = __dst___4;
                  __dst___4 ++;
                  *tmp___37 = __x___9;
                  tmp___38 = __src___4;
                  __src___4 ++;
                  __x___9 = (mp_limb_t )*tmp___38;
                  __n___4 --;
                  if (! __n___4) {
                    break;
                  }
                }
              }
              tmp___39 = __dst___4;
              __dst___4 ++;
              *tmp___39 = __x___9;
            }
            break;
          }
          break;
        }
        while (1) {
          __p___4 = prodp + vn;
          __x___10 = *__p___4 + cy___1;
          *__p___4 = __x___10;
          if (__x___10 < cy___1) {
            while (1) {
              __p___4 ++;
              (*__p___4) ++;
              if (! (*__p___4 == 0UL)) {
                break;
              }
            }
          }
          break;
        }
      } else
      if (6L * un < 7L * vn) {
        __gmpn_toom33_mul(prodp, up, un, vp, vn, scratch___0);
      } else
      if (2L * un < 3L * vn) {
        if (! (vn >= 100L)) {
          __gmpn_toom32_mul(prodp, up, un, vp, vn, scratch___0);
        } else {
          __gmpn_toom43_mul(prodp, up, un, vp, vn, scratch___0);
        }
      } else
      if (6L * un < 11L * vn) {
        if (4L * un < 7L * vn) {
          if (! (vn >= 110L)) {
            __gmpn_toom32_mul(prodp, up, un, vp, vn, scratch___0);
          } else {
            __gmpn_toom53_mul(prodp, up, un, vp, vn, scratch___0);
          }
        } else
        if (! (vn >= 100L)) {
          __gmpn_toom42_mul(prodp, up, un, vp, vn, scratch___0);
        } else {
          __gmpn_toom53_mul(prodp, up, un, vp, vn, scratch___0);
        }
      } else
      if (! (vn >= 110L)) {
        __gmpn_toom42_mul(prodp, up, un, vp, vn, scratch___0);
      } else {
        __gmpn_toom63_mul(prodp, up, un, vp, vn, scratch___0);
      }
      while (1) {
        tmp___41 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                    0L);
        if (tmp___41) {
          __gmp_tmp_reentrant_free(__tmp_marker);
        }
        break;
      }
    } else {
      __tmp_marker___0 = (struct tmp_reentrant_t *)0;
      if (! (vn >= 350L)) {
        tmp___42 = alloca((unsigned long )(3L * un + 64L) * sizeof(mp_limb_t ));
        scratch___1 = (mp_limb_t *)tmp___42;
        __gmpn_toom44_mul(prodp, up, un, vp, vn, scratch___1);
      } else
      if (! (vn >= 450L)) {
        tmp___43 = mpn_toom6h_mul_itch(un, vn);
        tmp___44 = alloca((unsigned long )tmp___43 * sizeof(mp_limb_t ));
        scratch___1 = (mp_limb_t *)tmp___44;
        __gmpn_toom6h_mul(prodp, up, un, vp, vn, scratch___1);
      } else {
        tmp___52 = mpn_toom8h_mul_itch(un, vn);
        tmp___53 = __builtin_expect((long )(((unsigned long )tmp___52 * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                    1L);
        if (tmp___53) {
          tmp___47 = mpn_toom8h_mul_itch(un, vn);
          tmp___48 = alloca((unsigned long )tmp___47 * sizeof(mp_limb_t ));
          tmp___51 = tmp___48;
        } else {
          tmp___49 = mpn_toom8h_mul_itch(un, vn);
          tmp___50 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )tmp___49 * sizeof(mp_limb_t ));
          tmp___51 = tmp___50;
        }
        scratch___1 = (mp_limb_t *)tmp___51;
        __gmpn_toom8h_mul(prodp, up, un, vp, vn, scratch___1);
      }
      while (1) {
        tmp___54 = __builtin_expect((long )(((unsigned long )__tmp_marker___0 != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                    0L);
        if (tmp___54) {
          __gmp_tmp_reentrant_free(__tmp_marker___0);
        }
        break;
      }
    }
  } else
  if (un >= 8L * vn) {
    __tmp_marker___1 = (struct tmp_reentrant_t *)0;
    tmp___55 = __gmp_tmp_reentrant_alloc(& __tmp_marker___1, (unsigned long )(9L * vn >> 1) * sizeof(mp_limb_t ));
    ws___1 = (mp_limb_t *)tmp___55;
    __gmpn_nussbaumer_mul(prodp, up, 3L * vn, vp, vn);
    un -= 3L * vn;
    up += 3L * vn;
    prodp += 3L * vn;
    while (2L * un >= 7L * vn) {
      __gmpn_nussbaumer_mul(ws___1, up, 3L * vn, vp, vn);
      un -= 3L * vn;
      up += 3L * vn;
      cy___2 = __gmpn_add_n(prodp, (mp_srcptr )prodp, (mp_srcptr )ws___1, vn);
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (3L * vn != 0L) {
            __n___5 = 3L * vn - 1L;
            __dst___5 = prodp + vn;
            __src___5 = (mp_srcptr )(ws___1 + vn);
            tmp___56 = __src___5;
            __src___5 ++;
            __x___11 = (mp_limb_t )*tmp___56;
            if (__n___5 != 0L) {
              while (1) {
                tmp___57 = __dst___5;
                __dst___5 ++;
                *tmp___57 = __x___11;
                tmp___58 = __src___5;
                __src___5 ++;
                __x___11 = (mp_limb_t )*tmp___58;
                __n___5 --;
                if (! __n___5) {
                  break;
                }
              }
            }
            tmp___59 = __dst___5;
            __dst___5 ++;
            *tmp___59 = __x___11;
          }
          break;
        }
        break;
      }
      while (1) {
        __p___5 = prodp + vn;
        __x___12 = *__p___5 + cy___2;
        *__p___5 = __x___12;
        if (__x___12 < cy___2) {
          while (1) {
            __p___5 ++;
            (*__p___5) ++;
            if (! (*__p___5 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      prodp += 3L * vn;
    }
    if (un < vn) {
      __gmpn_mul(ws___1, vp, vn, up, un);
    } else {
      __gmpn_mul(ws___1, up, un, vp, vn);
    }
    cy___2 = __gmpn_add_n(prodp, (mp_srcptr )prodp, (mp_srcptr )ws___1, vn);
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (un != 0L) {
          __n___6 = un - 1L;
          __dst___6 = prodp + vn;
          __src___6 = (mp_srcptr )(ws___1 + vn);
          tmp___61 = __src___6;
          __src___6 ++;
          __x___13 = (mp_limb_t )*tmp___61;
          if (__n___6 != 0L) {
            while (1) {
              tmp___62 = __dst___6;
              __dst___6 ++;
              *tmp___62 = __x___13;
              tmp___63 = __src___6;
              __src___6 ++;
              __x___13 = (mp_limb_t )*tmp___63;
              __n___6 --;
              if (! __n___6) {
                break;
              }
            }
          }
          tmp___64 = __dst___6;
          __dst___6 ++;
          *tmp___64 = __x___13;
        }
        break;
      }
      break;
    }
    while (1) {
      __p___6 = prodp + vn;
      __x___14 = *__p___6 + cy___2;
      *__p___6 = __x___14;
      if (__x___14 < cy___2) {
        while (1) {
          __p___6 ++;
          (*__p___6) ++;
          if (! (*__p___6 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    while (1) {
      tmp___66 = __builtin_expect((long )(((unsigned long )__tmp_marker___1 != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                  0L);
      if (tmp___66) {
        __gmp_tmp_reentrant_free(__tmp_marker___1);
      }
      break;
    }
  } else {
    __gmpn_nussbaumer_mul(prodp, up, un, vp, vn);
  }
  return (*(prodp + ((un + vn) - 1L)));
}
}
#pragma merger("0","./mul_fft.i","")
int __gmpn_fft_best_k(mp_size_t n___0 , int sqr ) __attribute__((__const__)) ;
mp_limb_t __gmpn_mul_fft(mp_ptr op , mp_size_t pl , mp_srcptr n___0 , mp_size_t nl ,
                         mp_srcptr m , mp_size_t ml , int k ) ;
mp_size_t __gmpn_fft_next_size(mp_size_t pl , int k ) __attribute__((__const__)) ;
static mp_limb_t mpn_mul_fft_internal(mp_ptr op , mp_size_t pl , int k , mp_ptr *Ap ,
                                      mp_ptr *Bp , mp_ptr A , mp_ptr B , mp_size_t nprime ,
                                      mp_size_t l , mp_size_t Mp , int **fft_l , mp_ptr T ,
                                      int sqr ) ;
static void mpn_mul_fft_decompose(mp_ptr A , mp_ptr *Ap , mp_size_t K , mp_size_t nprime ,
                                  mp_srcptr n___0 , mp_size_t nl , mp_size_t l , mp_size_t Mp ,
                                  mp_ptr T ) ;
static mp_size_t const mpn_fft_table[2][16] = { { (mp_size_t const )400, (mp_size_t const )800, (mp_size_t const )1600, (mp_size_t const )3200,
            (mp_size_t const )9600, (mp_size_t const )28800, (mp_size_t const )0},
   { (mp_size_t const )480, (mp_size_t const )960, (mp_size_t const )1920, (mp_size_t const )3840,
            (mp_size_t const )11520, (mp_size_t const )34560, (mp_size_t const )0}};
int __gmpn_fft_best_k(mp_size_t n___0 , int sqr ) __attribute__((__const__)) ;
int __gmpn_fft_best_k(mp_size_t n___0 , int sqr )
{
  int i ;

  {
  i = 0;
  while (mpn_fft_table[sqr][i] != 0L) {
    if (n___0 < (mp_size_t )mpn_fft_table[sqr][i]) {
      return (i + 4);
    }
    i ++;
  }
  if (i == 0) {
    return (i + 4);
  } else
  if (n___0 < (mp_size_t )(4L * mpn_fft_table[sqr][i - 1])) {
    return (i + 4);
  } else {
    return ((i + 4) + 1);
  }
}
}
mp_size_t __gmpn_fft_next_size(mp_size_t pl , int k ) __attribute__((__const__)) ;
mp_size_t __gmpn_fft_next_size(mp_size_t pl , int k )
{


  {
  pl = 1L + ((pl - 1L) >> k);
  return (pl << k);
}
}
static void mpn_fft_initl(int **l , int k )
{
  int i ;
  int j ;
  int K ;
  int *li ;

  {
  *(*(l + 0) + 0) = 0;
  i = 1;
  K = 1;
  while (i <= k) {
    li = *(l + i);
    j = 0;
    while (j < K) {
      *(li + j) = 2 * *(*(l + (i - 1)) + j);
      *(li + (K + j)) = 1 + *(li + j);
      j ++;
    }
    i ++;
    K *= 2;
  }
  return;
}
}
static void mpn_fft_mul_2exp_modF(mp_ptr r , mp_srcptr a , mp_bitcnt_t d , mp_size_t n___0 )
{
  unsigned int sh ;
  mp_size_t m ;
  mp_limb_t cc ;
  mp_limb_t rd ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp ;
  mp_ptr tmp___0 ;
  mp_srcptr tmp___1 ;
  mp_ptr tmp___2 ;
  mp_ptr __d ;
  mp_srcptr __s ;
  mp_size_t __n___0 ;
  mp_ptr tmp___3 ;
  mp_srcptr tmp___4 ;
  mp_limb_t __x___0 ;
  mp_ptr __p ;
  mp_limb_t __x___1 ;
  mp_ptr __p___0 ;
  mp_ptr __d___0 ;
  mp_srcptr __s___0 ;
  mp_size_t __n___1 ;
  mp_ptr tmp___7 ;
  mp_srcptr tmp___8 ;
  mp_size_t __n___2 ;
  mp_ptr __dst___0 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___2 ;
  mp_srcptr tmp___9 ;
  mp_ptr tmp___10 ;
  mp_srcptr tmp___11 ;
  mp_ptr tmp___12 ;
  mp_limb_t tmp___13 ;
  mp_limb_t tmp___14 ;
  mp_limb_t tmp___15 ;
  mp_limb_t tmp___16 ;

  {
  sh = (unsigned int )(d % 64UL);
  m = (mp_size_t )(d / 64UL);
  if (m >= n___0) {
    m -= n___0;
    if (sh != 0U) {
      __gmpn_lshift(r, (a + n___0) - m, m + 1L, sh);
      rd = *(r + m);
      cc = __gmpn_lshiftc(r + m, a, n___0 - m, sh);
    } else {
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (m != 0L) {
            __n = m - 1L;
            __dst = r;
            __src = (a + n___0) - m;
            tmp = __src;
            __src ++;
            __x = (mp_limb_t )*tmp;
            if (__n != 0L) {
              while (1) {
                tmp___0 = __dst;
                __dst ++;
                *tmp___0 = __x;
                tmp___1 = __src;
                __src ++;
                __x = (mp_limb_t )*tmp___1;
                __n --;
                if (! __n) {
                  break;
                }
              }
            }
            tmp___2 = __dst;
            __dst ++;
            *tmp___2 = __x;
          }
          break;
        }
        break;
      }
      rd = (mp_limb_t )*(a + n___0);
      while (1) {
        __d = r + m;
        __s = a;
        __n___0 = n___0 - m;
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        while (1) {
          tmp___3 = __d;
          __d ++;
          tmp___4 = __s;
          __s ++;
          *tmp___3 = (mp_limb_t )(~ *tmp___4 & 0xffffffffffffffffUL);
          __n___0 --;
          if (! __n___0) {
            break;
          }
        }
        break;
      }
      cc = (mp_limb_t )0;
    }
    *(r + n___0) = (mp_limb_t )0;
    cc ++;
    while (1) {
      __p = r;
      __x___0 = *__p + cc;
      *__p = __x___0;
      if (__x___0 < cc) {
        while (1) {
          __p ++;
          (*__p) ++;
          if (! (*__p == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    rd ++;
    if (rd == 0UL) {
      cc = (mp_limb_t )1;
    } else {
      cc = rd;
    }
    r = (r + m) + (rd == 0UL);
    while (1) {
      __p___0 = r;
      __x___1 = *__p___0 + cc;
      *__p___0 = __x___1;
      if (__x___1 < cc) {
        while (1) {
          __p___0 ++;
          (*__p___0) ++;
          if (! (*__p___0 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  } else {
    if (sh != 0U) {
      __gmpn_lshiftc(r, (a + n___0) - m, m + 1L, sh);
      rd = ~ *(r + m);
      cc = __gmpn_lshift(r + m, a, n___0 - m, sh);
    } else {
      while (1) {
        __d___0 = r;
        __s___0 = (a + n___0) - m;
        __n___1 = m + 1L;
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        while (1) {
          tmp___7 = __d___0;
          __d___0 ++;
          tmp___8 = __s___0;
          __s___0 ++;
          *tmp___7 = (mp_limb_t )(~ *tmp___8 & 0xffffffffffffffffUL);
          __n___1 --;
          if (! __n___1) {
            break;
          }
        }
        break;
      }
      rd = (mp_limb_t )*(a + n___0);
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (n___0 - m != 0L) {
            __n___2 = (n___0 - m) - 1L;
            __dst___0 = r + m;
            __src___0 = a;
            tmp___9 = __src___0;
            __src___0 ++;
            __x___2 = (mp_limb_t )*tmp___9;
            if (__n___2 != 0L) {
              while (1) {
                tmp___10 = __dst___0;
                __dst___0 ++;
                *tmp___10 = __x___2;
                tmp___11 = __src___0;
                __src___0 ++;
                __x___2 = (mp_limb_t )*tmp___11;
                __n___2 --;
                if (! __n___2) {
                  break;
                }
              }
            }
            tmp___12 = __dst___0;
            __dst___0 ++;
            *tmp___12 = __x___2;
          }
          break;
        }
        break;
      }
      cc = (mp_limb_t )0;
    }
    if (m != 0L) {
      tmp___13 = cc;
      cc --;
      if (tmp___13 == 0UL) {
        cc = __gmpn_add_1(r, (mp_srcptr )r, n___0, (mp_limb_t )1L);
      }
      tmp___14 = __gmpn_sub_1(r, (mp_srcptr )r, m, cc);
      cc = tmp___14 + 1UL;
    }
    tmp___15 = __gmpn_sub_1(r + m, (mp_srcptr )(r + m), n___0 - m, cc);
    *(r + n___0) = - tmp___15;
    tmp___16 = __gmpn_sub_1(r + m, (mp_srcptr )(r + m), n___0 - m, rd);
    *(r + n___0) -= tmp___16;
    if (*(r + n___0) & (0xffffffffffffffffUL ^ (0xffffffffffffffffUL >> 1))) {
      *(r + n___0) = __gmpn_add_1(r, (mp_srcptr )r, n___0, (mp_limb_t )1L);
    }
  }
  return;
}
}
__inline static void mpn_fft_add_modF(mp_ptr r , mp_srcptr a , mp_srcptr b , mp_size_t n___0 )
{
  mp_limb_t c ;
  mp_limb_t x ;
  mp_limb_t tmp ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___2 ;

  {
  tmp = __gmpn_add_n(r, a, b, n___0);
  c = (mp_limb_t )((*(a + n___0) + *(b + n___0)) + (mp_limb_t const )tmp);
  x = (c - 1UL) & (unsigned long )(- (c != 0UL));
  *(r + n___0) = c - x;
  while (1) {
    __p = r;
    __x = *__p;
    *__p = __x - x;
    if (__x < x) {
      while (1) {
        __p ++;
        tmp___2 = *__p;
        (*__p) --;
        if (! (tmp___2 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  return;
}
}
__inline static void mpn_fft_sub_modF(mp_ptr r , mp_srcptr a , mp_srcptr b , mp_size_t n___0 )
{
  mp_limb_t c ;
  mp_limb_t x ;
  mp_limb_t tmp ;
  mp_limb_t __x ;
  mp_ptr __p ;

  {
  tmp = __gmpn_sub_n(r, a, b, n___0);
  c = (mp_limb_t )((*(a + n___0) - *(b + n___0)) - (mp_limb_t const )tmp);
  x = - c & (unsigned long )(- ((c & (0xffffffffffffffffUL ^ (0xffffffffffffffffUL >> 1))) != 0UL));
  *(r + n___0) = x + c;
  while (1) {
    __p = r;
    __x = *__p + x;
    *__p = __x;
    if (__x < x) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  return;
}
}
static void mpn_fft_fft(mp_ptr *Ap , mp_size_t K , int **ll , mp_size_t omega , mp_size_t n___0 ,
                        mp_size_t inc , mp_ptr tp )
{
  mp_limb_t cy ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp ;
  mp_ptr tmp___0 ;
  mp_srcptr tmp___1 ;
  mp_ptr tmp___2 ;
  mp_limb_t tmp___3 ;
  mp_size_t j ;
  mp_size_t K2 ;
  int *lk ;

  {
  if (K == 2L) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (n___0 + 1L != 0L) {
          __n = (n___0 + 1L) - 1L;
          __dst = tp;
          __src = (mp_srcptr )*(Ap + 0);
          tmp = __src;
          __src ++;
          __x = (mp_limb_t )*tmp;
          if (__n != 0L) {
            while (1) {
              tmp___0 = __dst;
              __dst ++;
              *tmp___0 = __x;
              tmp___1 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___1;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___2 = __dst;
          __dst ++;
          *tmp___2 = __x;
        }
        break;
      }
      break;
    }
    __gmpn_add_n(*(Ap + 0), (mp_srcptr )*(Ap + 0), (mp_srcptr )*(Ap + inc), n___0 + 1L);
    cy = __gmpn_sub_n(*(Ap + inc), (mp_srcptr )tp, (mp_srcptr )*(Ap + inc), n___0 + 1L);
    if (*(*(Ap + 0) + n___0) > 1UL) {
      tmp___3 = __gmpn_sub_1(*(Ap + 0), (mp_srcptr )*(Ap + 0), n___0, *(*(Ap + 0) + n___0) - 1UL);
      *(*(Ap + 0) + n___0) = 1UL - tmp___3;
    }
    if (cy) {
      *(*(Ap + inc) + n___0) = __gmpn_add_1(*(Ap + inc), (mp_srcptr )*(Ap + inc),
                                            n___0, ~ *(*(Ap + inc) + n___0) + 1UL);
    }
  } else {
    K2 = K >> 1;
    lk = *ll;
    mpn_fft_fft(Ap, K2, ll - 1, 2L * omega, n___0, inc * 2L, tp);
    mpn_fft_fft(Ap + inc, K2, ll - 1, 2L * omega, n___0, inc * 2L, tp);
    j = (mp_size_t )0;
    while (j < K2) {
      mpn_fft_mul_2exp_modF(tp, (mp_srcptr )*(Ap + inc), (mp_bitcnt_t )((mp_size_t )*(lk + 0) * omega),
                            n___0);
      mpn_fft_sub_modF(*(Ap + inc), (mp_srcptr )*(Ap + 0), (mp_srcptr )tp, n___0);
      mpn_fft_add_modF(*(Ap + 0), (mp_srcptr )*(Ap + 0), (mp_srcptr )tp, n___0);
      j ++;
      lk += 2;
      Ap += 2L * inc;
    }
  }
  return;
}
}
__inline static void mpn_fft_normalize(mp_ptr ap , mp_size_t n___0 )
{
  mp_ptr __p ;
  mp_ptr tmp ;
  mp_limb_t tmp___0 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___2 ;

  {
  if (*(ap + n___0) != 0UL) {
    while (1) {
      __p = ap;
      while (1) {
        tmp = __p;
        __p ++;
        tmp___0 = *tmp;
        (*tmp) --;
        if (! (tmp___0 == 0UL)) {
          break;
        }
      }
      break;
    }
    if (*(ap + n___0) == 0UL) {
      while (1) {
        while (1) {
          break;
        }
        if (n___0 != 0L) {
          while (1) {
            __dst = ap;
            __n = n___0;
            while (1) {
              break;
            }
            while (1) {
              tmp___2 = __dst;
              __dst ++;
              *tmp___2 = (mp_limb_t )0L;
              __n --;
              if (! __n) {
                break;
              }
            }
            break;
          }
        }
        break;
      }
      *(ap + n___0) = (mp_limb_t )1;
    } else {
      *(ap + n___0) = (mp_limb_t )0;
    }
  }
  return;
}
}
static void mpn_fft_mul_modF_K(mp_ptr *ap , mp_ptr *bp , mp_size_t n___0 , mp_size_t K )
{
  int i ;
  int sqr ;
  struct tmp_reentrant_t *__tmp_marker ;
  mp_size_t K2 ;
  mp_size_t nprime2 ;
  mp_size_t Nprime2 ;
  mp_size_t M2 ;
  mp_size_t maxLK ;
  mp_size_t l ;
  mp_size_t Mp2 ;
  int k ;
  int **fft_l ;
  int *tmp ;
  mp_ptr *Ap ;
  mp_ptr *Bp ;
  mp_ptr A ;
  mp_ptr B ;
  mp_ptr T ;
  long tmp___0 ;
  mp_size_t K3 ;
  int tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  mp_limb_t cy ;
  mp_ptr a ;
  mp_ptr b ;
  mp_ptr tp ;
  mp_ptr tpn ;
  mp_limb_t cc ;
  mp_size_t n2 ;
  void *tmp___10 ;
  mp_ptr *tmp___11 ;
  mp_ptr *tmp___12 ;
  mp_limb_t tmp___13 ;
  mp_limb_t tmp___14 ;
  mp_limb_t tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  long tmp___18 ;

  {
  sqr = (unsigned long )ap == (unsigned long )bp;
  __tmp_marker = (struct tmp_reentrant_t *)0;
  if (sqr) {
    tmp___17 = 360;
  } else {
    tmp___17 = 300;
  }
  if (n___0 >= (mp_size_t )tmp___17) {
    k = __gmpn_fft_best_k(n___0, sqr);
    K2 = 1L << k;
    while (1) {
      tmp___0 = __builtin_expect((long )(! ((n___0 & (K2 - 1L)) == 0L) != 0), 0L);
      if (tmp___0) {
        __gmp_assert_fail("mul_fft.c", 449, "(n & (K2 - 1)) == 0");
      }
      break;
    }
    if (K2 > 64L) {
      maxLK = K2;
    } else {
      maxLK = (mp_size_t )64;
    }
    M2 = n___0 * 64L >> k;
    l = n___0 >> k;
    Nprime2 = ((((2L * M2 + (mp_size_t )k) + 2L) + maxLK) / maxLK) * maxLK;
    nprime2 = Nprime2 / 64L;
    if (sqr) {
      tmp___2 = 360;
    } else {
      tmp___2 = 300;
    }
    if (nprime2 >= (mp_size_t )tmp___2) {
      while (1) {
        tmp___1 = __gmpn_fft_best_k(nprime2, sqr);
        K3 = 1L << tmp___1;
        if ((nprime2 & (K3 - 1L)) == 0L) {
          break;
        }
        nprime2 = ((nprime2 + K3) - 1L) & - K3;
        Nprime2 = nprime2 * 64L;
      }
    }
    while (1) {
      tmp___3 = __builtin_expect((long )(! (nprime2 < n___0) != 0), 0L);
      if (tmp___3) {
        __gmp_assert_fail("mul_fft.c", 471, "nprime2 < n");
      }
      break;
    }
    Mp2 = Nprime2 >> k;
    tmp___4 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )K2 * sizeof(mp_ptr ));
    Ap = (mp_ptr *)tmp___4;
    tmp___5 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )K2 * sizeof(mp_ptr ));
    Bp = (mp_ptr *)tmp___5;
    tmp___6 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(2L * (nprime2 + 1L) << k) * sizeof(mp_limb_t ));
    A = (mp_limb_t *)tmp___6;
    tmp___7 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(2L * (nprime2 + 1L)) * sizeof(mp_limb_t ));
    T = (mp_limb_t *)tmp___7;
    B = A + ((nprime2 + 1L) << k);
    tmp___8 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(k + 1) * sizeof(int *));
    fft_l = (int **)tmp___8;
    tmp___9 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (2UL << k) * sizeof(int ));
    tmp = (int *)tmp___9;
    i = 0;
    while (i <= k) {
      *(fft_l + i) = tmp;
      tmp += 1L << i;
      i ++;
    }
    mpn_fft_initl(fft_l, k);
    i = 0;
    while ((mp_size_t )i < K) {
      mpn_fft_normalize(*ap, n___0);
      if (! sqr) {
        mpn_fft_normalize(*bp, n___0);
      }
      mpn_mul_fft_decompose(A, Ap, K2, nprime2, (mp_srcptr )*ap, (l << k) + 1L, l,
                            Mp2, T);
      if (! sqr) {
        mpn_mul_fft_decompose(B, Bp, K2, nprime2, (mp_srcptr )*bp, (l << k) + 1L,
                              l, Mp2, T);
      }
      cy = mpn_mul_fft_internal(*ap, n___0, k, Ap, Bp, A, B, nprime2, l, Mp2, fft_l,
                                T, sqr);
      *(*ap + n___0) = cy;
      i ++;
      ap ++;
      bp ++;
    }
  } else {
    n2 = 2L * n___0;
    tmp___10 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )n2 * sizeof(mp_limb_t ));
    tp = (mp_limb_t *)tmp___10;
    tpn = tp + n___0;
    i = 0;
    while ((mp_size_t )i < K) {
      tmp___11 = ap;
      ap ++;
      a = *tmp___11;
      tmp___12 = bp;
      bp ++;
      b = *tmp___12;
      if (sqr) {
        __gmpn_sqr(tp, (mp_srcptr )a, n___0);
      } else {
        __gmpn_mul_n(tp, (mp_srcptr )b, (mp_srcptr )a, n___0);
      }
      if (*(a + n___0) != 0UL) {
        cc = __gmpn_add_n(tpn, (mp_srcptr )tpn, (mp_srcptr )b, n___0);
      } else {
        cc = (mp_limb_t )0;
      }
      if (*(b + n___0) != 0UL) {
        tmp___13 = __gmpn_add_n(tpn, (mp_srcptr )tpn, (mp_srcptr )a, n___0);
        cc += tmp___13 + *(a + n___0);
      }
      if (cc != 0UL) {
        cc = __gmpn_add_1(tp, (mp_srcptr )tp, n2, cc);
        while (1) {
          break;
        }
      }
      tmp___14 = __gmpn_sub_n(a, (mp_srcptr )tp, (mp_srcptr )tpn, n___0);
      if (tmp___14) {
        tmp___15 = __gmpn_add_1(a, (mp_srcptr )a, n___0, (mp_limb_t )1L);
        if (tmp___15) {
          tmp___16 = 1;
        } else {
          tmp___16 = 0;
        }
      } else {
        tmp___16 = 0;
      }
      *(a + n___0) = (mp_limb_t )tmp___16;
      i ++;
    }
  }
  while (1) {
    tmp___18 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___18) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
static void mpn_fft_fftinv(mp_ptr *Ap , mp_size_t K , mp_size_t omega , mp_size_t n___0 ,
                           mp_ptr tp )
{
  mp_limb_t cy ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp ;
  mp_ptr tmp___0 ;
  mp_srcptr tmp___1 ;
  mp_ptr tmp___2 ;
  mp_limb_t tmp___3 ;
  mp_size_t j ;
  mp_size_t K2 ;

  {
  if (K == 2L) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (n___0 + 1L != 0L) {
          __n = (n___0 + 1L) - 1L;
          __dst = tp;
          __src = (mp_srcptr )*(Ap + 0);
          tmp = __src;
          __src ++;
          __x = (mp_limb_t )*tmp;
          if (__n != 0L) {
            while (1) {
              tmp___0 = __dst;
              __dst ++;
              *tmp___0 = __x;
              tmp___1 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___1;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___2 = __dst;
          __dst ++;
          *tmp___2 = __x;
        }
        break;
      }
      break;
    }
    __gmpn_add_n(*(Ap + 0), (mp_srcptr )*(Ap + 0), (mp_srcptr )*(Ap + 1), n___0 + 1L);
    cy = __gmpn_sub_n(*(Ap + 1), (mp_srcptr )tp, (mp_srcptr )*(Ap + 1), n___0 + 1L);
    if (*(*(Ap + 0) + n___0) > 1UL) {
      tmp___3 = __gmpn_sub_1(*(Ap + 0), (mp_srcptr )*(Ap + 0), n___0, *(*(Ap + 0) + n___0) - 1UL);
      *(*(Ap + 0) + n___0) = 1UL - tmp___3;
    }
    if (cy) {
      *(*(Ap + 1) + n___0) = __gmpn_add_1(*(Ap + 1), (mp_srcptr )*(Ap + 1), n___0,
                                          ~ *(*(Ap + 1) + n___0) + 1UL);
    }
  } else {
    K2 = K >> 1;
    mpn_fft_fftinv(Ap, K2, 2L * omega, n___0, tp);
    mpn_fft_fftinv(Ap + K2, K2, 2L * omega, n___0, tp);
    j = (mp_size_t )0;
    while (j < K2) {
      mpn_fft_mul_2exp_modF(tp, (mp_srcptr )*(Ap + K2), (mp_bitcnt_t )(j * omega),
                            n___0);
      mpn_fft_sub_modF(*(Ap + K2), (mp_srcptr )*(Ap + 0), (mp_srcptr )tp, n___0);
      mpn_fft_add_modF(*(Ap + 0), (mp_srcptr )*(Ap + 0), (mp_srcptr )tp, n___0);
      j ++;
      Ap ++;
    }
  }
  return;
}
}
static void mpn_fft_div_2exp_modF(mp_ptr r , mp_srcptr a , mp_bitcnt_t k , mp_size_t n___0 )
{
  mp_bitcnt_t i ;

  {
  while (1) {
    break;
  }
  i = (2UL * (mp_bitcnt_t )n___0) * 64UL - k;
  mpn_fft_mul_2exp_modF(r, a, i, n___0);
  mpn_fft_normalize(r, n___0);
  return;
}
}
static mp_size_t mpn_fft_norm_modF(mp_ptr rp , mp_size_t n___0 , mp_ptr ap , mp_size_t an )
{
  mp_size_t l ;
  mp_size_t m ;
  mp_size_t rpn ;
  mp_limb_t cc ;
  mp_limb_t tmp ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___0 ;
  mp_ptr tmp___1 ;
  mp_srcptr tmp___2 ;
  mp_ptr tmp___3 ;
  mp_limb_t tmp___4 ;
  mp_limb_t tmp___5 ;

  {
  while (1) {
    break;
  }
  m = an - 2L * n___0;
  if (m > 0L) {
    l = n___0;
    cc = __gmpn_add_n(rp, (mp_srcptr )ap, (mp_srcptr )(ap + 2L * n___0), m);
    tmp = __gmpn_add_1(rp + m, (mp_srcptr )(ap + m), n___0 - m, cc);
    rpn = (mp_size_t )tmp;
  } else {
    l = an - n___0;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (n___0 != 0L) {
          __n = n___0 - 1L;
          __dst = rp;
          __src = (mp_srcptr )ap;
          tmp___0 = __src;
          __src ++;
          __x = (mp_limb_t )*tmp___0;
          if (__n != 0L) {
            while (1) {
              tmp___1 = __dst;
              __dst ++;
              *tmp___1 = __x;
              tmp___2 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___2;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___3 = __dst;
          __dst ++;
          *tmp___3 = __x;
        }
        break;
      }
      break;
    }
    rpn = (mp_size_t )0;
  }
  cc = __gmpn_sub_n(rp, (mp_srcptr )rp, (mp_srcptr )(ap + n___0), l);
  tmp___4 = __gmpn_sub_1(rp + l, (mp_srcptr )(rp + l), n___0 - l, cc);
  rpn = (mp_size_t )((mp_limb_t )rpn - tmp___4);
  if (rpn < 0L) {
    tmp___5 = __gmpn_add_1(rp, (mp_srcptr )rp, n___0, (mp_limb_t )1L);
    rpn = (mp_size_t )tmp___5;
  }
  return (rpn);
}
}
static void mpn_mul_fft_decompose(mp_ptr A , mp_ptr *Ap , mp_size_t K , mp_size_t nprime ,
                                  mp_srcptr n___0 , mp_size_t nl , mp_size_t l , mp_size_t Mp ,
                                  mp_ptr T )
{
  mp_size_t i ;
  mp_size_t j ;
  mp_ptr tmp ;
  mp_size_t Kl ;
  struct tmp_reentrant_t *__tmp_marker ;
  mp_size_t dif ;
  mp_limb_signed_t cy ;
  void *tmp___0 ;
  int subp ;
  mp_limb_t tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;
  mp_limb_t tmp___4 ;
  mp_limb_t tmp___5 ;
  mp_limb_t tmp___6 ;
  mp_limb_t tmp___7 ;
  mp_limb_t tmp___8 ;
  mp_limb_t tmp___9 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___10 ;
  mp_ptr tmp___11 ;
  mp_srcptr tmp___12 ;
  mp_ptr tmp___13 ;
  mp_ptr __dst___0 ;
  mp_size_t __n___0 ;
  mp_ptr tmp___14 ;
  mp_ptr __dst___1 ;
  mp_size_t __n___1 ;
  mp_ptr tmp___15 ;
  long tmp___16 ;
  long tmp___17 ;

  {
  Kl = K * l;
  __tmp_marker = (struct tmp_reentrant_t *)0;
  if (nl > Kl) {
    dif = nl - Kl;
    tmp___0 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(Kl + 1L) * sizeof(mp_limb_t ));
    tmp = (mp_limb_t *)tmp___0;
    if (dif > Kl) {
      subp = 0;
      tmp___1 = __gmpn_sub_n(tmp, n___0, n___0 + Kl, Kl);
      cy = (mp_limb_signed_t )tmp___1;
      n___0 += 2L * Kl;
      dif -= Kl;
      while (dif > Kl) {
        if (subp) {
          tmp___2 = __gmpn_sub_n(tmp, (mp_srcptr )tmp, n___0, Kl);
          cy = (mp_limb_signed_t )((mp_limb_t )cy + tmp___2);
        } else {
          tmp___3 = __gmpn_add_n(tmp, (mp_srcptr )tmp, n___0, Kl);
          cy = (mp_limb_signed_t )((mp_limb_t )cy - tmp___3);
        }
        subp ^= 1;
        n___0 += Kl;
        dif -= Kl;
      }
      if (subp) {
        tmp___4 = __gmpn_sub(tmp, (mp_srcptr )tmp, Kl, n___0, dif);
        cy = (mp_limb_signed_t )((mp_limb_t )cy + tmp___4);
      } else {
        tmp___5 = __gmpn_add(tmp, (mp_srcptr )tmp, Kl, n___0, dif);
        cy = (mp_limb_signed_t )((mp_limb_t )cy - tmp___5);
      }
      if (cy >= 0L) {
        tmp___6 = __gmpn_add_1(tmp, (mp_srcptr )tmp, Kl, (mp_limb_t )cy);
        cy = (mp_limb_signed_t )tmp___6;
      } else {
        tmp___7 = __gmpn_sub_1(tmp, (mp_srcptr )tmp, Kl, (mp_limb_t )(- cy));
        cy = (mp_limb_signed_t )tmp___7;
      }
    } else {
      tmp___8 = __gmpn_sub(tmp, n___0, Kl, n___0 + Kl, dif);
      cy = (mp_limb_signed_t )tmp___8;
      tmp___9 = __gmpn_add_1(tmp, (mp_srcptr )tmp, Kl, (mp_limb_t )cy);
      cy = (mp_limb_signed_t )tmp___9;
    }
    *(tmp + Kl) = (mp_limb_t )cy;
    nl = Kl + 1L;
    n___0 = (mp_srcptr )tmp;
  }
  i = (mp_size_t )0;
  while (i < K) {
    *(Ap + i) = A;
    if (nl > 0L) {
      if (l <= nl) {
        if (i < K - 1L) {
          j = l;
        } else {
          j = nl;
        }
      } else {
        j = nl;
      }
      nl -= j;
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (j != 0L) {
            __n = j - 1L;
            __dst = T;
            __src = n___0;
            tmp___10 = __src;
            __src ++;
            __x = (mp_limb_t )*tmp___10;
            if (__n != 0L) {
              while (1) {
                tmp___11 = __dst;
                __dst ++;
                *tmp___11 = __x;
                tmp___12 = __src;
                __src ++;
                __x = (mp_limb_t )*tmp___12;
                __n --;
                if (! __n) {
                  break;
                }
              }
            }
            tmp___13 = __dst;
            __dst ++;
            *tmp___13 = __x;
          }
          break;
        }
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        if ((nprime + 1L) - j != 0L) {
          while (1) {
            __dst___0 = T + j;
            __n___0 = (nprime + 1L) - j;
            while (1) {
              break;
            }
            while (1) {
              tmp___14 = __dst___0;
              __dst___0 ++;
              *tmp___14 = (mp_limb_t )0L;
              __n___0 --;
              if (! __n___0) {
                break;
              }
            }
            break;
          }
        }
        break;
      }
      n___0 += l;
      mpn_fft_mul_2exp_modF(A, (mp_srcptr )T, (mp_bitcnt_t )(i * Mp), nprime);
    } else {
      while (1) {
        while (1) {
          break;
        }
        if (nprime + 1L != 0L) {
          while (1) {
            __dst___1 = A;
            __n___1 = nprime + 1L;
            while (1) {
              break;
            }
            while (1) {
              tmp___15 = __dst___1;
              __dst___1 ++;
              *tmp___15 = (mp_limb_t )0L;
              __n___1 --;
              if (! __n___1) {
                break;
              }
            }
            break;
          }
        }
        break;
      }
    }
    A += nprime + 1L;
    i ++;
  }
  while (1) {
    tmp___16 = __builtin_expect((long )(! (nl == 0L) != 0), 0L);
    if (tmp___16) {
      __gmp_assert_fail("mul_fft.c", 715, "nl == 0");
    }
    break;
  }
  while (1) {
    tmp___17 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___17) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
static mp_limb_t mpn_mul_fft_internal(mp_ptr op , mp_size_t pl , int k , mp_ptr *Ap ,
                                      mp_ptr *Bp , mp_ptr A , mp_ptr B , mp_size_t nprime ,
                                      mp_size_t l , mp_size_t Mp , int **fft_l , mp_ptr T ,
                                      int sqr )
{
  mp_size_t K ;
  mp_size_t i ;
  mp_size_t pla ;
  mp_size_t lo ;
  mp_size_t sh ;
  mp_size_t j ;
  mp_ptr p ;
  mp_limb_t cc ;
  mp_ptr *tmp ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___0 ;
  mp_ptr __dst___0 ;
  mp_size_t __n___0 ;
  mp_ptr tmp___1 ;
  mp_ptr n___0 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;
  mp_limb_t tmp___4 ;
  mp_limb_t tmp___5 ;
  int tmp___6 ;
  mp_size_t tmp___7 ;

  {
  K = 1L << k;
  mpn_fft_fft(Ap, K, fft_l + k, 2L * Mp, nprime, (mp_size_t )1, T);
  if (! sqr) {
    mpn_fft_fft(Bp, K, fft_l + k, 2L * Mp, nprime, (mp_size_t )1, T);
  }
  if (sqr) {
    tmp = Ap;
  } else {
    tmp = Bp;
  }
  mpn_fft_mul_modF_K(Ap, tmp, nprime, K);
  mpn_fft_fftinv(Ap, K, 2L * Mp, nprime, T);
  *(Bp + 0) = (T + nprime) + 1;
  mpn_fft_div_2exp_modF(*(Bp + 0), (mp_srcptr )*(Ap + 0), (mp_bitcnt_t )k, nprime);
  i = (mp_size_t )1;
  while (i < K) {
    *(Bp + i) = *(Ap + (i - 1L));
    mpn_fft_div_2exp_modF(*(Bp + i), (mp_srcptr )*(Ap + i), (mp_bitcnt_t )((mp_size_t )k + (K - i) * Mp),
                          nprime);
    i ++;
  }
  while (1) {
    while (1) {
      break;
    }
    if (nprime + 1L != 0L) {
      while (1) {
        __dst = T;
        __n = nprime + 1L;
        while (1) {
          break;
        }
        while (1) {
          tmp___0 = __dst;
          __dst ++;
          *tmp___0 = (mp_limb_t )0L;
          __n --;
          if (! __n) {
            break;
          }
        }
        break;
      }
    }
    break;
  }
  pla = (l * (K - 1L) + nprime) + 1L;
  p = B;
  while (1) {
    while (1) {
      break;
    }
    if (pla != 0L) {
      while (1) {
        __dst___0 = p;
        __n___0 = pla;
        while (1) {
          break;
        }
        while (1) {
          tmp___1 = __dst___0;
          __dst___0 ++;
          *tmp___1 = (mp_limb_t )0L;
          __n___0 --;
          if (! __n___0) {
            break;
          }
        }
        break;
      }
    }
    break;
  }
  cc = (mp_limb_t )0;
  i = K - 1L;
  lo = l * i + nprime;
  sh = l * i;
  while (i >= 0L) {
    n___0 = p + sh;
    j = (K - i) & (K - 1L);
    tmp___3 = __gmpn_add_n(n___0, (mp_srcptr )n___0, (mp_srcptr )*(Bp + j), nprime + 1L);
    if (tmp___3) {
      tmp___2 = __gmpn_add_1((n___0 + nprime) + 1, (mp_srcptr )((n___0 + nprime) + 1),
                             ((pla - sh) - nprime) - 1L, (mp_limb_t )1L);
      cc += tmp___2;
    }
    *(T + 2L * l) = (mp_limb_t )(i + 1L);
    tmp___6 = __gmpn_cmp((mp_srcptr )*(Bp + j), (mp_srcptr )T, nprime + 1L);
    if (tmp___6 > 0) {
      tmp___4 = __gmpn_sub_1(n___0, (mp_srcptr )n___0, pla - sh, (mp_limb_t )1L);
      cc -= tmp___4;
      tmp___5 = __gmpn_sub_1(p + lo, (mp_srcptr )(p + lo), pla - lo, (mp_limb_t )1L);
      cc -= tmp___5;
    }
    i --;
    lo -= l;
    sh -= l;
  }
  if (cc == 0xffffffffffffffffUL) {
    cc = __gmpn_add_1((p + pla) - pl, (mp_srcptr )((p + pla) - pl), pl, (mp_limb_t )1L);
    if (cc) {
      __gmpn_sub_1(((p + pla) - pl) - 1, (mp_srcptr )(((p + pla) - pl) - 1), pl + 1L,
                   (mp_limb_t )1L);
      __gmpn_sub_1((p + pla) - 1, (mp_srcptr )((p + pla) - 1), (mp_size_t )1, (mp_limb_t )1L);
    }
  } else
  if (cc == 1UL) {
    if (pla >= 2L * pl) {
      while (1) {
        cc = __gmpn_add_1((p + pla) - 2L * pl, (mp_srcptr )((p + pla) - 2L * pl),
                          2L * pl, cc);
        if (! cc) {
          break;
        }
      }
    } else {
      cc = __gmpn_sub_1((p + pla) - pl, (mp_srcptr )((p + pla) - pl), pl, cc);
      while (1) {
        break;
      }
    }
  } else {
    while (1) {
      break;
    }
  }
  tmp___7 = mpn_fft_norm_modF(op, pl, p, pla);
  return ((mp_limb_t )tmp___7);
}
}
static mp_bitcnt_t mpn_mul_fft_lcm(mp_bitcnt_t a , int k )
{
  mp_bitcnt_t l ;

  {
  l = (mp_bitcnt_t )k;
  while (1) {
    if (a % 2UL == 0UL) {
      if (! (k > 0)) {
        break;
      }
    } else {
      break;
    }
    a >>= 1;
    k --;
  }
  return (a << l);
}
}
mp_limb_t __gmpn_mul_fft(mp_ptr op , mp_size_t pl , mp_srcptr n___0 , mp_size_t nl ,
                         mp_srcptr m , mp_size_t ml , int k )
{
  int i ;
  mp_size_t K ;
  mp_size_t maxLK ;
  mp_size_t N ;
  mp_size_t Nprime ;
  mp_size_t nprime ;
  mp_size_t M ;
  mp_size_t Mp ;
  mp_size_t l ;
  mp_ptr *Ap ;
  mp_ptr *Bp ;
  mp_ptr A ;
  mp_ptr T ;
  mp_ptr B ;
  int **fft_l ;
  int *tmp ;
  int sqr ;
  int tmp___0 ;
  mp_limb_t h ;
  struct tmp_reentrant_t *__tmp_marker ;
  mp_size_t tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  mp_bitcnt_t tmp___6 ;
  mp_size_t K2 ;
  int tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  void *tmp___12 ;
  mp_size_t pla ;
  void *tmp___13 ;
  void *tmp___14 ;
  void *tmp___15 ;
  void *tmp___16 ;
  long tmp___17 ;

  {
  if ((unsigned long )n___0 == (unsigned long )m) {
    if (nl == ml) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
  } else {
    tmp___0 = 0;
  }
  sqr = tmp___0;
  while (1) {
    tmp___1 = __gmpn_fft_next_size(pl, k);
    if (tmp___1 == pl) {
      tmp___2 = 0;
    } else {
      tmp___2 = 1;
    }
    tmp___3 = __builtin_expect((long )(tmp___2 != 0), 0L);
    if (tmp___3) {
      __gmp_assert_fail("mul_fft.c", 841, "__gmpn_fft_next_size (pl, k) == pl");
    }
    break;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  N = pl * 64L;
  tmp___4 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(k + 1) * sizeof(int *));
  fft_l = (int **)tmp___4;
  tmp___5 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (2UL << k) * sizeof(int ));
  tmp = (int *)tmp___5;
  i = 0;
  while (i <= k) {
    *(fft_l + i) = tmp;
    tmp += 1L << i;
    i ++;
  }
  mpn_fft_initl(fft_l, k);
  K = 1L << k;
  M = N >> k;
  l = 1L + (M - 1L) / 64L;
  tmp___6 = mpn_mul_fft_lcm((mp_bitcnt_t )64, k);
  maxLK = (mp_size_t )tmp___6;
  Nprime = (1L + ((2L * M + (mp_size_t )k) + 2L) / maxLK) * maxLK;
  nprime = Nprime / 64L;
  if (sqr) {
    tmp___8 = 360;
  } else {
    tmp___8 = 300;
  }
  if (nprime >= (mp_size_t )tmp___8) {
    while (1) {
      tmp___7 = __gmpn_fft_best_k(nprime, sqr);
      K2 = 1L << tmp___7;
      if ((nprime & (K2 - 1L)) == 0L) {
        break;
      }
      nprime = ((nprime + K2) - 1L) & - K2;
      Nprime = nprime * 64L;
    }
  }
  while (1) {
    tmp___9 = __builtin_expect((long )(! (nprime < pl) != 0), 0L);
    if (tmp___9) {
      __gmp_assert_fail("mul_fft.c", 879, "nprime < pl");
    }
    break;
  }
  tmp___10 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(2L * (nprime + 1L)) * sizeof(mp_limb_t ));
  T = (mp_limb_t *)tmp___10;
  Mp = Nprime >> k;
  tmp___11 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(K * (nprime + 1L)) * sizeof(mp_limb_t ));
  A = (mp_limb_t *)tmp___11;
  tmp___12 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )K * sizeof(mp_ptr ));
  Ap = (mp_ptr *)tmp___12;
  mpn_mul_fft_decompose(A, Ap, K, nprime, n___0, nl, l, Mp, T);
  if (sqr) {
    pla = (l * (K - 1L) + nprime) + 1L;
    tmp___13 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )pla * sizeof(mp_limb_t ));
    B = (mp_limb_t *)tmp___13;
    tmp___14 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )K * sizeof(mp_ptr ));
    Bp = (mp_ptr *)tmp___14;
  } else {
    tmp___15 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(K * (nprime + 1L)) * sizeof(mp_limb_t ));
    B = (mp_limb_t *)tmp___15;
    tmp___16 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )K * sizeof(mp_ptr ));
    Bp = (mp_ptr *)tmp___16;
    mpn_mul_fft_decompose(B, Bp, K, nprime, m, ml, l, Mp, T);
  }
  h = mpn_mul_fft_internal(op, pl, k, Ap, Bp, A, B, nprime, l, Mp, fft_l, T, sqr);
  while (1) {
    tmp___17 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___17) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return (h);
}
}
#pragma merger("0","./mulmod_bnm1.i","")
mp_limb_t __gmpn_rshift(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , unsigned int cnt ) ;
void __gmpn_bc_mulmod_bnm1(mp_ptr rp , mp_srcptr ap , mp_srcptr bp , mp_size_t rn ,
                           mp_ptr tp ) ;
void __gmpn_bc_mulmod_bnm1(mp_ptr rp , mp_srcptr ap , mp_srcptr bp , mp_size_t rn ,
                           mp_ptr tp )
{
  mp_limb_t cy ;
  mp_limb_t __x ;
  mp_ptr __p ;

  {
  while (1) {
    break;
  }
  __gmpn_mul_n(tp, ap, bp, rn);
  cy = __gmpn_add_n(rp, (mp_srcptr )tp, (mp_srcptr )(tp + rn), rn);
  while (1) {
    __p = rp;
    __x = *__p + cy;
    *__p = __x;
    if (__x < cy) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  return;
}
}
static void mpn_bc_mulmod_bnp1(mp_ptr rp , mp_srcptr ap , mp_srcptr bp , mp_size_t rn ,
                               mp_ptr tp )
{
  mp_limb_t cy ;
  mp_limb_t tmp ;
  mp_limb_t __x ;
  mp_ptr __p ;

  {
  while (1) {
    break;
  }
  __gmpn_mul_n(tp, ap, bp, rn + 1L);
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tmp = __gmpn_sub_n(rp, (mp_srcptr )tp, (mp_srcptr )(tp + rn), rn);
  cy = *(tp + 2L * rn) + tmp;
  *(rp + rn) = (mp_limb_t )0;
  while (1) {
    __p = rp;
    __x = *__p + cy;
    *__p = __x;
    if (__x < cy) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  return;
}
}
void __gmpn_mulmod_bnm1(mp_ptr rp , mp_size_t rn , mp_srcptr ap , mp_size_t an , mp_srcptr bp ,
                        mp_size_t bn , mp_ptr tp )
{
  mp_limb_t cy ;
  mp_limb_t __x ;
  mp_ptr __p ;
  long tmp___0 ;
  long tmp___1 ;
  mp_size_t n___0 ;
  mp_limb_t cy___0 ;
  mp_limb_t hi ;
  mp_srcptr am1 ;
  mp_srcptr bm1 ;
  mp_size_t anm ;
  mp_size_t bnm ;
  mp_ptr so ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  long tmp___4 ;
  long tmp___5 ;
  int k ;
  mp_srcptr ap1 ;
  mp_srcptr bp1 ;
  mp_size_t anp ;
  mp_size_t bnp ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  mp_limb_t __x___3 ;
  mp_ptr __p___3 ;
  long tmp___8 ;
  long tmp___9 ;
  int mask ;
  mp_limb_t __x___4 ;
  mp_ptr __p___4 ;
  long tmp___11 ;
  mp_limb_t tmp___12 ;
  mp_limb_t __x___5 ;
  mp_ptr __p___5 ;
  mp_limb_t tmp___14 ;
  mp_limb_t tmp___15 ;
  mp_limb_t __x___6 ;
  mp_ptr __p___6 ;
  mp_limb_t tmp___18 ;
  long tmp___19 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if ((rn & 1L) != 0L) {
    goto _L;
  } else
  if (! (rn >= 16L)) {
    _L:
    tmp___1 = __builtin_expect((long )((bn < rn) != 0), 0L);
    if (tmp___1) {
      tmp___0 = __builtin_expect((long )((an + bn <= rn) != 0), 0L);
      if (tmp___0) {
        __gmpn_mul(rp, ap, an, bp, bn);
      } else {
        __gmpn_mul(tp, ap, an, bp, bn);
        cy = __gmpn_add(rp, (mp_srcptr )tp, rn, (mp_srcptr )(tp + rn), (an + bn) - rn);
        while (1) {
          __p = rp;
          __x = *__p + cy;
          *__p = __x;
          if (__x < cy) {
            while (1) {
              __p ++;
              (*__p) ++;
              if (! (*__p == 0UL)) {
                break;
              }
            }
          }
          break;
        }
      }
    } else {
      __gmpn_bc_mulmod_bnm1(rp, ap, bp, rn, tp);
    }
  } else {
    n___0 = rn >> 1;
    while (1) {
      break;
    }
    bm1 = bp;
    bnm = bn;
    tmp___5 = __builtin_expect((long )((an > n___0) != 0), 1L);
    if (tmp___5) {
      am1 = (mp_srcptr )tp;
      cy___0 = __gmpn_add(tp, ap, n___0, ap + n___0, an - n___0);
      while (1) {
        __p___0 = tp;
        __x___0 = *__p___0 + cy___0;
        *__p___0 = __x___0;
        if (__x___0 < cy___0) {
          while (1) {
            __p___0 ++;
            (*__p___0) ++;
            if (! (*__p___0 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      anm = n___0;
      so = tp + n___0;
      tmp___4 = __builtin_expect((long )((bn > n___0) != 0), 1L);
      if (tmp___4) {
        bm1 = (mp_srcptr )so;
        cy___0 = __gmpn_add(so, bp, n___0, bp + n___0, bn - n___0);
        while (1) {
          __p___1 = so;
          __x___1 = *__p___1 + cy___0;
          *__p___1 = __x___1;
          if (__x___1 < cy___0) {
            while (1) {
              __p___1 ++;
              (*__p___1) ++;
              if (! (*__p___1 == 0UL)) {
                break;
              }
            }
          }
          break;
        }
        bnm = n___0;
        so += n___0;
      }
    } else {
      so = tp;
      am1 = ap;
      anm = an;
    }
    __gmpn_mulmod_bnm1(rp, n___0, am1, anm, bm1, bnm, so);
    bp1 = bp;
    bnp = bn;
    tmp___9 = __builtin_expect((long )((an > n___0) != 0), 1L);
    if (tmp___9) {
      ap1 = (mp_srcptr )((tp + 2L * n___0) + 2);
      cy___0 = __gmpn_sub((tp + 2L * n___0) + 2, ap, n___0, ap + n___0, an - n___0);
      *(((tp + 2L * n___0) + 2) + n___0) = (mp_limb_t )0;
      while (1) {
        __p___2 = (tp + 2L * n___0) + 2;
        __x___2 = *__p___2 + cy___0;
        *__p___2 = __x___2;
        if (__x___2 < cy___0) {
          while (1) {
            __p___2 ++;
            (*__p___2) ++;
            if (! (*__p___2 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      anp = (mp_size_t )((mp_limb_t const )n___0 + *(ap1 + n___0));
      tmp___8 = __builtin_expect((long )((bn > n___0) != 0), 1L);
      if (tmp___8) {
        bp1 = (mp_srcptr )((((tp + 2L * n___0) + 2) + n___0) + 1);
        cy___0 = __gmpn_sub((((tp + 2L * n___0) + 2) + n___0) + 1, bp, n___0, bp + n___0,
                            bn - n___0);
        *(((tp + 2L * n___0) + 2) + (2L * n___0 + 1L)) = (mp_limb_t )0;
        while (1) {
          __p___3 = (((tp + 2L * n___0) + 2) + n___0) + 1;
          __x___3 = *__p___3 + cy___0;
          *__p___3 = __x___3;
          if (__x___3 < cy___0) {
            while (1) {
              __p___3 ++;
              (*__p___3) ++;
              if (! (*__p___3 == 0UL)) {
                break;
              }
            }
          }
          break;
        }
        bnp = (mp_size_t )((mp_limb_t const )n___0 + *(bp1 + n___0));
      }
    } else {
      ap1 = ap;
      anp = an;
    }
    if (! (n___0 >= 300L)) {
      k = 0;
    } else {
      k = __gmpn_fft_best_k(n___0, 0);
      mask = (1 << k) - 1;
      while (n___0 & (long )mask) {
        k --;
        mask >>= 1;
      }
    }
    if (k >= 4) {
      *(tp + n___0) = __gmpn_mul_fft(tp, n___0, ap1, anp, bp1, bnp, k);
    } else {
      tmp___11 = __builtin_expect((long )(((unsigned long )bp1 == (unsigned long )bp) != 0),
                                  0L);
      if (tmp___11) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        __gmpn_mul(tp, ap1, anp, bp1, bnp);
        anp = (anp + bnp) - n___0;
        while (1) {
          break;
        }
        anp -= (mp_size_t )(anp > n___0);
        cy___0 = __gmpn_sub(tp, (mp_srcptr )tp, n___0, (mp_srcptr )(tp + n___0), anp);
        *(tp + n___0) = (mp_limb_t )0;
        while (1) {
          __p___4 = tp;
          __x___4 = *__p___4 + cy___0;
          *__p___4 = __x___4;
          if (__x___4 < cy___0) {
            while (1) {
              __p___4 ++;
              (*__p___4) ++;
              if (! (*__p___4 == 0UL)) {
                break;
              }
            }
          }
          break;
        }
      } else {
        mpn_bc_mulmod_bnp1(tp, ap1, bp1, n___0, tp);
      }
    }
    tmp___12 = __gmpn_add_n(rp, (mp_srcptr )rp, (mp_srcptr )tp, n___0);
    cy___0 = *(tp + n___0) + tmp___12;
    cy___0 += *(rp + 0) & 1UL;
    __gmpn_rshift(rp, (mp_srcptr )rp, n___0, 1U);
    while (1) {
      break;
    }
    hi = (cy___0 << 63) & 0xffffffffffffffffUL;
    cy___0 >>= 1;
    while (1) {
      break;
    }
    *(rp + (n___0 - 1L)) |= hi;
    while (1) {
      break;
    }
    while (1) {
      break;
    }
    while (1) {
      __p___5 = rp;
      __x___5 = *__p___5 + cy___0;
      *__p___5 = __x___5;
      if (__x___5 < cy___0) {
        while (1) {
          __p___5 ++;
          (*__p___5) ++;
          if (! (*__p___5 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    tmp___19 = __builtin_expect((long )((an + bn < rn) != 0), 0L);
    if (tmp___19) {
      cy___0 = __gmpn_sub_n(rp + n___0, (mp_srcptr )rp, (mp_srcptr )tp, (an + bn) - n___0);
      tmp___14 = mpn_sub_nc(((tp + an) + bn) - n___0, (mp_srcptr )(((rp + an) + bn) - n___0),
                            (mp_srcptr )(((tp + an) + bn) - n___0), rn - (an + bn),
                            cy___0);
      cy___0 = *(tp + n___0) + tmp___14;
      while (1) {
        break;
      }
      cy___0 = __gmpn_sub_1(rp, (mp_srcptr )rp, an + bn, cy___0);
      while (1) {
        break;
      }
    } else {
      tmp___15 = __gmpn_sub_n(rp + n___0, (mp_srcptr )rp, (mp_srcptr )tp, n___0);
      cy___0 = *(tp + n___0) + tmp___15;
      while (1) {
        __p___6 = rp;
        __x___6 = *__p___6;
        *__p___6 = __x___6 - cy___0;
        if (__x___6 < cy___0) {
          while (1) {
            __p___6 ++;
            tmp___18 = *__p___6;
            (*__p___6) --;
            if (! (tmp___18 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    }
  }
  return;
}
}
mp_size_t __gmpn_mulmod_bnm1_next_size(mp_size_t n___0 ) __attribute__((__const__)) ;
mp_size_t __gmpn_mulmod_bnm1_next_size(mp_size_t n___0 )
{
  mp_size_t nh ;
  int tmp ;
  mp_size_t tmp___0 ;

  {
  if (! (n___0 >= 16L)) {
    return (n___0);
  }
  if (! (n___0 >= 61L)) {
    return ((n___0 + 1L) & -2L);
  }
  if (! (n___0 >= 121L)) {
    return ((n___0 + 3L) & -4L);
  }
  nh = (n___0 + 1L) >> 1;
  if (! (nh >= 300L)) {
    return ((n___0 + 7L) & -8L);
  }
  tmp = __gmpn_fft_best_k(nh, 0);
  tmp___0 = __gmpn_fft_next_size(nh, tmp);
  return (2L * tmp___0);
}
}
#pragma merger("0","./mul_n.i","")
void __gmpn_mul_n(mp_ptr p , mp_srcptr a , mp_srcptr b , mp_size_t n___0 )
{
  mp_limb_t ws[326] ;
  mp_ptr ws___0 ;
  void *tmp ;
  mp_ptr ws___1 ;
  void *tmp___0 ;
  mp_ptr ws___2 ;
  void *tmp___1 ;
  mp_ptr ws___3 ;
  struct tmp_reentrant_t *__tmp_marker ;
  int tmp___4 ;
  void *tmp___5 ;
  int tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  int tmp___9 ;
  long tmp___10 ;
  long tmp___11 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if (! (n___0 >= 30L)) {
    __gmpn_mul_basecase(p, a, n___0, b, n___0);
  } else
  if (! (n___0 >= 100L)) {
    while (1) {
      break;
    }
    __gmpn_toom22_mul(p, a, n___0, b, n___0, ws);
  } else
  if (! (n___0 >= 300L)) {
    tmp = alloca((unsigned long )(3L * n___0 + 64L) * sizeof(mp_limb_t ));
    ws___0 = (mp_limb_t *)tmp;
    __gmpn_toom33_mul(p, a, n___0, b, n___0, ws___0);
  } else
  if (! (n___0 >= 350L)) {
    tmp___0 = alloca((unsigned long )(3L * n___0 + 64L) * sizeof(mp_limb_t ));
    ws___1 = (mp_limb_t *)tmp___0;
    __gmpn_toom44_mul(p, a, n___0, b, n___0, ws___1);
  } else
  if (! (n___0 >= 450L)) {
    tmp___1 = alloca((unsigned long )((n___0 - 350L) * 2L + 1114L) * sizeof(mp_limb_t ));
    ws___2 = (mp_limb_t *)tmp___1;
    __gmpn_toom6h_mul(p, a, n___0, b, n___0, ws___2);
  } else
  if (! (n___0 >= 3000L)) {
    __tmp_marker = (struct tmp_reentrant_t *)0;
    if ((6750 >> 3) + 384 > 1314) {
      tmp___9 = (6750 >> 3) + 384;
    } else {
      tmp___9 = 1314;
    }
    tmp___10 = __builtin_expect((long )(((unsigned long )(((n___0 * 15L >> 3) - (mp_size_t )(6750 >> 3)) + (mp_size_t )tmp___9) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___10) {
      if ((6750 >> 3) + 384 > 1314) {
        tmp___4 = (6750 >> 3) + 384;
      } else {
        tmp___4 = 1314;
      }
      tmp___5 = alloca((unsigned long )(((n___0 * 15L >> 3) - (mp_size_t )(6750 >> 3)) + (mp_size_t )tmp___4) * sizeof(mp_limb_t ));
      tmp___8 = tmp___5;
    } else {
      if ((6750 >> 3) + 384 > 1314) {
        tmp___6 = (6750 >> 3) + 384;
      } else {
        tmp___6 = 1314;
      }
      tmp___7 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(((n___0 * 15L >> 3) - (mp_size_t )(6750 >> 3)) + (mp_size_t )tmp___6) * sizeof(mp_limb_t ));
      tmp___8 = tmp___7;
    }
    ws___3 = (mp_limb_t *)tmp___8;
    __gmpn_toom8h_mul(p, a, n___0, b, n___0, ws___3);
    while (1) {
      tmp___11 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                  0L);
      if (tmp___11) {
        __gmp_tmp_reentrant_free(__tmp_marker);
      }
      break;
    }
  } else {
    __gmpn_nussbaumer_mul(p, a, n___0, b, n___0);
  }
  return;
}
}
#pragma merger("0","./neg.i","")
#pragma merger("0","./nussbaumer_mul.i","")
void __gmpn_sqrmod_bnm1(mp_ptr rp , mp_size_t rn , mp_srcptr ap , mp_size_t an , mp_ptr tp ) ;
mp_size_t __gmpn_sqrmod_bnm1_next_size(mp_size_t n___0 ) __attribute__((__const__)) ;
__inline static mp_size_t mpn_sqrmod_bnm1_itch(mp_size_t rn , mp_size_t an )
{
  mp_size_t n___0 ;
  mp_size_t itch ;
  mp_size_t tmp ;

  {
  n___0 = rn >> 1;
  if (an > n___0) {
    tmp = an;
  } else {
    tmp = (mp_size_t )0;
  }
  itch = (rn + 3L) + tmp;
  return (itch);
}
}
void __gmpn_nussbaumer_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp ,
                           mp_size_t bn )
{
  mp_size_t rn ;
  mp_ptr tp ;
  struct tmp_reentrant_t *__tmp_marker ;
  mp_size_t tmp___1 ;
  void *tmp___2 ;
  mp_size_t tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  mp_size_t tmp___6 ;
  long tmp___7 ;
  mp_size_t tmp___10 ;
  void *tmp___11 ;
  mp_size_t tmp___12 ;
  void *tmp___13 ;
  void *tmp___14 ;
  mp_size_t tmp___15 ;
  long tmp___16 ;
  long tmp___17 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  if ((unsigned long )ap == (unsigned long )bp) {
    if (an == bn) {
      rn = __gmpn_sqrmod_bnm1_next_size(2L * an);
      tmp___6 = mpn_sqrmod_bnm1_itch(rn, an);
      tmp___7 = __builtin_expect((long )(((unsigned long )tmp___6 * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                 1L);
      if (tmp___7) {
        tmp___1 = mpn_sqrmod_bnm1_itch(rn, an);
        tmp___2 = alloca((unsigned long )tmp___1 * sizeof(mp_limb_t ));
        tmp___5 = tmp___2;
      } else {
        tmp___3 = mpn_sqrmod_bnm1_itch(rn, an);
        tmp___4 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )tmp___3 * sizeof(mp_limb_t ));
        tmp___5 = tmp___4;
      }
      tp = (mp_limb_t *)tmp___5;
      __gmpn_sqrmod_bnm1(pp, rn, ap, an, tp);
    } else {
      goto _L;
    }
  } else {
    _L:
    rn = __gmpn_mulmod_bnm1_next_size(an + bn);
    tmp___15 = mpn_mulmod_bnm1_itch(rn, an, bn);
    tmp___16 = __builtin_expect((long )(((unsigned long )tmp___15 * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___16) {
      tmp___10 = mpn_mulmod_bnm1_itch(rn, an, bn);
      tmp___11 = alloca((unsigned long )tmp___10 * sizeof(mp_limb_t ));
      tmp___14 = tmp___11;
    } else {
      tmp___12 = mpn_mulmod_bnm1_itch(rn, an, bn);
      tmp___13 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )tmp___12 * sizeof(mp_limb_t ));
      tmp___14 = tmp___13;
    }
    tp = (mp_limb_t *)tmp___14;
    __gmpn_mulmod_bnm1(pp, rn, ap, an, bp, bn, tp);
  }
  while (1) {
    tmp___17 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___17) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
#pragma merger("0","./out_str.i","")
# 11663 "a.cil.c"
#pragma merger("0","./pre_divrem_1.i","")
mp_limb_t __gmpn_preinv_divrem_1(mp_ptr qp , mp_size_t xsize , mp_srcptr ap , mp_size_t size ,
                                 mp_limb_t d_unnorm , mp_limb_t dinv , int shift )
{
  mp_limb_t ahigh ;
  mp_limb_t qhigh ;
  mp_limb_t r ;
  mp_size_t i ;
  mp_limb_t n1 ;
  mp_limb_t n0 ;
  mp_limb_t d ;
  mp_ptr tmp ;
  mp_limb_t _qh ;
  mp_limb_t _ql ;
  mp_limb_t _r ;
  mp_limb_t _mask ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  UWtype __x ;
  long tmp___0 ;
  mp_ptr tmp___1 ;
  mp_limb_t _qh___0 ;
  mp_limb_t _ql___0 ;
  mp_limb_t _r___0 ;
  mp_limb_t _mask___0 ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  UWtype __x___0 ;
  long tmp___2 ;
  mp_limb_t _qh___1 ;
  mp_limb_t _ql___1 ;
  mp_limb_t _r___1 ;
  mp_limb_t _mask___1 ;
  UWtype __x0___1 ;
  UWtype __x1___1 ;
  UWtype __x2___1 ;
  UWtype __x3___1 ;
  UHWtype __ul___1 ;
  UHWtype __vl___1 ;
  UHWtype __uh___1 ;
  UHWtype __vh___1 ;
  UWtype __u___1 ;
  UWtype __v___1 ;
  UWtype __x___1 ;
  long tmp___3 ;
  mp_limb_t _qh___2 ;
  mp_limb_t _ql___2 ;
  mp_limb_t _r___2 ;
  mp_limb_t _mask___2 ;
  UWtype __x0___2 ;
  UWtype __x1___2 ;
  UWtype __x2___2 ;
  UWtype __x3___2 ;
  UHWtype __ul___2 ;
  UHWtype __vl___2 ;
  UHWtype __uh___2 ;
  UHWtype __vh___2 ;
  UWtype __u___2 ;
  UWtype __v___2 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  ahigh = (mp_limb_t )*(ap + (size - 1L));
  d = d_unnorm << shift;
  qp += (size + xsize) - 1L;
  if (shift == 0) {
    r = ahigh;
    qhigh = (mp_limb_t )(r >= d);
    if (qhigh) {
      r -= d;
    } else {
      r = r;
    }
    tmp = qp;
    qp --;
    *tmp = qhigh;
    size --;
    i = size - 1L;
    while (i >= 0L) {
      n0 = (mp_limb_t )*(ap + i);
      while (1) {
        while (1) {
          __u = r;
          __v = dinv;
          __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
          __uh = (UHWtype )(__u >> 32);
          __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
          __vh = (UHWtype )(__v >> 32);
          __x0 = (UWtype )__ul * (UWtype )__vl;
          __x1 = (UWtype )__ul * (UWtype )__vh;
          __x2 = (UWtype )__uh * (UWtype )__vl;
          __x3 = (UWtype )__uh * (UWtype )__vh;
          __x1 += __x0 >> 32;
          __x1 += __x2;
          if (__x1 < __x2) {
            __x3 += 1UL << 32;
          }
          _qh = __x3 + (__x1 >> 32);
          _ql = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x = _ql + n0;
          _qh = (_qh + (r + 1UL)) + (mp_limb_t )(__x < _ql);
          _ql = __x;
          break;
        }
        _r = n0 - _qh * d;
        _mask = - ((mp_limb_t )(_r > _ql));
        _qh += _mask;
        _r += _mask & d;
        tmp___0 = __builtin_expect((long )((_r >= d) != 0), 0L);
        if (tmp___0) {
          _r -= d;
          _qh ++;
        }
        r = _r;
        *qp = _qh;
        break;
      }
      qp --;
      i --;
    }
  } else {
    r = (mp_limb_t )0;
    if (ahigh < d_unnorm) {
      r = ahigh << shift;
      tmp___1 = qp;
      qp --;
      *tmp___1 = (mp_limb_t )0;
      size --;
      if (size == 0L) {
        goto done_integer;
      }
    }
    n1 = (mp_limb_t )*(ap + (size - 1L));
    r |= n1 >> (64 - shift);
    i = size - 2L;
    while (i >= 0L) {
      while (1) {
        break;
      }
      n0 = (mp_limb_t )*(ap + i);
      while (1) {
        while (1) {
          __u___0 = r;
          __v___0 = dinv;
          __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
          __uh___0 = (UHWtype )(__u___0 >> 32);
          __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
          __vh___0 = (UHWtype )(__v___0 >> 32);
          __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
          __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
          __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
          __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
          __x1___0 += __x0___0 >> 32;
          __x1___0 += __x2___0;
          if (__x1___0 < __x2___0) {
            __x3___0 += 1UL << 32;
          }
          _qh___0 = __x3___0 + (__x1___0 >> 32);
          _ql___0 = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x___0 = _ql___0 + ((n1 << shift) | (n0 >> (64 - shift)));
          _qh___0 = (_qh___0 + (r + 1UL)) + (mp_limb_t )(__x___0 < _ql___0);
          _ql___0 = __x___0;
          break;
        }
        _r___0 = ((n1 << shift) | (n0 >> (64 - shift))) - _qh___0 * d;
        _mask___0 = - ((mp_limb_t )(_r___0 > _ql___0));
        _qh___0 += _mask___0;
        _r___0 += _mask___0 & d;
        tmp___2 = __builtin_expect((long )((_r___0 >= d) != 0), 0L);
        if (tmp___2) {
          _r___0 -= d;
          _qh___0 ++;
        }
        r = _r___0;
        *qp = _qh___0;
        break;
      }
      qp --;
      n1 = n0;
      i --;
    }
    while (1) {
      while (1) {
        __u___1 = r;
        __v___1 = dinv;
        __ul___1 = (UHWtype )(__u___1 & ((1UL << 32) - 1UL));
        __uh___1 = (UHWtype )(__u___1 >> 32);
        __vl___1 = (UHWtype )(__v___1 & ((1UL << 32) - 1UL));
        __vh___1 = (UHWtype )(__v___1 >> 32);
        __x0___1 = (UWtype )__ul___1 * (UWtype )__vl___1;
        __x1___1 = (UWtype )__ul___1 * (UWtype )__vh___1;
        __x2___1 = (UWtype )__uh___1 * (UWtype )__vl___1;
        __x3___1 = (UWtype )__uh___1 * (UWtype )__vh___1;
        __x1___1 += __x0___1 >> 32;
        __x1___1 += __x2___1;
        if (__x1___1 < __x2___1) {
          __x3___1 += 1UL << 32;
        }
        _qh___1 = __x3___1 + (__x1___1 >> 32);
        _ql___1 = (__x1___1 << 32) + (__x0___1 & ((1UL << 32) - 1UL));
        break;
      }
      while (1) {
        __x___1 = _ql___1 + (n1 << shift);
        _qh___1 = (_qh___1 + (r + 1UL)) + (mp_limb_t )(__x___1 < _ql___1);
        _ql___1 = __x___1;
        break;
      }
      _r___1 = (n1 << shift) - _qh___1 * d;
      _mask___1 = - ((mp_limb_t )(_r___1 > _ql___1));
      _qh___1 += _mask___1;
      _r___1 += _mask___1 & d;
      tmp___3 = __builtin_expect((long )((_r___1 >= d) != 0), 0L);
      if (tmp___3) {
        _r___1 -= d;
        _qh___1 ++;
      }
      r = _r___1;
      *qp = _qh___1;
      break;
    }
    qp --;
  }
  done_integer:
  i = (mp_size_t )0;
  while (i < xsize) {
    while (1) {
      while (1) {
        __u___2 = r;
        __v___2 = dinv;
        __ul___2 = (UHWtype )(__u___2 & ((1UL << 32) - 1UL));
        __uh___2 = (UHWtype )(__u___2 >> 32);
        __vl___2 = (UHWtype )(__v___2 & ((1UL << 32) - 1UL));
        __vh___2 = (UHWtype )(__v___2 >> 32);
        __x0___2 = (UWtype )__ul___2 * (UWtype )__vl___2;
        __x1___2 = (UWtype )__ul___2 * (UWtype )__vh___2;
        __x2___2 = (UWtype )__uh___2 * (UWtype )__vl___2;
        __x3___2 = (UWtype )__uh___2 * (UWtype )__vh___2;
        __x1___2 += __x0___2 >> 32;
        __x1___2 += __x2___2;
        if (__x1___2 < __x2___2) {
          __x3___2 += 1UL << 32;
        }
        _qh___2 = __x3___2 + (__x1___2 >> 32);
        _ql___2 = (__x1___2 << 32) + (__x0___2 & ((1UL << 32) - 1UL));
        break;
      }
      _qh___2 += r + 1UL;
      _r___2 = - _qh___2 * d;
      _mask___2 = - ((mp_limb_t )(_r___2 > _ql___2));
      _qh___2 += _mask___2;
      _r___2 += _mask___2 & d;
      r = _r___2;
      *qp = _qh___2;
      break;
    }
    qp --;
    i ++;
  }
  return (r >> shift);
}
}
#pragma merger("0","./randclr.i","")
void __gmp_randclear(__gmp_randstate_struct *rstate )
{


  {
  (*(((gmp_randfnptr_t *)rstate->_mp_algdata._mp_lc)->randclear_fn))(rstate);
  return;
}
}
#pragma merger("0","./randdef.i","")
void __gmp_randinit_default(__gmp_randstate_struct *rstate )
{


  {
  __gmp_randinit_mt(rstate);
  return;
}
}
#pragma merger("0","./randlc2s.i","")
static struct __gmp_rand_lc_scheme_struct const __gmp_rand_lc_scheme[18] =
  { {32UL, "29CF535", 1UL},
        {33UL, "51F666D", 1UL},
        {34UL, "A3D73AD", 1UL},
        {35UL, "147E5B85", 1UL},
        {36UL, "28F725C5", 1UL},
        {37UL, "51EE3105", 1UL},
        {38UL, "A3DD5CDD", 1UL},
        {39UL, "147AF833D", 1UL},
        {40UL, "28F5DA175", 1UL},
        {56UL, "AA7D735234C0DD", 1UL},
        {64UL, "BAECD515DAF0B49D", 1UL},
        {100UL, "292787EBD3329AD7E7575E2FD", 1UL},
        {128UL, "48A74F367FA7B5C8ACBB36901308FA85", 1UL},
        {156UL, "78A7FDDDC43611B527C3F1D760F36E5D7FC7C45", 1UL},
        {196UL, "41BA2E104EE34C66B3520CE706A56498DE6D44721E5E24F5", 1UL},
        {200UL, "4E5A24C38B981EAFE84CD9D0BEC48E83911362C114F30072C5", 1UL},
        {256UL, "AF66BA932AAF58A071FD8F0742A99A0C76982D648509973DB802303128A14CB5", 1UL},
        {0UL,
      (char const *)((void *)0), 0UL}};
int __gmp_randinit_lc_2exp_size(__gmp_randstate_struct *rstate , mp_bitcnt_t size )
{
  struct __gmp_rand_lc_scheme_struct const *sp ;
  mpz_t a ;

  {
  sp = __gmp_rand_lc_scheme;
  while (sp->m2exp != 0UL) {
    if (sp->m2exp / 2UL >= (unsigned long const )size) {
      goto found;
    }
    sp ++;
  }
  return (0);
  found:
  __gmpz_init_set_str(a, (char const *)sp->astr, 16);
  __gmp_randinit_lc_2exp(rstate, (mpz_srcptr )(a), (unsigned long )sp->c, (mp_bitcnt_t )sp->m2exp);
  __gmpz_clear(a);
  return (1);
}
}
#pragma merger("0","./randlc2x.i","")
static unsigned long lc(mp_ptr rp , __gmp_randstate_struct *rstate )
{
  mp_ptr tp ;
  mp_ptr seedp ;
  mp_ptr ap ;
  mp_size_t ta ;
  mp_size_t tn ;
  mp_size_t seedn ;
  mp_size_t an ;
  unsigned long m2exp ;
  unsigned long bits ;
  int cy ;
  mp_size_t xn ;
  gmp_rand_lc_struct *p ;
  struct tmp_reentrant_t *__tmp_marker ;
  mp_size_t tmp ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  long tmp___4 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___5 ;
  void *tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  long tmp___10 ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_size_t tmp___11 ;
  mp_limb_t tmp___12 ;
  mp_limb_t tmp___13 ;
  mp_size_t __gmp_j ;
  mp_size_t __n___0 ;
  mp_ptr __dst___0 ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___14 ;
  mp_ptr tmp___15 ;
  mp_srcptr tmp___16 ;
  mp_ptr tmp___17 ;
  unsigned int cnt ;
  mp_size_t __n___1 ;
  mp_ptr __dst___1 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___0 ;
  mp_srcptr tmp___18 ;
  mp_ptr tmp___19 ;
  mp_srcptr tmp___20 ;
  mp_ptr tmp___21 ;
  mp_size_t __n___2 ;
  mp_ptr __dst___2 ;
  mp_srcptr __src___1 ;
  mp_limb_t __x___1 ;
  mp_srcptr tmp___22 ;
  mp_ptr tmp___23 ;
  mp_srcptr tmp___24 ;
  mp_ptr tmp___25 ;
  long tmp___26 ;

  {
  p = (gmp_rand_lc_struct *)rstate->_mp_seed[0]._mp_d;
  m2exp = p->_mp_m2exp;
  seedp = p->_mp_seed[0]._mp_d;
  seedn = (mp_size_t )p->_mp_seed[0]._mp_size;
  ap = p->_mp_a[0]._mp_d;
  an = (mp_size_t )p->_mp_a[0]._mp_size;
  __tmp_marker = (struct tmp_reentrant_t *)0;
  ta = (an + seedn) + 1L;
  tn = (mp_size_t )((m2exp + 63UL) / 64UL);
  if (ta <= tn) {
    tmp = an + seedn;
    ta = tn + 1L;
    tmp___4 = __builtin_expect((long )(((unsigned long )ta * sizeof(mp_limb_t ) <= 32512UL) != 0),
                               1L);
    if (tmp___4) {
      tmp___1 = alloca((unsigned long )ta * sizeof(mp_limb_t ));
      tmp___3 = tmp___1;
    } else {
      tmp___2 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )ta * sizeof(mp_limb_t ));
      tmp___3 = tmp___2;
    }
    tp = (mp_limb_t *)tmp___3;
    while (1) {
      while (1) {
        break;
      }
      if (ta - tmp != 0L) {
        while (1) {
          __dst = tp + tmp;
          __n = ta - tmp;
          while (1) {
            break;
          }
          while (1) {
            tmp___5 = __dst;
            __dst ++;
            *tmp___5 = (mp_limb_t )0L;
            __n --;
            if (! __n) {
              break;
            }
          }
          break;
        }
      }
      break;
    }
  } else {
    tmp___10 = __builtin_expect((long )(((unsigned long )ta * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___10) {
      tmp___7 = alloca((unsigned long )ta * sizeof(mp_limb_t ));
      tmp___9 = tmp___7;
    } else {
      tmp___8 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )ta * sizeof(mp_limb_t ));
      tmp___9 = tmp___8;
    }
    tp = (mp_limb_t *)tmp___9;
  }
  while (1) {
    break;
  }
  __gmpn_mul(tp, (mp_srcptr )seedp, seedn, (mp_srcptr )ap, an);
  while (1) {
    break;
  }
  while (1) {
    __gmp_i = p->_cn;
    if (__gmp_i != 0L) {
      tmp___13 = __gmpn_add_n(tp, (mp_srcptr )tp, (mp_srcptr )(p->_cp), __gmp_i);
      if (tmp___13) {
        while (1) {
          if (__gmp_i >= tn) {
            cy = 1;
            goto __gmp_done;
          }
          __gmp_x = *(tp + __gmp_i);
          tmp___11 = __gmp_i;
          __gmp_i ++;
          tmp___12 = (__gmp_x + 1UL) & 0xffffffffffffffffUL;
          *(tp + tmp___11) = tmp___12;
          if (! (tmp___12 == 0UL)) {
            break;
          }
        }
      }
    }
    if ((unsigned long )tp != (unsigned long )tp) {
      while (1) {
        __gmp_j = __gmp_i;
        while (__gmp_j < tn) {
          *(tp + __gmp_j) = *(tp + __gmp_j);
          __gmp_j ++;
        }
        break;
      }
    }
    cy = 0;
    __gmp_done: ;
    break;
  }
  *(tp + m2exp / 64UL) &= (1UL << m2exp % 64UL) - 1UL;
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      if (tn != 0L) {
        __n___0 = tn - 1L;
        __dst___0 = p->_mp_seed[0]._mp_d;
        __src = (mp_srcptr )tp;
        tmp___14 = __src;
        __src ++;
        __x = (mp_limb_t )*tmp___14;
        if (__n___0 != 0L) {
          while (1) {
            tmp___15 = __dst___0;
            __dst___0 ++;
            *tmp___15 = __x;
            tmp___16 = __src;
            __src ++;
            __x = (mp_limb_t )*tmp___16;
            __n___0 --;
            if (! __n___0) {
              break;
            }
          }
        }
        tmp___17 = __dst___0;
        __dst___0 ++;
        *tmp___17 = __x;
      }
      break;
    }
    break;
  }
  bits = m2exp / 2UL;
  xn = (mp_size_t )(bits / 64UL);
  tn -= xn;
  if (tn > 0L) {
    cnt = (unsigned int )(bits % 64UL);
    if (cnt != 0U) {
      __gmpn_rshift(tp, (mp_srcptr )(tp + xn), tn, cnt);
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (xn + 1L != 0L) {
          __n___1 = (xn + 1L) - 1L;
          __dst___1 = rp;
          __src___0 = (mp_srcptr )tp;
          tmp___18 = __src___0;
          __src___0 ++;
          __x___0 = (mp_limb_t )*tmp___18;
          if (__n___1 != 0L) {
            while (1) {
              tmp___19 = __dst___1;
              __dst___1 ++;
              *tmp___19 = __x___0;
              tmp___20 = __src___0;
              __src___0 ++;
              __x___0 = (mp_limb_t )*tmp___20;
              __n___1 --;
              if (! __n___1) {
                break;
              }
            }
          }
          tmp___21 = __dst___1;
          __dst___1 ++;
          *tmp___21 = __x___0;
        }
        break;
      }
    } else {
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (tn != 0L) {
          __n___2 = tn - 1L;
          __dst___2 = rp;
          __src___1 = (mp_srcptr )(tp + xn);
          tmp___22 = __src___1;
          __src___1 ++;
          __x___1 = (mp_limb_t )*tmp___22;
          if (__n___2 != 0L) {
            while (1) {
              tmp___23 = __dst___2;
              __dst___2 ++;
              *tmp___23 = __x___1;
              tmp___24 = __src___1;
              __src___1 ++;
              __x___1 = (mp_limb_t )*tmp___24;
              __n___2 --;
              if (! __n___2) {
                break;
              }
            }
          }
          tmp___25 = __dst___2;
          __dst___2 ++;
          *tmp___25 = __x___1;
        }
        break;
      }
    }
  }
  while (1) {
    tmp___26 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___26) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return ((m2exp + 1UL) / 2UL);
}
}
static void randget_lc(__gmp_randstate_struct *rstate , mp_ptr rp , unsigned long nbits )
{
  unsigned long rbitpos ;
  int chunk_nbits ;
  mp_ptr tp ;
  mp_size_t tn ;
  gmp_rand_lc_struct *p ;
  struct tmp_reentrant_t *__tmp_marker ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  mp_ptr r2p ;
  mp_limb_t savelimb ;
  mp_limb_t rcy ;
  mp_ptr r2p___0 ;
  int last_nbits ;
  mp_limb_t savelimb___0 ;
  mp_limb_t rcy___0 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___4 ;
  mp_ptr tmp___5 ;
  mp_srcptr tmp___6 ;
  mp_ptr tmp___7 ;
  long tmp___8 ;

  {
  p = (gmp_rand_lc_struct *)rstate->_mp_seed[0]._mp_d;
  __tmp_marker = (struct tmp_reentrant_t *)0;
  chunk_nbits = (int )(p->_mp_m2exp / 2UL);
  tn = (mp_size_t )((chunk_nbits + 63) / 64);
  tmp___3 = __builtin_expect((long )(((unsigned long )tn * sizeof(mp_limb_t ) <= 32512UL) != 0),
                             1L);
  if (tmp___3) {
    tmp___0 = alloca((unsigned long )tn * sizeof(mp_limb_t ));
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )tn * sizeof(mp_limb_t ));
    tmp___2 = tmp___1;
  }
  tp = (mp_limb_t *)tmp___2;
  rbitpos = 0UL;
  while (rbitpos + (unsigned long )chunk_nbits <= nbits) {
    r2p = rp + rbitpos / 64UL;
    if (rbitpos % 64UL != 0UL) {
      lc(tp, rstate);
      savelimb = *(r2p + 0);
      rcy = __gmpn_lshift(r2p, (mp_srcptr )tp, tn, (unsigned int )(rbitpos % 64UL));
      *(r2p + 0) |= savelimb;
      if ((unsigned long )(chunk_nbits % 64) + rbitpos % 64UL > 64UL) {
        *(r2p + tn) = rcy;
      }
    } else {
      lc(r2p, rstate);
    }
    rbitpos += (unsigned long )chunk_nbits;
  }
  if (rbitpos != nbits) {
    r2p___0 = rp + rbitpos / 64UL;
    last_nbits = (int )(nbits - rbitpos);
    tn = (mp_size_t )((last_nbits + 63) / 64);
    lc(tp, rstate);
    if (rbitpos % 64UL != 0UL) {
      savelimb___0 = *(r2p___0 + 0);
      rcy___0 = __gmpn_lshift(r2p___0, (mp_srcptr )tp, tn, (unsigned int )(rbitpos % 64UL));
      *(r2p___0 + 0) |= savelimb___0;
      if ((rbitpos + (unsigned long )(tn * 64L)) - rbitpos % 64UL < nbits) {
        *(r2p___0 + tn) = rcy___0;
      }
    } else {
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (tn != 0L) {
            __n = tn - 1L;
            __dst = r2p___0;
            __src = (mp_srcptr )tp;
            tmp___4 = __src;
            __src ++;
            __x = (mp_limb_t )*tmp___4;
            if (__n != 0L) {
              while (1) {
                tmp___5 = __dst;
                __dst ++;
                *tmp___5 = __x;
                tmp___6 = __src;
                __src ++;
                __x = (mp_limb_t )*tmp___6;
                __n --;
                if (! __n) {
                  break;
                }
              }
            }
            tmp___7 = __dst;
            __dst ++;
            *tmp___7 = __x;
          }
          break;
        }
        break;
      }
    }
    if (nbits % 64UL != 0UL) {
      *(rp + nbits / 64UL) &= ~ (0xffffffffffffffffUL << nbits % 64UL);
    }
  }
  while (1) {
    tmp___8 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                               0L);
    if (tmp___8) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
static void randseed_lc(__gmp_randstate_struct *rstate , mpz_srcptr seed )
{
  gmp_rand_lc_struct *p ;
  mpz_ptr seedz ;
  mp_size_t seedn ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp ;

  {
  p = (gmp_rand_lc_struct *)rstate->_mp_seed[0]._mp_d;
  seedz = p->_mp_seed;
  seedn = (mp_size_t )((p->_mp_m2exp + 63UL) / 64UL);
  __gmpz_fdiv_r_2exp(seedz, seed, p->_mp_m2exp);
  while (1) {
    while (1) {
      break;
    }
    if (seedn - (mp_size_t )seedz->_mp_size != 0L) {
      while (1) {
        __dst = seedz->_mp_d + seedz->_mp_size;
        __n = seedn - (mp_size_t )seedz->_mp_size;
        while (1) {
          break;
        }
        while (1) {
          tmp = __dst;
          __dst ++;
          *tmp = (mp_limb_t )0L;
          __n --;
          if (! __n) {
            break;
          }
        }
        break;
      }
    }
    break;
  }
  seedz->_mp_size = (int )seedn;
  return;
}
}
static void randclear_lc(__gmp_randstate_struct *rstate )
{
  gmp_rand_lc_struct *p ;

  {
  p = (gmp_rand_lc_struct *)rstate->_mp_seed[0]._mp_d;
  __gmpz_clear(p->_mp_seed);
  __gmpz_clear(p->_mp_a);
  (*__gmp_free_func)((void *)p, sizeof(gmp_rand_lc_struct ));
  return;
}
}
static void randiset_lc(gmp_randstate_ptr dst , gmp_randstate_srcptr src ) ;
static struct __anonstruct_gmp_randfnptr_t_1027662539___0 const Linear_Congruential_Generator = {& randseed_lc,
    & randget_lc, & randclear_lc, & randiset_lc};
static void randiset_lc(gmp_randstate_ptr dst , gmp_randstate_srcptr src )
{
  gmp_rand_lc_struct *dstp ;
  gmp_rand_lc_struct *srcp ;
  void *tmp ;

  {
  srcp = (gmp_rand_lc_struct *)src->_mp_seed[0]._mp_d;
  tmp = (*__gmp_allocate_func)(sizeof(gmp_rand_lc_struct ));
  dstp = (gmp_rand_lc_struct *)tmp;
  dst->_mp_seed[0]._mp_d = (mp_limb_t *)((void *)dstp);
  dst->_mp_algdata._mp_lc = (void *)(& Linear_Congruential_Generator);
  __gmpz_init_set(dstp->_mp_seed, (mpz_srcptr )(srcp->_mp_seed));
  __gmpz_init_set(dstp->_mp_a, (mpz_srcptr )(srcp->_mp_a));
  dstp->_cn = srcp->_cn;
  dstp->_cp[0] = srcp->_cp[0];
  dstp->_mp_m2exp = srcp->_mp_m2exp;
  return;
}
}
void __gmp_randinit_lc_2exp(__gmp_randstate_struct *rstate , mpz_srcptr a , unsigned long c ,
                            mp_bitcnt_t m2exp )
{
  gmp_rand_lc_struct *p ;
  mp_size_t seedn ;
  long tmp ;
  void *tmp___0 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___1 ;

  {
  seedn = (mp_size_t )((m2exp + 63UL) / 64UL);
  while (1) {
    tmp = __builtin_expect((long )(! (m2exp != 0UL) != 0), 0L);
    if (tmp) {
      __gmp_assert_fail("randlc2x.c", 302, "m2exp != 0");
    }
    break;
  }
  tmp___0 = (*__gmp_allocate_func)(sizeof(gmp_rand_lc_struct ));
  p = (gmp_rand_lc_struct *)tmp___0;
  rstate->_mp_seed[0]._mp_d = (mp_limb_t *)((void *)p);
  rstate->_mp_algdata._mp_lc = (void *)(& Linear_Congruential_Generator);
  __gmpz_init2(p->_mp_seed, m2exp);
  while (1) {
    while (1) {
      break;
    }
    if (seedn != 0L) {
      while (1) {
        __dst = p->_mp_seed[0]._mp_d;
        __n = seedn;
        while (1) {
          break;
        }
        while (1) {
          tmp___1 = __dst;
          __dst ++;
          *tmp___1 = (mp_limb_t )0L;
          __n --;
          if (! __n) {
            break;
          }
        }
        break;
      }
    }
    break;
  }
  p->_mp_seed[0]._mp_size = (int )seedn;
  *(p->_mp_seed[0]._mp_d + 0) = (mp_limb_t )1;
  __gmpz_init(p->_mp_a);
  __gmpz_fdiv_r_2exp(p->_mp_a, a, m2exp);
  if (p->_mp_a[0]._mp_size == 0) {
    p->_mp_a[0]._mp_size = 1;
    *(p->_mp_a[0]._mp_d + 0) = (mp_limb_t )0L;
  }
  p->_cp[0] = c;
  p->_cn = (mp_size_t )(p->_cp[0] != 0UL);
  if (seedn < p->_cn) {
    p->_cn = (mp_size_t )(p->_cp[0] != 0UL);
  }
  p->_mp_m2exp = m2exp;
  return;
}
}
#pragma merger("0","./randmt.i","")
void __gmp_mt_recalc_buffer(gmp_uint_least32_t *mt ) ;
void __gmp_randget_mt(__gmp_randstate_struct *rstate , mp_ptr dest , unsigned long nbits ) ;
void __gmp_randclear_mt(__gmp_randstate_struct *rstate ) ;
void __gmp_randiset_mt(gmp_randstate_ptr dst , gmp_randstate_srcptr src ) ;
static gmp_uint_least32_t const default_state[624] =
  { (gmp_uint_least32_t const )3527914035U, (gmp_uint_least32_t const )2656741617U, (gmp_uint_least32_t const )268081179, (gmp_uint_least32_t const )2647329152U,
        (gmp_uint_least32_t const )1948258091, (gmp_uint_least32_t const )2776027204U, (gmp_uint_least32_t const )3924843231U, (gmp_uint_least32_t const )356040693,
        (gmp_uint_least32_t const )1501662143, (gmp_uint_least32_t const )3483261144U, (gmp_uint_least32_t const )167567410, (gmp_uint_least32_t const )1780246079,
        (gmp_uint_least32_t const )1360455562, (gmp_uint_least32_t const )1773396218, (gmp_uint_least32_t const )1838339685, (gmp_uint_least32_t const )3500719768U,
        (gmp_uint_least32_t const )4134123316U, (gmp_uint_least32_t const )1101798248, (gmp_uint_least32_t const )1661215729, (gmp_uint_least32_t const )1267559306,
        (gmp_uint_least32_t const )3267653079U, (gmp_uint_least32_t const )1451259005, (gmp_uint_least32_t const )1131429519, (gmp_uint_least32_t const )996213714,
        (gmp_uint_least32_t const )1239804735, (gmp_uint_least32_t const )3420107969U, (gmp_uint_least32_t const )2627243555U, (gmp_uint_least32_t const )1954278923,
        (gmp_uint_least32_t const )2433868585U, (gmp_uint_least32_t const )2667780954U, (gmp_uint_least32_t const )3972690361U, (gmp_uint_least32_t const )721309432,
        (gmp_uint_least32_t const )2216806381U, (gmp_uint_least32_t const )2894704625U, (gmp_uint_least32_t const )2933460467U, (gmp_uint_least32_t const )769085185,
        (gmp_uint_least32_t const )345008659, (gmp_uint_least32_t const )1971797929, (gmp_uint_least32_t const )4286838903U, (gmp_uint_least32_t const )1344839881,
        (gmp_uint_least32_t const )297059357, (gmp_uint_least32_t const )2091834308, (gmp_uint_least32_t const )2255671463U, (gmp_uint_least32_t const )1218953481,
        (gmp_uint_least32_t const )2199971231U, (gmp_uint_least32_t const )3154853215U, (gmp_uint_least32_t const )1973618822, (gmp_uint_least32_t const )4192260392U,
        (gmp_uint_least32_t const )1102017920, (gmp_uint_least32_t const )597408077, (gmp_uint_least32_t const )3329899649U, (gmp_uint_least32_t const )1961803118,
        (gmp_uint_least32_t const )3154294076U, (gmp_uint_least32_t const )1920902217, (gmp_uint_least32_t const )1804216326, (gmp_uint_least32_t const )1481879770,
        (gmp_uint_least32_t const )3185586932U, (gmp_uint_least32_t const )3458418821U, (gmp_uint_least32_t const )839737669, (gmp_uint_least32_t const )1221330239,
        (gmp_uint_least32_t const )14402770, (gmp_uint_least32_t const )3579454359U, (gmp_uint_least32_t const )3775241071U, (gmp_uint_least32_t const )473826769,
        (gmp_uint_least32_t const )157645924, (gmp_uint_least32_t const )3497834081U, (gmp_uint_least32_t const )1855467060, (gmp_uint_least32_t const )1842468727,
        (gmp_uint_least32_t const )3991736433U, (gmp_uint_least32_t const )3617455461U, (gmp_uint_least32_t const )4162248142U, (gmp_uint_least32_t const )3069899236U,
        (gmp_uint_least32_t const )477565044, (gmp_uint_least32_t const )823670205, (gmp_uint_least32_t const )418992887, (gmp_uint_least32_t const )4176741200U,
        (gmp_uint_least32_t const )1322177364, (gmp_uint_least32_t const )2089468203, (gmp_uint_least32_t const )833198413, (gmp_uint_least32_t const )1339324231,
        (gmp_uint_least32_t const )3693247011U, (gmp_uint_least32_t const )1845165535, (gmp_uint_least32_t const )1737942856, (gmp_uint_least32_t const )208626511,
        (gmp_uint_least32_t const )4187159069U, (gmp_uint_least32_t const )1291219145, (gmp_uint_least32_t const )108920113, (gmp_uint_least32_t const )2812535205U,
        (gmp_uint_least32_t const )2362956255U, (gmp_uint_least32_t const )2536295220U, (gmp_uint_least32_t const )1741168982, (gmp_uint_least32_t const )3578328744U,
        (gmp_uint_least32_t const )73198625, (gmp_uint_least32_t const )4079225851U, (gmp_uint_least32_t const )3740685991U, (gmp_uint_least32_t const )1138624709,
        (gmp_uint_least32_t const )3671193903U, (gmp_uint_least32_t const )925287787, (gmp_uint_least32_t const )336195994, (gmp_uint_least32_t const )2486161735U,
        (gmp_uint_least32_t const )3106305180U, (gmp_uint_least32_t const )2916889016U, (gmp_uint_least32_t const )1406195817, (gmp_uint_least32_t const )3518649086U,
        (gmp_uint_least32_t const )1730338700, (gmp_uint_least32_t const )584669812, (gmp_uint_least32_t const )2109846826, (gmp_uint_least32_t const )502034389,
        (gmp_uint_least32_t const )1919059789, (gmp_uint_least32_t const )175267273, (gmp_uint_least32_t const )3869776189U, (gmp_uint_least32_t const )2689762138U,
        (gmp_uint_least32_t const )3701135656U, (gmp_uint_least32_t const )3852385168U, (gmp_uint_least32_t const )1893444095, (gmp_uint_least32_t const )3591533725U,
        (gmp_uint_least32_t const )1515873164, (gmp_uint_least32_t const )1619455031, (gmp_uint_least32_t const )710383369, (gmp_uint_least32_t const )340388410,
        (gmp_uint_least32_t const )3163438086U, (gmp_uint_least32_t const )797967974, (gmp_uint_least32_t const )4226240465U, (gmp_uint_least32_t const )1798682897,
        (gmp_uint_least32_t const )4164112392U, (gmp_uint_least32_t const )4011759517U, (gmp_uint_least32_t const )1938469533, (gmp_uint_least32_t const )2732330972U,
        (gmp_uint_least32_t const )1989554269, (gmp_uint_least32_t const )4114783660U, (gmp_uint_least32_t const )2353103163U, (gmp_uint_least32_t const )2155077678U,
        (gmp_uint_least32_t const )3203939533U, (gmp_uint_least32_t const )2068883802, (gmp_uint_least32_t const )99506274, (gmp_uint_least32_t const )8560334,
        (gmp_uint_least32_t const )2359399820U, (gmp_uint_least32_t const )3192824546U, (gmp_uint_least32_t const )1116978035, (gmp_uint_least32_t const )1701804835,
        (gmp_uint_least32_t const )1098061528, (gmp_uint_least32_t const )1147656143, (gmp_uint_least32_t const )570484283, (gmp_uint_least32_t const )277893320,
        (gmp_uint_least32_t const )2169290311U, (gmp_uint_least32_t const )917623976, (gmp_uint_least32_t const )917476101, (gmp_uint_least32_t const )813901747,
        (gmp_uint_least32_t const )3956110148U, (gmp_uint_least32_t const )2805521959U, (gmp_uint_least32_t const )1511048089, (gmp_uint_least32_t const )1094858525,
        (gmp_uint_least32_t const )1688306984, (gmp_uint_least32_t const )187820210, (gmp_uint_least32_t const )1678792633, (gmp_uint_least32_t const )1794913851,
        (gmp_uint_least32_t const )277535059, (gmp_uint_least32_t const )2639110708U, (gmp_uint_least32_t const )204312921, (gmp_uint_least32_t const )478812703,
        (gmp_uint_least32_t const )822896314, (gmp_uint_least32_t const )2276069488U, (gmp_uint_least32_t const )3670553343U, (gmp_uint_least32_t const )172176418,
        (gmp_uint_least32_t const )2062637074, (gmp_uint_least32_t const )764255184, (gmp_uint_least32_t const )2572821993U, (gmp_uint_least32_t const )624061612,
        (gmp_uint_least32_t const )2739111131U, (gmp_uint_least32_t const )1283727820, (gmp_uint_least32_t const )1325602284, (gmp_uint_least32_t const )703095966,
        (gmp_uint_least32_t const )2809343343U, (gmp_uint_least32_t const )781505507, (gmp_uint_least32_t const )2107155264, (gmp_uint_least32_t const )964447604,
        (gmp_uint_least32_t const )1704834270, (gmp_uint_least32_t const )1954369178, (gmp_uint_least32_t const )3655042101U, (gmp_uint_least32_t const )1180294121,
        (gmp_uint_least32_t const )826174917, (gmp_uint_least32_t const )701564124, (gmp_uint_least32_t const )2669833402U, (gmp_uint_least32_t const )1160714416,
        (gmp_uint_least32_t const )3502002280U, (gmp_uint_least32_t const )2219614873U, (gmp_uint_least32_t const )2016094542, (gmp_uint_least32_t const )1256385403,
        (gmp_uint_least32_t const )2764338680U, (gmp_uint_least32_t const )1890063121, (gmp_uint_least32_t const )1262390220, (gmp_uint_least32_t const )2116080826,
        (gmp_uint_least32_t const )2882155465U, (gmp_uint_least32_t const )1472080224, (gmp_uint_least32_t const )1157215257, (gmp_uint_least32_t const )777418566,
        (gmp_uint_least32_t const )1928033658, (gmp_uint_least32_t const )271368424, (gmp_uint_least32_t const )2961126073U, (gmp_uint_least32_t const )3503996249U,
        (gmp_uint_least32_t const )3129322859U, (gmp_uint_least32_t const )4091676263U, (gmp_uint_least32_t const )2564259201U, (gmp_uint_least32_t const )427489863,
        (gmp_uint_least32_t const )1368320428, (gmp_uint_least32_t const )3775718818U, (gmp_uint_least32_t const )30354474, (gmp_uint_least32_t const )3550719805U,
        (gmp_uint_least32_t const )383647077, (gmp_uint_least32_t const )1720857336, (gmp_uint_least32_t const )475046657, (gmp_uint_least32_t const )3107819857U,
        (gmp_uint_least32_t const )2471810036U, (gmp_uint_least32_t const )2222815696U, (gmp_uint_least32_t const )3590205126U, (gmp_uint_least32_t const )528156176,
        (gmp_uint_least32_t const )4201353381U, (gmp_uint_least32_t const )3313995841U, (gmp_uint_least32_t const )779993182, (gmp_uint_least32_t const )1111433010,
        (gmp_uint_least32_t const )4016192987U, (gmp_uint_least32_t const )1237398144, (gmp_uint_least32_t const )2557562514U, (gmp_uint_least32_t const )3350652077U,
        (gmp_uint_least32_t const )3291579494U, (gmp_uint_least32_t const )121107218, (gmp_uint_least32_t const )1295777855, (gmp_uint_least32_t const )2597068575U,
        (gmp_uint_least32_t const )1595708013, (gmp_uint_least32_t const )140486513, (gmp_uint_least32_t const )408585122, (gmp_uint_least32_t const )4188673437U,
        (gmp_uint_least32_t const )185270578, (gmp_uint_least32_t const )4186864195U, (gmp_uint_least32_t const )3449732542U, (gmp_uint_least32_t const )26266409,
        (gmp_uint_least32_t const )282673078, (gmp_uint_least32_t const )998919575, (gmp_uint_least32_t const )1722178113, (gmp_uint_least32_t const )3829298799U,
        (gmp_uint_least32_t const )2008955969, (gmp_uint_least32_t const )3110626148U, (gmp_uint_least32_t const )3409353037U, (gmp_uint_least32_t const )1749459591,
        (gmp_uint_least32_t const )1451128823, (gmp_uint_least32_t const )907513304, (gmp_uint_least32_t const )3186012658U, (gmp_uint_least32_t const )3069172836U,
        (gmp_uint_least32_t const )2190803748U, (gmp_uint_least32_t const )1107640135, (gmp_uint_least32_t const )3231442204U, (gmp_uint_least32_t const )155375458,
        (gmp_uint_least32_t const )905522303, (gmp_uint_least32_t const )914222177, (gmp_uint_least32_t const )1860426115, (gmp_uint_least32_t const )3685414794U,
        (gmp_uint_least32_t const )643640391, (gmp_uint_least32_t const )2394210140U, (gmp_uint_least32_t const )867316439, (gmp_uint_least32_t const )2954067575U,
        (gmp_uint_least32_t const )926693799, (gmp_uint_least32_t const )2368417398U, (gmp_uint_least32_t const )3343978241U, (gmp_uint_least32_t const )1358553138,
        (gmp_uint_least32_t const )2065685979, (gmp_uint_least32_t const )1917594286, (gmp_uint_least32_t const )2970536753U, (gmp_uint_least32_t const )3433288120U,
        (gmp_uint_least32_t const )2131480336, (gmp_uint_least32_t const )1112849341, (gmp_uint_least32_t const )3824761751U, (gmp_uint_least32_t const )587531163,
        (gmp_uint_least32_t const )1393692194, (gmp_uint_least32_t const )439303066, (gmp_uint_least32_t const )266190231, (gmp_uint_least32_t const )18372126,
        (gmp_uint_least32_t const )175738387, (gmp_uint_least32_t const )2651536077U, (gmp_uint_least32_t const )3681328917U, (gmp_uint_least32_t const )4111650978U,
        (gmp_uint_least32_t const )2659990056U, (gmp_uint_least32_t const )3995174062U, (gmp_uint_least32_t const )5368879, (gmp_uint_least32_t const )607319887,
        (gmp_uint_least32_t const )2963957482U, (gmp_uint_least32_t const )1427279240, (gmp_uint_least32_t const )4158143032U, (gmp_uint_least32_t const )1303285378,
        (gmp_uint_least32_t const )1071421654, (gmp_uint_least32_t const )1594610497, (gmp_uint_least32_t const )1917107741, (gmp_uint_least32_t const )3350498936U,
        (gmp_uint_least32_t const )759640147, (gmp_uint_least32_t const )1133063712, (gmp_uint_least32_t const )3121553194U, (gmp_uint_least32_t const )1380796565,
        (gmp_uint_least32_t const )772848817, (gmp_uint_least32_t const )1278684545, (gmp_uint_least32_t const )1547587789, (gmp_uint_least32_t const )3479292974U,
        (gmp_uint_least32_t const )2467760555U, (gmp_uint_least32_t const )2176036604U, (gmp_uint_least32_t const )971587678, (gmp_uint_least32_t const )2147356812,
        (gmp_uint_least32_t const )1337671672, (gmp_uint_least32_t const )111928400, (gmp_uint_least32_t const )2136732958, (gmp_uint_least32_t const )2766392829U,
        (gmp_uint_least32_t const )3675221103U, (gmp_uint_least32_t const )362418727, (gmp_uint_least32_t const )1000336725, (gmp_uint_least32_t const )3523964799U,
        (gmp_uint_least32_t const )4226403459U, (gmp_uint_least32_t const )1686464025, (gmp_uint_least32_t const )3209869487U, (gmp_uint_least32_t const )2641364656U,
        (gmp_uint_least32_t const )1897290694, (gmp_uint_least32_t const )2922531566U, (gmp_uint_least32_t const )701660972, (gmp_uint_least32_t const )2035032198,
        (gmp_uint_least32_t const )1950637282, (gmp_uint_least32_t const )2015958476, (gmp_uint_least32_t const )3570296966U, (gmp_uint_least32_t const )847883900,
        (gmp_uint_least32_t const )1407120023, (gmp_uint_least32_t const )1099298797, (gmp_uint_least32_t const )2293703680U, (gmp_uint_least32_t const )1007279121,
        (gmp_uint_least32_t const )3169036982U, (gmp_uint_least32_t const )1786090314, (gmp_uint_least32_t const )2993152921U, (gmp_uint_least32_t const )913855,
        (gmp_uint_least32_t const )423339490, (gmp_uint_least32_t const )4198373751U, (gmp_uint_least32_t const )396236022, (gmp_uint_least32_t const )518906520,
        (gmp_uint_least32_t const )1763642118, (gmp_uint_least32_t const )3092215980U, (gmp_uint_least32_t const )3250672406U, (gmp_uint_least32_t const )4294916822U,
        (gmp_uint_least32_t const )189100931, (gmp_uint_least32_t const )1368184338, (gmp_uint_least32_t const )94375742, (gmp_uint_least32_t const )3585593973U,
        (gmp_uint_least32_t const )1281281239, (gmp_uint_least32_t const )3761033406U, (gmp_uint_least32_t const )1431890418, (gmp_uint_least32_t const )210353136,
        (gmp_uint_least32_t const )2748932647U, (gmp_uint_least32_t const )674419378, (gmp_uint_least32_t const )4133992599U, (gmp_uint_least32_t const )3562366292U,
        (gmp_uint_least32_t const )4191350815U, (gmp_uint_least32_t const )4196286382U, (gmp_uint_least32_t const )1388503534, (gmp_uint_least32_t const )3846512433U,
        (gmp_uint_least32_t const )2122618665, (gmp_uint_least32_t const )3669866106U, (gmp_uint_least32_t const )1421827710, (gmp_uint_least32_t const )4164010609U,
        (gmp_uint_least32_t const )1595545571, (gmp_uint_least32_t const )2635336446U, (gmp_uint_least32_t const )2457082951U, (gmp_uint_least32_t const )1221569486,
        (gmp_uint_least32_t const )2629559415U, (gmp_uint_least32_t const )2621367679U, (gmp_uint_least32_t const )2961001529U, (gmp_uint_least32_t const )3424763106U,
        (gmp_uint_least32_t const )1769408689, (gmp_uint_least32_t const )1490692715, (gmp_uint_least32_t const )594598678, (gmp_uint_least32_t const )1852053832,
        (gmp_uint_least32_t const )2898640210U, (gmp_uint_least32_t const )2257528012U, (gmp_uint_least32_t const )3390943477U, (gmp_uint_least32_t const )1286448274,
        (gmp_uint_least32_t const )1061437012, (gmp_uint_least32_t const )3299137001U, (gmp_uint_least32_t const )4027242096U, (gmp_uint_least32_t const )3913058016U,
        (gmp_uint_least32_t const )4270875930U, (gmp_uint_least32_t const )3722785443U, (gmp_uint_least32_t const )2791594207U, (gmp_uint_least32_t const )2877124945U,
        (gmp_uint_least32_t const )237926239, (gmp_uint_least32_t const )3373309849U, (gmp_uint_least32_t const )2375472543U, (gmp_uint_least32_t const )1942942028,
        (gmp_uint_least32_t const )3343812841U, (gmp_uint_least32_t const )40971712, (gmp_uint_least32_t const )83105589, (gmp_uint_least32_t const )777589922,
        (gmp_uint_least32_t const )1509208827, (gmp_uint_least32_t const )42466435, (gmp_uint_least32_t const )2159805251U, (gmp_uint_least32_t const )4138935641U,
        (gmp_uint_least32_t const )3342956756U, (gmp_uint_least32_t const )4057567523U, (gmp_uint_least32_t const )943508487, (gmp_uint_least32_t const )2898289533U,
        (gmp_uint_least32_t const )140748104, (gmp_uint_least32_t const )2801577093U, (gmp_uint_least32_t const )705949680, (gmp_uint_least32_t const )2939088305U,
        (gmp_uint_least32_t const )1105667920, (gmp_uint_least32_t const )3771118402U, (gmp_uint_least32_t const )1570908998, (gmp_uint_least32_t const )1666537952,
        (gmp_uint_least32_t const )3538567340U, (gmp_uint_least32_t const )279615680, (gmp_uint_least32_t const )420045975, (gmp_uint_least32_t const )288117803,
        (gmp_uint_least32_t const )746914828, (gmp_uint_least32_t const )2825447376U, (gmp_uint_least32_t const )1847984520, (gmp_uint_least32_t const )4120302480U,
        (gmp_uint_least32_t const )3283836282U, (gmp_uint_least32_t const )2049616183, (gmp_uint_least32_t const )3755036722U, (gmp_uint_least32_t const )1736486459,
        (gmp_uint_least32_t const )3680476376U, (gmp_uint_least32_t const )2345821872U, (gmp_uint_least32_t const )2000989970, (gmp_uint_least32_t const )3026432432U,
        (gmp_uint_least32_t const )1486236105, (gmp_uint_least32_t const )3809328238U, (gmp_uint_least32_t const )2282706281U, (gmp_uint_least32_t const )547253782,
        (gmp_uint_least32_t const )2649531660U, (gmp_uint_least32_t const )43547223, (gmp_uint_least32_t const )3201559127U, (gmp_uint_least32_t const )3550902442U,
        (gmp_uint_least32_t const )1893532429, (gmp_uint_least32_t const )217947229, (gmp_uint_least32_t const )2460061337U, (gmp_uint_least32_t const )4118021657U,
        (gmp_uint_least32_t const )2137983613, (gmp_uint_least32_t const )323792794, (gmp_uint_least32_t const )1895152356, (gmp_uint_least32_t const )601663413,
        (gmp_uint_least32_t const )1299746765, (gmp_uint_least32_t const )3354425415U, (gmp_uint_least32_t const )3170336161U, (gmp_uint_least32_t const )2423379304U,
        (gmp_uint_least32_t const )4234313377U, (gmp_uint_least32_t const )2919254903U, (gmp_uint_least32_t const )1723157451, (gmp_uint_least32_t const )2129844908,
        (gmp_uint_least32_t const )3704990768U, (gmp_uint_least32_t const )3116234544U, (gmp_uint_least32_t const )1348114343, (gmp_uint_least32_t const )2642943955U,
        (gmp_uint_least32_t const )2914490060U, (gmp_uint_least32_t const )2493633026U, (gmp_uint_least32_t const )2538823039U, (gmp_uint_least32_t const )837558464,
        (gmp_uint_least32_t const )2978511512U, (gmp_uint_least32_t const )3242676329U, (gmp_uint_least32_t const )2801220339U, (gmp_uint_least32_t const )1910825063,
        (gmp_uint_least32_t const )1185245662, (gmp_uint_least32_t const )3534611504U, (gmp_uint_least32_t const )1862755015, (gmp_uint_least32_t const )4110972660U,
        (gmp_uint_least32_t const )1397818690, (gmp_uint_least32_t const )57941054, (gmp_uint_least32_t const )1397760548, (gmp_uint_least32_t const )3638906208U,
        (gmp_uint_least32_t const )1011133210, (gmp_uint_least32_t const )882322246, (gmp_uint_least32_t const )1958717597, (gmp_uint_least32_t const )3621218528U,
        (gmp_uint_least32_t const )937821660, (gmp_uint_least32_t const )3778878431U, (gmp_uint_least32_t const )1347535905, (gmp_uint_least32_t const )3118487486U,
        (gmp_uint_least32_t const )3071779148U, (gmp_uint_least32_t const )2708671555U, (gmp_uint_least32_t const )3113629886U, (gmp_uint_least32_t const )3050697581U,
        (gmp_uint_least32_t const )3915438570U, (gmp_uint_least32_t const )1796442323, (gmp_uint_least32_t const )3971404726U, (gmp_uint_least32_t const )3183381379U,
        (gmp_uint_least32_t const )774483909, (gmp_uint_least32_t const )1984786924, (gmp_uint_least32_t const )1267683139, (gmp_uint_least32_t const )3256736768U,
        (gmp_uint_least32_t const )2789172607U, (gmp_uint_least32_t const )2187821360U, (gmp_uint_least32_t const )3690280364U, (gmp_uint_least32_t const )2778004568U,
        (gmp_uint_least32_t const )2485552828U, (gmp_uint_least32_t const )3181077883U, (gmp_uint_least32_t const )1242536801, (gmp_uint_least32_t const )1157568591,
        (gmp_uint_least32_t const )954272303, (gmp_uint_least32_t const )1636894246, (gmp_uint_least32_t const )1579447862, (gmp_uint_least32_t const )1896272183,
        (gmp_uint_least32_t const )3324510960U, (gmp_uint_least32_t const )3172802304U, (gmp_uint_least32_t const )2093014194, (gmp_uint_least32_t const )3982706953U,
        (gmp_uint_least32_t const )3692278350U, (gmp_uint_least32_t const )2543436953U, (gmp_uint_least32_t const )3615374698U, (gmp_uint_least32_t const )343358312,
        (gmp_uint_least32_t const )2524598199U, (gmp_uint_least32_t const )904843185, (gmp_uint_least32_t const )709955768, (gmp_uint_least32_t const )3807424404U,
        (gmp_uint_least32_t const )2634669733U, (gmp_uint_least32_t const )539319591, (gmp_uint_least32_t const )1467077451, (gmp_uint_least32_t const )3775438564U,
        (gmp_uint_least32_t const )611267339, (gmp_uint_least32_t const )2407313125U, (gmp_uint_least32_t const )3540403986U, (gmp_uint_least32_t const )1976237038,
        (gmp_uint_least32_t const )3108991016U, (gmp_uint_least32_t const )3985978982U, (gmp_uint_least32_t const )1561949620, (gmp_uint_least32_t const )1526207089,
        (gmp_uint_least32_t const )331227173, (gmp_uint_least32_t const )2233026137U, (gmp_uint_least32_t const )813716273, (gmp_uint_least32_t const )3969730240U,
        (gmp_uint_least32_t const )3154279478U, (gmp_uint_least32_t const )720912776, (gmp_uint_least32_t const )3256097664U, (gmp_uint_least32_t const )3224051274U,
        (gmp_uint_least32_t const )80961911, (gmp_uint_least32_t const )4233161175U, (gmp_uint_least32_t const )969832922, (gmp_uint_least32_t const )2440956416U,
        (gmp_uint_least32_t const )4017753076U, (gmp_uint_least32_t const )2844514513U, (gmp_uint_least32_t const )423775698, (gmp_uint_least32_t const )2486820639U,
        (gmp_uint_least32_t const )3291150150U, (gmp_uint_least32_t const )2916870206U, (gmp_uint_least32_t const )2233605901U, (gmp_uint_least32_t const )1163280016,
        (gmp_uint_least32_t const )2425744466U, (gmp_uint_least32_t const )2005433125, (gmp_uint_least32_t const )2330222692U, (gmp_uint_least32_t const )3175331610U,
        (gmp_uint_least32_t const )3142850902U, (gmp_uint_least32_t const )1936117661, (gmp_uint_least32_t const )4002289463U, (gmp_uint_least32_t const )3047630793U,
        (gmp_uint_least32_t const )1349956583, (gmp_uint_least32_t const )4235246282U, (gmp_uint_least32_t const )3457375093U, (gmp_uint_least32_t const )3303611043U,
        (gmp_uint_least32_t const )4029946129U, (gmp_uint_least32_t const )1396902975, (gmp_uint_least32_t const )2288715812U, (gmp_uint_least32_t const )1807071415,
        (gmp_uint_least32_t const )870453844, (gmp_uint_least32_t const )4052989014U, (gmp_uint_least32_t const )1527341439, (gmp_uint_least32_t const )559939408,
        (gmp_uint_least32_t const )1222213361, (gmp_uint_least32_t const )895777195, (gmp_uint_least32_t const )1856626116, (gmp_uint_least32_t const )221587270,
        (gmp_uint_least32_t const )2734018115U, (gmp_uint_least32_t const )2988876211U, (gmp_uint_least32_t const )321514044, (gmp_uint_least32_t const )2050194626,
        (gmp_uint_least32_t const )3050103101U, (gmp_uint_least32_t const )1446919003, (gmp_uint_least32_t const )1397657231, (gmp_uint_least32_t const )1444125129,
        (gmp_uint_least32_t const )3780731794U, (gmp_uint_least32_t const )2968531237U, (gmp_uint_least32_t const )1166435419, (gmp_uint_least32_t const )523704391,
        (gmp_uint_least32_t const )2498407377U, (gmp_uint_least32_t const )1106869981, (gmp_uint_least32_t const )3823477659U, (gmp_uint_least32_t const )1908896994,
        (gmp_uint_least32_t const )1349687028, (gmp_uint_least32_t const )1499468603, (gmp_uint_least32_t const )2018690196, (gmp_uint_least32_t const )1062938257,
        (gmp_uint_least32_t const )2750969716U, (gmp_uint_least32_t const )1518008478, (gmp_uint_least32_t const )400178984, (gmp_uint_least32_t const )3923333485U,
        (gmp_uint_least32_t const )4240556501U, (gmp_uint_least32_t const )3831596584U, (gmp_uint_least32_t const )67637319, (gmp_uint_least32_t const )3638877023U,
        (gmp_uint_least32_t const )3694658582U, (gmp_uint_least32_t const )2353607650U, (gmp_uint_least32_t const )2500283731U, (gmp_uint_least32_t const )2981102381U,
        (gmp_uint_least32_t const )3431006954U, (gmp_uint_least32_t const )1902383683, (gmp_uint_least32_t const )2564221802U, (gmp_uint_least32_t const )2432616773U,
        (gmp_uint_least32_t const )2693874501U, (gmp_uint_least32_t const )1873478525, (gmp_uint_least32_t const )1895078989, (gmp_uint_least32_t const )96426766,
        (gmp_uint_least32_t const )2457513855U, (gmp_uint_least32_t const )2710835041U, (gmp_uint_least32_t const )4276122991U, (gmp_uint_least32_t const )4162139807U,
        (gmp_uint_least32_t const )1543513403, (gmp_uint_least32_t const )4072240687U, (gmp_uint_least32_t const )1256930508, (gmp_uint_least32_t const )275379078,
        (gmp_uint_least32_t const )4221888441U, (gmp_uint_least32_t const )1882400357, (gmp_uint_least32_t const )1808433422, (gmp_uint_least32_t const )2242609240U,
        (gmp_uint_least32_t const )2924161839U, (gmp_uint_least32_t const )2635204370U, (gmp_uint_least32_t const )3202935499U, (gmp_uint_least32_t const )2003439890};
void __gmp_mt_recalc_buffer(gmp_uint_least32_t *mt )
{
  gmp_uint_least32_t y ;
  int kk ;
  unsigned int tmp ;
  unsigned int tmp___0 ;
  unsigned int tmp___1 ;

  {
  kk = 0;
  while (kk < 227) {
    y = (*(mt + kk) & 2147483648U) | (*(mt + (kk + 1)) & 2147483647U);
    if ((y & 1U) != 0U) {
      tmp = 2567483615U;
    } else {
      tmp = 0U;
    }
    *(mt + kk) = (*(mt + (kk + 397)) ^ (y >> 1)) ^ tmp;
    kk ++;
  }
  while (kk < 623) {
    y = (*(mt + kk) & 2147483648U) | (*(mt + (kk + 1)) & 2147483647U);
    if ((y & 1U) != 0U) {
      tmp___0 = 2567483615U;
    } else {
      tmp___0 = 0U;
    }
    *(mt + kk) = (*(mt + (kk - 227)) ^ (y >> 1)) ^ tmp___0;
    kk ++;
  }
  y = (*(mt + 623) & 2147483648U) | (*(mt + 0) & 2147483647U);
  if ((y & 1U) != 0U) {
    tmp___1 = 2567483615U;
  } else {
    tmp___1 = 0U;
  }
  *(mt + 623) = (*(mt + 396) ^ (y >> 1)) ^ tmp___1;
  return;
}
}
void __gmp_randget_mt(__gmp_randstate_struct *rstate , mp_ptr dest , unsigned long nbits )
{
  gmp_uint_least32_t y ;
  int rbits ;
  mp_size_t i ;
  mp_size_t nlimbs ;
  int *pmti ;
  gmp_uint_least32_t *mt ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  pmti = & ((gmp_rand_mt_struct *)rstate->_mp_seed[0]._mp_d)->mti;
  mt = ((gmp_rand_mt_struct *)rstate->_mp_seed[0]._mp_d)->mt;
  nlimbs = (mp_size_t )(nbits / 64UL);
  rbits = (int )(nbits % 64UL);
  i = (mp_size_t )0;
  while (i < nlimbs) {
    while (1) {
      if (*pmti >= 624) {
        __gmp_mt_recalc_buffer(mt);
        *pmti = 0;
      }
      tmp = *pmti;
      (*pmti) ++;
      y = *(mt + tmp);
      y ^= y >> 11;
      y ^= (y << 7) & 2636928640U;
      y ^= (y << 15) & 4022730752U;
      y ^= y >> 18;
      break;
    }
    *(dest + i) = (mp_limb_t )y;
    while (1) {
      if (*pmti >= 624) {
        __gmp_mt_recalc_buffer(mt);
        *pmti = 0;
      }
      tmp___0 = *pmti;
      (*pmti) ++;
      y = *(mt + tmp___0);
      y ^= y >> 11;
      y ^= (y << 7) & 2636928640U;
      y ^= (y << 15) & 4022730752U;
      y ^= y >> 18;
      break;
    }
    *(dest + i) |= (mp_limb_t )y << 32;
    i ++;
  }
  if (rbits) {
    if (rbits < 32) {
      while (1) {
        if (*pmti >= 624) {
          __gmp_mt_recalc_buffer(mt);
          *pmti = 0;
        }
        tmp___1 = *pmti;
        (*pmti) ++;
        y = *(mt + tmp___1);
        y ^= y >> 11;
        y ^= (y << 7) & 2636928640U;
        y ^= (y << 15) & 4022730752U;
        y ^= y >> 18;
        break;
      }
      *(dest + nlimbs) = (unsigned long )y & ~ (0xffffffffffffffffUL << rbits);
    } else {
      while (1) {
        if (*pmti >= 624) {
          __gmp_mt_recalc_buffer(mt);
          *pmti = 0;
        }
        tmp___2 = *pmti;
        (*pmti) ++;
        y = *(mt + tmp___2);
        y ^= y >> 11;
        y ^= (y << 7) & 2636928640U;
        y ^= (y << 15) & 4022730752U;
        y ^= y >> 18;
        break;
      }
      *(dest + nlimbs) = (mp_limb_t )y;
      if (rbits > 32) {
        while (1) {
          if (*pmti >= 624) {
            __gmp_mt_recalc_buffer(mt);
            *pmti = 0;
          }
          tmp___3 = *pmti;
          (*pmti) ++;
          y = *(mt + tmp___3);
          y ^= y >> 11;
          y ^= (y << 7) & 2636928640U;
          y ^= (y << 15) & 4022730752U;
          y ^= y >> 18;
          break;
        }
        *(dest + nlimbs) |= ((unsigned long )y & ~ (0xffffffffffffffffUL << (rbits - 32))) << 32;
      }
    }
  }
  return;
}
}
void __gmp_randclear_mt(__gmp_randstate_struct *rstate )
{


  {
  (*__gmp_free_func)((void *)rstate->_mp_seed[0]._mp_d, (size_t )(rstate->_mp_seed[0]._mp_alloc * 8));
  return;
}
}
static struct __anonstruct_gmp_randfnptr_t_1027662539___1 const Mersenne_Twister_Generator_Noseed = {(void (*)(__gmp_randstate_struct * ,
              mpz_srcptr ))((void *)0), & __gmp_randget_mt, & __gmp_randclear_mt,
    & __gmp_randiset_mt};
void __gmp_randiset_mt(gmp_randstate_ptr dst , gmp_randstate_srcptr src )
{
  mp_size_t sz ;
  gmp_rand_mt_struct *dstp ;
  gmp_rand_mt_struct *srcp ;
  mp_size_t i ;
  void *tmp ;

  {
  sz = (mp_size_t )((sizeof(gmp_rand_mt_struct ) - 1UL) / 8UL + 1UL);
  dst->_mp_algdata._mp_lc = (void *)(& Mersenne_Twister_Generator_Noseed);
  tmp = (*__gmp_allocate_func)((unsigned long )sz * sizeof(mp_limb_t ));
  dstp = (gmp_rand_mt_struct *)((mp_limb_t *)tmp);
  dst->_mp_seed[0]._mp_d = (mp_ptr )dstp;
  dst->_mp_seed[0]._mp_alloc = (int )sz;
  srcp = (gmp_rand_mt_struct *)src->_mp_seed[0]._mp_d;
  i = (mp_size_t )0;
  while (i < 624L) {
    dstp->mt[i] = srcp->mt[i];
    i ++;
  }
  dstp->mti = srcp->mti;
  return;
}
}
void __gmp_randinit_mt_noseed(__gmp_randstate_struct *dst )
{
  mp_size_t sz ;
  gmp_rand_mt_struct *dstp ;
  mp_size_t i ;
  void *tmp ;

  {
  sz = (mp_size_t )((sizeof(gmp_rand_mt_struct ) - 1UL) / 8UL + 1UL);
  dst->_mp_algdata._mp_lc = (void *)(& Mersenne_Twister_Generator_Noseed);
  tmp = (*__gmp_allocate_func)((unsigned long )sz * sizeof(mp_limb_t ));
  dstp = (gmp_rand_mt_struct *)((mp_limb_t *)tmp);
  dst->_mp_seed[0]._mp_d = (mp_ptr )dstp;
  dst->_mp_seed[0]._mp_alloc = (int )sz;
  i = (mp_size_t )0;
  while (i < 624L) {
    dstp->mt[i] = (gmp_uint_least32_t )default_state[i];
    i ++;
  }
  dstp->mti = 128;
  return;
}
}
#pragma merger("0","./randmts.i","")
void __gmpz_mul(mpz_ptr w , mpz_srcptr u , mpz_srcptr v ) ;
void __gmpz_setbit(mpz_ptr d , mp_bitcnt_t bit_idx ) ;
void __gmpz_sub_ui(mpz_ptr w , mpz_srcptr u , unsigned long vval ) ;
void __gmpz_tdiv_q_2exp(mpz_ptr r , mpz_srcptr u , mp_bitcnt_t cnt ) ;
void __gmpz_tdiv_r_2exp(mpz_ptr res , mpz_srcptr in , mp_bitcnt_t cnt ) ;
int __gmpz_tstbit(mpz_srcptr u , mp_bitcnt_t bit_index ) __attribute__((__pure__)) ;
static void mangle_seed(mpz_ptr r )
{
  mpz_t t ;
  mpz_t b ;
  unsigned long e ;
  unsigned long bit ;

  {
  e = 1074888996UL;
  bit = 536870912UL;
  __gmpz_init2(t, (mp_bitcnt_t )19937L);
  __gmpz_init_set(b, (mpz_srcptr )r);
  while (1) {
    __gmpz_mul(r, (mpz_srcptr )r, (mpz_srcptr )r);
    reduce:
    while (1) {
      __gmpz_tdiv_q_2exp(t, (mpz_srcptr )r, (mp_bitcnt_t )19937L);
      if (t[0]._mp_size == 0) {
        break;
      }
      __gmpz_tdiv_r_2exp(r, (mpz_srcptr )r, (mp_bitcnt_t )19937L);
      __gmpz_addmul_ui(r, (mpz_srcptr )(t), 20023UL);
    }
    if ((e & bit) != 0UL) {
      e ^= bit;
      __gmpz_mul(r, (mpz_srcptr )r, (mpz_srcptr )(b));
      goto reduce;
    }
    bit >>= 1;
    if (! (bit != 0UL)) {
      break;
    }
  }
  __gmpz_clear(t);
  __gmpz_clear(b);
  return;
}
}
static void randseed_mt(__gmp_randstate_struct *rstate , mpz_srcptr seed )
{
  int i ;
  size_t cnt ;
  gmp_rand_mt_struct *p ;
  mpz_t mod ;
  mpz_t seed1 ;
  int tmp___0 ;
  size_t tmp___1 ;

  {
  p = (gmp_rand_mt_struct *)rstate->_mp_seed[0]._mp_d;
  __gmpz_init2(mod, (mp_bitcnt_t )19938L);
  __gmpz_init2(seed1, (mp_bitcnt_t )19937L);
  __gmpz_setbit(mod, (mp_bitcnt_t )19937L);
  __gmpz_sub_ui(mod, (mpz_srcptr )(mod), 20027UL);
  __gmpz_mod(seed1, seed, (mpz_srcptr )(mod));
  __gmpz_clear(mod);
  __gmpz_add_ui(seed1, (mpz_srcptr )(seed1), 2UL);
  mangle_seed(seed1);
  tmp___0 = __gmpz_tstbit((mpz_srcptr )(seed1), (mp_bitcnt_t )19936L);
  if (tmp___0 != 0) {
    p->mt[0] = 2147483648U;
  } else {
    p->mt[0] = (gmp_uint_least32_t )0;
  }
  __gmpz_clrbit(seed1, (mp_bitcnt_t )19936L);
  __gmpz_export((void *)(& p->mt[1]), & cnt, -1, sizeof(p->mt[1]), 0, 8UL * sizeof(p->mt[1]) - 32UL,
                (mpz_srcptr )(seed1));
  __gmpz_clear(seed1);
  cnt ++;
  while (1) {
    break;
  }
  while (cnt < 624UL) {
    tmp___1 = cnt;
    cnt ++;
    p->mt[tmp___1] = (gmp_uint_least32_t )0;
  }
  i = 0;
  while (i < 3) {
    __gmp_mt_recalc_buffer(p->mt);
    i ++;
  }
  p->mti = 128;
  return;
}
}
static struct __anonstruct_gmp_randfnptr_t_1027662539___2 const Mersenne_Twister_Generator = {& randseed_mt,
    & __gmp_randget_mt, & __gmp_randclear_mt, & __gmp_randiset_mt};
void __gmp_randinit_mt(__gmp_randstate_struct *rstate )
{


  {
  __gmp_randinit_mt_noseed(rstate);
  rstate->_mp_algdata._mp_lc = (void *)(& Mersenne_Twister_Generator);
  return;
}
}
#pragma merger("0","./randmui.i","")
unsigned long __gmp_urandomm_ui(__gmp_randstate_struct *rstate , unsigned long n___0 )
{
  mp_limb_t a[1] ;
  unsigned long ret ;
  unsigned long bits ;
  unsigned long leading ;
  int i ;
  long tmp ;
  UWtype __xr ;
  UWtype __a ;
  gmp_randstate_ptr __rstate ;
  long tmp___2 ;

  {
  tmp = __builtin_expect((long )((n___0 == 0UL) != 0), 0L);
  if (tmp) {
    __gmp_divide_by_zero();
  }
  a[0] = (mp_limb_t )0;
  while (1) {
    __xr = n___0;
    __a = (UWtype )56;
    while (__a > 0UL) {
      if (((__xr >> __a) & 255UL) != 0UL) {
        break;
      }
      __a -= 8UL;
    }
    __a ++;
    leading = (65UL - __a) - (UWtype )__gmpn_clz_tab[__xr >> __a];
    break;
  }
  bits = (64UL - leading) - (unsigned long )(((n___0 & (n___0 - 1UL)) == 0UL) != 0);
  i = 0;
  while (i < 80) {
    while (1) {
      __rstate = (gmp_randstate_ptr )rstate;
      (*(((gmp_randfnptr_t *)__rstate->_mp_algdata._mp_lc)->randget_fn))((__gmp_randstate_struct *)__rstate,
                                                                         a, bits);
      break;
    }
    ret = a[0];
    tmp___2 = __builtin_expect((long )((ret < n___0) != 0), 1L);
    if (tmp___2) {
      goto done;
    }
    i ++;
  }
  ret -= n___0;
  while (1) {
    break;
  }
  done:
  return (ret);
}
}
#pragma merger("0","./rands.i","")
gmp_randstate_t __gmp_rands ;
char __gmp_rands_initialized = (char)0;
#pragma merger("0","./randsd.i","")
void __gmp_randseed(__gmp_randstate_struct *rstate , mpz_srcptr seed ) ;
void __gmp_randseed(__gmp_randstate_struct *rstate , mpz_srcptr seed )
{


  {
  (*(((gmp_randfnptr_t *)rstate->_mp_algdata._mp_lc)->randseed_fn))(rstate, seed);
  return;
}
}
#pragma merger("0","./randsdui.i","")
void __gmp_randseed_ui(__gmp_randstate_struct *rstate , unsigned long seed )
{
  mpz_t zseed ;
  mp_limb_t zlimbs[1] ;

  {
  zlimbs[0] = seed;
  zseed[0]._mp_d = zlimbs;
  zseed[0]._mp_size = zlimbs[0] != 0UL;
  __gmp_randseed(rstate, (mpz_srcptr )(zseed));
  return;
}
}
#pragma merger("0","./realloc.i","")
void *__gmpz_realloc(mpz_ptr m , mp_size_t new_alloc )
{
  mp_ptr mp ;
  long tmp ;
  long tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;

  {
  if (new_alloc > 1L) {
    new_alloc = new_alloc;
  } else {
    new_alloc = (mp_size_t )1;
  }
  if (sizeof(mp_size_t ) == sizeof(int )) {
    tmp = __builtin_expect((long )(((unsigned long )new_alloc > 288230376151711743UL) != 0),
                           0L);
    if (tmp) {
      printf((char const * __restrict )"gmp: overflow in mpz type\n");
      abort();
    }
  } else {
    tmp___0 = __builtin_expect((long )((new_alloc > 2147483647L) != 0), 0L);
    if (tmp___0) {
      printf((char const * __restrict )"gmp: overflow in mpz type\n");
      abort();
    }
  }
  tmp___1 = (*__gmp_reallocate_func)((void *)m->_mp_d, (unsigned long )m->_mp_alloc * sizeof(mp_limb_t ),
                                     (unsigned long )new_alloc * sizeof(mp_limb_t ));
  mp = (mp_limb_t *)tmp___1;
  m->_mp_d = mp;
  m->_mp_alloc = (int )new_alloc;
  if (m->_mp_size >= 0) {
    tmp___2 = m->_mp_size;
  } else {
    tmp___2 = - m->_mp_size;
  }
  if ((mp_size_t )tmp___2 > new_alloc) {
    m->_mp_size = 0;
  }
  return ((void *)mp);
}
}
#pragma merger("0","./rrandomb.i","")
static void gmp_rrandomb(mp_ptr rp , __gmp_randstate_struct *rstate , mp_bitcnt_t nbits ) ;
void __gmpz_rrandomb(mpz_ptr x , __gmp_randstate_struct *rstate , mp_bitcnt_t nbits )
{
  mp_size_t nl ;
  mp_ptr xp ;
  void *tmp___0 ;
  long tmp___1 ;

  {
  nl = (mp_size_t )((nbits + 63UL) / 64UL);
  if (nbits != 0UL) {
    tmp___1 = __builtin_expect((long )((nl > (mp_size_t )x->_mp_alloc) != 0), 0L);
    if (tmp___1) {
      tmp___0 = __gmpz_realloc(x, nl);
      xp = (mp_ptr )tmp___0;
    } else {
      xp = x->_mp_d;
    }
    gmp_rrandomb(xp, rstate, nbits);
  }
  x->_mp_size = (int )nl;
  return;
}
}
static void gmp_rrandomb(mp_ptr rp , __gmp_randstate_struct *rstate , mp_bitcnt_t nbits )
{
  mp_bitcnt_t bi ;
  mp_limb_t ranm ;
  unsigned int cap_chunksize ;
  unsigned int chunksize ;
  mp_size_t i ;
  gmp_randstate_ptr __rstate ;
  gmp_randstate_ptr __rstate___0 ;
  gmp_randstate_ptr __rstate___1 ;
  mp_limb_t __x ;
  mp_ptr __p ;

  {
  i = (mp_size_t )((nbits + 63UL) / 64UL - 1UL);
  *(rp + i) = 0xffffffffffffffffUL >> (64UL - nbits % 64UL) % 64UL;
  i --;
  while (i >= 0L) {
    *(rp + i) = 0xffffffffffffffffUL;
    i --;
  }
  while (1) {
    __rstate = (gmp_randstate_ptr )rstate;
    (*(((gmp_randfnptr_t *)__rstate->_mp_algdata._mp_lc)->randget_fn))((__gmp_randstate_struct *)__rstate,
                                                                       & ranm, 32UL);
    break;
  }
  cap_chunksize = (unsigned int )(nbits / (ranm % 4UL + 1UL));
  cap_chunksize += (unsigned int )(cap_chunksize == 0U);
  bi = nbits;
  while (1) {
    while (1) {
      __rstate___0 = (gmp_randstate_ptr )rstate;
      (*(((gmp_randfnptr_t *)__rstate___0->_mp_algdata._mp_lc)->randget_fn))((__gmp_randstate_struct *)__rstate___0,
                                                                             & ranm,
                                                                             32UL);
      break;
    }
    chunksize = (unsigned int )(1UL + ranm % (unsigned long )cap_chunksize);
    if (bi < (mp_bitcnt_t )chunksize) {
      bi = (mp_bitcnt_t )0;
    } else {
      bi -= (mp_bitcnt_t )chunksize;
    }
    if (bi == 0UL) {
      break;
    }
    *(rp + bi / 64UL) ^= 1UL << bi % 64UL;
    while (1) {
      __rstate___1 = (gmp_randstate_ptr )rstate;
      (*(((gmp_randfnptr_t *)__rstate___1->_mp_algdata._mp_lc)->randget_fn))((__gmp_randstate_struct *)__rstate___1,
                                                                             & ranm,
                                                                             32UL);
      break;
    }
    chunksize = (unsigned int )(1UL + ranm % (unsigned long )cap_chunksize);
    if (bi < (mp_bitcnt_t )chunksize) {
      bi = (mp_bitcnt_t )0;
    } else {
      bi -= (mp_bitcnt_t )chunksize;
    }
    while (1) {
      __p = rp + bi / 64UL;
      __x = *__p + (1UL << bi % 64UL);
      *__p = __x;
      if (__x < 1UL << bi % 64UL) {
        while (1) {
          __p ++;
          (*__p) ++;
          if (! (*__p == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    if (bi == 0UL) {
      break;
    }
  }
  return;
}
}
#pragma merger("0","./rshift.i","")
mp_limb_t __gmpn_rshift(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , unsigned int cnt )
{
  mp_limb_t high_limb ;
  mp_limb_t low_limb ;
  unsigned int tnc ;
  mp_size_t i ;
  mp_limb_t retval ;
  mp_srcptr tmp ;
  mp_srcptr tmp___0 ;
  mp_ptr tmp___1 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tnc = 64U - cnt;
  tmp = up;
  up ++;
  high_limb = (mp_limb_t )*tmp;
  retval = (high_limb << tnc) & 0xffffffffffffffffUL;
  low_limb = high_limb >> cnt;
  i = n___0 - 1L;
  while (i != 0L) {
    tmp___0 = up;
    up ++;
    high_limb = (mp_limb_t )*tmp___0;
    tmp___1 = rp;
    rp ++;
    *tmp___1 = low_limb | ((high_limb << tnc) & 0xffffffffffffffffUL);
    low_limb = high_limb >> cnt;
    i --;
  }
  *rp = low_limb;
  return (retval);
}
}
#pragma merger("0","./sbpi1_divappr_q.i","")
mp_limb_t __gmpn_sbpi1_divappr_q(mp_ptr qp , mp_ptr np , mp_size_t nn , mp_srcptr dp ,
                                 mp_size_t dn , mp_limb_t dinv )
{
  mp_limb_t qh ;
  mp_size_t qn ;
  mp_size_t i ;
  mp_limb_t n1 ;
  mp_limb_t n0 ;
  mp_limb_t d1 ;
  mp_limb_t d0 ;
  mp_limb_t cy ;
  mp_limb_t cy1 ;
  mp_limb_t q ;
  mp_limb_t flag ;
  int tmp ;
  mp_limb_t _q0 ;
  mp_limb_t _t1 ;
  mp_limb_t _t0 ;
  mp_limb_t _mask ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  UWtype __x ;
  UWtype __x___0 ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  UWtype __x___1 ;
  UWtype __x___2 ;
  UWtype __x___3 ;
  long tmp___0 ;
  mp_limb_t tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  mp_limb_t _q0___0 ;
  mp_limb_t _t1___0 ;
  mp_limb_t _t0___0 ;
  mp_limb_t _mask___0 ;
  UWtype __x0___1 ;
  UWtype __x1___1 ;
  UWtype __x2___1 ;
  UWtype __x3___1 ;
  UHWtype __ul___1 ;
  UHWtype __vl___1 ;
  UHWtype __uh___1 ;
  UHWtype __vh___1 ;
  UWtype __u___1 ;
  UWtype __v___1 ;
  UWtype __x___4 ;
  UWtype __x___5 ;
  UWtype __x0___2 ;
  UWtype __x1___2 ;
  UWtype __x2___2 ;
  UWtype __x3___2 ;
  UHWtype __ul___2 ;
  UHWtype __vl___2 ;
  UHWtype __uh___2 ;
  UHWtype __vh___2 ;
  UWtype __u___2 ;
  UWtype __v___2 ;
  UWtype __x___6 ;
  UWtype __x___7 ;
  UWtype __x___8 ;
  long tmp___5 ;
  mp_limb_t tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;
  UWtype __x___9 ;
  long tmp___9 ;
  mp_limb_t _q0___1 ;
  mp_limb_t _t1___1 ;
  mp_limb_t _t0___1 ;
  mp_limb_t _mask___1 ;
  UWtype __x0___3 ;
  UWtype __x1___3 ;
  UWtype __x2___3 ;
  UWtype __x3___3 ;
  UHWtype __ul___3 ;
  UHWtype __vl___3 ;
  UHWtype __uh___3 ;
  UHWtype __vh___3 ;
  UWtype __u___3 ;
  UWtype __v___3 ;
  UWtype __x___10 ;
  UWtype __x___11 ;
  UWtype __x0___4 ;
  UWtype __x1___4 ;
  UWtype __x2___4 ;
  UWtype __x3___4 ;
  UHWtype __ul___4 ;
  UHWtype __vl___4 ;
  UHWtype __uh___4 ;
  UHWtype __vh___4 ;
  UWtype __u___4 ;
  UWtype __v___4 ;
  UWtype __x___12 ;
  UWtype __x___13 ;
  UWtype __x___14 ;
  long tmp___10 ;
  long tmp___11 ;
  long tmp___12 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  np += nn;
  qn = nn - dn;
  if (qn + 1L < dn) {
    dp += dn - (qn + 1L);
    dn = qn + 1L;
  }
  tmp = __gmpn_cmp((mp_srcptr )(np - dn), dp, dn);
  qh = (mp_limb_t )(tmp >= 0);
  if (qh != 0UL) {
    __gmpn_sub_n(np - dn, (mp_srcptr )(np - dn), dp, dn);
  }
  qp += qn;
  dn -= 2L;
  d1 = (mp_limb_t )*(dp + (dn + 1L));
  d0 = (mp_limb_t )*(dp + dn);
  np -= 2;
  n1 = *(np + 1);
  i = qn - (dn + 2L);
  while (i >= 0L) {
    np --;
    tmp___3 = __builtin_expect((long )((n1 == d1) != 0), 0L);
    if (tmp___3) {
      if (*(np + 1) == d0) {
        q = 0xffffffffffffffffUL;
        __gmpn_submul_1(np - dn, dp, dn + 2L, q);
        n1 = *(np + 1);
      } else {
        goto _L___0;
      }
    } else {
      _L___0:
      while (1) {
        while (1) {
          __u = n1;
          __v = dinv;
          __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
          __uh = (UHWtype )(__u >> 32);
          __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
          __vh = (UHWtype )(__v >> 32);
          __x0 = (UWtype )__ul * (UWtype )__vl;
          __x1 = (UWtype )__ul * (UWtype )__vh;
          __x2 = (UWtype )__uh * (UWtype )__vl;
          __x3 = (UWtype )__uh * (UWtype )__vh;
          __x1 += __x0 >> 32;
          __x1 += __x2;
          if (__x1 < __x2) {
            __x3 += 1UL << 32;
          }
          q = __x3 + (__x1 >> 32);
          _q0 = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x = _q0 + *(np + 1);
          q = (q + n1) + (mp_limb_t )(__x < _q0);
          _q0 = __x;
          break;
        }
        n1 = *(np + 1) - d1 * q;
        while (1) {
          __x___0 = *(np + 0) - d0;
          n1 = (n1 - d1) - (mp_limb_t )(*(np + 0) < d0);
          n0 = __x___0;
          break;
        }
        while (1) {
          __u___0 = d0;
          __v___0 = q;
          __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
          __uh___0 = (UHWtype )(__u___0 >> 32);
          __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
          __vh___0 = (UHWtype )(__v___0 >> 32);
          __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
          __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
          __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
          __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
          __x1___0 += __x0___0 >> 32;
          __x1___0 += __x2___0;
          if (__x1___0 < __x2___0) {
            __x3___0 += 1UL << 32;
          }
          _t1 = __x3___0 + (__x1___0 >> 32);
          _t0 = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x___1 = n0 - _t0;
          n1 = (n1 - _t1) - (mp_limb_t )(n0 < _t0);
          n0 = __x___1;
          break;
        }
        q ++;
        _mask = - ((mp_limb_t )(n1 >= _q0));
        q += _mask;
        while (1) {
          __x___2 = n0 + (_mask & d0);
          n1 = (n1 + (_mask & d1)) + (mp_limb_t )(__x___2 < n0);
          n0 = __x___2;
          break;
        }
        tmp___0 = __builtin_expect((long )((n1 >= d1) != 0), 0L);
        if (tmp___0) {
          if (n1 > d1) {
            goto _L;
          } else
          if (n0 >= d0) {
            _L:
            q ++;
            while (1) {
              __x___3 = n0 - d0;
              n1 = (n1 - d1) - (mp_limb_t )(n0 < d0);
              n0 = __x___3;
              break;
            }
          }
        }
        break;
      }
      cy = __gmpn_submul_1(np - dn, dp, dn, q);
      cy1 = (mp_limb_t )(n0 < cy);
      n0 = (n0 - cy) & 0xffffffffffffffffUL;
      cy = (mp_limb_t )(n1 < cy1);
      n1 -= cy1;
      *(np + 0) = n0;
      tmp___2 = __builtin_expect((long )((cy != 0UL) != 0), 0L);
      if (tmp___2) {
        tmp___1 = __gmpn_add_n(np - dn, (mp_srcptr )(np - dn), dp, dn + 1L);
        n1 += d1 + tmp___1;
        q --;
      }
    }
    qp --;
    *qp = q;
    i --;
  }
  flag = ~ ((mp_limb_t )0L);
  if (dn >= 0L) {
    i = dn;
    while (i > 0L) {
      np --;
      tmp___8 = __builtin_expect((long )((n1 >= (d1 & flag)) != 0), 0L);
      if (tmp___8) {
        q = 0xffffffffffffffffUL;
        cy = __gmpn_submul_1(np - dn, dp, dn + 2L, q);
        tmp___4 = __builtin_expect((long )((n1 != cy) != 0), 0L);
        if (tmp___4) {
          if (n1 < (cy & flag)) {
            q --;
            __gmpn_add_n(np - dn, (mp_srcptr )(np - dn), dp, dn + 2L);
          } else {
            flag = (mp_limb_t )0;
          }
        }
        n1 = *(np + 1);
      } else {
        while (1) {
          while (1) {
            __u___1 = n1;
            __v___1 = dinv;
            __ul___1 = (UHWtype )(__u___1 & ((1UL << 32) - 1UL));
            __uh___1 = (UHWtype )(__u___1 >> 32);
            __vl___1 = (UHWtype )(__v___1 & ((1UL << 32) - 1UL));
            __vh___1 = (UHWtype )(__v___1 >> 32);
            __x0___1 = (UWtype )__ul___1 * (UWtype )__vl___1;
            __x1___1 = (UWtype )__ul___1 * (UWtype )__vh___1;
            __x2___1 = (UWtype )__uh___1 * (UWtype )__vl___1;
            __x3___1 = (UWtype )__uh___1 * (UWtype )__vh___1;
            __x1___1 += __x0___1 >> 32;
            __x1___1 += __x2___1;
            if (__x1___1 < __x2___1) {
              __x3___1 += 1UL << 32;
            }
            q = __x3___1 + (__x1___1 >> 32);
            _q0___0 = (__x1___1 << 32) + (__x0___1 & ((1UL << 32) - 1UL));
            break;
          }
          while (1) {
            __x___4 = _q0___0 + *(np + 1);
            q = (q + n1) + (mp_limb_t )(__x___4 < _q0___0);
            _q0___0 = __x___4;
            break;
          }
          n1 = *(np + 1) - d1 * q;
          while (1) {
            __x___5 = *(np + 0) - d0;
            n1 = (n1 - d1) - (mp_limb_t )(*(np + 0) < d0);
            n0 = __x___5;
            break;
          }
          while (1) {
            __u___2 = d0;
            __v___2 = q;
            __ul___2 = (UHWtype )(__u___2 & ((1UL << 32) - 1UL));
            __uh___2 = (UHWtype )(__u___2 >> 32);
            __vl___2 = (UHWtype )(__v___2 & ((1UL << 32) - 1UL));
            __vh___2 = (UHWtype )(__v___2 >> 32);
            __x0___2 = (UWtype )__ul___2 * (UWtype )__vl___2;
            __x1___2 = (UWtype )__ul___2 * (UWtype )__vh___2;
            __x2___2 = (UWtype )__uh___2 * (UWtype )__vl___2;
            __x3___2 = (UWtype )__uh___2 * (UWtype )__vh___2;
            __x1___2 += __x0___2 >> 32;
            __x1___2 += __x2___2;
            if (__x1___2 < __x2___2) {
              __x3___2 += 1UL << 32;
            }
            _t1___0 = __x3___2 + (__x1___2 >> 32);
            _t0___0 = (__x1___2 << 32) + (__x0___2 & ((1UL << 32) - 1UL));
            break;
          }
          while (1) {
            __x___6 = n0 - _t0___0;
            n1 = (n1 - _t1___0) - (mp_limb_t )(n0 < _t0___0);
            n0 = __x___6;
            break;
          }
          q ++;
          _mask___0 = - ((mp_limb_t )(n1 >= _q0___0));
          q += _mask___0;
          while (1) {
            __x___7 = n0 + (_mask___0 & d0);
            n1 = (n1 + (_mask___0 & d1)) + (mp_limb_t )(__x___7 < n0);
            n0 = __x___7;
            break;
          }
          tmp___5 = __builtin_expect((long )((n1 >= d1) != 0), 0L);
          if (tmp___5) {
            if (n1 > d1) {
              goto _L___1;
            } else
            if (n0 >= d0) {
              _L___1:
              q ++;
              while (1) {
                __x___8 = n0 - d0;
                n1 = (n1 - d1) - (mp_limb_t )(n0 < d0);
                n0 = __x___8;
                break;
              }
            }
          }
          break;
        }
        cy = __gmpn_submul_1(np - dn, dp, dn, q);
        cy1 = (mp_limb_t )(n0 < cy);
        n0 = (n0 - cy) & 0xffffffffffffffffUL;
        cy = (mp_limb_t )(n1 < cy1);
        n1 -= cy1;
        *(np + 0) = n0;
        tmp___7 = __builtin_expect((long )((cy != 0UL) != 0), 0L);
        if (tmp___7) {
          tmp___6 = __gmpn_add_n(np - dn, (mp_srcptr )(np - dn), dp, dn + 1L);
          n1 += d1 + tmp___6;
          q --;
        }
      }
      qp --;
      *qp = q;
      dn --;
      dp ++;
      i --;
    }
    np --;
    tmp___11 = __builtin_expect((long )((n1 >= (d1 & flag)) != 0), 0L);
    if (tmp___11) {
      q = 0xffffffffffffffffUL;
      cy = __gmpn_submul_1(np, dp, (mp_size_t )2, q);
      tmp___9 = __builtin_expect((long )((n1 != cy) != 0), 0L);
      if (tmp___9) {
        if (n1 < (cy & flag)) {
          q --;
          while (1) {
            __x___9 = *(np + 0) + (mp_limb_t )*(dp + 0);
            *(np + 1) = (*(np + 1) + (mp_limb_t )*(dp + 1)) + (mp_limb_t )(__x___9 < *(np + 0));
            *(np + 0) = __x___9;
            break;
          }
        } else {
          flag = (mp_limb_t )0;
        }
      }
      n1 = *(np + 1);
    } else {
      while (1) {
        while (1) {
          __u___3 = n1;
          __v___3 = dinv;
          __ul___3 = (UHWtype )(__u___3 & ((1UL << 32) - 1UL));
          __uh___3 = (UHWtype )(__u___3 >> 32);
          __vl___3 = (UHWtype )(__v___3 & ((1UL << 32) - 1UL));
          __vh___3 = (UHWtype )(__v___3 >> 32);
          __x0___3 = (UWtype )__ul___3 * (UWtype )__vl___3;
          __x1___3 = (UWtype )__ul___3 * (UWtype )__vh___3;
          __x2___3 = (UWtype )__uh___3 * (UWtype )__vl___3;
          __x3___3 = (UWtype )__uh___3 * (UWtype )__vh___3;
          __x1___3 += __x0___3 >> 32;
          __x1___3 += __x2___3;
          if (__x1___3 < __x2___3) {
            __x3___3 += 1UL << 32;
          }
          q = __x3___3 + (__x1___3 >> 32);
          _q0___1 = (__x1___3 << 32) + (__x0___3 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x___10 = _q0___1 + *(np + 1);
          q = (q + n1) + (mp_limb_t )(__x___10 < _q0___1);
          _q0___1 = __x___10;
          break;
        }
        n1 = *(np + 1) - d1 * q;
        while (1) {
          __x___11 = *(np + 0) - d0;
          n1 = (n1 - d1) - (mp_limb_t )(*(np + 0) < d0);
          n0 = __x___11;
          break;
        }
        while (1) {
          __u___4 = d0;
          __v___4 = q;
          __ul___4 = (UHWtype )(__u___4 & ((1UL << 32) - 1UL));
          __uh___4 = (UHWtype )(__u___4 >> 32);
          __vl___4 = (UHWtype )(__v___4 & ((1UL << 32) - 1UL));
          __vh___4 = (UHWtype )(__v___4 >> 32);
          __x0___4 = (UWtype )__ul___4 * (UWtype )__vl___4;
          __x1___4 = (UWtype )__ul___4 * (UWtype )__vh___4;
          __x2___4 = (UWtype )__uh___4 * (UWtype )__vl___4;
          __x3___4 = (UWtype )__uh___4 * (UWtype )__vh___4;
          __x1___4 += __x0___4 >> 32;
          __x1___4 += __x2___4;
          if (__x1___4 < __x2___4) {
            __x3___4 += 1UL << 32;
          }
          _t1___1 = __x3___4 + (__x1___4 >> 32);
          _t0___1 = (__x1___4 << 32) + (__x0___4 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x___12 = n0 - _t0___1;
          n1 = (n1 - _t1___1) - (mp_limb_t )(n0 < _t0___1);
          n0 = __x___12;
          break;
        }
        q ++;
        _mask___1 = - ((mp_limb_t )(n1 >= _q0___1));
        q += _mask___1;
        while (1) {
          __x___13 = n0 + (_mask___1 & d0);
          n1 = (n1 + (_mask___1 & d1)) + (mp_limb_t )(__x___13 < n0);
          n0 = __x___13;
          break;
        }
        tmp___10 = __builtin_expect((long )((n1 >= d1) != 0), 0L);
        if (tmp___10) {
          if (n1 > d1) {
            goto _L___2;
          } else
          if (n0 >= d0) {
            _L___2:
            q ++;
            while (1) {
              __x___14 = n0 - d0;
              n1 = (n1 - d1) - (mp_limb_t )(n0 < d0);
              n0 = __x___14;
              break;
            }
          }
        }
        break;
      }
      *(np + 1) = n1;
      *(np + 0) = n0;
    }
    qp --;
    *qp = q;
  }
  while (1) {
    tmp___12 = __builtin_expect((long )(! (*(np + 1) == n1) != 0), 0L);
    if (tmp___12) {
      __gmp_assert_fail("sbpi1_divappr_q.c", 196, "np[1] == n1");
    }
    break;
  }
  return (qh);
}
}
#pragma merger("0","./sbpi1_div_qr.i","")
mp_limb_t __gmpn_sbpi1_div_qr(mp_ptr qp , mp_ptr np , mp_size_t nn , mp_srcptr dp ,
                              mp_size_t dn , mp_limb_t dinv )
{
  mp_limb_t qh ;
  mp_size_t i ;
  mp_limb_t n1 ;
  mp_limb_t n0 ;
  mp_limb_t d1 ;
  mp_limb_t d0 ;
  mp_limb_t cy ;
  mp_limb_t cy1 ;
  mp_limb_t q ;
  int tmp ;
  mp_limb_t _q0 ;
  mp_limb_t _t1 ;
  mp_limb_t _t0 ;
  mp_limb_t _mask ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  UWtype __x ;
  UWtype __x___0 ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  UWtype __x___1 ;
  UWtype __x___2 ;
  UWtype __x___3 ;
  long tmp___0 ;
  mp_limb_t tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  np += nn;
  tmp = __gmpn_cmp((mp_srcptr )(np - dn), dp, dn);
  qh = (mp_limb_t )(tmp >= 0);
  if (qh != 0UL) {
    __gmpn_sub_n(np - dn, (mp_srcptr )(np - dn), dp, dn);
  }
  qp += nn - dn;
  dn -= 2L;
  d1 = (mp_limb_t )*(dp + (dn + 1L));
  d0 = (mp_limb_t )*(dp + dn);
  np -= 2;
  n1 = *(np + 1);
  i = nn - (dn + 2L);
  while (i > 0L) {
    np --;
    tmp___3 = __builtin_expect((long )((n1 == d1) != 0), 0L);
    if (tmp___3) {
      if (*(np + 1) == d0) {
        q = 0xffffffffffffffffUL;
        __gmpn_submul_1(np - dn, dp, dn + 2L, q);
        n1 = *(np + 1);
      } else {
        goto _L___0;
      }
    } else {
      _L___0:
      while (1) {
        while (1) {
          __u = n1;
          __v = dinv;
          __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
          __uh = (UHWtype )(__u >> 32);
          __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
          __vh = (UHWtype )(__v >> 32);
          __x0 = (UWtype )__ul * (UWtype )__vl;
          __x1 = (UWtype )__ul * (UWtype )__vh;
          __x2 = (UWtype )__uh * (UWtype )__vl;
          __x3 = (UWtype )__uh * (UWtype )__vh;
          __x1 += __x0 >> 32;
          __x1 += __x2;
          if (__x1 < __x2) {
            __x3 += 1UL << 32;
          }
          q = __x3 + (__x1 >> 32);
          _q0 = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x = _q0 + *(np + 1);
          q = (q + n1) + (mp_limb_t )(__x < _q0);
          _q0 = __x;
          break;
        }
        n1 = *(np + 1) - d1 * q;
        while (1) {
          __x___0 = *(np + 0) - d0;
          n1 = (n1 - d1) - (mp_limb_t )(*(np + 0) < d0);
          n0 = __x___0;
          break;
        }
        while (1) {
          __u___0 = d0;
          __v___0 = q;
          __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
          __uh___0 = (UHWtype )(__u___0 >> 32);
          __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
          __vh___0 = (UHWtype )(__v___0 >> 32);
          __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
          __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
          __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
          __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
          __x1___0 += __x0___0 >> 32;
          __x1___0 += __x2___0;
          if (__x1___0 < __x2___0) {
            __x3___0 += 1UL << 32;
          }
          _t1 = __x3___0 + (__x1___0 >> 32);
          _t0 = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
          break;
        }
        while (1) {
          __x___1 = n0 - _t0;
          n1 = (n1 - _t1) - (mp_limb_t )(n0 < _t0);
          n0 = __x___1;
          break;
        }
        q ++;
        _mask = - ((mp_limb_t )(n1 >= _q0));
        q += _mask;
        while (1) {
          __x___2 = n0 + (_mask & d0);
          n1 = (n1 + (_mask & d1)) + (mp_limb_t )(__x___2 < n0);
          n0 = __x___2;
          break;
        }
        tmp___0 = __builtin_expect((long )((n1 >= d1) != 0), 0L);
        if (tmp___0) {
          if (n1 > d1) {
            goto _L;
          } else
          if (n0 >= d0) {
            _L:
            q ++;
            while (1) {
              __x___3 = n0 - d0;
              n1 = (n1 - d1) - (mp_limb_t )(n0 < d0);
              n0 = __x___3;
              break;
            }
          }
        }
        break;
      }
      cy = __gmpn_submul_1(np - dn, dp, dn, q);
      cy1 = (mp_limb_t )(n0 < cy);
      n0 = (n0 - cy) & 0xffffffffffffffffUL;
      cy = (mp_limb_t )(n1 < cy1);
      n1 = (n1 - cy1) & 0xffffffffffffffffUL;
      *(np + 0) = n0;
      tmp___2 = __builtin_expect((long )((cy != 0UL) != 0), 0L);
      if (tmp___2) {
        tmp___1 = __gmpn_add_n(np - dn, (mp_srcptr )(np - dn), dp, dn + 1L);
        n1 += d1 + tmp___1;
        q --;
      }
    }
    qp --;
    *qp = q;
    i --;
  }
  *(np + 1) = n1;
  return (qh);
}
}
#pragma merger("0","./setbit.i","")
void __gmpz_setbit(mpz_ptr d , mp_bitcnt_t bit_idx )
{
  mp_size_t dsize ;
  mp_ptr dp ;
  mp_size_t limb_idx ;
  mp_limb_t mask ;
  void *tmp___0 ;
  long tmp___1 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___2 ;
  mp_size_t zero_bound ;
  mp_limb_t dlimb ;
  long tmp___3 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___6 ;

  {
  dsize = (mp_size_t )d->_mp_size;
  dp = d->_mp_d;
  limb_idx = (mp_size_t )(bit_idx / 64UL);
  mask = 1UL << bit_idx % 64UL;
  if (dsize >= 0L) {
    if (limb_idx < dsize) {
      *(dp + limb_idx) |= mask;
    } else {
      tmp___1 = __builtin_expect((long )((limb_idx + 1L > (mp_size_t )d->_mp_alloc) != 0),
                                 0L);
      if (tmp___1) {
        tmp___0 = __gmpz_realloc(d, limb_idx + 1L);
        dp = (mp_ptr )tmp___0;
      } else {
        dp = d->_mp_d;
      }
      d->_mp_size = (int )(limb_idx + 1L);
      while (1) {
        while (1) {
          break;
        }
        if (limb_idx - dsize != 0L) {
          while (1) {
            __dst = dp + dsize;
            __n = limb_idx - dsize;
            while (1) {
              break;
            }
            while (1) {
              tmp___2 = __dst;
              __dst ++;
              *tmp___2 = (mp_limb_t )0L;
              __n --;
              if (! __n) {
                break;
              }
            }
            break;
          }
        }
        break;
      }
      *(dp + limb_idx) = mask;
    }
  } else {
    dsize = - dsize;
    if (limb_idx < dsize) {
      zero_bound = (mp_size_t )0;
      while (*(dp + zero_bound) == 0UL) {
        zero_bound ++;
      }
      if (limb_idx > zero_bound) {
        dlimb = *(dp + limb_idx) & ~ mask;
        *(dp + limb_idx) = dlimb;
        tmp___3 = __builtin_expect((long )(((mp_size_t )(dlimb == 0UL) + limb_idx == dsize) != 0),
                                   0L);
        if (tmp___3) {
          while (1) {
            while (limb_idx > 0L) {
              if (*(dp + (limb_idx - 1L)) != 0UL) {
                break;
              }
              limb_idx --;
            }
            break;
          }
          d->_mp_size = (int )(- limb_idx);
        }
      } else
      if (limb_idx == zero_bound) {
        *(dp + limb_idx) = ((*(dp + limb_idx) - 1UL) & ~ mask) + 1UL;
        while (1) {
          break;
        }
      } else {
        while (1) {
          __p = dp + limb_idx;
          __x = *__p;
          *__p = __x - mask;
          if (__x < mask) {
            while (1) {
              __p ++;
              tmp___6 = *__p;
              (*__p) --;
              if (! (tmp___6 == 0UL)) {
                break;
              }
            }
          }
          break;
        }
        dsize -= (mp_size_t )(*(dp + (dsize - 1L)) == 0UL);
        d->_mp_size = (int )(- dsize);
      }
    }
  }
  return;
}
}
#pragma merger("0","./set_str.i","")
extern __attribute__((__nothrow__)) unsigned short const **( __attribute__((__leaf__)) __ctype_b_loc)(void) __attribute__((__const__)) ;
mp_size_t __gmpn_set_str(mp_ptr rp , unsigned char const *str , size_t str_len ,
                         int base ) ;
int __gmpz_set_str(mpz_ptr x , char const *str , int base )
{
  size_t str_size ;
  char *s ;
  char *begs ;
  size_t i ;
  mp_size_t xsize ;
  int c ;
  int negative ;
  unsigned char const *digit_value ;
  struct tmp_reentrant_t *__tmp_marker ;
  char const *tmp ;
  unsigned short const **tmp___0 ;
  char const *tmp___1 ;
  int tmp___2 ;
  char const *tmp___3 ;
  char const *tmp___4 ;
  char const *tmp___5 ;
  char const *tmp___6 ;
  unsigned short const **tmp___7 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  long tmp___12 ;
  int dig ;
  long tmp___13 ;
  char *tmp___14 ;
  unsigned short const **tmp___15 ;
  char const *tmp___16 ;
  mp_limb_t _ph ;
  mp_limb_t _dummy ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  long tmp___17 ;
  long tmp___18 ;

  {
  digit_value = __gmp_digit_value_tab;
  if (base > 36) {
    digit_value += 208;
    if (base > 62) {
      return (-1);
    }
  }
  while (1) {
    tmp = str;
    str ++;
    c = (int )((unsigned char )*tmp);
    tmp___0 = __ctype_b_loc();
    if (! ((int const )*(*tmp___0 + c) & 8192)) {
      break;
    }
  }
  negative = 0;
  if (c == 45) {
    negative = 1;
    tmp___1 = str;
    str ++;
    c = (int )((unsigned char )*tmp___1);
  }
  if (base == 0) {
    tmp___2 = 10;
  } else {
    tmp___2 = base;
  }
  if ((int const )*(digit_value + c) >= (int const )tmp___2) {
    return (-1);
  }
  if (base == 0) {
    base = 10;
    if (c == 48) {
      base = 8;
      tmp___3 = str;
      str ++;
      c = (int )((unsigned char )*tmp___3);
      if (c == 120) {
        base = 16;
        tmp___4 = str;
        str ++;
        c = (int )((unsigned char )*tmp___4);
      } else
      if (c == 88) {
        base = 16;
        tmp___4 = str;
        str ++;
        c = (int )((unsigned char )*tmp___4);
      } else
      if (c == 98) {
        base = 2;
        tmp___5 = str;
        str ++;
        c = (int )((unsigned char )*tmp___5);
      } else
      if (c == 66) {
        base = 2;
        tmp___5 = str;
        str ++;
        c = (int )((unsigned char )*tmp___5);
      }
    }
  }
  while (1) {
    if (! (c == 48)) {
      tmp___7 = __ctype_b_loc();
      if (! ((int const )*(*tmp___7 + c) & 8192)) {
        break;
      }
    }
    tmp___6 = str;
    str ++;
    c = (int )((unsigned char )*tmp___6);
  }
  if (c == 0) {
    x->_mp_size = 0;
    return (0);
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  str_size = strlen(str - 1);
  tmp___12 = __builtin_expect((long )((str_size + 1UL <= 32512UL) != 0), 1L);
  if (tmp___12) {
    tmp___9 = alloca(str_size + 1UL);
    tmp___11 = tmp___9;
  } else {
    tmp___10 = __gmp_tmp_reentrant_alloc(& __tmp_marker, str_size + 1UL);
    tmp___11 = tmp___10;
  }
  begs = (char *)tmp___11;
  s = begs;
  i = (size_t )0;
  while (i < str_size) {
    tmp___15 = __ctype_b_loc();
    if (! ((int const )*(*tmp___15 + c) & 8192)) {
      dig = (int )*(digit_value + c);
      if (dig >= base) {
        while (1) {
          tmp___13 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                      0L);
          if (tmp___13) {
            __gmp_tmp_reentrant_free(__tmp_marker);
          }
          break;
        }
        return (-1);
      }
      tmp___14 = s;
      s ++;
      *tmp___14 = (char )dig;
    }
    tmp___16 = str;
    str ++;
    c = (int )((unsigned char )*tmp___16);
    i ++;
  }
  str_size = (size_t )(s - begs);
  while (1) {
    while (1) {
      __u = (UWtype )__gmpn_bases[base].log2b;
      __v = str_size;
      __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
      __uh = (UHWtype )(__u >> 32);
      __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
      __vh = (UHWtype )(__v >> 32);
      __x0 = (UWtype )__ul * (UWtype )__vl;
      __x1 = (UWtype )__ul * (UWtype )__vh;
      __x2 = (UWtype )__uh * (UWtype )__vl;
      __x3 = (UWtype )__uh * (UWtype )__vh;
      __x1 += __x0 >> 32;
      __x1 += __x2;
      if (__x1 < __x2) {
        __x3 += 1UL << 32;
      }
      _ph = __x3 + (__x1 >> 32);
      _dummy = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
      break;
    }
    xsize = (mp_size_t )((8UL * _ph) / 64UL + 2UL);
    break;
  }
  tmp___17 = __builtin_expect((long )((xsize > (mp_size_t )x->_mp_alloc) != 0), 0L);
  if (tmp___17) {
    __gmpz_realloc(x, xsize);
  }
  xsize = __gmpn_set_str(x->_mp_d, (unsigned char const *)((unsigned char *)begs),
                         str_size, base);
  if (negative) {
    x->_mp_size = (int )(- xsize);
  } else {
    x->_mp_size = (int )xsize;
  }
  while (1) {
    tmp___18 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___18) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return (0);
}
}
#pragma merger("0","./set_ui.i","")
void __gmpz_set_ui(mpz_ptr dest , unsigned long val )
{
  mp_size_t size ;

  {
  *(dest->_mp_d + 0) = val & 0xffffffffffffffffUL;
  size = (mp_size_t )(val != 0UL);
  dest->_mp_size = (int )size;
  return;
}
}
#pragma merger("0","./sqr_basecase.i","")
void __gmpn_sqr_basecase(mp_ptr rp , mp_srcptr up , mp_size_t n___0 ) ;
void __gmpn_sqr_basecase(mp_ptr rp , mp_srcptr up , mp_size_t n___0 )
{
  mp_size_t i ;
  mp_limb_t ul ;
  mp_limb_t lpl ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  mp_limb_t tarr[100] ;
  mp_ptr tp ;
  mp_limb_t cy ;
  mp_limb_t cy___0 ;
  mp_limb_t cy___1 ;
  mp_size_t _i ;
  mp_limb_t ul___0 ;
  mp_limb_t lpl___0 ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  mp_limb_t tmp ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  ul = (mp_limb_t )*(up + 0);
  while (1) {
    __u = ul;
    __v = ul;
    __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
    __uh = (UHWtype )(__u >> 32);
    __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
    __vh = (UHWtype )(__v >> 32);
    __x0 = (UWtype )__ul * (UWtype )__vl;
    __x1 = (UWtype )__ul * (UWtype )__vh;
    __x2 = (UWtype )__uh * (UWtype )__vl;
    __x3 = (UWtype )__uh * (UWtype )__vh;
    __x1 += __x0 >> 32;
    __x1 += __x2;
    if (__x1 < __x2) {
      __x3 += 1UL << 32;
    }
    *(rp + 1) = __x3 + (__x1 >> 32);
    lpl = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
    break;
  }
  *(rp + 0) = lpl;
  if (n___0 > 1L) {
    tp = tarr;
    while (1) {
      break;
    }
    cy = __gmpn_mul_1(tp, up + 1, n___0 - 1L, (mp_limb_t )*(up + 0));
    *(tp + (n___0 - 1L)) = cy;
    i = (mp_size_t )2;
    while (i < n___0) {
      cy___0 = __gmpn_addmul_1((tp + 2L * i) - 2, up + i, n___0 - i, (mp_limb_t )*(up + (i - 1L)));
      *(tp + ((n___0 + i) - 2L)) = cy___0;
      i ++;
    }
    while (1) {
      while (1) {
        _i = (mp_size_t )0;
        while (_i < n___0) {
          ul___0 = (mp_limb_t )*(up + _i);
          while (1) {
            __u___0 = ul___0;
            __v___0 = ul___0;
            __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
            __uh___0 = (UHWtype )(__u___0 >> 32);
            __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
            __vh___0 = (UHWtype )(__v___0 >> 32);
            __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
            __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
            __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
            __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
            __x1___0 += __x0___0 >> 32;
            __x1___0 += __x2___0;
            if (__x1___0 < __x2___0) {
              __x3___0 += 1UL << 32;
            }
            *(rp + (2L * _i + 1L)) = __x3___0 + (__x1___0 >> 32);
            lpl___0 = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
            break;
          }
          *(rp + 2L * _i) = lpl___0;
          _i ++;
        }
        break;
      }
      cy___1 = __gmpn_lshift(tp, (mp_srcptr )tp, 2L * n___0 - 2L, 1U);
      tmp = __gmpn_add_n(rp + 1, (mp_srcptr )(rp + 1), (mp_srcptr )tp, 2L * n___0 - 2L);
      cy___1 += tmp;
      *(rp + (2L * n___0 - 1L)) += cy___1;
      break;
    }
  }
  return;
}
}
#pragma merger("0","./sqr.i","")
void __gmpn_toom2_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch ) ;
void __gmpn_toom3_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch ) ;
void __gmpn_toom4_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch ) ;
void __gmpn_toom6_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch ) ;
void __gmpn_toom8_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch ) ;
void __gmpn_sqr(mp_ptr p , mp_srcptr a , mp_size_t n___0 )
{
  mp_limb_t ws[366] ;
  mp_ptr ws___0 ;
  void *tmp ;
  mp_ptr ws___1 ;
  void *tmp___0 ;
  mp_ptr ws___2 ;
  void *tmp___1 ;
  mp_ptr ws___3 ;
  struct tmp_reentrant_t *__tmp_marker ;
  int tmp___4 ;
  void *tmp___5 ;
  int tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  int tmp___9 ;
  long tmp___10 ;
  long tmp___11 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if (! (n___0 >= 50L)) {
    __gmpn_sqr_basecase(p, a, n___0);
  } else
  if (! (n___0 >= 120L)) {
    while (1) {
      break;
    }
    __gmpn_toom2_sqr(p, a, n___0, ws);
  } else
  if (! (n___0 >= 400L)) {
    tmp = alloca((unsigned long )(3L * n___0 + 64L) * sizeof(mp_limb_t ));
    ws___0 = (mp_limb_t *)tmp;
    __gmpn_toom3_sqr(p, a, n___0, ws___0);
  } else
  if (! (n___0 >= 350L)) {
    tmp___0 = alloca((unsigned long )(3L * n___0 + 64L) * sizeof(mp_limb_t ));
    ws___1 = (mp_limb_t *)tmp___0;
    __gmpn_toom4_sqr(p, a, n___0, ws___1);
  } else
  if (! (n___0 >= 450L)) {
    tmp___1 = alloca((unsigned long )((n___0 - 350L) * 2L + 1114L) * sizeof(mp_limb_t ));
    ws___2 = (mp_limb_t *)tmp___1;
    __gmpn_toom6_sqr(p, a, n___0, ws___2);
  } else
  if (! (n___0 >= 3600L)) {
    __tmp_marker = (struct tmp_reentrant_t *)0;
    if ((6750 >> 3) + 384 > 1314) {
      tmp___9 = (6750 >> 3) + 384;
    } else {
      tmp___9 = 1314;
    }
    tmp___10 = __builtin_expect((long )(((unsigned long )(((n___0 * 15L >> 3) - (mp_size_t )(6750 >> 3)) + (mp_size_t )tmp___9) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___10) {
      if ((6750 >> 3) + 384 > 1314) {
        tmp___4 = (6750 >> 3) + 384;
      } else {
        tmp___4 = 1314;
      }
      tmp___5 = alloca((unsigned long )(((n___0 * 15L >> 3) - (mp_size_t )(6750 >> 3)) + (mp_size_t )tmp___4) * sizeof(mp_limb_t ));
      tmp___8 = tmp___5;
    } else {
      if ((6750 >> 3) + 384 > 1314) {
        tmp___6 = (6750 >> 3) + 384;
      } else {
        tmp___6 = 1314;
      }
      tmp___7 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(((n___0 * 15L >> 3) - (mp_size_t )(6750 >> 3)) + (mp_size_t )tmp___6) * sizeof(mp_limb_t ));
      tmp___8 = tmp___7;
    }
    ws___3 = (mp_limb_t *)tmp___8;
    __gmpn_toom8_sqr(p, a, n___0, ws___3);
    while (1) {
      tmp___11 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                  0L);
      if (tmp___11) {
        __gmp_tmp_reentrant_free(__tmp_marker);
      }
      break;
    }
  } else {
    __gmpn_nussbaumer_mul(p, a, n___0, a, n___0);
  }
  return;
}
}
#pragma merger("0","./sqrmod_bnm1.i","")
static void mpn_bc_sqrmod_bnm1(mp_ptr rp , mp_srcptr ap , mp_size_t rn , mp_ptr tp )
{
  mp_limb_t cy ;
  mp_limb_t __x ;
  mp_ptr __p ;

  {
  while (1) {
    break;
  }
  __gmpn_sqr(tp, ap, rn);
  cy = __gmpn_add_n(rp, (mp_srcptr )tp, (mp_srcptr )(tp + rn), rn);
  while (1) {
    __p = rp;
    __x = *__p + cy;
    *__p = __x;
    if (__x < cy) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  return;
}
}
static void mpn_bc_sqrmod_bnp1(mp_ptr rp , mp_srcptr ap , mp_size_t rn , mp_ptr tp )
{
  mp_limb_t cy ;
  mp_limb_t tmp ;
  mp_limb_t __x ;
  mp_ptr __p ;

  {
  while (1) {
    break;
  }
  __gmpn_sqr(tp, ap, rn + 1L);
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tmp = __gmpn_sub_n(rp, (mp_srcptr )tp, (mp_srcptr )(tp + rn), rn);
  cy = *(tp + 2L * rn) + tmp;
  *(rp + rn) = (mp_limb_t )0;
  while (1) {
    __p = rp;
    __x = *__p + cy;
    *__p = __x;
    if (__x < cy) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  return;
}
}
void __gmpn_sqrmod_bnm1(mp_ptr rp , mp_size_t rn , mp_srcptr ap , mp_size_t an , mp_ptr tp )
{
  mp_limb_t cy ;
  mp_limb_t __x ;
  mp_ptr __p ;
  long tmp___0 ;
  long tmp___1 ;
  mp_size_t n___0 ;
  mp_limb_t cy___0 ;
  mp_limb_t hi ;
  mp_srcptr am1 ;
  mp_size_t anm ;
  mp_ptr so ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  long tmp___3 ;
  int k ;
  mp_srcptr ap1 ;
  mp_size_t anp ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  long tmp___5 ;
  int mask ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  long tmp___7 ;
  mp_limb_t tmp___8 ;
  mp_limb_t __x___3 ;
  mp_ptr __p___3 ;
  mp_limb_t tmp___10 ;
  mp_limb_t tmp___11 ;
  mp_limb_t __x___4 ;
  mp_ptr __p___4 ;
  mp_limb_t tmp___14 ;
  long tmp___15 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if ((rn & 1L) != 0L) {
    goto _L;
  } else
  if (! (rn >= 16L)) {
    _L:
    tmp___1 = __builtin_expect((long )((an < rn) != 0), 0L);
    if (tmp___1) {
      tmp___0 = __builtin_expect((long )((2L * an <= rn) != 0), 0L);
      if (tmp___0) {
        __gmpn_sqr(rp, ap, an);
      } else {
        __gmpn_sqr(tp, ap, an);
        cy = __gmpn_add(rp, (mp_srcptr )tp, rn, (mp_srcptr )(tp + rn), 2L * an - rn);
        while (1) {
          __p = rp;
          __x = *__p + cy;
          *__p = __x;
          if (__x < cy) {
            while (1) {
              __p ++;
              (*__p) ++;
              if (! (*__p == 0UL)) {
                break;
              }
            }
          }
          break;
        }
      }
    } else {
      mpn_bc_sqrmod_bnm1(rp, ap, rn, tp);
    }
  } else {
    n___0 = rn >> 1;
    while (1) {
      break;
    }
    tmp___3 = __builtin_expect((long )((an > n___0) != 0), 1L);
    if (tmp___3) {
      so = tp + n___0;
      am1 = (mp_srcptr )tp;
      cy___0 = __gmpn_add(tp, ap, n___0, ap + n___0, an - n___0);
      while (1) {
        __p___0 = tp;
        __x___0 = *__p___0 + cy___0;
        *__p___0 = __x___0;
        if (__x___0 < cy___0) {
          while (1) {
            __p___0 ++;
            (*__p___0) ++;
            if (! (*__p___0 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      anm = n___0;
    } else {
      so = tp;
      am1 = ap;
      anm = an;
    }
    __gmpn_sqrmod_bnm1(rp, n___0, am1, anm, so);
    tmp___5 = __builtin_expect((long )((an > n___0) != 0), 1L);
    if (tmp___5) {
      ap1 = (mp_srcptr )((tp + 2L * n___0) + 2);
      cy___0 = __gmpn_sub((tp + 2L * n___0) + 2, ap, n___0, ap + n___0, an - n___0);
      *(((tp + 2L * n___0) + 2) + n___0) = (mp_limb_t )0;
      while (1) {
        __p___1 = (tp + 2L * n___0) + 2;
        __x___1 = *__p___1 + cy___0;
        *__p___1 = __x___1;
        if (__x___1 < cy___0) {
          while (1) {
            __p___1 ++;
            (*__p___1) ++;
            if (! (*__p___1 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      anp = (mp_size_t )((mp_limb_t const )n___0 + *(ap1 + n___0));
    } else {
      ap1 = ap;
      anp = an;
    }
    if (! (n___0 >= 300L)) {
      k = 0;
    } else {
      k = __gmpn_fft_best_k(n___0, 1);
      mask = (1 << k) - 1;
      while (n___0 & (long )mask) {
        k --;
        mask >>= 1;
      }
    }
    if (k >= 4) {
      *(tp + n___0) = __gmpn_mul_fft(tp, n___0, ap1, anp, ap1, anp, k);
    } else {
      tmp___7 = __builtin_expect((long )(((unsigned long )ap1 == (unsigned long )ap) != 0),
                                 0L);
      if (tmp___7) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        __gmpn_sqr(tp, ap, an);
        anp = 2L * an - n___0;
        cy___0 = __gmpn_sub(tp, (mp_srcptr )tp, n___0, (mp_srcptr )(tp + n___0), anp);
        *(tp + n___0) = (mp_limb_t )0;
        while (1) {
          __p___2 = tp;
          __x___2 = *__p___2 + cy___0;
          *__p___2 = __x___2;
          if (__x___2 < cy___0) {
            while (1) {
              __p___2 ++;
              (*__p___2) ++;
              if (! (*__p___2 == 0UL)) {
                break;
              }
            }
          }
          break;
        }
      } else {
        mpn_bc_sqrmod_bnp1(tp, ap1, n___0, tp);
      }
    }
    tmp___8 = __gmpn_add_n(rp, (mp_srcptr )rp, (mp_srcptr )tp, n___0);
    cy___0 = *(tp + n___0) + tmp___8;
    cy___0 += *(rp + 0) & 1UL;
    __gmpn_rshift(rp, (mp_srcptr )rp, n___0, 1U);
    while (1) {
      break;
    }
    hi = (cy___0 << 63) & 0xffffffffffffffffUL;
    cy___0 >>= 1;
    while (1) {
      break;
    }
    *(rp + (n___0 - 1L)) |= hi;
    while (1) {
      break;
    }
    while (1) {
      break;
    }
    while (1) {
      __p___3 = rp;
      __x___3 = *__p___3 + cy___0;
      *__p___3 = __x___3;
      if (__x___3 < cy___0) {
        while (1) {
          __p___3 ++;
          (*__p___3) ++;
          if (! (*__p___3 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    tmp___15 = __builtin_expect((long )((2L * an < rn) != 0), 0L);
    if (tmp___15) {
      cy___0 = __gmpn_sub_n(rp + n___0, (mp_srcptr )rp, (mp_srcptr )tp, 2L * an - n___0);
      tmp___10 = mpn_sub_nc((tp + 2L * an) - n___0, (mp_srcptr )((rp + 2L * an) - n___0),
                            (mp_srcptr )((tp + 2L * an) - n___0), rn - 2L * an, cy___0);
      cy___0 = *(tp + n___0) + tmp___10;
      while (1) {
        break;
      }
      cy___0 = __gmpn_sub_1(rp, (mp_srcptr )rp, 2L * an, cy___0);
      while (1) {
        break;
      }
    } else {
      tmp___11 = __gmpn_sub_n(rp + n___0, (mp_srcptr )rp, (mp_srcptr )tp, n___0);
      cy___0 = *(tp + n___0) + tmp___11;
      while (1) {
        __p___4 = rp;
        __x___4 = *__p___4;
        *__p___4 = __x___4 - cy___0;
        if (__x___4 < cy___0) {
          while (1) {
            __p___4 ++;
            tmp___14 = *__p___4;
            (*__p___4) --;
            if (! (tmp___14 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    }
  }
  return;
}
}
mp_size_t __gmpn_sqrmod_bnm1_next_size(mp_size_t n___0 ) __attribute__((__const__)) ;
mp_size_t __gmpn_sqrmod_bnm1_next_size(mp_size_t n___0 )
{
  mp_size_t nh ;
  int tmp ;
  mp_size_t tmp___0 ;

  {
  if (! (n___0 >= 16L)) {
    return (n___0);
  }
  if (! (n___0 >= 61L)) {
    return ((n___0 + 1L) & -2L);
  }
  if (! (n___0 >= 121L)) {
    return ((n___0 + 3L) & -4L);
  }
  nh = (n___0 + 1L) >> 1;
  if (! (nh >= 360L)) {
    return ((n___0 + 7L) & -8L);
  }
  tmp = __gmpn_fft_best_k(nh, 1);
  tmp___0 = __gmpn_fft_next_size(nh, tmp);
  return (2L * tmp___0);
}
}
#pragma merger("0","./sub_1.i","")
#pragma merger("0","./sub.i","")
#pragma merger("0","./submul_1.i","")
mp_limb_t __gmpn_submul_1(mp_ptr rp , mp_srcptr up , mp_size_t n___0 , mp_limb_t vl )
{
  mp_limb_t ul ;
  mp_limb_t cl ;
  mp_limb_t hpl ;
  mp_limb_t lpl ;
  mp_limb_t rl ;
  mp_srcptr tmp ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  mp_ptr tmp___0 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  cl = (mp_limb_t )0;
  while (1) {
    tmp = up;
    up ++;
    ul = (mp_limb_t )*tmp;
    while (1) {
      __u = ul;
      __v = vl;
      __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
      __uh = (UHWtype )(__u >> 32);
      __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
      __vh = (UHWtype )(__v >> 32);
      __x0 = (UWtype )__ul * (UWtype )__vl;
      __x1 = (UWtype )__ul * (UWtype )__vh;
      __x2 = (UWtype )__uh * (UWtype )__vl;
      __x3 = (UWtype )__uh * (UWtype )__vh;
      __x1 += __x0 >> 32;
      __x1 += __x2;
      if (__x1 < __x2) {
        __x3 += 1UL << 32;
      }
      hpl = __x3 + (__x1 >> 32);
      lpl = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
      break;
    }
    lpl += cl;
    cl = (mp_limb_t )(lpl < cl) + hpl;
    rl = *rp;
    lpl = rl - lpl;
    cl += (mp_limb_t )(lpl > rl);
    tmp___0 = rp;
    rp ++;
    *tmp___0 = lpl;
    n___0 --;
    if (! (n___0 != 0L)) {
      break;
    }
  }
  return (cl);
}
}
#pragma merger("0","./sub_n.i","")
mp_limb_t __gmpn_sub_n(mp_ptr rp , mp_srcptr up , mp_srcptr vp , mp_size_t n___0 )
{
  mp_limb_t ul ;
  mp_limb_t vl ;
  mp_limb_t sl ;
  mp_limb_t rl ;
  mp_limb_t cy ;
  mp_limb_t cy1 ;
  mp_limb_t cy2 ;
  mp_srcptr tmp ;
  mp_srcptr tmp___0 ;
  mp_ptr tmp___1 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  cy = (mp_limb_t )0;
  while (1) {
    tmp = up;
    up ++;
    ul = (mp_limb_t )*tmp;
    tmp___0 = vp;
    vp ++;
    vl = (mp_limb_t )*tmp___0;
    sl = ul - vl;
    cy1 = (mp_limb_t )(sl > ul);
    rl = sl - cy;
    cy2 = (mp_limb_t )(rl > sl);
    cy = cy1 | cy2;
    tmp___1 = rp;
    rp ++;
    *tmp___1 = rl;
    n___0 --;
    if (! (n___0 != 0L)) {
      break;
    }
  }
  return (cy);
}
}
#pragma merger("0","./sub_ui.i","")
void __gmpz_sub_ui(mpz_ptr w , mpz_srcptr u , unsigned long vval )
{
  mp_srcptr up ;
  mp_ptr wp ;
  mp_size_t usize ;
  mp_size_t wsize ;
  mp_size_t abs_usize ;
  void *tmp___0 ;
  long tmp___1 ;
  mp_limb_t cy ;

  {
  usize = (mp_size_t )u->_mp_size;
  if (usize == 0L) {
    *(w->_mp_d + 0) = vval;
    w->_mp_size = - (vval != 0UL);
    return;
  }
  if (usize >= 0L) {
    abs_usize = usize;
  } else {
    abs_usize = - usize;
  }
  tmp___1 = __builtin_expect((long )((abs_usize + 1L > (mp_size_t )w->_mp_alloc) != 0),
                             0L);
  if (tmp___1) {
    tmp___0 = __gmpz_realloc(w, abs_usize + 1L);
    wp = (mp_ptr )tmp___0;
  } else {
    wp = w->_mp_d;
  }
  up = (mp_srcptr )u->_mp_d;
  if (usize < 0L) {
    cy = __gmpn_add_1(wp, up, abs_usize, vval);
    *(wp + abs_usize) = cy;
    wsize = (mp_size_t )(- ((mp_limb_t )abs_usize + cy));
  } else
  if (abs_usize == 1L) {
    if (*(up + 0) < (mp_limb_t const )vval) {
      *(wp + 0) = vval - (unsigned long )*(up + 0);
      wsize = (mp_size_t )-1;
    } else {
      __gmpn_sub_1(wp, up, abs_usize, vval);
      wsize = abs_usize - (mp_size_t )(*(wp + (abs_usize - 1L)) == 0UL);
    }
  } else {
    __gmpn_sub_1(wp, up, abs_usize, vval);
    wsize = abs_usize - (mp_size_t )(*(wp + (abs_usize - 1L)) == 0UL);
  }
  w->_mp_size = (int )wsize;
  return;
}
}
#pragma merger("0","./swap.i","")
void __gmpz_swap(mpz_ptr u , mpz_ptr v ) ;
void __gmpz_swap(mpz_ptr u , mpz_ptr v )
{
  mp_size_t __mp_size_t_swap__tmp ;
  mp_size_t __mp_size_t_swap__tmp___0 ;
  mp_ptr __mp_ptr_swap__tmp ;

  {
  while (1) {
    __mp_size_t_swap__tmp = (mp_size_t )u->_mp_alloc;
    u->_mp_alloc = v->_mp_alloc;
    v->_mp_alloc = (int )__mp_size_t_swap__tmp;
    break;
  }
  while (1) {
    __mp_size_t_swap__tmp___0 = (mp_size_t )u->_mp_size;
    u->_mp_size = v->_mp_size;
    v->_mp_size = (int )__mp_size_t_swap__tmp___0;
    break;
  }
  while (1) {
    __mp_ptr_swap__tmp = v->_mp_d;
    v->_mp_d = u->_mp_d;
    u->_mp_d = __mp_ptr_swap__tmp;
    break;
  }
  return;
}
}
#pragma merger("0","./tal-reent.i","")
void *__gmp_tmp_reentrant_alloc(struct tmp_reentrant_t **markp , size_t size ) __attribute__((__malloc__)) ;
void *__gmp_tmp_reentrant_alloc(struct tmp_reentrant_t **markp , size_t size )
{
  char *p ;
  size_t total_size ;
  unsigned long tmp ;
  void *tmp___0 ;
  unsigned long tmp___1 ;

  {
  if ((sizeof(union tmp_align_t ) & (sizeof(union tmp_align_t ) - 1UL)) == 0UL) {
    tmp = sizeof(struct tmp_reentrant_t ) + - sizeof(struct tmp_reentrant_t ) % sizeof(union tmp_align_t );
  } else {
    tmp = ((sizeof(struct tmp_reentrant_t ) + sizeof(union tmp_align_t )) - 1UL) - ((sizeof(struct tmp_reentrant_t ) + sizeof(union tmp_align_t )) - 1UL) % sizeof(union tmp_align_t );
  }
  total_size = size + tmp;
  tmp___0 = (*__gmp_allocate_func)(total_size);
  p = (char *)tmp___0;
  ((struct tmp_reentrant_t *)p)->size = total_size;
  ((struct tmp_reentrant_t *)p)->next = *markp;
  *markp = (struct tmp_reentrant_t *)p;
  if ((sizeof(union tmp_align_t ) & (sizeof(union tmp_align_t ) - 1UL)) == 0UL) {
    tmp___1 = sizeof(struct tmp_reentrant_t ) + - sizeof(struct tmp_reentrant_t ) % sizeof(union tmp_align_t );
  } else {
    tmp___1 = ((sizeof(struct tmp_reentrant_t ) + sizeof(union tmp_align_t )) - 1UL) - ((sizeof(struct tmp_reentrant_t ) + sizeof(union tmp_align_t )) - 1UL) % sizeof(union tmp_align_t );
  }
  return ((void *)(p + tmp___1));
}
}
void __gmp_tmp_reentrant_free(struct tmp_reentrant_t *mark )
{
  struct tmp_reentrant_t *next ;

  {
  while ((unsigned long )mark != (unsigned long )((void *)0)) {
    next = mark->next;
    (*__gmp_free_func)((void *)((char *)mark), mark->size);
    mark = next;
  }
  return;
}
}
#pragma merger("0","./tdiv_q_2exp.i","")
void __gmpz_tdiv_q_2exp(mpz_ptr r , mpz_srcptr u , mp_bitcnt_t cnt )
{
  mp_size_t un ;
  mp_size_t rn ;
  mp_size_t limb_cnt ;
  mp_ptr rp ;
  mp_srcptr up ;
  mp_size_t tmp ;
  void *tmp___1 ;
  long tmp___2 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___3 ;
  mp_ptr tmp___4 ;
  mp_srcptr tmp___5 ;
  mp_ptr tmp___6 ;

  {
  un = (mp_size_t )u->_mp_size;
  limb_cnt = (mp_size_t )(cnt / 64UL);
  if (un >= 0L) {
    tmp = un;
  } else {
    tmp = - un;
  }
  rn = tmp - limb_cnt;
  if (rn <= 0L) {
    rn = (mp_size_t )0;
  } else {
    tmp___2 = __builtin_expect((long )((rn > (mp_size_t )r->_mp_alloc) != 0), 0L);
    if (tmp___2) {
      tmp___1 = __gmpz_realloc(r, rn);
      rp = (mp_ptr )tmp___1;
    } else {
      rp = r->_mp_d;
    }
    up = (mp_srcptr )(u->_mp_d + limb_cnt);
    cnt %= 64UL;
    if (cnt != 0UL) {
      __gmpn_rshift(rp, up, rn, (unsigned int )cnt);
      rn -= (mp_size_t )(*(rp + (rn - 1L)) == 0UL);
    } else {
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (rn != 0L) {
          __n = rn - 1L;
          __dst = rp;
          __src = up;
          tmp___3 = __src;
          __src ++;
          __x = (mp_limb_t )*tmp___3;
          if (__n != 0L) {
            while (1) {
              tmp___4 = __dst;
              __dst ++;
              *tmp___4 = __x;
              tmp___5 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___5;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___6 = __dst;
          __dst ++;
          *tmp___6 = __x;
        }
        break;
      }
    }
  }
  if (un >= 0L) {
    r->_mp_size = (int )rn;
  } else {
    r->_mp_size = (int )(- rn);
  }
  return;
}
}
#pragma merger("0","./tdiv_qr.i","")
void __gmpn_tdiv_qr(mp_ptr qp , mp_ptr rp , mp_size_t qxn , mp_srcptr np , mp_size_t nn ,
                    mp_srcptr dp , mp_size_t dn )
{
  long tmp ;
  mp_ptr n2p ;
  mp_ptr d2p ;
  mp_limb_t qhl ;
  mp_limb_t cy ;
  struct tmp_reentrant_t *__tmp_marker ;
  int cnt ;
  mp_limb_t dtmp[2] ;
  UWtype __xr ;
  UWtype __a ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  long tmp___6 ;
  void *tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  long tmp___11 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___12 ;
  mp_ptr tmp___13 ;
  mp_srcptr tmp___14 ;
  mp_ptr tmp___15 ;
  long tmp___16 ;
  int adjust ;
  gmp_pi1_t dinv ;
  struct tmp_reentrant_t *__tmp_marker___0 ;
  mp_ptr n2p___0 ;
  mp_ptr d2p___0 ;
  mp_limb_t cy___0 ;
  int cnt___0 ;
  UWtype __xr___0 ;
  UWtype __a___0 ;
  void *tmp___20 ;
  void *tmp___21 ;
  void *tmp___22 ;
  long tmp___23 ;
  void *tmp___25 ;
  void *tmp___26 ;
  void *tmp___27 ;
  long tmp___28 ;
  void *tmp___30 ;
  void *tmp___31 ;
  void *tmp___32 ;
  long tmp___33 ;
  mp_size_t __n___0 ;
  mp_ptr __dst___0 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___0 ;
  mp_srcptr tmp___34 ;
  mp_ptr tmp___35 ;
  mp_srcptr tmp___36 ;
  mp_ptr tmp___37 ;
  mp_limb_t _v ;
  mp_limb_t _p ;
  mp_limb_t _t1 ;
  mp_limb_t _t0 ;
  mp_limb_t _mask ;
  mp_limb_t _dummy ;
  UWtype __d1 ;
  UWtype __d0 ;
  UWtype __q1 ;
  UWtype __q0 ;
  UWtype __r1 ;
  UWtype __r0 ;
  UWtype __m ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  long tmp___38 ;
  mp_size_t itch ;
  mp_size_t tmp___39 ;
  mp_ptr scratch ;
  void *tmp___41 ;
  void *tmp___42 ;
  void *tmp___43 ;
  long tmp___44 ;
  mp_size_t __n___1 ;
  mp_ptr __dst___1 ;
  mp_srcptr __src___1 ;
  mp_limb_t __x___1 ;
  mp_srcptr tmp___45 ;
  mp_ptr tmp___46 ;
  mp_srcptr tmp___47 ;
  mp_ptr tmp___48 ;
  long tmp___49 ;
  mp_size_t qn ;
  mp_ptr n2p___1 ;
  mp_ptr d2p___1 ;
  mp_ptr tp ;
  mp_limb_t cy___1 ;
  mp_size_t in ;
  mp_size_t rn ;
  mp_limb_t quotient_too_large ;
  unsigned int cnt___1 ;
  mp_size_t __n___2 ;
  mp_ptr __dst___2 ;
  mp_srcptr __src___2 ;
  mp_limb_t __x___2 ;
  mp_srcptr tmp___50 ;
  mp_ptr tmp___51 ;
  mp_srcptr tmp___52 ;
  mp_ptr tmp___53 ;
  long tmp___54 ;
  UWtype __xr___1 ;
  UWtype __a___1 ;
  void *tmp___58 ;
  void *tmp___59 ;
  void *tmp___60 ;
  long tmp___61 ;
  void *tmp___63 ;
  void *tmp___64 ;
  void *tmp___65 ;
  long tmp___66 ;
  void *tmp___68 ;
  void *tmp___69 ;
  void *tmp___70 ;
  long tmp___71 ;
  mp_size_t __n___3 ;
  mp_ptr __dst___3 ;
  mp_srcptr __src___3 ;
  mp_limb_t __x___3 ;
  mp_srcptr tmp___72 ;
  mp_ptr tmp___73 ;
  mp_srcptr tmp___74 ;
  mp_ptr tmp___75 ;
  mp_limb_t q0 ;
  mp_limb_t r0 ;
  UWtype __d1___0 ;
  UWtype __d0___0 ;
  UWtype __q1___0 ;
  UWtype __q0___0 ;
  UWtype __r1___0 ;
  UWtype __r0___0 ;
  UWtype __m___0 ;
  mp_limb_t _v___0 ;
  mp_limb_t _p___0 ;
  mp_limb_t _t1___0 ;
  mp_limb_t _t0___0 ;
  mp_limb_t _mask___0 ;
  mp_limb_t _dummy___0 ;
  UWtype __d1___1 ;
  UWtype __d0___1 ;
  UWtype __q1___1 ;
  UWtype __q0___1 ;
  UWtype __r1___1 ;
  UWtype __r0___1 ;
  UWtype __m___1 ;
  UWtype __x0___0 ;
  UWtype __x1___0 ;
  UWtype __x2___0 ;
  UWtype __x3___0 ;
  UHWtype __ul___0 ;
  UHWtype __vl___0 ;
  UHWtype __uh___0 ;
  UHWtype __vh___0 ;
  UWtype __u___0 ;
  UWtype __v___0 ;
  long tmp___76 ;
  mp_size_t itch___0 ;
  mp_size_t tmp___77 ;
  mp_ptr scratch___0 ;
  void *tmp___79 ;
  void *tmp___80 ;
  void *tmp___81 ;
  long tmp___82 ;
  mp_ptr r2p ;
  mp_size_t __n___4 ;
  mp_ptr __dst___4 ;
  mp_srcptr __src___4 ;
  mp_limb_t __x___4 ;
  mp_srcptr tmp___83 ;
  mp_ptr tmp___84 ;
  mp_srcptr tmp___85 ;
  mp_ptr tmp___86 ;
  mp_limb_t dl ;
  mp_limb_t x ;
  mp_limb_t h ;
  mp_limb_t dummy ;
  UWtype __x0___1 ;
  UWtype __x1___1 ;
  UWtype __x2___1 ;
  UWtype __x3___1 ;
  UHWtype __ul___1 ;
  UHWtype __vl___1 ;
  UHWtype __uh___1 ;
  UHWtype __vh___1 ;
  UWtype __u___1 ;
  UWtype __v___1 ;
  mp_limb_t cy___2 ;
  mp_ptr __p ;
  mp_ptr tmp___87 ;
  mp_limb_t tmp___88 ;
  mp_limb_t cy1 ;
  mp_limb_t cy2 ;
  long tmp___90 ;
  void *tmp___92 ;
  void *tmp___93 ;
  void *tmp___94 ;
  long tmp___95 ;
  mp_size_t __n___5 ;
  mp_ptr __dst___5 ;
  mp_srcptr __src___5 ;
  mp_limb_t __x___6 ;
  mp_srcptr tmp___96 ;
  mp_ptr tmp___97 ;
  mp_srcptr tmp___98 ;
  mp_ptr tmp___99 ;
  long tmp___100 ;
  mp_size_t __n___6 ;
  mp_ptr __dst___6 ;
  mp_srcptr __src___6 ;
  mp_limb_t __x___7 ;
  mp_srcptr tmp___101 ;
  mp_ptr tmp___102 ;
  mp_srcptr tmp___103 ;
  mp_ptr tmp___104 ;
  mp_ptr __p___0 ;
  mp_ptr tmp___105 ;
  mp_limb_t tmp___106 ;
  long tmp___108 ;

  {
  while (1) {
    tmp = __builtin_expect((long )(! (qxn == 0L) != 0), 0L);
    if (tmp) {
      __gmp_assert_fail("tdiv_qr.c", 51, "qxn == 0");
    }
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  switch (dn) {
  case 0L:
  __gmp_divide_by_zero();
  case 1L:
  *(rp + 0) = __gmpn_divrem_1(qp, (mp_size_t )0, np, nn, (mp_limb_t )*(dp + 0));
  return;
  case 2L:
  __tmp_marker = (struct tmp_reentrant_t *)0;
  if ((*(dp + 1) & (unsigned long const )(1UL << 63)) == 0UL) {
    while (1) {
      __xr = (UWtype )*(dp + 1);
      __a = (UWtype )56;
      while (__a > 0UL) {
        if (((__xr >> __a) & 255UL) != 0UL) {
          break;
        }
        __a -= 8UL;
      }
      __a ++;
      cnt = (int )((65UL - __a) - (UWtype )__gmpn_clz_tab[__xr >> __a]);
      break;
    }
    cnt = cnt;
    d2p = dtmp;
    *(d2p + 1) = (mp_limb_t )((*(dp + 1) << cnt) | (*(dp + 0) >> (64 - cnt)));
    *(d2p + 0) = (mp_limb_t )((*(dp + 0) << cnt) & 0xffffffffffffffffUL);
    tmp___6 = __builtin_expect((long )(((unsigned long )(nn + 1L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                               1L);
    if (tmp___6) {
      tmp___3 = alloca((unsigned long )(nn + 1L) * sizeof(mp_limb_t ));
      tmp___5 = tmp___3;
    } else {
      tmp___4 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(nn + 1L) * sizeof(mp_limb_t ));
      tmp___5 = tmp___4;
    }
    n2p = (mp_limb_t *)tmp___5;
    cy = __gmpn_lshift(n2p, np, nn, (unsigned int )cnt);
    *(n2p + nn) = cy;
    qhl = __gmpn_divrem_2(qp, 0L, n2p, nn + (mp_size_t )(cy != 0UL), (mp_srcptr )d2p);
    if (cy == 0UL) {
      *(qp + (nn - 2L)) = qhl;
    }
    *(rp + 0) = (*(n2p + 0) >> cnt) | ((*(n2p + 1) << (64 - cnt)) & 0xffffffffffffffffUL);
    *(rp + 1) = *(n2p + 1) >> cnt;
  } else {
    d2p = (mp_ptr )dp;
    tmp___11 = __builtin_expect((long )(((unsigned long )nn * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___11) {
      tmp___8 = alloca((unsigned long )nn * sizeof(mp_limb_t ));
      tmp___10 = tmp___8;
    } else {
      tmp___9 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )nn * sizeof(mp_limb_t ));
      tmp___10 = tmp___9;
    }
    n2p = (mp_limb_t *)tmp___10;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (nn != 0L) {
          __n = nn - 1L;
          __dst = n2p;
          __src = np;
          tmp___12 = __src;
          __src ++;
          __x = (mp_limb_t )*tmp___12;
          if (__n != 0L) {
            while (1) {
              tmp___13 = __dst;
              __dst ++;
              *tmp___13 = __x;
              tmp___14 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___14;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___15 = __dst;
          __dst ++;
          *tmp___15 = __x;
        }
        break;
      }
      break;
    }
    qhl = __gmpn_divrem_2(qp, 0L, n2p, nn, (mp_srcptr )d2p);
    *(qp + (nn - 2L)) = qhl;
    *(rp + 0) = *(n2p + 0);
    *(rp + 1) = *(n2p + 1);
  }
  while (1) {
    tmp___16 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___16) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
  default:
  __tmp_marker___0 = (struct tmp_reentrant_t *)0;
  adjust = *(np + (nn - 1L)) >= *(dp + (dn - 1L));
  if (nn + (mp_size_t )adjust >= 2L * dn) {
    *(qp + (nn - dn)) = (mp_limb_t )0;
    if ((*(dp + (dn - 1L)) & (unsigned long const )(1UL << 63)) == 0UL) {
      while (1) {
        __xr___0 = (UWtype )*(dp + (dn - 1L));
        __a___0 = (UWtype )56;
        while (__a___0 > 0UL) {
          if (((__xr___0 >> __a___0) & 255UL) != 0UL) {
            break;
          }
          __a___0 -= 8UL;
        }
        __a___0 ++;
        cnt___0 = (int )((65UL - __a___0) - (UWtype )__gmpn_clz_tab[__xr___0 >> __a___0]);
        break;
      }
      cnt___0 = cnt___0;
      tmp___23 = __builtin_expect((long )(((unsigned long )dn * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___23) {
        tmp___20 = alloca((unsigned long )dn * sizeof(mp_limb_t ));
        tmp___22 = tmp___20;
      } else {
        tmp___21 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )dn * sizeof(mp_limb_t ));
        tmp___22 = tmp___21;
      }
      d2p___0 = (mp_limb_t *)tmp___22;
      __gmpn_lshift(d2p___0, dp, dn, (unsigned int )cnt___0);
      tmp___28 = __builtin_expect((long )(((unsigned long )(nn + 1L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___28) {
        tmp___25 = alloca((unsigned long )(nn + 1L) * sizeof(mp_limb_t ));
        tmp___27 = tmp___25;
      } else {
        tmp___26 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )(nn + 1L) * sizeof(mp_limb_t ));
        tmp___27 = tmp___26;
      }
      n2p___0 = (mp_limb_t *)tmp___27;
      cy___0 = __gmpn_lshift(n2p___0, np, nn, (unsigned int )cnt___0);
      *(n2p___0 + nn) = cy___0;
      nn += (mp_size_t )adjust;
    } else {
      cnt___0 = 0;
      d2p___0 = (mp_ptr )dp;
      tmp___33 = __builtin_expect((long )(((unsigned long )(nn + 1L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___33) {
        tmp___30 = alloca((unsigned long )(nn + 1L) * sizeof(mp_limb_t ));
        tmp___32 = tmp___30;
      } else {
        tmp___31 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )(nn + 1L) * sizeof(mp_limb_t ));
        tmp___32 = tmp___31;
      }
      n2p___0 = (mp_limb_t *)tmp___32;
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (nn != 0L) {
            __n___0 = nn - 1L;
            __dst___0 = n2p___0;
            __src___0 = np;
            tmp___34 = __src___0;
            __src___0 ++;
            __x___0 = (mp_limb_t )*tmp___34;
            if (__n___0 != 0L) {
              while (1) {
                tmp___35 = __dst___0;
                __dst___0 ++;
                *tmp___35 = __x___0;
                tmp___36 = __src___0;
                __src___0 ++;
                __x___0 = (mp_limb_t )*tmp___36;
                __n___0 --;
                if (! __n___0) {
                  break;
                }
              }
            }
            tmp___37 = __dst___0;
            __dst___0 ++;
            *tmp___37 = __x___0;
          }
          break;
        }
        break;
      }
      *(n2p___0 + nn) = (mp_limb_t )0;
      nn += (mp_size_t )adjust;
    }
    while (1) {
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          __d1 = *(d2p___0 + (dn - 1L)) >> 32;
          __d0 = *(d2p___0 + (dn - 1L)) & ((1UL << 32) - 1UL);
          __q1 = ~ *(d2p___0 + (dn - 1L)) / __d1;
          __r1 = ~ *(d2p___0 + (dn - 1L)) - __q1 * __d1;
          __m = __q1 * __d0;
          __r1 = __r1 * (1UL << 32) | (0xffffffffffffffffUL >> 32);
          if (__r1 < __m) {
            __q1 --;
            __r1 += *(d2p___0 + (dn - 1L));
            if (__r1 >= *(d2p___0 + (dn - 1L))) {
              if (__r1 < __m) {
                __q1 --;
                __r1 += *(d2p___0 + (dn - 1L));
              }
            }
          }
          __r1 -= __m;
          __q0 = __r1 / __d1;
          __r0 = __r1 - __q0 * __d1;
          __m = __q0 * __d0;
          __r0 = __r0 * (1UL << 32) | (0xffffffffffffffffUL & ((1UL << 32) - 1UL));
          if (__r0 < __m) {
            __q0 --;
            __r0 += *(d2p___0 + (dn - 1L));
            if (__r0 >= *(d2p___0 + (dn - 1L))) {
              if (__r0 < __m) {
                __q0 --;
                __r0 += *(d2p___0 + (dn - 1L));
              }
            }
          }
          __r0 -= __m;
          _v = __q1 * (1UL << 32) | __q0;
          _dummy = __r0;
          break;
        }
        break;
      }
      _p = *(d2p___0 + (dn - 1L)) * _v;
      _p += *(d2p___0 + (dn - 2L));
      if (_p < *(d2p___0 + (dn - 2L))) {
        _v --;
        _mask = - ((mp_limb_t )(_p >= *(d2p___0 + (dn - 1L))));
        _p -= *(d2p___0 + (dn - 1L));
        _v += _mask;
        _p -= _mask & *(d2p___0 + (dn - 1L));
      }
      while (1) {
        __u = *(d2p___0 + (dn - 2L));
        __v = _v;
        __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
        __uh = (UHWtype )(__u >> 32);
        __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
        __vh = (UHWtype )(__v >> 32);
        __x0 = (UWtype )__ul * (UWtype )__vl;
        __x1 = (UWtype )__ul * (UWtype )__vh;
        __x2 = (UWtype )__uh * (UWtype )__vl;
        __x3 = (UWtype )__uh * (UWtype )__vh;
        __x1 += __x0 >> 32;
        __x1 += __x2;
        if (__x1 < __x2) {
          __x3 += 1UL << 32;
        }
        _t1 = __x3 + (__x1 >> 32);
        _t0 = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
        break;
      }
      _p += _t1;
      if (_p < _t1) {
        _v --;
        tmp___38 = __builtin_expect((long )((_p >= *(d2p___0 + (dn - 1L))) != 0),
                                    0L);
        if (tmp___38) {
          if (_p > *(d2p___0 + (dn - 1L))) {
            _v --;
          } else
          if (_t0 >= *(d2p___0 + (dn - 2L))) {
            _v --;
          }
        }
      }
      dinv.inv32 = _v;
      break;
    }
    if (! (dn >= 60L)) {
      __gmpn_sbpi1_div_qr(qp, n2p___0, nn, (mp_srcptr )d2p___0, dn, dinv.inv32);
    } else
    if (! (dn >= 200L)) {
      __gmpn_dcpi1_div_qr(qp, n2p___0, nn, (mp_srcptr )d2p___0, dn, & dinv);
    } else
    if (! (nn >= 4000L)) {
      __gmpn_dcpi1_div_qr(qp, n2p___0, nn, (mp_srcptr )d2p___0, dn, & dinv);
    } else
    if ((double )3600 * (double )dn + (double )200 * (double )nn > (double )dn * (double )nn) {
      __gmpn_dcpi1_div_qr(qp, n2p___0, nn, (mp_srcptr )d2p___0, dn, & dinv);
    } else {
      tmp___39 = __gmpn_mu_div_qr_itch(nn, dn, 0);
      itch = tmp___39;
      tmp___44 = __builtin_expect((long )(((unsigned long )itch * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___44) {
        tmp___41 = alloca((unsigned long )itch * sizeof(mp_limb_t ));
        tmp___43 = tmp___41;
      } else {
        tmp___42 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )itch * sizeof(mp_limb_t ));
        tmp___43 = tmp___42;
      }
      scratch = (mp_limb_t *)tmp___43;
      __gmpn_mu_div_qr(qp, rp, (mp_srcptr )n2p___0, nn, (mp_srcptr )d2p___0, dn, scratch);
      n2p___0 = rp;
    }
    if (cnt___0 != 0) {
      __gmpn_rshift(rp, (mp_srcptr )n2p___0, dn, (unsigned int )cnt___0);
    } else {
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (dn != 0L) {
            __n___1 = dn - 1L;
            __dst___1 = rp;
            __src___1 = (mp_srcptr )n2p___0;
            tmp___45 = __src___1;
            __src___1 ++;
            __x___1 = (mp_limb_t )*tmp___45;
            if (__n___1 != 0L) {
              while (1) {
                tmp___46 = __dst___1;
                __dst___1 ++;
                *tmp___46 = __x___1;
                tmp___47 = __src___1;
                __src___1 ++;
                __x___1 = (mp_limb_t )*tmp___47;
                __n___1 --;
                if (! __n___1) {
                  break;
                }
              }
            }
            tmp___48 = __dst___1;
            __dst___1 ++;
            *tmp___48 = __x___1;
          }
          break;
        }
        break;
      }
    }
    while (1) {
      tmp___49 = __builtin_expect((long )(((unsigned long )__tmp_marker___0 != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                  0L);
      if (tmp___49) {
        __gmp_tmp_reentrant_free(__tmp_marker___0);
      }
      break;
    }
    return;
  }
  qn = nn - dn;
  *(qp + qn) = (mp_limb_t )0;
  qn += (mp_size_t )adjust;
  if (qn == 0L) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (dn != 0L) {
          __n___2 = dn - 1L;
          __dst___2 = rp;
          __src___2 = np;
          tmp___50 = __src___2;
          __src___2 ++;
          __x___2 = (mp_limb_t )*tmp___50;
          if (__n___2 != 0L) {
            while (1) {
              tmp___51 = __dst___2;
              __dst___2 ++;
              *tmp___51 = __x___2;
              tmp___52 = __src___2;
              __src___2 ++;
              __x___2 = (mp_limb_t )*tmp___52;
              __n___2 --;
              if (! __n___2) {
                break;
              }
            }
          }
          tmp___53 = __dst___2;
          __dst___2 ++;
          *tmp___53 = __x___2;
        }
        break;
      }
      break;
    }
    while (1) {
      tmp___54 = __builtin_expect((long )(((unsigned long )__tmp_marker___0 != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                  0L);
      if (tmp___54) {
        __gmp_tmp_reentrant_free(__tmp_marker___0);
      }
      break;
    }
    return;
  }
  in = dn - qn;
  if ((*(dp + (dn - 1L)) & (unsigned long const )(1UL << 63)) == 0UL) {
    while (1) {
      __xr___1 = (UWtype )*(dp + (dn - 1L));
      __a___1 = (UWtype )56;
      while (__a___1 > 0UL) {
        if (((__xr___1 >> __a___1) & 255UL) != 0UL) {
          break;
        }
        __a___1 -= 8UL;
      }
      __a___1 ++;
      cnt___1 = (unsigned int )((65UL - __a___1) - (UWtype )__gmpn_clz_tab[__xr___1 >> __a___1]);
      break;
    }
    cnt___1 = cnt___1;
    tmp___61 = __builtin_expect((long )(((unsigned long )qn * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___61) {
      tmp___58 = alloca((unsigned long )qn * sizeof(mp_limb_t ));
      tmp___60 = tmp___58;
    } else {
      tmp___59 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )qn * sizeof(mp_limb_t ));
      tmp___60 = tmp___59;
    }
    d2p___1 = (mp_limb_t *)tmp___60;
    __gmpn_lshift(d2p___1, dp + in, qn, cnt___1);
    *(d2p___1 + 0) |= (unsigned long )(*(dp + (in - 1L)) >> (64U - cnt___1));
    tmp___66 = __builtin_expect((long )(((unsigned long )(2L * qn + 1L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___66) {
      tmp___63 = alloca((unsigned long )(2L * qn + 1L) * sizeof(mp_limb_t ));
      tmp___65 = tmp___63;
    } else {
      tmp___64 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )(2L * qn + 1L) * sizeof(mp_limb_t ));
      tmp___65 = tmp___64;
    }
    n2p___1 = (mp_limb_t *)tmp___65;
    cy___1 = __gmpn_lshift(n2p___1, (np + nn) - 2L * qn, 2L * qn, cnt___1);
    if (adjust) {
      *(n2p___1 + 2L * qn) = cy___1;
      n2p___1 ++;
    } else {
      *(n2p___1 + 0) |= (unsigned long )(*(np + ((nn - 2L * qn) - 1L)) >> (64U - cnt___1));
    }
  } else {
    cnt___1 = 0U;
    d2p___1 = (mp_ptr )dp + in;
    tmp___71 = __builtin_expect((long )(((unsigned long )(2L * qn + 1L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___71) {
      tmp___68 = alloca((unsigned long )(2L * qn + 1L) * sizeof(mp_limb_t ));
      tmp___70 = tmp___68;
    } else {
      tmp___69 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )(2L * qn + 1L) * sizeof(mp_limb_t ));
      tmp___70 = tmp___69;
    }
    n2p___1 = (mp_limb_t *)tmp___70;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (2L * qn != 0L) {
          __n___3 = 2L * qn - 1L;
          __dst___3 = n2p___1;
          __src___3 = (np + nn) - 2L * qn;
          tmp___72 = __src___3;
          __src___3 ++;
          __x___3 = (mp_limb_t )*tmp___72;
          if (__n___3 != 0L) {
            while (1) {
              tmp___73 = __dst___3;
              __dst___3 ++;
              *tmp___73 = __x___3;
              tmp___74 = __src___3;
              __src___3 ++;
              __x___3 = (mp_limb_t )*tmp___74;
              __n___3 --;
              if (! __n___3) {
                break;
              }
            }
          }
          tmp___75 = __dst___3;
          __dst___3 ++;
          *tmp___75 = __x___3;
        }
        break;
      }
      break;
    }
    if (adjust) {
      *(n2p___1 + 2L * qn) = (mp_limb_t )0;
      n2p___1 ++;
    }
  }
  if (qn == 1L) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      __d1___0 = *(d2p___1 + 0) >> 32;
      __d0___0 = *(d2p___1 + 0) & ((1UL << 32) - 1UL);
      __q1___0 = *(n2p___1 + 1) / __d1___0;
      __r1___0 = *(n2p___1 + 1) - __q1___0 * __d1___0;
      __m___0 = __q1___0 * __d0___0;
      __r1___0 = __r1___0 * (1UL << 32) | (*(n2p___1 + 0) >> 32);
      if (__r1___0 < __m___0) {
        __q1___0 --;
        __r1___0 += *(d2p___1 + 0);
        if (__r1___0 >= *(d2p___1 + 0)) {
          if (__r1___0 < __m___0) {
            __q1___0 --;
            __r1___0 += *(d2p___1 + 0);
          }
        }
      }
      __r1___0 -= __m___0;
      __q0___0 = __r1___0 / __d1___0;
      __r0___0 = __r1___0 - __q0___0 * __d1___0;
      __m___0 = __q0___0 * __d0___0;
      __r0___0 = __r0___0 * (1UL << 32) | (*(n2p___1 + 0) & ((1UL << 32) - 1UL));
      if (__r0___0 < __m___0) {
        __q0___0 --;
        __r0___0 += *(d2p___1 + 0);
        if (__r0___0 >= *(d2p___1 + 0)) {
          if (__r0___0 < __m___0) {
            __q0___0 --;
            __r0___0 += *(d2p___1 + 0);
          }
        }
      }
      __r0___0 -= __m___0;
      q0 = __q1___0 * (1UL << 32) | __q0___0;
      r0 = __r0___0;
      break;
    }
    *(n2p___1 + 0) = r0;
    *(qp + 0) = q0;
  } else
  if (qn == 2L) {
    __gmpn_divrem_2(qp, 0L, n2p___1, 4L, (mp_srcptr )d2p___1);
  } else {
    while (1) {
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          __d1___1 = *(d2p___1 + (qn - 1L)) >> 32;
          __d0___1 = *(d2p___1 + (qn - 1L)) & ((1UL << 32) - 1UL);
          __q1___1 = ~ *(d2p___1 + (qn - 1L)) / __d1___1;
          __r1___1 = ~ *(d2p___1 + (qn - 1L)) - __q1___1 * __d1___1;
          __m___1 = __q1___1 * __d0___1;
          __r1___1 = __r1___1 * (1UL << 32) | (0xffffffffffffffffUL >> 32);
          if (__r1___1 < __m___1) {
            __q1___1 --;
            __r1___1 += *(d2p___1 + (qn - 1L));
            if (__r1___1 >= *(d2p___1 + (qn - 1L))) {
              if (__r1___1 < __m___1) {
                __q1___1 --;
                __r1___1 += *(d2p___1 + (qn - 1L));
              }
            }
          }
          __r1___1 -= __m___1;
          __q0___1 = __r1___1 / __d1___1;
          __r0___1 = __r1___1 - __q0___1 * __d1___1;
          __m___1 = __q0___1 * __d0___1;
          __r0___1 = __r0___1 * (1UL << 32) | (0xffffffffffffffffUL & ((1UL << 32) - 1UL));
          if (__r0___1 < __m___1) {
            __q0___1 --;
            __r0___1 += *(d2p___1 + (qn - 1L));
            if (__r0___1 >= *(d2p___1 + (qn - 1L))) {
              if (__r0___1 < __m___1) {
                __q0___1 --;
                __r0___1 += *(d2p___1 + (qn - 1L));
              }
            }
          }
          __r0___1 -= __m___1;
          _v___0 = __q1___1 * (1UL << 32) | __q0___1;
          _dummy___0 = __r0___1;
          break;
        }
        break;
      }
      _p___0 = *(d2p___1 + (qn - 1L)) * _v___0;
      _p___0 += *(d2p___1 + (qn - 2L));
      if (_p___0 < *(d2p___1 + (qn - 2L))) {
        _v___0 --;
        _mask___0 = - ((mp_limb_t )(_p___0 >= *(d2p___1 + (qn - 1L))));
        _p___0 -= *(d2p___1 + (qn - 1L));
        _v___0 += _mask___0;
        _p___0 -= _mask___0 & *(d2p___1 + (qn - 1L));
      }
      while (1) {
        __u___0 = *(d2p___1 + (qn - 2L));
        __v___0 = _v___0;
        __ul___0 = (UHWtype )(__u___0 & ((1UL << 32) - 1UL));
        __uh___0 = (UHWtype )(__u___0 >> 32);
        __vl___0 = (UHWtype )(__v___0 & ((1UL << 32) - 1UL));
        __vh___0 = (UHWtype )(__v___0 >> 32);
        __x0___0 = (UWtype )__ul___0 * (UWtype )__vl___0;
        __x1___0 = (UWtype )__ul___0 * (UWtype )__vh___0;
        __x2___0 = (UWtype )__uh___0 * (UWtype )__vl___0;
        __x3___0 = (UWtype )__uh___0 * (UWtype )__vh___0;
        __x1___0 += __x0___0 >> 32;
        __x1___0 += __x2___0;
        if (__x1___0 < __x2___0) {
          __x3___0 += 1UL << 32;
        }
        _t1___0 = __x3___0 + (__x1___0 >> 32);
        _t0___0 = (__x1___0 << 32) + (__x0___0 & ((1UL << 32) - 1UL));
        break;
      }
      _p___0 += _t1___0;
      if (_p___0 < _t1___0) {
        _v___0 --;
        tmp___76 = __builtin_expect((long )((_p___0 >= *(d2p___1 + (qn - 1L))) != 0),
                                    0L);
        if (tmp___76) {
          if (_p___0 > *(d2p___1 + (qn - 1L))) {
            _v___0 --;
          } else
          if (_t0___0 >= *(d2p___1 + (qn - 2L))) {
            _v___0 --;
          }
        }
      }
      dinv.inv32 = _v___0;
      break;
    }
    if (! (qn >= 60L)) {
      __gmpn_sbpi1_div_qr(qp, n2p___1, 2L * qn, (mp_srcptr )d2p___1, qn, dinv.inv32);
    } else
    if (! (qn >= 2000L)) {
      __gmpn_dcpi1_div_qr(qp, n2p___1, 2L * qn, (mp_srcptr )d2p___1, qn, & dinv);
    } else {
      tmp___77 = __gmpn_mu_div_qr_itch(2L * qn, qn, 0);
      itch___0 = tmp___77;
      tmp___82 = __builtin_expect((long )(((unsigned long )itch___0 * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___82) {
        tmp___79 = alloca((unsigned long )itch___0 * sizeof(mp_limb_t ));
        tmp___81 = tmp___79;
      } else {
        tmp___80 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )itch___0 * sizeof(mp_limb_t ));
        tmp___81 = tmp___80;
      }
      scratch___0 = (mp_limb_t *)tmp___81;
      r2p = rp;
      if ((unsigned long )np == (unsigned long )r2p) {
        r2p += nn - qn;
      }
      __gmpn_mu_div_qr(qp, r2p, (mp_srcptr )n2p___1, 2L * qn, (mp_srcptr )d2p___1,
                       qn, scratch___0);
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (qn != 0L) {
            __n___4 = qn - 1L;
            __dst___4 = n2p___1;
            __src___4 = (mp_srcptr )r2p;
            tmp___83 = __src___4;
            __src___4 ++;
            __x___4 = (mp_limb_t )*tmp___83;
            if (__n___4 != 0L) {
              while (1) {
                tmp___84 = __dst___4;
                __dst___4 ++;
                *tmp___84 = __x___4;
                tmp___85 = __src___4;
                __src___4 ++;
                __x___4 = (mp_limb_t )*tmp___85;
                __n___4 --;
                if (! __n___4) {
                  break;
                }
              }
            }
            tmp___86 = __dst___4;
            __dst___4 ++;
            *tmp___86 = __x___4;
          }
          break;
        }
        break;
      }
    }
  }
  rn = qn;
  if (in - 2L < 0L) {
    dl = (mp_limb_t )0;
  } else {
    dl = (mp_limb_t )*(dp + (in - 2L));
  }
  x = (mp_limb_t )((*(dp + (in - 1L)) << cnt___1) | (unsigned long const )((dl >> 1) >> ~ cnt___1 % 64U));
  while (1) {
    __u___1 = x;
    __v___1 = *(qp + (qn - 1L));
    __ul___1 = (UHWtype )(__u___1 & ((1UL << 32) - 1UL));
    __uh___1 = (UHWtype )(__u___1 >> 32);
    __vl___1 = (UHWtype )(__v___1 & ((1UL << 32) - 1UL));
    __vh___1 = (UHWtype )(__v___1 >> 32);
    __x0___1 = (UWtype )__ul___1 * (UWtype )__vl___1;
    __x1___1 = (UWtype )__ul___1 * (UWtype )__vh___1;
    __x2___1 = (UWtype )__uh___1 * (UWtype )__vl___1;
    __x3___1 = (UWtype )__uh___1 * (UWtype )__vh___1;
    __x1___1 += __x0___1 >> 32;
    __x1___1 += __x2___1;
    if (__x1___1 < __x2___1) {
      __x3___1 += 1UL << 32;
    }
    h = __x3___1 + (__x1___1 >> 32);
    dummy = (__x1___1 << 32) + (__x0___1 & ((1UL << 32) - 1UL));
    break;
  }
  if (*(n2p___1 + (qn - 1L)) < h) {
    while (1) {
      __p = qp;
      while (1) {
        tmp___87 = __p;
        __p ++;
        tmp___88 = *tmp___87;
        (*tmp___87) --;
        if (! (tmp___88 == 0UL)) {
          break;
        }
      }
      break;
    }
    cy___2 = __gmpn_add_n(n2p___1, (mp_srcptr )n2p___1, (mp_srcptr )d2p___1, qn);
    if (cy___2) {
      *(n2p___1 + qn) = cy___2;
      rn ++;
    }
  }
  quotient_too_large = (mp_limb_t )0;
  if (cnt___1 != 0U) {
    cy1 = __gmpn_lshift(n2p___1, (mp_srcptr )n2p___1, rn, 64U - cnt___1);
    *(n2p___1 + 0) |= (unsigned long )(*(np + (in - 1L)) & (unsigned long const )(0xffffffffffffffffUL >> cnt___1));
    cy2 = __gmpn_submul_1(n2p___1, (mp_srcptr )qp, qn, (mp_limb_t )(*(dp + (in - 1L)) & (unsigned long const )(0xffffffffffffffffUL >> cnt___1)));
    if (qn != rn) {
      while (1) {
        tmp___90 = __builtin_expect((long )(! (*(n2p___1 + qn) >= cy2) != 0), 0L);
        if (tmp___90) {
          __gmp_assert_fail("tdiv_qr.c", 343, "n2p[qn] >= cy2");
        }
        break;
      }
      *(n2p___1 + qn) -= cy2;
    } else {
      *(n2p___1 + qn) = cy1 - cy2;
      quotient_too_large = (mp_limb_t )(cy1 < cy2);
      rn ++;
    }
    in --;
  }
  tmp___95 = __builtin_expect((long )(((unsigned long )dn * sizeof(mp_limb_t ) <= 32512UL) != 0),
                              1L);
  if (tmp___95) {
    tmp___92 = alloca((unsigned long )dn * sizeof(mp_limb_t ));
    tmp___94 = tmp___92;
  } else {
    tmp___93 = __gmp_tmp_reentrant_alloc(& __tmp_marker___0, (unsigned long )dn * sizeof(mp_limb_t ));
    tmp___94 = tmp___93;
  }
  tp = (mp_limb_t *)tmp___94;
  if (in < qn) {
    if (in == 0L) {
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (rn != 0L) {
            __n___5 = rn - 1L;
            __dst___5 = rp;
            __src___5 = (mp_srcptr )n2p___1;
            tmp___96 = __src___5;
            __src___5 ++;
            __x___6 = (mp_limb_t )*tmp___96;
            if (__n___5 != 0L) {
              while (1) {
                tmp___97 = __dst___5;
                __dst___5 ++;
                *tmp___97 = __x___6;
                tmp___98 = __src___5;
                __src___5 ++;
                __x___6 = (mp_limb_t )*tmp___98;
                __n___5 --;
                if (! __n___5) {
                  break;
                }
              }
            }
            tmp___99 = __dst___5;
            __dst___5 ++;
            *tmp___99 = __x___6;
          }
          break;
        }
        break;
      }
      while (1) {
        tmp___100 = __builtin_expect((long )(! (rn == dn) != 0), 0L);
        if (tmp___100) {
          __gmp_assert_fail("tdiv_qr.c", 364, "rn == dn");
        }
        break;
      }
      goto foo;
    }
    __gmpn_mul(tp, (mp_srcptr )qp, qn, dp, in);
  } else {
    __gmpn_mul(tp, dp, in, (mp_srcptr )qp, qn);
  }
  cy___1 = __gmpn_sub(n2p___1, (mp_srcptr )n2p___1, rn, (mp_srcptr )(tp + in), qn);
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      if (dn - in != 0L) {
        __n___6 = (dn - in) - 1L;
        __dst___6 = rp + in;
        __src___6 = (mp_srcptr )n2p___1;
        tmp___101 = __src___6;
        __src___6 ++;
        __x___7 = (mp_limb_t )*tmp___101;
        if (__n___6 != 0L) {
          while (1) {
            tmp___102 = __dst___6;
            __dst___6 ++;
            *tmp___102 = __x___7;
            tmp___103 = __src___6;
            __src___6 ++;
            __x___7 = (mp_limb_t )*tmp___103;
            __n___6 --;
            if (! __n___6) {
              break;
            }
          }
        }
        tmp___104 = __dst___6;
        __dst___6 ++;
        *tmp___104 = __x___7;
      }
      break;
    }
    break;
  }
  quotient_too_large |= cy___1;
  cy___1 = __gmpn_sub_n(rp, np, (mp_srcptr )tp, in);
  cy___1 = __gmpn_sub_1(rp + in, (mp_srcptr )(rp + in), rn, cy___1);
  quotient_too_large |= cy___1;
  foo:
  if (quotient_too_large) {
    while (1) {
      __p___0 = qp;
      while (1) {
        tmp___105 = __p___0;
        __p___0 ++;
        tmp___106 = *tmp___105;
        (*tmp___105) --;
        if (! (tmp___106 == 0UL)) {
          break;
        }
      }
      break;
    }
    __gmpn_add_n(rp, (mp_srcptr )rp, dp, dn);
  }
  while (1) {
    tmp___108 = __builtin_expect((long )(((unsigned long )__tmp_marker___0 != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                 0L);
    if (tmp___108) {
      __gmp_tmp_reentrant_free(__tmp_marker___0);
    }
    break;
  }
  return;
  }
}
}
#pragma merger("0","./tdiv_r_2exp.i","")
void __gmpz_tdiv_r_2exp(mpz_ptr res , mpz_srcptr in , mp_bitcnt_t cnt )
{
  mp_size_t in_size ;
  int tmp ;
  mp_size_t res_size ;
  mp_size_t limb_cnt ;
  mp_srcptr in_ptr ;
  mp_limb_t x ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___3 ;
  mp_ptr tmp___4 ;
  mp_srcptr tmp___5 ;
  mp_ptr tmp___6 ;

  {
  if (in->_mp_size >= 0) {
    tmp = in->_mp_size;
  } else {
    tmp = - in->_mp_size;
  }
  in_size = (mp_size_t )tmp;
  limb_cnt = (mp_size_t )(cnt / 64UL);
  in_ptr = (mp_srcptr )in->_mp_d;
  if (in_size > limb_cnt) {
    x = (mp_limb_t )(*(in_ptr + limb_cnt) & (unsigned long const )((1UL << cnt % 64UL) - 1UL));
    if (x != 0UL) {
      res_size = limb_cnt + 1L;
      tmp___0 = __builtin_expect((long )((res_size > (mp_size_t )res->_mp_alloc) != 0),
                                 0L);
      if (tmp___0) {
        __gmpz_realloc(res, res_size);
      }
      *(res->_mp_d + limb_cnt) = x;
    } else {
      res_size = limb_cnt;
      while (1) {
        while (res_size > 0L) {
          if (*(in_ptr + (res_size - 1L)) != 0UL) {
            break;
          }
          res_size --;
        }
        break;
      }
      tmp___1 = __builtin_expect((long )((res_size > (mp_size_t )res->_mp_alloc) != 0),
                                 0L);
      if (tmp___1) {
        __gmpz_realloc(res, res_size);
      }
      limb_cnt = res_size;
    }
  } else {
    res_size = in_size;
    tmp___2 = __builtin_expect((long )((res_size > (mp_size_t )res->_mp_alloc) != 0),
                               0L);
    if (tmp___2) {
      __gmpz_realloc(res, res_size);
    }
    limb_cnt = res_size;
  }
  if ((unsigned long )res != (unsigned long )in) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (limb_cnt != 0L) {
          __n = limb_cnt - 1L;
          __dst = res->_mp_d;
          __src = (mp_srcptr )in->_mp_d;
          tmp___3 = __src;
          __src ++;
          __x = (mp_limb_t )*tmp___3;
          if (__n != 0L) {
            while (1) {
              tmp___4 = __dst;
              __dst ++;
              *tmp___4 = __x;
              tmp___5 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___5;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___6 = __dst;
          __dst ++;
          *tmp___6 = __x;
        }
        break;
      }
      break;
    }
  }
  if (in->_mp_size >= 0) {
    res->_mp_size = (int )res_size;
  } else {
    res->_mp_size = (int )(- res_size);
  }
  return;
}
}
#pragma merger("0","./tdiv_r.i","")
void __gmpz_tdiv_r(mpz_ptr rem , mpz_srcptr num , mpz_srcptr den )
{
  mp_size_t ql ;
  mp_size_t ns ;
  mp_size_t ds ;
  mp_size_t nl ;
  mp_size_t dl ;
  mp_ptr np ;
  mp_ptr dp ;
  mp_ptr qp ;
  mp_ptr rp ;
  struct tmp_reentrant_t *__tmp_marker ;
  long tmp ;
  void *tmp___1 ;
  long tmp___2 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___3 ;
  mp_ptr tmp___4 ;
  mp_srcptr tmp___5 ;
  mp_ptr tmp___6 ;
  void *tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  long tmp___11 ;
  mp_ptr tp ;
  void *tmp___13 ;
  void *tmp___14 ;
  void *tmp___15 ;
  long tmp___16 ;
  mp_size_t __n___0 ;
  mp_ptr __dst___0 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___0 ;
  mp_srcptr tmp___17 ;
  mp_ptr tmp___18 ;
  mp_srcptr tmp___19 ;
  mp_ptr tmp___20 ;
  mp_ptr tp___0 ;
  void *tmp___22 ;
  void *tmp___23 ;
  void *tmp___24 ;
  long tmp___25 ;
  mp_size_t __n___1 ;
  mp_ptr __dst___1 ;
  mp_srcptr __src___1 ;
  mp_limb_t __x___1 ;
  mp_srcptr tmp___26 ;
  mp_ptr tmp___27 ;
  mp_srcptr tmp___28 ;
  mp_ptr tmp___29 ;
  long tmp___30 ;

  {
  ns = (mp_size_t )num->_mp_size;
  ds = (mp_size_t )den->_mp_size;
  if (ns >= 0L) {
    nl = ns;
  } else {
    nl = - ns;
  }
  if (ds >= 0L) {
    dl = ds;
  } else {
    dl = - ds;
  }
  ql = (nl - dl) + 1L;
  tmp = __builtin_expect((long )((dl == 0L) != 0), 0L);
  if (tmp) {
    __gmp_divide_by_zero();
  }
  tmp___2 = __builtin_expect((long )((dl > (mp_size_t )rem->_mp_alloc) != 0), 0L);
  if (tmp___2) {
    tmp___1 = __gmpz_realloc(rem, dl);
    rp = (mp_ptr )tmp___1;
  } else {
    rp = rem->_mp_d;
  }
  if (ql <= 0L) {
    if ((unsigned long )num != (unsigned long )rem) {
      np = (mp_ptr )num->_mp_d;
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (nl != 0L) {
            __n = nl - 1L;
            __dst = rp;
            __src = (mp_srcptr )np;
            tmp___3 = __src;
            __src ++;
            __x = (mp_limb_t )*tmp___3;
            if (__n != 0L) {
              while (1) {
                tmp___4 = __dst;
                __dst ++;
                *tmp___4 = __x;
                tmp___5 = __src;
                __src ++;
                __x = (mp_limb_t )*tmp___5;
                __n --;
                if (! __n) {
                  break;
                }
              }
            }
            tmp___6 = __dst;
            __dst ++;
            *tmp___6 = __x;
          }
          break;
        }
        break;
      }
      rem->_mp_size = (int )num->_mp_size;
    }
    return;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  tmp___11 = __builtin_expect((long )(((unsigned long )ql * sizeof(mp_limb_t ) <= 32512UL) != 0),
                              1L);
  if (tmp___11) {
    tmp___8 = alloca((unsigned long )ql * sizeof(mp_limb_t ));
    tmp___10 = tmp___8;
  } else {
    tmp___9 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )ql * sizeof(mp_limb_t ));
    tmp___10 = tmp___9;
  }
  qp = (mp_limb_t *)tmp___10;
  np = (mp_ptr )num->_mp_d;
  dp = (mp_ptr )den->_mp_d;
  if ((unsigned long )dp == (unsigned long )rp) {
    tmp___16 = __builtin_expect((long )(((unsigned long )dl * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___16) {
      tmp___13 = alloca((unsigned long )dl * sizeof(mp_limb_t ));
      tmp___15 = tmp___13;
    } else {
      tmp___14 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )dl * sizeof(mp_limb_t ));
      tmp___15 = tmp___14;
    }
    tp = (mp_limb_t *)tmp___15;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (dl != 0L) {
          __n___0 = dl - 1L;
          __dst___0 = tp;
          __src___0 = (mp_srcptr )dp;
          tmp___17 = __src___0;
          __src___0 ++;
          __x___0 = (mp_limb_t )*tmp___17;
          if (__n___0 != 0L) {
            while (1) {
              tmp___18 = __dst___0;
              __dst___0 ++;
              *tmp___18 = __x___0;
              tmp___19 = __src___0;
              __src___0 ++;
              __x___0 = (mp_limb_t )*tmp___19;
              __n___0 --;
              if (! __n___0) {
                break;
              }
            }
          }
          tmp___20 = __dst___0;
          __dst___0 ++;
          *tmp___20 = __x___0;
        }
        break;
      }
      break;
    }
    dp = tp;
  }
  if ((unsigned long )np == (unsigned long )rp) {
    tmp___25 = __builtin_expect((long )(((unsigned long )nl * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___25) {
      tmp___22 = alloca((unsigned long )nl * sizeof(mp_limb_t ));
      tmp___24 = tmp___22;
    } else {
      tmp___23 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )nl * sizeof(mp_limb_t ));
      tmp___24 = tmp___23;
    }
    tp___0 = (mp_limb_t *)tmp___24;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (nl != 0L) {
          __n___1 = nl - 1L;
          __dst___1 = tp___0;
          __src___1 = (mp_srcptr )np;
          tmp___26 = __src___1;
          __src___1 ++;
          __x___1 = (mp_limb_t )*tmp___26;
          if (__n___1 != 0L) {
            while (1) {
              tmp___27 = __dst___1;
              __dst___1 ++;
              *tmp___27 = __x___1;
              tmp___28 = __src___1;
              __src___1 ++;
              __x___1 = (mp_limb_t )*tmp___28;
              __n___1 --;
              if (! __n___1) {
                break;
              }
            }
          }
          tmp___29 = __dst___1;
          __dst___1 ++;
          *tmp___29 = __x___1;
        }
        break;
      }
      break;
    }
    np = tp___0;
  }
  __gmpn_tdiv_qr(qp, rp, 0L, (mp_srcptr )np, nl, (mp_srcptr )dp, dl);
  while (1) {
    while (dl > 0L) {
      if (*(rp + (dl - 1L)) != 0UL) {
        break;
      }
      dl --;
    }
    break;
  }
  if (ns >= 0L) {
    rem->_mp_size = (int )dl;
  } else {
    rem->_mp_size = (int )(- dl);
  }
  while (1) {
    tmp___30 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___30) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
#pragma merger("0","./t-lucnum_ui.i","")
extern __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atoi)(char const *__nptr ) __attribute__((__pure__)) ;
extern __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
int __gmpz_cmp(mpz_srcptr u , mpz_srcptr v ) __attribute__((__pure__)) ;
int mp_trace_base ;
void mpz_trace(char const *name , mpz_srcptr z ) ;
void check_sequence(int argc , char **argv )
{
  unsigned long n___0 ;
  unsigned long limit ;
  mpz_t want_ln ;
  mpz_t want_ln1 ;
  mpz_t got_ln ;
  mpz_t got_ln1 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  long tmp___5 ;
  int tmp___8 ;
  int tmp___9 ;
  long tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  long tmp___13 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  long tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  long tmp___23 ;
  int tmp___26 ;

  {
  limit = 320UL;
  if (argc > 1) {
    if ((int )*(*(argv + 1) + 0) == 120) {
      limit = 0xffffffffffffffffUL;
    } else {
      goto _L;
    }
  } else
  _L:
  if (argc > 1) {
    tmp = atoi((char const *)*(argv + 1));
    limit = (unsigned long )tmp;
  }
  __gmpz_init_set_si(want_ln1, -1L);
  __gmpz_init_set_ui(want_ln, 2UL);
  __gmpz_init(got_ln);
  __gmpz_init(got_ln1);
  n___0 = 0UL;
  while (n___0 < limit) {
    __gmpz_lucnum2_ui(got_ln, got_ln1, n___0);
    while (1) {
      while (1) {
        if (got_ln[0]._mp_size == 0) {
          tmp___1 = 0;
        } else {
          if (got_ln[0]._mp_size >= 0) {
            tmp___0 = got_ln[0]._mp_size;
          } else {
            tmp___0 = - got_ln[0]._mp_size;
          }
          if (*(got_ln[0]._mp_d + (tmp___0 - 1)) != 0UL) {
            tmp___1 = 0;
          } else {
            tmp___1 = 1;
          }
        }
        tmp___2 = __builtin_expect((long )(tmp___1 != 0), 0L);
        if (tmp___2) {
          __gmp_assert_fail("t-lucnum_ui.c", 55, "((got_ln)->_mp_size) == 0 || ((got_ln)->_mp_d)[((((got_ln)->_mp_size)) >= 0 ? (((got_ln)->_mp_size)) : -(((got_ln)->_mp_size))) - 1] != 0");
        }
        break;
      }
      while (1) {
        if (got_ln[0]._mp_size >= 0) {
          tmp___3 = got_ln[0]._mp_size;
        } else {
          tmp___3 = - got_ln[0]._mp_size;
        }
        if (got_ln[0]._mp_alloc >= tmp___3) {
          tmp___4 = 0;
        } else {
          tmp___4 = 1;
        }
        tmp___5 = __builtin_expect((long )(tmp___4 != 0), 0L);
        if (tmp___5) {
          __gmp_assert_fail("t-lucnum_ui.c", 55, "((got_ln)->_mp_alloc) >= ((((got_ln)->_mp_size)) >= 0 ? (((got_ln)->_mp_size)) : -(((got_ln)->_mp_size)))");
        }
        break;
      }
      while (1) {
        break;
      }
      break;
    }
    while (1) {
      while (1) {
        if (got_ln1[0]._mp_size == 0) {
          tmp___9 = 0;
        } else {
          if (got_ln1[0]._mp_size >= 0) {
            tmp___8 = got_ln1[0]._mp_size;
          } else {
            tmp___8 = - got_ln1[0]._mp_size;
          }
          if (*(got_ln1[0]._mp_d + (tmp___8 - 1)) != 0UL) {
            tmp___9 = 0;
          } else {
            tmp___9 = 1;
          }
        }
        tmp___10 = __builtin_expect((long )(tmp___9 != 0), 0L);
        if (tmp___10) {
          __gmp_assert_fail("t-lucnum_ui.c", 56, "((got_ln1)->_mp_size) == 0 || ((got_ln1)->_mp_d)[((((got_ln1)->_mp_size)) >= 0 ? (((got_ln1)->_mp_size)) : -(((got_ln1)->_mp_size))) - 1] != 0");
        }
        break;
      }
      while (1) {
        if (got_ln1[0]._mp_size >= 0) {
          tmp___11 = got_ln1[0]._mp_size;
        } else {
          tmp___11 = - got_ln1[0]._mp_size;
        }
        if (got_ln1[0]._mp_alloc >= tmp___11) {
          tmp___12 = 0;
        } else {
          tmp___12 = 1;
        }
        tmp___13 = __builtin_expect((long )(tmp___12 != 0), 0L);
        if (tmp___13) {
          __gmp_assert_fail("t-lucnum_ui.c", 56, "((got_ln1)->_mp_alloc) >= ((((got_ln1)->_mp_size)) >= 0 ? (((got_ln1)->_mp_size)) : -(((got_ln1)->_mp_size)))");
        }
        break;
      }
      while (1) {
        break;
      }
      break;
    }
    tmp___16 = __gmpz_cmp((mpz_srcptr )(got_ln), (mpz_srcptr )(want_ln));
    if (tmp___16 != 0) {
      goto _L___0;
    } else {
      tmp___17 = __gmpz_cmp((mpz_srcptr )(got_ln1), (mpz_srcptr )(want_ln1));
      if (tmp___17 != 0) {
        _L___0:
        printf((char const * __restrict )"mpz_lucnum2_ui(%lu) wrong\n", n___0);
        mpz_trace("want ln ", (mpz_srcptr )(want_ln));
        mpz_trace("got  ln ", (mpz_srcptr )(got_ln));
        mpz_trace("want ln1", (mpz_srcptr )(want_ln1));
        mpz_trace("got  ln1", (mpz_srcptr )(got_ln1));
        abort();
      }
    }
    __gmpz_lucnum_ui(got_ln, n___0);
    while (1) {
      while (1) {
        if (got_ln[0]._mp_size == 0) {
          tmp___19 = 0;
        } else {
          if (got_ln[0]._mp_size >= 0) {
            tmp___18 = got_ln[0]._mp_size;
          } else {
            tmp___18 = - got_ln[0]._mp_size;
          }
          if (*(got_ln[0]._mp_d + (tmp___18 - 1)) != 0UL) {
            tmp___19 = 0;
          } else {
            tmp___19 = 1;
          }
        }
        tmp___20 = __builtin_expect((long )(tmp___19 != 0), 0L);
        if (tmp___20) {
          __gmp_assert_fail("t-lucnum_ui.c", 68, "((got_ln)->_mp_size) == 0 || ((got_ln)->_mp_d)[((((got_ln)->_mp_size)) >= 0 ? (((got_ln)->_mp_size)) : -(((got_ln)->_mp_size))) - 1] != 0");
        }
        break;
      }
      while (1) {
        if (got_ln[0]._mp_size >= 0) {
          tmp___21 = got_ln[0]._mp_size;
        } else {
          tmp___21 = - got_ln[0]._mp_size;
        }
        if (got_ln[0]._mp_alloc >= tmp___21) {
          tmp___22 = 0;
        } else {
          tmp___22 = 1;
        }
        tmp___23 = __builtin_expect((long )(tmp___22 != 0), 0L);
        if (tmp___23) {
          __gmp_assert_fail("t-lucnum_ui.c", 68, "((got_ln)->_mp_alloc) >= ((((got_ln)->_mp_size)) >= 0 ? (((got_ln)->_mp_size)) : -(((got_ln)->_mp_size)))");
        }
        break;
      }
      while (1) {
        break;
      }
      break;
    }
    tmp___26 = __gmpz_cmp((mpz_srcptr )(got_ln), (mpz_srcptr )(want_ln));
    if (tmp___26 != 0) {
      printf((char const * __restrict )"mpz_lucnum_ui(%lu) wrong\n", n___0);
      mpz_trace("want ln", (mpz_srcptr )(want_ln));
      mpz_trace("got  ln", (mpz_srcptr )(got_ln));
      abort();
    }
    __gmpz_add(want_ln1, (mpz_srcptr )(want_ln1), (mpz_srcptr )(want_ln));
    __gmpz_swap(want_ln1, want_ln);
    n___0 ++;
  }
  __gmpz_clear(want_ln);
  __gmpz_clear(want_ln1);
  __gmpz_clear(got_ln);
  __gmpz_clear(got_ln1);
  return;
}
}
int main(int argc , char **argv )
{


  {
  tests_start();
  mp_trace_base = -16;
  check_sequence(argc, argv);
  tests_end();
  exit(0);
}
}
#pragma merger("0","./toom22_mul.i","")
void __gmpn_toom22_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  int __gmpn_cpuvec_initialized ;
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  int vm1_neg ;
  mp_limb_t cy ;
  mp_limb_t cy2 ;
  mp_ptr asm1 ;
  mp_ptr bsm1 ;
  int tmp ;
  mp_limb_t tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  mp_limb_t tmp___6 ;
  mp_limb_t tmp___7 ;
  mp_limb_t tmp___8 ;
  mp_limb_t tmp___9 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_ptr __p___1 ;
  mp_ptr tmp___12 ;
  mp_limb_t tmp___13 ;
  long tmp___15 ;

  {
  __gmpn_cpuvec_initialized = 1;
  s = an >> 1;
  n___0 = an - s;
  t = bn - n___0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  asm1 = pp;
  bsm1 = pp + n___0;
  vm1_neg = 0;
  if (s == n___0) {
    tmp = __gmpn_cmp(ap, ap + n___0, n___0);
    if (tmp < 0) {
      __gmpn_sub_n(asm1, ap + n___0, ap, n___0);
      vm1_neg = 1;
    } else {
      __gmpn_sub_n(asm1, ap, ap + n___0, n___0);
    }
  } else
  if (*(ap + s) == 0UL) {
    tmp___1 = __gmpn_cmp(ap, ap + n___0, s);
    if (tmp___1 < 0) {
      __gmpn_sub_n(asm1, ap + n___0, ap, s);
      *(asm1 + s) = (mp_limb_t )0;
      vm1_neg = 1;
    } else {
      tmp___0 = __gmpn_sub_n(asm1, ap, ap + n___0, s);
      *(asm1 + s) = (mp_limb_t )(*(ap + s) - (mp_limb_t const )tmp___0);
    }
  } else {
    tmp___0 = __gmpn_sub_n(asm1, ap, ap + n___0, s);
    *(asm1 + s) = (mp_limb_t )(*(ap + s) - (mp_limb_t const )tmp___0);
  }
  if (t == n___0) {
    tmp___2 = __gmpn_cmp(bp, bp + n___0, n___0);
    if (tmp___2 < 0) {
      __gmpn_sub_n(bsm1, bp + n___0, bp, n___0);
      vm1_neg ^= 1;
    } else {
      __gmpn_sub_n(bsm1, bp, bp + n___0, n___0);
    }
  } else {
    tmp___4 = __gmpn_zero_p(bp + t, n___0 - t);
    if (tmp___4) {
      tmp___5 = __gmpn_cmp(bp, bp + n___0, t);
      if (tmp___5 < 0) {
        __gmpn_sub_n(bsm1, bp + n___0, bp, t);
        while (1) {
          while (1) {
            break;
          }
          if (n___0 - t != 0L) {
            while (1) {
              __dst = bsm1 + t;
              __n = n___0 - t;
              while (1) {
                break;
              }
              while (1) {
                tmp___3 = __dst;
                __dst ++;
                *tmp___3 = (mp_limb_t )0L;
                __n --;
                if (! __n) {
                  break;
                }
              }
              break;
            }
          }
          break;
        }
        vm1_neg ^= 1;
      } else {
        __gmpn_sub(bsm1, bp, n___0, bp + n___0, t);
      }
    } else {
      __gmpn_sub(bsm1, bp, n___0, bp + n___0, t);
    }
  }
  while (1) {
    if (! (n___0 >= 30L)) {
      __gmpn_mul_basecase(scratch, (mp_srcptr )asm1, n___0, (mp_srcptr )bsm1, n___0);
    } else {
      __gmpn_toom22_mul(scratch, (mp_srcptr )asm1, n___0, (mp_srcptr )bsm1, n___0,
                        scratch + 2L * n___0);
    }
    break;
  }
  if (s > t) {
    while (1) {
      if (! (t >= 30L)) {
        __gmpn_mul_basecase(pp + 2L * n___0, ap + n___0, s, bp + n___0, t);
      } else
      if (4L * s < 5L * t) {
        __gmpn_toom22_mul(pp + 2L * n___0, ap + n___0, s, bp + n___0, t, scratch + 2L * n___0);
      } else {
        __gmpn_toom32_mul(pp + 2L * n___0, ap + n___0, s, bp + n___0, t, scratch + 2L * n___0);
      }
      break;
    }
  } else {
    while (1) {
      if (! (s >= 30L)) {
        __gmpn_mul_basecase(pp + 2L * n___0, ap + n___0, s, bp + n___0, s);
      } else {
        __gmpn_toom22_mul(pp + 2L * n___0, ap + n___0, s, bp + n___0, s, scratch + 2L * n___0);
      }
      break;
    }
  }
  while (1) {
    if (! (n___0 >= 30L)) {
      __gmpn_mul_basecase(pp, ap, n___0, bp, n___0);
    } else {
      __gmpn_toom22_mul(pp, ap, n___0, bp, n___0, scratch + 2L * n___0);
    }
    break;
  }
  cy = __gmpn_add_n(pp + 2L * n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )(pp + 2L * n___0),
                    n___0);
  tmp___6 = __gmpn_add_n(pp + n___0, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )pp,
                         n___0);
  cy2 = cy + tmp___6;
  tmp___7 = __gmpn_add(pp + 2L * n___0, (mp_srcptr )(pp + 2L * n___0), n___0, (mp_srcptr )((pp + 2L * n___0) + n___0),
                       (s + t) - n___0);
  cy += tmp___7;
  if (vm1_neg) {
    tmp___8 = __gmpn_add_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )scratch,
                           2L * n___0);
    cy += tmp___8;
  } else {
    tmp___9 = __gmpn_sub_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )scratch,
                           2L * n___0);
    cy -= tmp___9;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    __p = pp + 2L * n___0;
    __x = *__p + cy2;
    *__p = __x;
    if (__x < cy2) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___15 = __builtin_expect((long )((cy <= 2UL) != 0), 1L);
  if (tmp___15) {
    while (1) {
      __p___0 = pp + 3L * n___0;
      __x___0 = *__p___0 + cy;
      *__p___0 = __x___0;
      if (__x___0 < cy) {
        while (1) {
          __p___0 ++;
          (*__p___0) ++;
          if (! (*__p___0 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  } else {
    while (1) {
      __p___1 = pp + 3L * n___0;
      while (1) {
        tmp___12 = __p___1;
        __p___1 ++;
        tmp___13 = *tmp___12;
        (*tmp___12) --;
        if (! (tmp___13 == 0UL)) {
          break;
        }
      }
      break;
    }
  }
  return;
}
}
#pragma merger("0","./toom2_sqr.i","")
void __gmpn_toom2_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch )
{
  int __gmpn_cpuvec_initialized ;
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_limb_t cy ;
  mp_limb_t cy2 ;
  mp_ptr asm1 ;
  int tmp ;
  mp_limb_t tmp___0 ;
  int tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;
  mp_limb_t tmp___4 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_ptr __p___1 ;
  mp_ptr tmp___7 ;
  mp_limb_t tmp___8 ;
  long tmp___10 ;

  {
  __gmpn_cpuvec_initialized = 1;
  s = an >> 1;
  n___0 = an - s;
  while (1) {
    break;
  }
  asm1 = pp;
  if (s == n___0) {
    tmp = __gmpn_cmp(ap, ap + n___0, n___0);
    if (tmp < 0) {
      __gmpn_sub_n(asm1, ap + n___0, ap, n___0);
    } else {
      __gmpn_sub_n(asm1, ap, ap + n___0, n___0);
    }
  } else
  if (*(ap + s) == 0UL) {
    tmp___1 = __gmpn_cmp(ap, ap + n___0, s);
    if (tmp___1 < 0) {
      __gmpn_sub_n(asm1, ap + n___0, ap, s);
      *(asm1 + s) = (mp_limb_t )0;
    } else {
      tmp___0 = __gmpn_sub_n(asm1, ap, ap + n___0, s);
      *(asm1 + s) = (mp_limb_t )(*(ap + s) - (mp_limb_t const )tmp___0);
    }
  } else {
    tmp___0 = __gmpn_sub_n(asm1, ap, ap + n___0, s);
    *(asm1 + s) = (mp_limb_t )(*(ap + s) - (mp_limb_t const )tmp___0);
  }
  while (1) {
    if (! (n___0 >= 50L)) {
      __gmpn_sqr_basecase(scratch, (mp_srcptr )asm1, n___0);
    } else {
      __gmpn_toom2_sqr(scratch, (mp_srcptr )asm1, n___0, scratch + 2L * n___0);
    }
    break;
  }
  while (1) {
    if (! (s >= 50L)) {
      __gmpn_sqr_basecase(pp + 2L * n___0, ap + n___0, s);
    } else {
      __gmpn_toom2_sqr(pp + 2L * n___0, ap + n___0, s, scratch + 2L * n___0);
    }
    break;
  }
  while (1) {
    if (! (n___0 >= 50L)) {
      __gmpn_sqr_basecase(pp, ap, n___0);
    } else {
      __gmpn_toom2_sqr(pp, ap, n___0, scratch + 2L * n___0);
    }
    break;
  }
  cy = __gmpn_add_n(pp + 2L * n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )(pp + 2L * n___0),
                    n___0);
  tmp___2 = __gmpn_add_n(pp + n___0, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )pp,
                         n___0);
  cy2 = cy + tmp___2;
  tmp___3 = __gmpn_add(pp + 2L * n___0, (mp_srcptr )(pp + 2L * n___0), n___0, (mp_srcptr )((pp + 2L * n___0) + n___0),
                       (s + s) - n___0);
  cy += tmp___3;
  tmp___4 = __gmpn_sub_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )scratch,
                         2L * n___0);
  cy -= tmp___4;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    __p = pp + 2L * n___0;
    __x = *__p + cy2;
    *__p = __x;
    if (__x < cy2) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___10 = __builtin_expect((long )((cy <= 2UL) != 0), 1L);
  if (tmp___10) {
    while (1) {
      __p___0 = pp + 3L * n___0;
      __x___0 = *__p___0 + cy;
      *__p___0 = __x___0;
      if (__x___0 < cy) {
        while (1) {
          __p___0 ++;
          (*__p___0) ++;
          if (! (*__p___0 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  } else {
    while (1) {
      __p___1 = pp + 3L * n___0;
      while (1) {
        tmp___7 = __p___1;
        __p___1 ++;
        tmp___8 = *tmp___7;
        (*tmp___7) --;
        if (! (tmp___8 == 0UL)) {
          break;
        }
      }
      break;
    }
  }
  return;
}
}
#pragma merger("0","./toom32_mul.i","")
void __gmpn_toom32_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  int vm1_neg ;
  mp_limb_t cy ;
  mp_limb_signed_t hi ;
  mp_limb_t ap1_hi ;
  mp_limb_t bp1_hi ;
  size_t tmp ;
  mp_limb_t tmp___0 ;
  int tmp___1 ;
  mp_limb_t tmp___2 ;
  int tmp___3 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  mp_limb_t tmp___7 ;
  mp_limb_t tmp___8 ;
  mp_limb_t tmp___9 ;
  mp_limb_t tmp___10 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___12 ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t tmp___14 ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  mp_limb_t tmp___17 ;
  mp_limb_t tmp___18 ;
  mp_limb_t tmp___19 ;
  mp_limb_t tmp___20 ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  mp_limb_t tmp___23 ;
  mp_limb_t __x___3 ;
  mp_ptr __p___3 ;
  long tmp___25 ;

  {
  while (1) {
    break;
  }
  if (2L * an >= 3L * bn) {
    tmp = (size_t )(an - 1L) / 3UL;
  } else {
    tmp = (size_t )((bn - 1L) >> 1);
  }
  n___0 = (mp_size_t )(1UL + tmp);
  s = an - 2L * n___0;
  t = bn - n___0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  ap1_hi = __gmpn_add(pp, ap, n___0, ap + 2L * n___0, s);
  if (ap1_hi == 0UL) {
    tmp___1 = __gmpn_cmp((mp_srcptr )pp, ap + n___0, n___0);
    if (tmp___1 < 0) {
      __gmpn_sub_n(pp + 2L * n___0, ap + n___0, (mp_srcptr )pp, n___0);
      hi = (mp_limb_signed_t )0;
      vm1_neg = 1;
    } else {
      tmp___0 = __gmpn_sub_n(pp + 2L * n___0, (mp_srcptr )pp, ap + n___0, n___0);
      hi = (mp_limb_signed_t )(ap1_hi - tmp___0);
      vm1_neg = 0;
    }
  } else {
    tmp___0 = __gmpn_sub_n(pp + 2L * n___0, (mp_srcptr )pp, ap + n___0, n___0);
    hi = (mp_limb_signed_t )(ap1_hi - tmp___0);
    vm1_neg = 0;
  }
  tmp___2 = __gmpn_add_n(pp, (mp_srcptr )pp, ap + n___0, n___0);
  ap1_hi += tmp___2;
  if (t == n___0) {
    bp1_hi = __gmpn_add_n(pp + n___0, bp, bp + n___0, n___0);
    tmp___3 = __gmpn_cmp(bp, bp + n___0, n___0);
    if (tmp___3 < 0) {
      __gmpn_sub_n(pp + 3L * n___0, bp + n___0, bp, n___0);
      vm1_neg ^= 1;
    } else {
      __gmpn_sub_n(pp + 3L * n___0, bp, bp + n___0, n___0);
    }
  } else {
    bp1_hi = __gmpn_add(pp + n___0, bp, n___0, bp + n___0, t);
    tmp___5 = __gmpn_zero_p(bp + t, n___0 - t);
    if (tmp___5) {
      tmp___6 = __gmpn_cmp(bp, bp + n___0, t);
      if (tmp___6 < 0) {
        __gmpn_sub_n(pp + 3L * n___0, bp + n___0, bp, t);
        while (1) {
          while (1) {
            break;
          }
          if (n___0 - t != 0L) {
            while (1) {
              __dst = (pp + 3L * n___0) + t;
              __n = n___0 - t;
              while (1) {
                break;
              }
              while (1) {
                tmp___4 = __dst;
                __dst ++;
                *tmp___4 = (mp_limb_t )0L;
                __n --;
                if (! __n) {
                  break;
                }
              }
              break;
            }
          }
          break;
        }
        vm1_neg ^= 1;
      } else {
        __gmpn_sub(pp + 3L * n___0, bp, n___0, bp + n___0, t);
      }
    } else {
      __gmpn_sub(pp + 3L * n___0, bp, n___0, bp + n___0, t);
    }
  }
  while (1) {
    __gmpn_mul_n(scratch, (mp_srcptr )pp, (mp_srcptr )(pp + n___0), n___0);
    break;
  }
  if (ap1_hi == 1UL) {
    tmp___7 = __gmpn_add_n(scratch + n___0, (mp_srcptr )(scratch + n___0), (mp_srcptr )(pp + n___0),
                           n___0);
    cy = bp1_hi + tmp___7;
  } else
  if (ap1_hi == 2UL) {
    tmp___8 = __gmpn_addmul_1(scratch + n___0, (mp_srcptr )(pp + n___0), n___0, (mp_limb_t )2L);
    cy = 2UL * bp1_hi + tmp___8;
  } else {
    cy = (mp_limb_t )0;
  }
  if (bp1_hi != 0UL) {
    tmp___9 = __gmpn_add_n(scratch + n___0, (mp_srcptr )(scratch + n___0), (mp_srcptr )pp,
                           n___0);
    cy += tmp___9;
  }
  *(scratch + 2L * n___0) = cy;
  while (1) {
    __gmpn_mul_n(pp, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )(pp + 3L * n___0),
                 n___0);
    break;
  }
  if (hi) {
    tmp___10 = __gmpn_add_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )(pp + 3L * n___0),
                            n___0);
    hi = (mp_limb_signed_t )tmp___10;
  }
  *(pp + 2L * n___0) = (mp_limb_t )hi;
  if (vm1_neg) {
    __gmpn_sub_n(scratch, (mp_srcptr )scratch, (mp_srcptr )pp, 2L * n___0 + 1L);
    __gmpn_rshift(scratch, (mp_srcptr )scratch, 2L * n___0 + 1L, 1U);
  } else {
    __gmpn_add_n(scratch, (mp_srcptr )scratch, (mp_srcptr )pp, 2L * n___0 + 1L);
    __gmpn_rshift(scratch, (mp_srcptr )scratch, 2L * n___0 + 1L, 1U);
  }
  hi = (mp_limb_signed_t )*(pp + 2L * n___0);
  cy = __gmpn_add_n(pp + 2L * n___0, (mp_srcptr )scratch, (mp_srcptr )(scratch + n___0),
                    n___0);
  while (1) {
    __p = scratch + n___0;
    __x = *__p + (cy + *(scratch + 2L * n___0));
    *__p = __x;
    if (__x < cy + *(scratch + 2L * n___0)) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  if (vm1_neg) {
    cy = __gmpn_add_n(scratch, (mp_srcptr )scratch, (mp_srcptr )pp, n___0);
    tmp___12 = mpn_add_nc(pp + 2L * n___0, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )(pp + n___0),
                          n___0, cy);
    hi = (mp_limb_signed_t )((mp_limb_t )hi + tmp___12);
    while (1) {
      __p___0 = scratch + n___0;
      __x___0 = *__p___0 + (mp_limb_t )hi;
      *__p___0 = __x___0;
      if (__x___0 < (mp_limb_t )hi) {
        while (1) {
          __p___0 ++;
          (*__p___0) ++;
          if (! (*__p___0 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  } else {
    cy = __gmpn_sub_n(scratch, (mp_srcptr )scratch, (mp_srcptr )pp, n___0);
    tmp___14 = mpn_sub_nc(pp + 2L * n___0, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )(pp + n___0),
                          n___0, cy);
    hi = (mp_limb_signed_t )((mp_limb_t )hi + tmp___14);
    while (1) {
      __p___1 = scratch + n___0;
      __x___1 = *__p___1;
      *__p___1 = __x___1 - (mp_limb_t )hi;
      if (__x___1 < (mp_limb_t )hi) {
        while (1) {
          __p___1 ++;
          tmp___17 = *__p___1;
          (*__p___1) --;
          if (! (tmp___17 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  }
  while (1) {
    __gmpn_mul_n(pp, ap, bp, n___0);
    break;
  }
  if (s > t) {
    __gmpn_mul(pp + 3L * n___0, ap + 2L * n___0, s, bp + n___0, t);
  } else {
    __gmpn_mul(pp + 3L * n___0, bp + n___0, t, ap + 2L * n___0, s);
  }
  cy = __gmpn_sub_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )(pp + 3L * n___0),
                    n___0);
  hi = (mp_limb_signed_t )(*(scratch + 2L * n___0) + cy);
  cy = mpn_sub_nc(pp + 2L * n___0, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )pp,
                  n___0, cy);
  tmp___18 = mpn_sub_nc(pp + 3L * n___0, (mp_srcptr )(scratch + n___0), (mp_srcptr )(pp + n___0),
                        n___0, cy);
  hi = (mp_limb_signed_t )((mp_limb_t )hi - tmp___18);
  tmp___19 = __gmpn_add(pp + n___0, (mp_srcptr )(pp + n___0), 3L * n___0, (mp_srcptr )scratch,
                        n___0);
  hi = (mp_limb_signed_t )((mp_limb_t )hi + tmp___19);
  tmp___25 = __builtin_expect((long )((s + t > n___0) != 0), 1L);
  if (tmp___25) {
    tmp___20 = __gmpn_sub(pp + 2L * n___0, (mp_srcptr )(pp + 2L * n___0), 2L * n___0,
                          (mp_srcptr )(pp + 4L * n___0), (s + t) - n___0);
    hi = (mp_limb_signed_t )((mp_limb_t )hi - tmp___20);
    if (hi < 0L) {
      while (1) {
        __p___2 = pp + 4L * n___0;
        __x___2 = *__p___2;
        *__p___2 = __x___2 - (mp_limb_t )(- hi);
        if (__x___2 < (mp_limb_t )(- hi)) {
          while (1) {
            __p___2 ++;
            tmp___23 = *__p___2;
            (*__p___2) --;
            if (! (tmp___23 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    } else {
      while (1) {
        __p___3 = pp + 4L * n___0;
        __x___3 = *__p___3 + (mp_limb_t )hi;
        *__p___3 = __x___3;
        if (__x___3 < (mp_limb_t )hi) {
          while (1) {
            __p___3 ++;
            (*__p___3) ++;
            if (! (*__p___3 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    }
  } else {
    while (1) {
      break;
    }
  }
  return;
}
}
#pragma merger("0","./toom33_mul.i","")
void __gmpn_toom_interpolate_5pts(mp_ptr c , mp_ptr v2 , mp_ptr vm1 , mp_size_t k ,
                                  mp_size_t twor , int sa , mp_limb_t vinf0 ) ;
void __gmpn_toom33_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  int __gmpn_cpuvec_initialized ;
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  int vm1_neg ;
  mp_limb_t cy ;
  mp_limb_t vinf0 ;
  mp_ptr gp ;
  mp_ptr as1 ;
  mp_ptr asm1 ;
  mp_ptr as2 ;
  mp_ptr bs1 ;
  mp_ptr bsm1 ;
  mp_ptr bs2 ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  int tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;
  mp_limb_t tmp___4 ;
  mp_limb_t tmp___5 ;
  int tmp___6 ;
  mp_limb_t tmp___7 ;
  mp_limb_t tmp___8 ;

  {
  __gmpn_cpuvec_initialized = 1;
  n___0 = (mp_size_t )((size_t )(an + 2L) / 3UL);
  s = an - 2L * n___0;
  t = bn - 2L * n___0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  as1 = (scratch + 4L * n___0) + 4;
  asm1 = (scratch + 2L * n___0) + 2;
  as2 = (pp + n___0) + 1;
  bs1 = pp;
  bsm1 = (scratch + 3L * n___0) + 3;
  bs2 = (pp + 2L * n___0) + 2;
  gp = scratch;
  vm1_neg = 0;
  cy = __gmpn_add(gp, ap, n___0, ap + 2L * n___0, s);
  tmp = __gmpn_add_n(as1, (mp_srcptr )gp, ap + n___0, n___0);
  *(as1 + n___0) = cy + tmp;
  if (cy == 0UL) {
    tmp___1 = __gmpn_cmp((mp_srcptr )gp, ap + n___0, n___0);
    if (tmp___1 < 0) {
      __gmpn_sub_n(asm1, ap + n___0, (mp_srcptr )gp, n___0);
      *(asm1 + n___0) = (mp_limb_t )0;
      vm1_neg = 1;
    } else {
      tmp___0 = __gmpn_sub_n(asm1, (mp_srcptr )gp, ap + n___0, n___0);
      cy -= tmp___0;
      *(asm1 + n___0) = cy;
    }
  } else {
    tmp___0 = __gmpn_sub_n(asm1, (mp_srcptr )gp, ap + n___0, n___0);
    cy -= tmp___0;
    *(asm1 + n___0) = cy;
  }
  cy = __gmpn_add_n(as2, ap + 2L * n___0, (mp_srcptr )as1, s);
  if (s != n___0) {
    cy = __gmpn_add_1(as2 + s, (mp_srcptr )(as1 + s), n___0 - s, cy);
  }
  cy += *(as1 + n___0);
  tmp___2 = __gmpn_lshift(as2, (mp_srcptr )as2, n___0, 1U);
  cy = 2UL * cy + tmp___2;
  tmp___3 = __gmpn_sub_n(as2, (mp_srcptr )as2, ap, n___0);
  cy -= tmp___3;
  *(as2 + n___0) = cy;
  cy = __gmpn_add(gp, bp, n___0, bp + 2L * n___0, t);
  tmp___4 = __gmpn_add_n(bs1, (mp_srcptr )gp, bp + n___0, n___0);
  *(bs1 + n___0) = cy + tmp___4;
  if (cy == 0UL) {
    tmp___6 = __gmpn_cmp((mp_srcptr )gp, bp + n___0, n___0);
    if (tmp___6 < 0) {
      __gmpn_sub_n(bsm1, bp + n___0, (mp_srcptr )gp, n___0);
      *(bsm1 + n___0) = (mp_limb_t )0;
      vm1_neg ^= 1;
    } else {
      tmp___5 = __gmpn_sub_n(bsm1, (mp_srcptr )gp, bp + n___0, n___0);
      cy -= tmp___5;
      *(bsm1 + n___0) = cy;
    }
  } else {
    tmp___5 = __gmpn_sub_n(bsm1, (mp_srcptr )gp, bp + n___0, n___0);
    cy -= tmp___5;
    *(bsm1 + n___0) = cy;
  }
  cy = __gmpn_add_n(bs2, (mp_srcptr )bs1, bp + 2L * n___0, t);
  if (t != n___0) {
    cy = __gmpn_add_1(bs2 + t, (mp_srcptr )(bs1 + t), n___0 - t, cy);
  }
  cy += *(bs1 + n___0);
  tmp___7 = __gmpn_lshift(bs2, (mp_srcptr )bs2, n___0, 1U);
  cy = 2UL * cy + tmp___7;
  tmp___8 = __gmpn_sub_n(bs2, (mp_srcptr )bs2, bp, n___0);
  cy -= tmp___8;
  *(bs2 + n___0) = cy;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(scratch, (mp_srcptr )asm1, n___0 + 1L, (mp_srcptr )bsm1, n___0 + 1L,
                        (scratch + 5L * n___0) + 5);
    } else {
      __gmpn_toom33_mul(scratch, (mp_srcptr )asm1, n___0 + 1L, (mp_srcptr )bsm1, n___0 + 1L,
                        (scratch + 5L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul((scratch + 2L * n___0) + 1, (mp_srcptr )as2, n___0 + 1L, (mp_srcptr )bs2,
                        n___0 + 1L, (scratch + 5L * n___0) + 5);
    } else {
      __gmpn_toom33_mul((scratch + 2L * n___0) + 1, (mp_srcptr )as2, n___0 + 1L, (mp_srcptr )bs2,
                        n___0 + 1L, (scratch + 5L * n___0) + 5);
    }
    break;
  }
  if (s > t) {
    __gmpn_mul(pp + 4L * n___0, ap + 2L * n___0, s, bp + 2L * n___0, t);
  } else {
    while (1) {
      if (! (s >= 100L)) {
        __gmpn_toom22_mul(pp + 4L * n___0, ap + 2L * n___0, s, bp + 2L * n___0, s,
                          (scratch + 5L * n___0) + 5);
      } else {
        __gmpn_toom33_mul(pp + 4L * n___0, ap + 2L * n___0, s, bp + 2L * n___0, s,
                          (scratch + 5L * n___0) + 5);
      }
      break;
    }
  }
  vinf0 = *((pp + 4L * n___0) + 0);
  cy = *((pp + 4L * n___0) + 1);
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp + 2L * n___0, (mp_srcptr )as1, n___0 + 1L, (mp_srcptr )bs1,
                        n___0 + 1L, (scratch + 5L * n___0) + 5);
    } else {
      __gmpn_toom33_mul(pp + 2L * n___0, (mp_srcptr )as1, n___0 + 1L, (mp_srcptr )bs1,
                        n___0 + 1L, (scratch + 5L * n___0) + 5);
    }
    break;
  }
  *((pp + 4L * n___0) + 1) = cy;
  while (1) {
    if (! (n___0 >= 100L)) {
      __gmpn_toom22_mul(pp, ap, n___0, bp, n___0, (scratch + 5L * n___0) + 5);
    } else {
      __gmpn_toom33_mul(pp, ap, n___0, bp, n___0, (scratch + 5L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_interpolate_5pts(pp, (scratch + 2L * n___0) + 1, scratch, n___0, s + t,
                               vm1_neg, vinf0);
  return;
}
}
#pragma merger("0","./toom3_sqr.i","")
void __gmpn_toom3_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch )
{
  int __gmpn_cpuvec_initialized ;
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_limb_t cy ;
  mp_limb_t vinf0 ;
  mp_ptr gp ;
  mp_ptr as1 ;
  mp_ptr asm1 ;
  mp_ptr as2 ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  int tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;

  {
  __gmpn_cpuvec_initialized = 1;
  n___0 = (mp_size_t )((size_t )(an + 2L) / 3UL);
  s = an - 2L * n___0;
  while (1) {
    break;
  }
  as1 = (scratch + 4L * n___0) + 4;
  asm1 = (scratch + 2L * n___0) + 2;
  as2 = (pp + n___0) + 1;
  gp = scratch;
  cy = __gmpn_add(gp, ap, n___0, ap + 2L * n___0, s);
  tmp = __gmpn_add_n(as1, (mp_srcptr )gp, ap + n___0, n___0);
  *(as1 + n___0) = cy + tmp;
  if (cy == 0UL) {
    tmp___1 = __gmpn_cmp((mp_srcptr )gp, ap + n___0, n___0);
    if (tmp___1 < 0) {
      __gmpn_sub_n(asm1, ap + n___0, (mp_srcptr )gp, n___0);
      *(asm1 + n___0) = (mp_limb_t )0;
    } else {
      tmp___0 = __gmpn_sub_n(asm1, (mp_srcptr )gp, ap + n___0, n___0);
      cy -= tmp___0;
      *(asm1 + n___0) = cy;
    }
  } else {
    tmp___0 = __gmpn_sub_n(asm1, (mp_srcptr )gp, ap + n___0, n___0);
    cy -= tmp___0;
    *(asm1 + n___0) = cy;
  }
  cy = __gmpn_add_n(as2, ap + 2L * n___0, (mp_srcptr )as1, s);
  if (s != n___0) {
    cy = __gmpn_add_1(as2 + s, (mp_srcptr )(as1 + s), n___0 - s, cy);
  }
  cy += *(as1 + n___0);
  tmp___2 = __gmpn_lshift(as2, (mp_srcptr )as2, n___0, 1U);
  cy = 2UL * cy + tmp___2;
  tmp___3 = __gmpn_sub_n(as2, (mp_srcptr )as2, ap, n___0);
  cy -= tmp___3;
  *(as2 + n___0) = cy;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 50L)) {
      __gmpn_sqr_basecase(scratch, (mp_srcptr )asm1, n___0 + 1L);
    } else
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(scratch, (mp_srcptr )asm1, n___0 + 1L, (scratch + 5L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr(scratch, (mp_srcptr )asm1, n___0 + 1L, (scratch + 5L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 50L)) {
      __gmpn_sqr_basecase((scratch + 2L * n___0) + 1, (mp_srcptr )as2, n___0 + 1L);
    } else
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr((scratch + 2L * n___0) + 1, (mp_srcptr )as2, n___0 + 1L, (scratch + 5L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr((scratch + 2L * n___0) + 1, (mp_srcptr )as2, n___0 + 1L, (scratch + 5L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (s >= 50L)) {
      __gmpn_sqr_basecase(pp + 4L * n___0, ap + 2L * n___0, s);
    } else
    if (! (s >= 120L)) {
      __gmpn_toom2_sqr(pp + 4L * n___0, ap + 2L * n___0, s, (scratch + 5L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr(pp + 4L * n___0, ap + 2L * n___0, s, (scratch + 5L * n___0) + 5);
    }
    break;
  }
  vinf0 = *((pp + 4L * n___0) + 0);
  cy = *((pp + 4L * n___0) + 1);
  while (1) {
    if (! (n___0 + 1L >= 50L)) {
      __gmpn_sqr_basecase(pp + 2L * n___0, (mp_srcptr )as1, n___0 + 1L);
    } else
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(pp + 2L * n___0, (mp_srcptr )as1, n___0 + 1L, (scratch + 5L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr(pp + 2L * n___0, (mp_srcptr )as1, n___0 + 1L, (scratch + 5L * n___0) + 5);
    }
    break;
  }
  *((pp + 4L * n___0) + 1) = cy;
  while (1) {
    if (! (n___0 >= 50L)) {
      __gmpn_sqr_basecase(pp, ap, n___0);
    } else
    if (! (n___0 >= 120L)) {
      __gmpn_toom2_sqr(pp, ap, n___0, (scratch + 5L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr(pp, ap, n___0, (scratch + 5L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_interpolate_5pts(pp, (scratch + 2L * n___0) + 1, scratch, n___0, s + s,
                               0, vinf0);
  return;
}
}
#pragma merger("0","./toom42_mul.i","")
int __gmpn_toom_eval_dgr3_pm1(mp_ptr xp1 , mp_ptr xm1 , mp_srcptr xp , mp_size_t n___0 ,
                              mp_size_t x3n , mp_ptr tp ) ;
void __gmpn_toom42_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  int vm1_neg ;
  mp_limb_t cy ;
  mp_limb_t vinf0 ;
  mp_ptr a0_a2 ;
  mp_ptr as1 ;
  mp_ptr asm1 ;
  mp_ptr as2 ;
  mp_ptr bs1 ;
  mp_ptr bsm1 ;
  mp_ptr bs2 ;
  mp_ptr tmp ;
  struct tmp_reentrant_t *__tmp_marker ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  long tmp___4 ;
  int tmp___5 ;
  mp_limb_t tmp___6 ;
  mp_limb_t tmp___7 ;
  mp_limb_t tmp___8 ;
  mp_limb_t tmp___9 ;
  mp_limb_t tmp___10 ;
  int tmp___11 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  mp_limb_t tmp___15 ;
  mp_limb_t tmp___16 ;
  mp_limb_t tmp___17 ;
  mp_limb_t tmp___18 ;
  long tmp___19 ;

  {
  if (an >= 2L * bn) {
    n___0 = (an + 3L) >> 2;
  } else {
    n___0 = (bn + 1L) >> 1;
  }
  s = an - 3L * n___0;
  t = bn - n___0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  tmp___4 = __builtin_expect((long )(((unsigned long )(6L * n___0 + 5L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                             1L);
  if (tmp___4) {
    tmp___1 = alloca((unsigned long )(6L * n___0 + 5L) * sizeof(mp_limb_t ));
    tmp___3 = tmp___1;
  } else {
    tmp___2 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(6L * n___0 + 5L) * sizeof(mp_limb_t ));
    tmp___3 = tmp___2;
  }
  tmp = (mp_limb_t *)tmp___3;
  as1 = tmp;
  tmp += n___0 + 1L;
  asm1 = tmp;
  tmp += n___0 + 1L;
  as2 = tmp;
  tmp += n___0 + 1L;
  bs1 = tmp;
  tmp += n___0 + 1L;
  bsm1 = tmp;
  tmp += n___0;
  bs2 = tmp;
  tmp += n___0 + 1L;
  a0_a2 = pp;
  tmp___5 = __gmpn_toom_eval_dgr3_pm1(as1, asm1, ap, n___0, s, a0_a2);
  vm1_neg = tmp___5 & 1;
  cy = __gmpn_lshift(as2, ap + 3L * n___0, s, 1U);
  tmp___6 = __gmpn_add_n(as2, ap + 2L * n___0, (mp_srcptr )as2, s);
  cy += tmp___6;
  if (s != n___0) {
    cy = __gmpn_add_1(as2 + s, (ap + 2L * n___0) + s, n___0 - s, cy);
  }
  tmp___7 = __gmpn_lshift(as2, (mp_srcptr )as2, n___0, 1U);
  cy = 2UL * cy + tmp___7;
  tmp___8 = __gmpn_add_n(as2, ap + n___0, (mp_srcptr )as2, n___0);
  cy += tmp___8;
  tmp___9 = __gmpn_lshift(as2, (mp_srcptr )as2, n___0, 1U);
  cy = 2UL * cy + tmp___9;
  tmp___10 = __gmpn_add_n(as2, ap, (mp_srcptr )as2, n___0);
  cy += tmp___10;
  *(as2 + n___0) = cy;
  if (t == n___0) {
    *(bs1 + n___0) = __gmpn_add_n(bs1, bp, bp + n___0, n___0);
    tmp___11 = __gmpn_cmp(bp, bp + n___0, n___0);
    if (tmp___11 < 0) {
      __gmpn_sub_n(bsm1, bp + n___0, bp, n___0);
      vm1_neg ^= 1;
    } else {
      __gmpn_sub_n(bsm1, bp, bp + n___0, n___0);
    }
  } else {
    *(bs1 + n___0) = __gmpn_add(bs1, bp, n___0, bp + n___0, t);
    tmp___13 = __gmpn_zero_p(bp + t, n___0 - t);
    if (tmp___13) {
      tmp___14 = __gmpn_cmp(bp, bp + n___0, t);
      if (tmp___14 < 0) {
        __gmpn_sub_n(bsm1, bp + n___0, bp, t);
        while (1) {
          while (1) {
            break;
          }
          if (n___0 - t != 0L) {
            while (1) {
              __dst = bsm1 + t;
              __n = n___0 - t;
              while (1) {
                break;
              }
              while (1) {
                tmp___12 = __dst;
                __dst ++;
                *tmp___12 = (mp_limb_t )0L;
                __n --;
                if (! __n) {
                  break;
                }
              }
              break;
            }
          }
          break;
        }
        vm1_neg ^= 1;
      } else {
        __gmpn_sub(bsm1, bp, n___0, bp + n___0, t);
      }
    } else {
      __gmpn_sub(bsm1, bp, n___0, bp + n___0, t);
    }
  }
  __gmpn_add(bs2, (mp_srcptr )bs1, n___0 + 1L, bp + n___0, t);
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    __gmpn_mul_n(scratch, (mp_srcptr )asm1, (mp_srcptr )bsm1, n___0);
    break;
  }
  cy = (mp_limb_t )0;
  if (*(asm1 + n___0) != 0UL) {
    cy = __gmpn_add_n(scratch + n___0, (mp_srcptr )(scratch + n___0), (mp_srcptr )bsm1,
                      n___0);
  }
  *(scratch + 2L * n___0) = cy;
  while (1) {
    __gmpn_mul_n((scratch + 2L * n___0) + 1, (mp_srcptr )as2, (mp_srcptr )bs2, n___0 + 1L);
    break;
  }
  if (s > t) {
    __gmpn_mul(pp + 4L * n___0, ap + 3L * n___0, s, bp + n___0, t);
  } else {
    __gmpn_mul(pp + 4L * n___0, bp + n___0, t, ap + 3L * n___0, s);
  }
  vinf0 = *((pp + 4L * n___0) + 0);
  while (1) {
    __gmpn_mul_n(pp + 2L * n___0, (mp_srcptr )as1, (mp_srcptr )bs1, n___0);
    break;
  }
  if (*(as1 + n___0) == 1UL) {
    tmp___15 = __gmpn_add_n((pp + 2L * n___0) + n___0, (mp_srcptr )((pp + 2L * n___0) + n___0),
                            (mp_srcptr )bs1, n___0);
    cy = *(bs1 + n___0) + tmp___15;
  } else
  if (*(as1 + n___0) == 2UL) {
    tmp___16 = __gmpn_addmul_1((pp + 2L * n___0) + n___0, (mp_srcptr )bs1, n___0,
                               (mp_limb_t )2L);
    cy = 2UL * *(bs1 + n___0) + tmp___16;
  } else
  if (*(as1 + n___0) == 3UL) {
    tmp___17 = __gmpn_addmul_1((pp + 2L * n___0) + n___0, (mp_srcptr )bs1, n___0,
                               (mp_limb_t )3L);
    cy = 3UL * *(bs1 + n___0) + tmp___17;
  } else {
    cy = (mp_limb_t )0;
  }
  if (*(bs1 + n___0) != 0UL) {
    tmp___18 = __gmpn_add_n((pp + 2L * n___0) + n___0, (mp_srcptr )((pp + 2L * n___0) + n___0),
                            (mp_srcptr )as1, n___0);
    cy += tmp___18;
  }
  *((pp + 2L * n___0) + 2L * n___0) = cy;
  while (1) {
    __gmpn_mul_n(pp, ap, bp, n___0);
    break;
  }
  __gmpn_toom_interpolate_5pts(pp, (scratch + 2L * n___0) + 1, scratch, n___0, s + t,
                               vm1_neg, vinf0);
  while (1) {
    tmp___19 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___19) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
#pragma merger("0","./toom43_mul.i","")
void __gmpn_toom_interpolate_6pts(mp_ptr pp , mp_size_t n___0 , enum toom6_flags flags ,
                                  mp_ptr w4 , mp_ptr w2 , mp_ptr w1 , mp_size_t w0n ) ;
int __gmpn_toom_eval_dgr3_pm2(mp_ptr xp2 , mp_ptr xm2 , mp_srcptr xp , mp_size_t n___0 ,
                              mp_size_t x3n , mp_ptr tp ) ;
void __gmpn_toom43_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  enum toom6_flags flags ;
  mp_limb_t cy ;
  size_t tmp ;
  int tmp___0 ;
  mp_limb_t tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  mp_limb_t tmp___4 ;
  mp_limb_t tmp___5 ;
  int tmp___6 ;

  {
  if (3L * an >= 4L * bn) {
    tmp = (size_t )((an - 1L) >> 2);
  } else {
    tmp = (size_t )(bn - 1L) / 3UL;
  }
  n___0 = (mp_size_t )(1UL + tmp);
  s = an - 3L * n___0;
  t = bn - 2L * n___0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tmp___0 = __gmpn_toom_eval_dgr3_pm2((pp + 3L * n___0) + 3, (scratch + 4L * n___0) + 4,
                                      ap, n___0, s, (scratch + 3L * n___0) + 3);
  flags = (enum toom6_flags )(2 & tmp___0);
  *(((scratch + 2L * n___0) + 2) + n___0) = __gmpn_lshift((scratch + 2L * n___0) + 2,
                                                          bp + n___0, n___0, 1U);
  cy = __gmpn_lshift(scratch, bp + 2L * n___0, t, 2U);
  tmp___1 = __gmpn_add_n(scratch, (mp_srcptr )scratch, bp, t);
  cy += tmp___1;
  if (t != n___0) {
    cy = __gmpn_add_1(scratch + t, bp + t, n___0 - t, cy);
  }
  *(scratch + n___0) = cy;
  __gmpn_add_n((pp + 2L * n___0) + 2, (mp_srcptr )scratch, (mp_srcptr )((scratch + 2L * n___0) + 2),
               n___0 + 1L);
  tmp___2 = __gmpn_cmp((mp_srcptr )scratch, (mp_srcptr )((scratch + 2L * n___0) + 2),
                       n___0 + 1L);
  if (tmp___2 < 0) {
    __gmpn_sub_n((pp + n___0) + 1, (mp_srcptr )((scratch + 2L * n___0) + 2), (mp_srcptr )scratch,
                 n___0 + 1L);
    flags = (enum toom6_flags )((unsigned int )flags ^ 2U);
  } else {
    __gmpn_sub_n((pp + n___0) + 1, (mp_srcptr )scratch, (mp_srcptr )((scratch + 2L * n___0) + 2),
                 n___0 + 1L);
  }
  tmp___3 = __gmpn_toom_eval_dgr3_pm1((pp + 4L * n___0) + 4, (scratch + 3L * n___0) + 3,
                                      ap, n___0, s, scratch);
  flags = (enum toom6_flags )((unsigned int )flags ^ (unsigned int )(1 & tmp___3));
  *(((scratch + 2L * n___0) + 2) + n___0) = __gmpn_add((scratch + 2L * n___0) + 2,
                                                       bp, n___0, bp + 2L * n___0,
                                                       t);
  tmp___4 = __gmpn_add_n(pp, (mp_srcptr )((scratch + 2L * n___0) + 2), bp + n___0,
                         n___0);
  *(pp + n___0) = *(((scratch + 2L * n___0) + 2) + n___0) + tmp___4;
  if (*(((scratch + 2L * n___0) + 2) + n___0) == 0UL) {
    tmp___6 = __gmpn_cmp((mp_srcptr )((scratch + 2L * n___0) + 2), bp + n___0, n___0);
    if (tmp___6 < 0) {
      __gmpn_sub_n((scratch + 2L * n___0) + 2, bp + n___0, (mp_srcptr )((scratch + 2L * n___0) + 2),
                   n___0);
      flags = (enum toom6_flags )((unsigned int )flags ^ 1U);
    } else {
      tmp___5 = __gmpn_sub_n((scratch + 2L * n___0) + 2, (mp_srcptr )((scratch + 2L * n___0) + 2),
                             bp + n___0, n___0);
      *(((scratch + 2L * n___0) + 2) + n___0) -= tmp___5;
    }
  } else {
    tmp___5 = __gmpn_sub_n((scratch + 2L * n___0) + 2, (mp_srcptr )((scratch + 2L * n___0) + 2),
                           bp + n___0, n___0);
    *(((scratch + 2L * n___0) + 2) + n___0) -= tmp___5;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  __gmpn_mul_n(scratch, (mp_srcptr )((scratch + 3L * n___0) + 3), (mp_srcptr )((scratch + 2L * n___0) + 2),
               n___0 + 1L);
  __gmpn_mul_n((scratch + 2L * n___0) + 1, (mp_srcptr )((scratch + 4L * n___0) + 4),
               (mp_srcptr )((pp + n___0) + 1), n___0 + 1L);
  __gmpn_mul_n((scratch + 4L * n___0) + 2, (mp_srcptr )((pp + 3L * n___0) + 3), (mp_srcptr )((pp + 2L * n___0) + 2),
               n___0 + 1L);
  __gmpn_mul_n(pp + 2L * n___0, (mp_srcptr )((pp + 4L * n___0) + 4), (mp_srcptr )pp,
               n___0 + 1L);
  if (s > t) {
    __gmpn_mul(pp + 5L * n___0, ap + 3L * n___0, s, bp + 2L * n___0, t);
  } else {
    __gmpn_mul(pp + 5L * n___0, bp + 2L * n___0, t, ap + 3L * n___0, s);
  }
  __gmpn_mul_n(pp, ap, bp, n___0);
  __gmpn_toom_interpolate_6pts(pp, n___0, flags, scratch, (scratch + 2L * n___0) + 1,
                               (scratch + 4L * n___0) + 2, t + s);
  return;
}
}
#pragma merger("0","./toom44_mul.i","")
void __gmpn_toom_interpolate_7pts(mp_ptr rp , mp_size_t n___0 , enum toom7_flags flags ,
                                  mp_ptr w1 , mp_ptr w3 , mp_ptr w4 , mp_ptr w5 ,
                                  mp_size_t w6n , mp_ptr tp ) ;
void __gmpn_toom44_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  mp_limb_t cy ;
  enum toom7_flags flags ;
  int tmp ;
  int tmp___0 ;
  mp_limb_t tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;
  mp_limb_t tmp___4 ;
  mp_limb_t tmp___5 ;
  mp_limb_t tmp___6 ;
  mp_limb_t tmp___7 ;
  mp_limb_t tmp___8 ;
  mp_limb_t tmp___9 ;
  mp_limb_t tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;

  {
  while (1) {
    break;
  }
  n___0 = (an + 3L) >> 2;
  s = an - 3L * n___0;
  t = bn - 3L * n___0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tmp = __gmpn_toom_eval_dgr3_pm2(pp, (pp + n___0) + 1, ap, n___0, s, (scratch + 8L * n___0) + 5);
  flags = (enum toom7_flags )(1 & tmp);
  tmp___0 = __gmpn_toom_eval_dgr3_pm2((pp + 4L * n___0) + 2, (pp + 2L * n___0) + 2,
                                      bp, n___0, t, (scratch + 8L * n___0) + 5);
  flags = (enum toom7_flags )((unsigned int )flags ^ (unsigned int )(1 & tmp___0));
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(scratch, (mp_srcptr )pp, n___0 + 1L, (mp_srcptr )((pp + 4L * n___0) + 2),
                        n___0 + 1L, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom33_mul(scratch, (mp_srcptr )pp, n___0 + 1L, (mp_srcptr )((pp + 4L * n___0) + 2),
                        n___0 + 1L, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul((scratch + 2L * n___0) + 1, (mp_srcptr )((pp + n___0) + 1),
                        n___0 + 1L, (mp_srcptr )((pp + 2L * n___0) + 2), n___0 + 1L,
                        (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom33_mul((scratch + 2L * n___0) + 1, (mp_srcptr )((pp + n___0) + 1),
                        n___0 + 1L, (mp_srcptr )((pp + 2L * n___0) + 2), n___0 + 1L,
                        (scratch + 8L * n___0) + 5);
    }
    break;
  }
  cy = __gmpn_lshift(pp, ap, n___0, 1U);
  tmp___1 = __gmpn_add_n(pp, (mp_srcptr )pp, ap + n___0, n___0);
  cy += tmp___1;
  tmp___2 = __gmpn_lshift(pp, (mp_srcptr )pp, n___0, 1U);
  cy = 2UL * cy + tmp___2;
  tmp___3 = __gmpn_add_n(pp, (mp_srcptr )pp, ap + 2L * n___0, n___0);
  cy += tmp___3;
  tmp___4 = __gmpn_lshift(pp, (mp_srcptr )pp, n___0, 1U);
  cy = 2UL * cy + tmp___4;
  tmp___5 = __gmpn_add(pp, (mp_srcptr )pp, n___0, ap + 3L * n___0, s);
  *(pp + n___0) = cy + tmp___5;
  cy = __gmpn_lshift((pp + 4L * n___0) + 2, bp, n___0, 1U);
  tmp___6 = __gmpn_add_n((pp + 4L * n___0) + 2, (mp_srcptr )((pp + 4L * n___0) + 2),
                         bp + n___0, n___0);
  cy += tmp___6;
  tmp___7 = __gmpn_lshift((pp + 4L * n___0) + 2, (mp_srcptr )((pp + 4L * n___0) + 2),
                          n___0, 1U);
  cy = 2UL * cy + tmp___7;
  tmp___8 = __gmpn_add_n((pp + 4L * n___0) + 2, (mp_srcptr )((pp + 4L * n___0) + 2),
                         bp + 2L * n___0, n___0);
  cy += tmp___8;
  tmp___9 = __gmpn_lshift((pp + 4L * n___0) + 2, (mp_srcptr )((pp + 4L * n___0) + 2),
                          n___0, 1U);
  cy = 2UL * cy + tmp___9;
  tmp___10 = __gmpn_add((pp + 4L * n___0) + 2, (mp_srcptr )((pp + 4L * n___0) + 2),
                        n___0, bp + 3L * n___0, t);
  *(((pp + 4L * n___0) + 2) + n___0) = cy + tmp___10;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul((scratch + 4L * n___0) + 2, (mp_srcptr )pp, n___0 + 1L, (mp_srcptr )((pp + 4L * n___0) + 2),
                        n___0 + 1L, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom33_mul((scratch + 4L * n___0) + 2, (mp_srcptr )pp, n___0 + 1L, (mp_srcptr )((pp + 4L * n___0) + 2),
                        n___0 + 1L, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  tmp___11 = __gmpn_toom_eval_dgr3_pm1(pp, (pp + n___0) + 1, ap, n___0, s, (scratch + 8L * n___0) + 5);
  flags = (enum toom7_flags )((unsigned int )flags | (unsigned int )(2 & tmp___11));
  tmp___12 = __gmpn_toom_eval_dgr3_pm1((pp + 4L * n___0) + 2, (pp + 2L * n___0) + 2,
                                       bp, n___0, t, (scratch + 8L * n___0) + 5);
  flags = (enum toom7_flags )((unsigned int )flags ^ (unsigned int )(2 & tmp___12));
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul((scratch + 6L * n___0) + 3, (mp_srcptr )((pp + n___0) + 1),
                        n___0 + 1L, (mp_srcptr )((pp + 2L * n___0) + 2), n___0 + 1L,
                        (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom33_mul((scratch + 6L * n___0) + 3, (mp_srcptr )((pp + n___0) + 1),
                        n___0 + 1L, (mp_srcptr )((pp + 2L * n___0) + 2), n___0 + 1L,
                        (scratch + 8L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp + 2L * n___0, (mp_srcptr )pp, n___0 + 1L, (mp_srcptr )((pp + 4L * n___0) + 2),
                        n___0 + 1L, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom33_mul(pp + 2L * n___0, (mp_srcptr )pp, n___0 + 1L, (mp_srcptr )((pp + 4L * n___0) + 2),
                        n___0 + 1L, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (n___0 >= 100L)) {
      __gmpn_toom22_mul(pp, ap, n___0, bp, n___0, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom33_mul(pp, ap, n___0, bp, n___0, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  if (s > t) {
    __gmpn_mul(pp + 6L * n___0, ap + 3L * n___0, s, bp + 3L * n___0, t);
  } else {
    while (1) {
      if (! (s >= 100L)) {
        __gmpn_toom22_mul(pp + 6L * n___0, ap + 3L * n___0, s, bp + 3L * n___0, s,
                          (scratch + 8L * n___0) + 5);
      } else {
        __gmpn_toom33_mul(pp + 6L * n___0, ap + 3L * n___0, s, bp + 3L * n___0, s,
                          (scratch + 8L * n___0) + 5);
      }
      break;
    }
  }
  __gmpn_toom_interpolate_7pts(pp, n___0, flags, (scratch + 2L * n___0) + 1, (scratch + 6L * n___0) + 3,
                               scratch, (scratch + 4L * n___0) + 2, s + t, (scratch + 8L * n___0) + 5);
  return;
}
}
#pragma merger("0","./toom4_sqr.i","")
void __gmpn_toom4_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_limb_t cy ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;

  {
  n___0 = (an + 3L) >> 2;
  s = an - 3L * n___0;
  while (1) {
    break;
  }
  __gmpn_toom_eval_dgr3_pm2(pp, (pp + 4L * n___0) + 2, ap, n___0, s, (scratch + 8L * n___0) + 5);
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(scratch, (mp_srcptr )pp, n___0 + 1L, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr(scratch, (mp_srcptr )pp, n___0 + 1L, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr((scratch + 2L * n___0) + 1, (mp_srcptr )((pp + 4L * n___0) + 2),
                       n___0 + 1L, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr((scratch + 2L * n___0) + 1, (mp_srcptr )((pp + 4L * n___0) + 2),
                       n___0 + 1L, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  cy = __gmpn_lshift(pp, ap, n___0, 1U);
  tmp = __gmpn_add_n(pp, (mp_srcptr )pp, ap + n___0, n___0);
  cy += tmp;
  tmp___0 = __gmpn_lshift(pp, (mp_srcptr )pp, n___0, 1U);
  cy = 2UL * cy + tmp___0;
  tmp___1 = __gmpn_add_n(pp, (mp_srcptr )pp, ap + 2L * n___0, n___0);
  cy += tmp___1;
  tmp___2 = __gmpn_lshift(pp, (mp_srcptr )pp, n___0, 1U);
  cy = 2UL * cy + tmp___2;
  tmp___3 = __gmpn_add(pp, (mp_srcptr )pp, n___0, ap + 3L * n___0, s);
  *(pp + n___0) = cy + tmp___3;
  while (1) {
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr((scratch + 4L * n___0) + 2, (mp_srcptr )pp, n___0 + 1L, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr((scratch + 4L * n___0) + 2, (mp_srcptr )pp, n___0 + 1L, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_eval_dgr3_pm1(pp, (pp + 4L * n___0) + 2, ap, n___0, s, (scratch + 8L * n___0) + 5);
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(pp + 2L * n___0, (mp_srcptr )pp, n___0 + 1L, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr(pp + 2L * n___0, (mp_srcptr )pp, n___0 + 1L, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr((scratch + 6L * n___0) + 3, (mp_srcptr )((pp + 4L * n___0) + 2),
                       n___0 + 1L, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr((scratch + 6L * n___0) + 3, (mp_srcptr )((pp + 4L * n___0) + 2),
                       n___0 + 1L, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (n___0 >= 120L)) {
      __gmpn_toom2_sqr(pp, ap, n___0, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr(pp, ap, n___0, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  while (1) {
    if (! (s >= 120L)) {
      __gmpn_toom2_sqr(pp + 6L * n___0, ap + 3L * n___0, s, (scratch + 8L * n___0) + 5);
    } else {
      __gmpn_toom3_sqr(pp + 6L * n___0, ap + 3L * n___0, s, (scratch + 8L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_interpolate_7pts(pp, n___0, (enum toom7_flags )0, (scratch + 2L * n___0) + 1,
                               (scratch + 6L * n___0) + 3, scratch, (scratch + 4L * n___0) + 2,
                               2L * s, (scratch + 8L * n___0) + 5);
  return;
}
}
#pragma merger("0","./toom53_mul.i","")
int __gmpn_toom_eval_pm1(mp_ptr xp1 , mp_ptr xm1 , unsigned int k , mp_srcptr xp ,
                         mp_size_t n___0 , mp_size_t hn , mp_ptr tp ) ;
int __gmpn_toom_eval_pm2(mp_ptr xp2 , mp_ptr xm2 , unsigned int k , mp_srcptr xp ,
                         mp_size_t n___0 , mp_size_t hn , mp_ptr tp ) ;
void __gmpn_toom53_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  mp_limb_t cy ;
  mp_ptr gp ;
  mp_ptr as1 ;
  mp_ptr asm1 ;
  mp_ptr as2 ;
  mp_ptr asm2 ;
  mp_ptr ash ;
  mp_ptr bs1 ;
  mp_ptr bsm1 ;
  mp_ptr bs2 ;
  mp_ptr bsm2 ;
  mp_ptr bsh ;
  mp_ptr tmp ;
  enum toom7_flags flags ;
  struct tmp_reentrant_t *__tmp_marker ;
  size_t tmp___0 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  mp_limb_t tmp___8 ;
  mp_limb_t tmp___9 ;
  mp_limb_t tmp___10 ;
  mp_limb_t tmp___11 ;
  mp_limb_t tmp___12 ;
  mp_limb_t tmp___13 ;
  mp_limb_t tmp___14 ;
  mp_limb_t tmp___15 ;
  int tmp___16 ;
  mp_limb_t tmp___17 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  int tmp___19 ;
  mp_limb_t tmp___20 ;
  mp_limb_t tmp___21 ;
  mp_limb_t tmp___22 ;
  long tmp___23 ;

  {
  if (3L * an >= 5L * bn) {
    tmp___0 = (size_t )(an - 1L) / 5UL;
  } else {
    tmp___0 = (size_t )(bn - 1L) / 3UL;
  }
  n___0 = (mp_size_t )(1UL + tmp___0);
  s = an - 4L * n___0;
  t = bn - 2L * n___0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  tmp___5 = __builtin_expect((long )(((unsigned long )(10L * (n___0 + 1L)) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                             1L);
  if (tmp___5) {
    tmp___2 = alloca((unsigned long )(10L * (n___0 + 1L)) * sizeof(mp_limb_t ));
    tmp___4 = tmp___2;
  } else {
    tmp___3 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(10L * (n___0 + 1L)) * sizeof(mp_limb_t ));
    tmp___4 = tmp___3;
  }
  tmp = (mp_limb_t *)tmp___4;
  as1 = tmp;
  tmp += n___0 + 1L;
  asm1 = tmp;
  tmp += n___0 + 1L;
  as2 = tmp;
  tmp += n___0 + 1L;
  asm2 = tmp;
  tmp += n___0 + 1L;
  ash = tmp;
  tmp += n___0 + 1L;
  bs1 = tmp;
  tmp += n___0 + 1L;
  bsm1 = tmp;
  tmp += n___0 + 1L;
  bs2 = tmp;
  tmp += n___0 + 1L;
  bsm2 = tmp;
  tmp += n___0 + 1L;
  bsh = tmp;
  tmp += n___0 + 1L;
  gp = pp;
  tmp___6 = __gmpn_toom_eval_pm1(as1, asm1, 4U, ap, n___0, s, gp);
  flags = (enum toom7_flags )(2 & tmp___6);
  tmp___7 = __gmpn_toom_eval_pm2(as2, asm2, 4U, ap, n___0, s, gp);
  flags = (enum toom7_flags )((unsigned int )flags | (unsigned int )(1 & tmp___7));
  cy = __gmpn_lshift(ash, ap, n___0, 1U);
  tmp___8 = __gmpn_add_n(ash, (mp_srcptr )ash, ap + n___0, n___0);
  cy += tmp___8;
  tmp___9 = __gmpn_lshift(ash, (mp_srcptr )ash, n___0, 1U);
  cy = 2UL * cy + tmp___9;
  tmp___10 = __gmpn_add_n(ash, (mp_srcptr )ash, ap + 2L * n___0, n___0);
  cy += tmp___10;
  tmp___11 = __gmpn_lshift(ash, (mp_srcptr )ash, n___0, 1U);
  cy = 2UL * cy + tmp___11;
  tmp___12 = __gmpn_add_n(ash, (mp_srcptr )ash, ap + 3L * n___0, n___0);
  cy += tmp___12;
  tmp___13 = __gmpn_lshift(ash, (mp_srcptr )ash, n___0, 1U);
  cy = 2UL * cy + tmp___13;
  tmp___14 = __gmpn_add(ash, (mp_srcptr )ash, n___0, ap + 4L * n___0, s);
  *(ash + n___0) = cy + tmp___14;
  *(bs1 + n___0) = __gmpn_add(bs1, bp, n___0, bp + 2L * n___0, t);
  if (*(bs1 + n___0) == 0UL) {
    tmp___16 = __gmpn_cmp((mp_srcptr )bs1, bp + n___0, n___0);
    if (tmp___16 < 0) {
      __gmpn_sub_n(bsm1, bp + n___0, (mp_srcptr )bs1, n___0);
      *(bsm1 + n___0) = (mp_limb_t )0;
      flags = (enum toom7_flags )((unsigned int )flags ^ 2U);
    } else {
      tmp___15 = __gmpn_sub_n(bsm1, (mp_srcptr )bs1, bp + n___0, n___0);
      *(bsm1 + n___0) = *(bs1 + n___0) - tmp___15;
    }
  } else {
    tmp___15 = __gmpn_sub_n(bsm1, (mp_srcptr )bs1, bp + n___0, n___0);
    *(bsm1 + n___0) = *(bs1 + n___0) - tmp___15;
  }
  tmp___17 = __gmpn_add_n(bs1, (mp_srcptr )bs1, bp + n___0, n___0);
  *(bs1 + n___0) += tmp___17;
  cy = __gmpn_lshift(gp, bp + 2L * n___0, t, 2U);
  *(bs2 + n___0) = __gmpn_add(bs2, bp, n___0, (mp_srcptr )gp, t);
  while (1) {
    __p = bs2 + t;
    __x = *__p + cy;
    *__p = __x;
    if (__x < cy) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  *(gp + n___0) = __gmpn_lshift(gp, bp + n___0, n___0, 1U);
  tmp___19 = __gmpn_cmp((mp_srcptr )bs2, (mp_srcptr )gp, n___0 + 1L);
  if (tmp___19 < 0) {
    __gmpn_sub_n(bsm2, (mp_srcptr )gp, (mp_srcptr )bs2, n___0 + 1L);
    flags = (enum toom7_flags )((unsigned int )flags ^ 1U);
  } else {
    __gmpn_sub_n(bsm2, (mp_srcptr )bs2, (mp_srcptr )gp, n___0 + 1L);
  }
  __gmpn_add_n(bs2, (mp_srcptr )bs2, (mp_srcptr )gp, n___0 + 1L);
  cy = __gmpn_lshift(bsh, bp, n___0, 1U);
  tmp___20 = __gmpn_add_n(bsh, (mp_srcptr )bsh, bp + n___0, n___0);
  cy += tmp___20;
  tmp___21 = __gmpn_lshift(bsh, (mp_srcptr )bsh, n___0, 1U);
  cy = 2UL * cy + tmp___21;
  tmp___22 = __gmpn_add(bsh, (mp_srcptr )bsh, n___0, bp + 2L * n___0, t);
  *(bsh + n___0) = cy + tmp___22;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  __gmpn_mul_n(scratch, (mp_srcptr )as2, (mp_srcptr )bs2, n___0 + 1L);
  __gmpn_mul_n((scratch + 2L * n___0) + 1, (mp_srcptr )asm2, (mp_srcptr )bsm2, n___0 + 1L);
  __gmpn_mul_n((scratch + 4L * n___0) + 2, (mp_srcptr )ash, (mp_srcptr )bsh, n___0 + 1L);
  *(((scratch + 6L * n___0) + 3) + 2L * n___0) = (mp_limb_t )0;
  __gmpn_mul_n((scratch + 6L * n___0) + 3, (mp_srcptr )asm1, (mp_srcptr )bsm1, n___0 + (mp_size_t )((*(asm1 + n___0) | *(bsm1 + n___0)) != 0UL));
  *((pp + 2L * n___0) + 2L * n___0) = (mp_limb_t )0;
  __gmpn_mul_n(pp + 2L * n___0, (mp_srcptr )as1, (mp_srcptr )bs1, n___0 + (mp_size_t )((*(as1 + n___0) | *(bs1 + n___0)) != 0UL));
  __gmpn_mul_n(pp, ap, bp, n___0);
  if (s > t) {
    __gmpn_mul(pp + 6L * n___0, ap + 4L * n___0, s, bp + 2L * n___0, t);
  } else {
    __gmpn_mul(pp + 6L * n___0, bp + 2L * n___0, t, ap + 4L * n___0, s);
  }
  __gmpn_toom_interpolate_7pts(pp, n___0, flags, (scratch + 2L * n___0) + 1, (scratch + 6L * n___0) + 3,
                               scratch, (scratch + 4L * n___0) + 2, s + t, (scratch + 8L * n___0) + 4);
  while (1) {
    tmp___23 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___23) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
#pragma merger("0","./toom63_mul.i","")
void __gmpn_toom_interpolate_8pts(mp_ptr pp , mp_size_t n___0 , mp_ptr r3 , mp_ptr r7 ,
                                  mp_size_t spt , mp_ptr ws ) ;
void __gmpn_toom_couple_handling(mp_ptr pp , mp_size_t n___0 , mp_ptr np , int nsign ,
                                 mp_size_t off , int ps , int ns ) ;
int __gmpn_toom_eval_pm2exp(mp_ptr xp2 , mp_ptr xm2 , unsigned int k , mp_srcptr xp ,
                            mp_size_t n___0 , mp_size_t hn , unsigned int shift ,
                            mp_ptr tp ) ;
static int abs_sub_n(mp_ptr rp , mp_srcptr ap , mp_srcptr bp , mp_size_t n___0 )
{
  mp_limb_t x ;
  mp_limb_t y ;

  {
  while (1) {
    n___0 --;
    if (! (n___0 >= 0L)) {
      break;
    }
    x = (mp_limb_t )*(ap + n___0);
    y = (mp_limb_t )*(bp + n___0);
    if (x != y) {
      n___0 ++;
      if (x > y) {
        __gmpn_sub_n(rp, ap, bp, n___0);
        return (0);
      } else {
        __gmpn_sub_n(rp, bp, ap, n___0);
        return (~ 0);
      }
    }
    *(rp + n___0) = (mp_limb_t )0;
  }
  return (0);
}
}
static int abs_sub_add_n(mp_ptr rm , mp_ptr rp , mp_srcptr rs , mp_size_t n___0 )
{
  int result ;

  {
  result = abs_sub_n(rm, (mp_srcptr )rp, rs, n___0);
  __gmpn_add_n(rp, (mp_srcptr )rp, rs, n___0);
  return (result);
}
}
void __gmpn_toom63_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  mp_limb_t cy ;
  int sign ;
  size_t tmp ;
  mp_limb_t tmp___0 ;
  int tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;
  int tmp___4 ;
  mp_limb_t tmp___5 ;
  int tmp___6 ;

  {
  while (1) {
    break;
  }
  if (an >= 2L * bn) {
    tmp = (size_t )(an - 1L) / 6UL;
  } else {
    tmp = (size_t )(bn - 1L) / 3UL;
  }
  n___0 = (mp_size_t )(1UL + tmp);
  s = an - 5L * n___0;
  t = bn - 2L * n___0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  sign = __gmpn_toom_eval_pm2exp((pp + 5L * n___0) + 2, pp + 3L * n___0, 5U, ap, n___0,
                                 s, 2U, pp);
  *(pp + n___0) = __gmpn_lshift(pp, bp + n___0, n___0, 2U);
  *(((pp + 6L * n___0) + 3) + t) = __gmpn_lshift((pp + 6L * n___0) + 3, bp + 2L * n___0,
                                                 t, 4U);
  if (n___0 == t) {
    tmp___0 = __gmpn_add_n((pp + 6L * n___0) + 3, (mp_srcptr )((pp + 6L * n___0) + 3),
                           bp + 0L, n___0);
    *(((pp + 6L * n___0) + 3) + n___0) += tmp___0;
  } else {
    *(((pp + 6L * n___0) + 3) + n___0) = __gmpn_add((pp + 6L * n___0) + 3, bp + 0L,
                                                    n___0, (mp_srcptr )((pp + 6L * n___0) + 3),
                                                    t + 1L);
  }
  tmp___1 = abs_sub_add_n((pp + 4L * n___0) + 1, (pp + 6L * n___0) + 3, (mp_srcptr )pp,
                          n___0 + 1L);
  sign ^= tmp___1;
  while (1) {
    __gmpn_mul_n(pp, (mp_srcptr )(pp + 3L * n___0), (mp_srcptr )((pp + 4L * n___0) + 1),
                 n___0 + 1L);
    break;
  }
  while (1) {
    __gmpn_mul_n((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 5L * n___0) + 2),
                 (mp_srcptr )((pp + 6L * n___0) + 3), n___0 + 1L);
    break;
  }
  __gmpn_toom_couple_handling((scratch + 3L * n___0) + 1, 2L * n___0 + 1L, pp, sign,
                              n___0, 2, 4);
  sign = __gmpn_toom_eval_pm1((pp + 5L * n___0) + 2, pp + 3L * n___0, 5U, ap, n___0,
                              s, pp);
  cy = __gmpn_add((scratch + 6L * n___0) + 2, bp + 0L, n___0, bp + 2L * n___0, t);
  tmp___2 = __gmpn_add_n((pp + 6L * n___0) + 3, (mp_srcptr )((scratch + 6L * n___0) + 2),
                         bp + n___0, n___0);
  *(((pp + 6L * n___0) + 3) + n___0) = cy + tmp___2;
  if (cy == 0UL) {
    tmp___4 = __gmpn_cmp((mp_srcptr )((scratch + 6L * n___0) + 2), bp + n___0, n___0);
    if (tmp___4 < 0) {
      __gmpn_sub_n((pp + 4L * n___0) + 1, bp + n___0, (mp_srcptr )((scratch + 6L * n___0) + 2),
                   n___0);
      *(((pp + 4L * n___0) + 1) + n___0) = (mp_limb_t )0;
      sign = ~ sign;
    } else {
      tmp___3 = __gmpn_sub_n((pp + 4L * n___0) + 1, (mp_srcptr )((scratch + 6L * n___0) + 2),
                             bp + n___0, n___0);
      cy -= tmp___3;
      *(((pp + 4L * n___0) + 1) + n___0) = cy;
    }
  } else {
    tmp___3 = __gmpn_sub_n((pp + 4L * n___0) + 1, (mp_srcptr )((scratch + 6L * n___0) + 2),
                           bp + n___0, n___0);
    cy -= tmp___3;
    *(((pp + 4L * n___0) + 1) + n___0) = cy;
  }
  while (1) {
    __gmpn_mul_n(pp, (mp_srcptr )(pp + 3L * n___0), (mp_srcptr )((pp + 4L * n___0) + 1),
                 n___0 + 1L);
    break;
  }
  while (1) {
    __gmpn_mul_n(scratch, (mp_srcptr )((pp + 5L * n___0) + 2), (mp_srcptr )((pp + 6L * n___0) + 3),
                 n___0 + 1L);
    break;
  }
  __gmpn_toom_couple_handling(scratch, 2L * n___0 + 1L, pp, sign, n___0, 0, 0);
  sign = __gmpn_toom_eval_pm2((pp + 5L * n___0) + 2, pp + 3L * n___0, 5U, ap, n___0,
                              s, pp);
  *(pp + n___0) = __gmpn_lshift(pp, bp + n___0, n___0, 1U);
  *(((pp + 6L * n___0) + 3) + t) = __gmpn_lshift((pp + 6L * n___0) + 3, bp + 2L * n___0,
                                                 t, 2U);
  if (n___0 == t) {
    tmp___5 = __gmpn_add_n((pp + 6L * n___0) + 3, (mp_srcptr )((pp + 6L * n___0) + 3),
                           bp + 0L, n___0);
    *(((pp + 6L * n___0) + 3) + n___0) += tmp___5;
  } else {
    *(((pp + 6L * n___0) + 3) + n___0) = __gmpn_add((pp + 6L * n___0) + 3, bp + 0L,
                                                    n___0, (mp_srcptr )((pp + 6L * n___0) + 3),
                                                    t + 1L);
  }
  tmp___6 = abs_sub_add_n((pp + 4L * n___0) + 1, (pp + 6L * n___0) + 3, (mp_srcptr )pp,
                          n___0 + 1L);
  sign ^= tmp___6;
  while (1) {
    __gmpn_mul_n(pp, (mp_srcptr )(pp + 3L * n___0), (mp_srcptr )((pp + 4L * n___0) + 1),
                 n___0 + 1L);
    break;
  }
  while (1) {
    __gmpn_mul_n(pp + 3L * n___0, (mp_srcptr )((pp + 5L * n___0) + 2), (mp_srcptr )((pp + 6L * n___0) + 3),
                 n___0 + 1L);
    break;
  }
  __gmpn_toom_couple_handling(pp + 3L * n___0, 2L * n___0 + 1L, pp, sign, n___0, 1,
                              2);
  while (1) {
    __gmpn_mul_n(pp, ap, bp, n___0);
    break;
  }
  if (s > t) {
    while (1) {
      __gmpn_mul(pp + 7L * n___0, ap + 5L * n___0, s, bp + 2L * n___0, t);
      break;
    }
  } else {
    while (1) {
      __gmpn_mul(pp + 7L * n___0, bp + 2L * n___0, t, ap + 5L * n___0, s);
      break;
    }
  }
  __gmpn_toom_interpolate_8pts(pp, n___0, (scratch + 3L * n___0) + 1, scratch, s + t,
                               (scratch + 6L * n___0) + 2);
  return;
}
}
#pragma merger("0","./toom6h_mul.i","")
void __gmpn_toom_interpolate_12pts(mp_ptr pp , mp_ptr r1 , mp_ptr r3 , mp_ptr r5 ,
                                   mp_size_t n___0 , mp_size_t spt , int half , mp_ptr wsi ) ;
int __gmpn_toom_eval_pm2rexp(mp_ptr rp , mp_ptr rm , unsigned int q , mp_srcptr ap ,
                             mp_size_t n___0 , mp_size_t t , unsigned int s , mp_ptr ws ) ;
void __gmpn_toom6h_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  int p ;
  int q ;
  int half ;
  int sign ;
  size_t tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  long tmp___14 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tmp___2 = __builtin_expect((long )((an * 17L < 18L * bn) != 0), 1L);
  if (tmp___2) {
    n___0 = (mp_size_t )(1UL + (size_t )(an - 1L) / 6UL);
    q = 5;
    p = q;
    half = 0;
    s = an - 5L * n___0;
    t = bn - 5L * n___0;
  } else {
    if ((an * 5L) * 18L < 119L * bn) {
      p = 7;
      q = 6;
    } else
    if ((an * 5L) * 17L < 126L * bn) {
      p = 7;
      q = 5;
    } else
    if (an * 18L < 34L * bn) {
      p = 8;
      q = 5;
    } else
    if (an * 17L < 36L * bn) {
      p = 8;
      q = 4;
    } else {
      p = 9;
      q = 4;
    }
    half = (p ^ q) & 1;
    if ((mp_size_t )q * an >= (mp_size_t )p * bn) {
      tmp = (size_t )(an - 1L) / (size_t )p;
    } else {
      tmp = (size_t )(bn - 1L) / (size_t )q;
    }
    n___0 = (mp_size_t )(1UL + tmp);
    p --;
    q --;
    s = an - (mp_size_t )p * n___0;
    t = bn - (mp_size_t )q * n___0;
    if (half) {
      tmp___1 = __builtin_expect((long )((s < 1L) != 0), 0L);
      if (tmp___1) {
        p --;
        s += n___0;
        half = 0;
      } else {
        tmp___0 = __builtin_expect((long )((t < 1L) != 0), 0L);
        if (tmp___0) {
          q --;
          t += n___0;
          half = 0;
        }
      }
    }
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tmp___3 = __gmpn_toom_eval_pm2rexp((pp + 9L * n___0) + 2, pp + 7L * n___0, (unsigned int )p,
                                     ap, n___0, s, 1U, pp);
  tmp___4 = __gmpn_toom_eval_pm2rexp((scratch + 9L * n___0) + 3, (pp + 8L * n___0) + 1,
                                     (unsigned int )q, bp, n___0, t, 1U, pp);
  sign = tmp___3 ^ tmp___4;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom22_mul(scratch, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom33_mul(scratch, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom44_mul(scratch, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom6h_mul(scratch, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling(scratch, 2L * n___0 + 1L, pp, sign, n___0, 1 + half,
                              half);
  sign = __gmpn_toom_eval_pm1((pp + 9L * n___0) + 2, pp + 7L * n___0, (unsigned int )p,
                              ap, n___0, s, pp);
  tmp___7 = __builtin_expect((long )((q == 3) != 0), 0L);
  if (tmp___7) {
    tmp___5 = __gmpn_toom_eval_dgr3_pm1((scratch + 9L * n___0) + 3, (pp + 8L * n___0) + 1,
                                        bp, n___0, t, pp);
    sign ^= tmp___5;
  } else {
    tmp___6 = __gmpn_toom_eval_pm1((scratch + 9L * n___0) + 3, (pp + 8L * n___0) + 1,
                                   (unsigned int )q, bp, n___0, t, pp);
    sign ^= tmp___6;
  }
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom22_mul((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 9L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L,
                        (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom33_mul((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 9L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L,
                        (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom44_mul((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 9L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L,
                        (scratch + 10L * n___0) + 4);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom6h_mul((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 9L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L,
                        (scratch + 10L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling((scratch + 3L * n___0) + 1, 2L * n___0 + 1L, pp, sign,
                              n___0, 0, 0);
  tmp___8 = __gmpn_toom_eval_pm2exp((pp + 9L * n___0) + 2, pp + 7L * n___0, (unsigned int )p,
                                    ap, n___0, s, 2U, pp);
  tmp___9 = __gmpn_toom_eval_pm2exp((scratch + 9L * n___0) + 3, (pp + 8L * n___0) + 1,
                                    (unsigned int )q, bp, n___0, t, 2U, pp);
  sign = tmp___8 ^ tmp___9;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom22_mul((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 9L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L,
                        (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom33_mul((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 9L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L,
                        (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom44_mul((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 9L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L,
                        (scratch + 10L * n___0) + 4);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom6h_mul((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 9L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L,
                        (scratch + 10L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling((scratch + 6L * n___0) + 2, 2L * n___0 + 1L, pp, sign,
                              n___0, 2, 4);
  tmp___10 = __gmpn_toom_eval_pm2rexp((pp + 9L * n___0) + 2, pp + 7L * n___0, (unsigned int )p,
                                      ap, n___0, s, 2U, pp);
  tmp___11 = __gmpn_toom_eval_pm2rexp((scratch + 9L * n___0) + 3, (pp + 8L * n___0) + 1,
                                      (unsigned int )q, bp, n___0, t, 2U, pp);
  sign = tmp___10 ^ tmp___11;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom22_mul(pp + 3L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom33_mul(pp + 3L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom44_mul(pp + 3L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom6h_mul(pp + 3L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling(pp + 3L * n___0, 2L * n___0 + 1L, pp, sign, n___0, 2 * (1 + half),
                              2 * half);
  tmp___12 = __gmpn_toom_eval_pm2((pp + 9L * n___0) + 2, pp + 7L * n___0, (unsigned int )p,
                                  ap, n___0, s, pp);
  tmp___13 = __gmpn_toom_eval_pm2((scratch + 9L * n___0) + 3, (pp + 8L * n___0) + 1,
                                  (unsigned int )q, bp, n___0, t, pp);
  sign = tmp___12 ^ tmp___13;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom22_mul(pp + 7L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom33_mul(pp + 7L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom44_mul(pp + 7L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (mp_srcptr )((pp + 8L * n___0) + 1),
                        n___0 + 1L, (scratch + 10L * n___0) + 4);
      __gmpn_toom6h_mul(pp + 7L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 9L * n___0) + 3), n___0 + 1L, (scratch + 10L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling(pp + 7L * n___0, 2L * n___0 + 1L, pp, sign, n___0, 1,
                              2);
  while (1) {
    if (! (n___0 >= 100L)) {
      __gmpn_toom22_mul(pp, ap, n___0, bp, n___0, (scratch + 9L * n___0) + 3);
    } else
    if (! (n___0 >= 300L)) {
      __gmpn_toom33_mul(pp, ap, n___0, bp, n___0, (scratch + 9L * n___0) + 3);
    } else
    if (! (n___0 >= 350L)) {
      __gmpn_toom44_mul(pp, ap, n___0, bp, n___0, (scratch + 9L * n___0) + 3);
    } else {
      __gmpn_toom6h_mul(pp, ap, n___0, bp, n___0, (scratch + 9L * n___0) + 3);
    }
    break;
  }
  tmp___14 = __builtin_expect((long )((half != 0) != 0), 0L);
  if (tmp___14) {
    if (s > t) {
      while (1) {
        __gmpn_mul(pp + 11L * n___0, ap + (mp_size_t )p * n___0, s, bp + (mp_size_t )q * n___0,
                   t);
        break;
      }
    } else {
      while (1) {
        __gmpn_mul(pp + 11L * n___0, bp + (mp_size_t )q * n___0, t, ap + (mp_size_t )p * n___0,
                   s);
        break;
      }
    }
  }
  __gmpn_toom_interpolate_12pts(pp, (scratch + 6L * n___0) + 2, (scratch + 3L * n___0) + 1,
                                scratch, n___0, s + t, half, (scratch + 9L * n___0) + 3);
  return;
}
}
#pragma merger("0","./toom6_sqr.i","")
void __gmpn_toom6_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;

  {
  while (1) {
    break;
  }
  n___0 = (mp_size_t )(1UL + (size_t )(an - 1L) / 6UL);
  s = an - 5L * n___0;
  while (1) {
    break;
  }
  __gmpn_toom_eval_pm2rexp((pp + 9L * n___0) + 2, pp + 7L * n___0, 5U, ap, n___0,
                           s, 1U, pp);
  while (1) {
    __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (scratch + 9L * n___0) + 3);
    break;
  }
  while (1) {
    __gmpn_toom2_sqr(scratch, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L, (scratch + 9L * n___0) + 3);
    break;
  }
  __gmpn_toom_couple_handling(scratch, 2L * n___0 + 1L, pp, 0, n___0, 1, 0);
  __gmpn_toom_eval_pm1((pp + 9L * n___0) + 2, pp + 7L * n___0, 5U, ap, n___0, s, pp);
  while (1) {
    __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (scratch + 9L * n___0) + 3);
    break;
  }
  while (1) {
    __gmpn_toom2_sqr((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 9L * n___0) + 2),
                     n___0 + 1L, (scratch + 9L * n___0) + 3);
    break;
  }
  __gmpn_toom_couple_handling((scratch + 3L * n___0) + 1, 2L * n___0 + 1L, pp, 0,
                              n___0, 0, 0);
  __gmpn_toom_eval_pm2exp((pp + 9L * n___0) + 2, pp + 7L * n___0, 5U, ap, n___0, s,
                          2U, pp);
  while (1) {
    __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (scratch + 9L * n___0) + 3);
    break;
  }
  while (1) {
    __gmpn_toom2_sqr((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 9L * n___0) + 2),
                     n___0 + 1L, (scratch + 9L * n___0) + 3);
    break;
  }
  __gmpn_toom_couple_handling((scratch + 6L * n___0) + 2, 2L * n___0 + 1L, pp, 0,
                              n___0, 2, 4);
  __gmpn_toom_eval_pm2rexp((pp + 9L * n___0) + 2, pp + 7L * n___0, 5U, ap, n___0,
                           s, 2U, pp);
  while (1) {
    __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (scratch + 9L * n___0) + 3);
    break;
  }
  while (1) {
    __gmpn_toom2_sqr(pp + 3L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                     (scratch + 9L * n___0) + 3);
    break;
  }
  __gmpn_toom_couple_handling(pp + 3L * n___0, 2L * n___0 + 1L, pp, 0, n___0, 2, 0);
  __gmpn_toom_eval_pm2((pp + 9L * n___0) + 2, pp + 7L * n___0, 5U, ap, n___0, s, pp);
  while (1) {
    __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 7L * n___0), n___0 + 1L, (scratch + 9L * n___0) + 3);
    break;
  }
  while (1) {
    __gmpn_toom2_sqr(pp + 7L * n___0, (mp_srcptr )((pp + 9L * n___0) + 2), n___0 + 1L,
                     (scratch + 9L * n___0) + 3);
    break;
  }
  __gmpn_toom_couple_handling(pp + 7L * n___0, 2L * n___0 + 1L, pp, 0, n___0, 1, 2);
  while (1) {
    __gmpn_toom2_sqr(pp, ap, n___0, (scratch + 9L * n___0) + 3);
    break;
  }
  __gmpn_toom_interpolate_12pts(pp, (scratch + 6L * n___0) + 2, (scratch + 3L * n___0) + 1,
                                scratch, n___0, 2L * s, 0, (scratch + 9L * n___0) + 3);
  return;
}
}
#pragma merger("0","./toom8h_mul.i","")
void __gmpn_toom_interpolate_16pts(mp_ptr pp , mp_ptr r1 , mp_ptr r3 , mp_ptr r5 ,
                                   mp_ptr r7 , mp_size_t n___0 , mp_size_t spt , int half ,
                                   mp_ptr wsi ) ;
void __gmpn_toom8h_mul(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_srcptr bp , mp_size_t bn ,
                       mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;
  mp_size_t t ;
  int p ;
  int q ;
  int half ;
  int sign ;
  size_t tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  long tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  long tmp___18 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tmp___2 = __builtin_expect((long )((an == bn) != 0), 1L);
  if (tmp___2) {
    goto _L;
  } else
  if (an * (mp_size_t )(20 >> 1) < 21L * (bn >> 1)) {
    _L:
    half = 0;
    n___0 = 1L + ((an - 1L) >> 3);
    q = 7;
    p = q;
    s = an - 7L * n___0;
    t = bn - 7L * n___0;
  } else {
    if (an * 13L < 16L * bn) {
      p = 9;
      q = 8;
    } else
    if (an * (mp_size_t )(20 >> 1) < 27L * (bn >> 1)) {
      p = 9;
      q = 7;
    } else
    if (an * 10L < 33L * (bn >> 1)) {
      p = 10;
      q = 7;
    } else
    if (an * 4L < 7L * bn) {
      p = 10;
      q = 6;
    } else
    if (an * 6L < 13L * bn) {
      p = 11;
      q = 6;
    } else
    if (an * 4L < 9L * bn) {
      p = 11;
      q = 5;
    } else
    if (an * 7L < 20L * bn) {
      p = 12;
      q = 5;
    } else
    if (an * 9L < 28L * bn) {
      p = 12;
      q = 4;
    } else {
      p = 13;
      q = 4;
    }
    half = (p + q) & 1;
    if ((mp_size_t )q * an >= (mp_size_t )p * bn) {
      tmp = (size_t )(an - 1L) / (size_t )p;
    } else {
      tmp = (size_t )(bn - 1L) / (size_t )q;
    }
    n___0 = (mp_size_t )(1UL + tmp);
    p --;
    q --;
    s = an - (mp_size_t )p * n___0;
    t = bn - (mp_size_t )q * n___0;
    if (half) {
      tmp___1 = __builtin_expect((long )((s < 1L) != 0), 0L);
      if (tmp___1) {
        p --;
        s += n___0;
        half = 0;
      } else {
        tmp___0 = __builtin_expect((long )((t < 1L) != 0), 0L);
        if (tmp___0) {
          q --;
          t += n___0;
          half = 0;
        }
      }
    }
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  tmp___3 = __gmpn_toom_eval_pm2rexp((pp + 13L * n___0) + 2, pp + 11L * n___0, (unsigned int )p,
                                     ap, n___0, s, 3U, pp);
  tmp___4 = __gmpn_toom_eval_pm2rexp((scratch + 12L * n___0) + 4, (pp + 12L * n___0) + 1,
                                     (unsigned int )q, bp, n___0, t, 3U, pp);
  sign = tmp___3 ^ tmp___4;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom22_mul(scratch, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom33_mul(scratch, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom44_mul(scratch, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom6h_mul(scratch, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_couple_handling(scratch, 2L * n___0 + 1L, pp, sign, n___0, 3 * (1 + half),
                              3 * half);
  tmp___5 = __gmpn_toom_eval_pm2rexp((pp + 13L * n___0) + 2, pp + 11L * n___0, (unsigned int )p,
                                     ap, n___0, s, 2U, pp);
  tmp___6 = __gmpn_toom_eval_pm2rexp((scratch + 12L * n___0) + 4, (pp + 12L * n___0) + 1,
                                     (unsigned int )q, bp, n___0, t, 2U, pp);
  sign = tmp___5 ^ tmp___6;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom22_mul((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom33_mul((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom44_mul((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom6h_mul((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_couple_handling((scratch + 3L * n___0) + 1, 2L * n___0 + 1L, pp, sign,
                              n___0, 2 * (1 + half), 2 * half);
  tmp___7 = __gmpn_toom_eval_pm2((pp + 13L * n___0) + 2, pp + 11L * n___0, (unsigned int )p,
                                 ap, n___0, s, pp);
  tmp___8 = __gmpn_toom_eval_pm2((scratch + 12L * n___0) + 4, (pp + 12L * n___0) + 1,
                                 (unsigned int )q, bp, n___0, t, pp);
  sign = tmp___7 ^ tmp___8;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom22_mul((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom33_mul((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom44_mul((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom6h_mul((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_couple_handling((scratch + 6L * n___0) + 2, 2L * n___0 + 1L, pp, sign,
                              n___0, 1, 2);
  tmp___9 = __gmpn_toom_eval_pm2exp((pp + 13L * n___0) + 2, pp + 11L * n___0, (unsigned int )p,
                                    ap, n___0, s, 3U, pp);
  tmp___10 = __gmpn_toom_eval_pm2exp((scratch + 12L * n___0) + 4, (pp + 12L * n___0) + 1,
                                     (unsigned int )q, bp, n___0, t, 3U, pp);
  sign = tmp___9 ^ tmp___10;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom22_mul((scratch + 9L * n___0) + 3, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom33_mul((scratch + 9L * n___0) + 3, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom44_mul((scratch + 9L * n___0) + 3, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom6h_mul((scratch + 9L * n___0) + 3, (mp_srcptr )((pp + 13L * n___0) + 2),
                        n___0 + 1L, (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L,
                        (scratch + 13L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_couple_handling((scratch + 9L * n___0) + 3, 2L * n___0 + 1L, pp, sign,
                              n___0, 3, 6);
  tmp___11 = __gmpn_toom_eval_pm2rexp((pp + 13L * n___0) + 2, pp + 11L * n___0, (unsigned int )p,
                                      ap, n___0, s, 1U, pp);
  tmp___12 = __gmpn_toom_eval_pm2rexp((scratch + 12L * n___0) + 4, (pp + 12L * n___0) + 1,
                                      (unsigned int )q, bp, n___0, t, 1U, pp);
  sign = tmp___11 ^ tmp___12;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom22_mul(pp + 3L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom33_mul(pp + 3L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom44_mul(pp + 3L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom6h_mul(pp + 3L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_couple_handling(pp + 3L * n___0, 2L * n___0 + 1L, pp, sign, n___0, 1 + half,
                              half);
  sign = __gmpn_toom_eval_pm1((pp + 13L * n___0) + 2, pp + 11L * n___0, (unsigned int )p,
                              ap, n___0, s, pp);
  tmp___15 = __builtin_expect((long )((q == 3) != 0), 0L);
  if (tmp___15) {
    tmp___13 = __gmpn_toom_eval_dgr3_pm1((scratch + 12L * n___0) + 4, (pp + 12L * n___0) + 1,
                                         bp, n___0, t, pp);
    sign ^= tmp___13;
  } else {
    tmp___14 = __gmpn_toom_eval_pm1((scratch + 12L * n___0) + 4, (pp + 12L * n___0) + 1,
                                    (unsigned int )q, bp, n___0, t, pp);
    sign ^= tmp___14;
  }
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom22_mul(pp + 7L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom33_mul(pp + 7L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom44_mul(pp + 7L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom6h_mul(pp + 7L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_couple_handling(pp + 7L * n___0, 2L * n___0 + 1L, pp, sign, n___0, 0,
                              0);
  tmp___16 = __gmpn_toom_eval_pm2exp((pp + 13L * n___0) + 2, pp + 11L * n___0, (unsigned int )p,
                                     ap, n___0, s, 2U, pp);
  tmp___17 = __gmpn_toom_eval_pm2exp((scratch + 12L * n___0) + 4, (pp + 12L * n___0) + 1,
                                     (unsigned int )q, bp, n___0, t, 2U, pp);
  sign = tmp___16 ^ tmp___17;
  while (1) {
    if (! (n___0 + 1L >= 100L)) {
      __gmpn_toom22_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom22_mul(pp + 11L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 300L)) {
      __gmpn_toom33_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom33_mul(pp + 11L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom44_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom44_mul(pp + 11L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    } else {
      __gmpn_toom6h_mul(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (mp_srcptr )((pp + 12L * n___0) + 1),
                        n___0 + 1L, (scratch + 13L * n___0) + 5);
      __gmpn_toom6h_mul(pp + 11L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                        (mp_srcptr )((scratch + 12L * n___0) + 4), n___0 + 1L, (scratch + 13L * n___0) + 5);
    }
    break;
  }
  __gmpn_toom_couple_handling(pp + 11L * n___0, 2L * n___0 + 1L, pp, sign, n___0,
                              2, 4);
  while (1) {
    if (! (n___0 >= 100L)) {
      __gmpn_toom22_mul(pp, ap, n___0, bp, n___0, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 >= 300L)) {
      __gmpn_toom33_mul(pp, ap, n___0, bp, n___0, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 >= 350L)) {
      __gmpn_toom44_mul(pp, ap, n___0, bp, n___0, (scratch + 12L * n___0) + 4);
    } else {
      __gmpn_toom6h_mul(pp, ap, n___0, bp, n___0, (scratch + 12L * n___0) + 4);
    }
    break;
  }
  tmp___18 = __builtin_expect((long )((half != 0) != 0), 0L);
  if (tmp___18) {
    if (s > t) {
      while (1) {
        __gmpn_mul(pp + 15L * n___0, ap + (mp_size_t )p * n___0, s, bp + (mp_size_t )q * n___0,
                   t);
        break;
      }
    } else {
      while (1) {
        __gmpn_mul(pp + 15L * n___0, bp + (mp_size_t )q * n___0, t, ap + (mp_size_t )p * n___0,
                   s);
        break;
      }
    }
  }
  __gmpn_toom_interpolate_16pts(pp, (scratch + 9L * n___0) + 3, (scratch + 6L * n___0) + 2,
                                (scratch + 3L * n___0) + 1, scratch, n___0, s + t,
                                half, (scratch + 12L * n___0) + 4);
  return;
}
}
#pragma merger("0","./toom8_sqr.i","")
void __gmpn_toom8_sqr(mp_ptr pp , mp_srcptr ap , mp_size_t an , mp_ptr scratch )
{
  mp_size_t n___0 ;
  mp_size_t s ;

  {
  while (1) {
    break;
  }
  n___0 = 1L + ((an - 1L) >> 3);
  s = an - 7L * n___0;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  __gmpn_toom_eval_pm2rexp((pp + 13L * n___0) + 2, pp + 11L * n___0, 7U, ap, n___0,
                           s, 3U, pp);
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom2_sqr(scratch, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 400L)) {
      __gmpn_toom3_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom3_sqr(scratch, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom4_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom4_sqr(scratch, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 450L)) {
      __gmpn_toom6_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom6_sqr(scratch, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else {
      __gmpn_toom8_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom8_sqr(scratch, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling(scratch, 2L * n___0 + 1L, pp, 0, n___0, 3, 0);
  __gmpn_toom_eval_pm2rexp((pp + 13L * n___0) + 2, pp + 11L * n___0, 7U, ap, n___0,
                           s, 2U, pp);
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom2_sqr((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 400L)) {
      __gmpn_toom3_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom3_sqr((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom4_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom4_sqr((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 450L)) {
      __gmpn_toom6_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom6_sqr((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else {
      __gmpn_toom8_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom8_sqr((scratch + 3L * n___0) + 1, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling((scratch + 3L * n___0) + 1, 2L * n___0 + 1L, pp, 0,
                              n___0, 2, 0);
  __gmpn_toom_eval_pm2((pp + 13L * n___0) + 2, pp + 11L * n___0, 7U, ap, n___0, s,
                       pp);
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom2_sqr((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 400L)) {
      __gmpn_toom3_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom3_sqr((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom4_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom4_sqr((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 450L)) {
      __gmpn_toom6_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom6_sqr((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else {
      __gmpn_toom8_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom8_sqr((scratch + 6L * n___0) + 2, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling((scratch + 6L * n___0) + 2, 2L * n___0 + 1L, pp, 0,
                              n___0, 1, 2);
  __gmpn_toom_eval_pm2exp((pp + 13L * n___0) + 2, pp + 11L * n___0, 7U, ap, n___0,
                          s, 3U, pp);
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom2_sqr((scratch + 9L * n___0) + 3, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 400L)) {
      __gmpn_toom3_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom3_sqr((scratch + 9L * n___0) + 3, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom4_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom4_sqr((scratch + 9L * n___0) + 3, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 450L)) {
      __gmpn_toom6_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom6_sqr((scratch + 9L * n___0) + 3, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    } else {
      __gmpn_toom8_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom8_sqr((scratch + 9L * n___0) + 3, (mp_srcptr )((pp + 13L * n___0) + 2),
                       n___0 + 1L, (scratch + 12L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling((scratch + 9L * n___0) + 3, 2L * n___0 + 1L, pp, 0,
                              n___0, 3, 6);
  __gmpn_toom_eval_pm2rexp((pp + 13L * n___0) + 2, pp + 11L * n___0, 7U, ap, n___0,
                           s, 1U, pp);
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom2_sqr(pp + 3L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 400L)) {
      __gmpn_toom3_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom3_sqr(pp + 3L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom4_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom4_sqr(pp + 3L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 450L)) {
      __gmpn_toom6_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom6_sqr(pp + 3L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else {
      __gmpn_toom8_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom8_sqr(pp + 3L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling(pp + 3L * n___0, 2L * n___0 + 1L, pp, 0, n___0, 1, 0);
  __gmpn_toom_eval_pm1((pp + 13L * n___0) + 2, pp + 11L * n___0, 7U, ap, n___0, s,
                       pp);
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom2_sqr(pp + 7L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 400L)) {
      __gmpn_toom3_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom3_sqr(pp + 7L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom4_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom4_sqr(pp + 7L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 450L)) {
      __gmpn_toom6_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom6_sqr(pp + 7L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else {
      __gmpn_toom8_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom8_sqr(pp + 7L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling(pp + 7L * n___0, 2L * n___0 + 1L, pp, 0, n___0, 0, 0);
  __gmpn_toom_eval_pm2exp((pp + 13L * n___0) + 2, pp + 11L * n___0, 7U, ap, n___0,
                          s, 2U, pp);
  while (1) {
    if (! (n___0 + 1L >= 120L)) {
      __gmpn_toom2_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom2_sqr(pp + 11L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 400L)) {
      __gmpn_toom3_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom3_sqr(pp + 11L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 350L)) {
      __gmpn_toom4_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom4_sqr(pp + 11L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 + 1L >= 450L)) {
      __gmpn_toom6_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom6_sqr(pp + 11L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    } else {
      __gmpn_toom8_sqr(pp, (mp_srcptr )(pp + 11L * n___0), n___0 + 1L, (scratch + 12L * n___0) + 4);
      __gmpn_toom8_sqr(pp + 11L * n___0, (mp_srcptr )((pp + 13L * n___0) + 2), n___0 + 1L,
                       (scratch + 12L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_couple_handling(pp + 11L * n___0, 2L * n___0 + 1L, pp, 0, n___0, 2,
                              4);
  while (1) {
    if (! (n___0 >= 120L)) {
      __gmpn_toom2_sqr(pp, ap, n___0, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 >= 400L)) {
      __gmpn_toom3_sqr(pp, ap, n___0, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 >= 350L)) {
      __gmpn_toom4_sqr(pp, ap, n___0, (scratch + 12L * n___0) + 4);
    } else
    if (! (n___0 >= 450L)) {
      __gmpn_toom6_sqr(pp, ap, n___0, (scratch + 12L * n___0) + 4);
    } else {
      __gmpn_toom8_sqr(pp, ap, n___0, (scratch + 12L * n___0) + 4);
    }
    break;
  }
  __gmpn_toom_interpolate_16pts(pp, (scratch + 9L * n___0) + 3, (scratch + 6L * n___0) + 2,
                                (scratch + 3L * n___0) + 1, scratch, n___0, 2L * s,
                                0, (scratch + 12L * n___0) + 4);
  return;
}
}
#pragma merger("0","./toom_couple_handling.i","")
void __gmpn_toom_couple_handling(mp_ptr pp , mp_size_t n___0 , mp_ptr np , int nsign ,
                                 mp_size_t off , int ps , int ns )
{


  {
  if (nsign) {
    __gmpn_sub_n(np, (mp_srcptr )pp, (mp_srcptr )np, n___0);
    __gmpn_rshift(np, (mp_srcptr )np, n___0, 1U);
  } else {
    __gmpn_add_n(np, (mp_srcptr )pp, (mp_srcptr )np, n___0);
    __gmpn_rshift(np, (mp_srcptr )np, n___0, 1U);
  }
  __gmpn_sub_n(pp, (mp_srcptr )pp, (mp_srcptr )np, n___0);
  if (ps > 0) {
    __gmpn_rshift(pp, (mp_srcptr )pp, n___0, (unsigned int )ps);
  }
  if (ns > 0) {
    __gmpn_rshift(np, (mp_srcptr )np, n___0, (unsigned int )ns);
  }
  *(pp + n___0) = __gmpn_add_n(pp + off, (mp_srcptr )(pp + off), (mp_srcptr )np, n___0 - off);
  __gmpn_add_1(pp + n___0, (mp_srcptr )((np + n___0) - off), off, *(pp + n___0));
  return;
}
}
#pragma merger("0","./toom_eval_dgr3_pm1.i","")
int __gmpn_toom_eval_dgr3_pm1(mp_ptr xp1 , mp_ptr xm1 , mp_srcptr xp , mp_size_t n___0 ,
                              mp_size_t x3n , mp_ptr tp )
{
  int neg ;
  int tmp___0 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  *(xp1 + n___0) = __gmpn_add_n(xp1, xp, xp + 2L * n___0, n___0);
  *(tp + n___0) = __gmpn_add(tp, xp + n___0, n___0, xp + 3L * n___0, x3n);
  tmp___0 = __gmpn_cmp((mp_srcptr )xp1, (mp_srcptr )tp, n___0 + 1L);
  if (tmp___0 < 0) {
    neg = ~ 0;
  } else {
    neg = 0;
  }
  if (neg) {
    __gmpn_sub_n(xm1, (mp_srcptr )tp, (mp_srcptr )xp1, n___0 + 1L);
  } else {
    __gmpn_sub_n(xm1, (mp_srcptr )xp1, (mp_srcptr )tp, n___0 + 1L);
  }
  __gmpn_add_n(xp1, (mp_srcptr )xp1, (mp_srcptr )tp, n___0 + 1L);
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  return (neg);
}
}
#pragma merger("0","./toom_eval_dgr3_pm2.i","")
int __gmpn_toom_eval_dgr3_pm2(mp_ptr xp2 , mp_ptr xm2 , mp_srcptr xp , mp_size_t n___0 ,
                              mp_size_t x3n , mp_ptr tp )
{
  mp_limb_t cy ;
  int neg ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  int tmp___2 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  cy = __gmpn_lshift(tp, xp + 2L * n___0, n___0, 2U);
  tmp = __gmpn_add_n(xp2, (mp_srcptr )tp, xp, n___0);
  *(xp2 + n___0) = cy + tmp;
  *(tp + x3n) = __gmpn_lshift(tp, xp + 3L * n___0, x3n, 2U);
  if (x3n < n___0) {
    *(tp + n___0) = __gmpn_add(tp, xp + n___0, n___0, (mp_srcptr )tp, x3n + 1L);
  } else {
    tmp___0 = __gmpn_add_n(tp, xp + n___0, (mp_srcptr )tp, n___0);
    *(tp + n___0) += tmp___0;
  }
  __gmpn_lshift(tp, (mp_srcptr )tp, n___0 + 1L, 1U);
  tmp___2 = __gmpn_cmp((mp_srcptr )xp2, (mp_srcptr )tp, n___0 + 1L);
  if (tmp___2 < 0) {
    neg = ~ 0;
  } else {
    neg = 0;
  }
  if (neg) {
    __gmpn_sub_n(xm2, (mp_srcptr )tp, (mp_srcptr )xp2, n___0 + 1L);
  } else {
    __gmpn_sub_n(xm2, (mp_srcptr )xp2, (mp_srcptr )tp, n___0 + 1L);
  }
  __gmpn_add_n(xp2, (mp_srcptr )xp2, (mp_srcptr )tp, n___0 + 1L);
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  return (neg);
}
}
#pragma merger("0","./toom_eval_pm1.i","")
int __gmpn_toom_eval_pm1(mp_ptr xp1 , mp_ptr xm1 , unsigned int k , mp_srcptr xp ,
                         mp_size_t n___0 , mp_size_t hn , mp_ptr tp )
{
  unsigned int i ;
  int neg ;
  int tmp___0 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  *(xp1 + n___0) = __gmpn_add_n(xp1, xp, xp + 2L * n___0, n___0);
  i = 4U;
  while (i < k) {
    __gmpn_add(xp1, (mp_srcptr )xp1, n___0 + 1L, xp + (mp_size_t )i * n___0, n___0);
    i += 2U;
  }
  *(tp + n___0) = __gmpn_add_n(tp, xp + n___0, xp + 3L * n___0, n___0);
  i = 5U;
  while (i < k) {
    __gmpn_add(tp, (mp_srcptr )tp, n___0 + 1L, xp + (mp_size_t )i * n___0, n___0);
    i += 2U;
  }
  if (k & 1U) {
    __gmpn_add(tp, (mp_srcptr )tp, n___0 + 1L, xp + (mp_size_t )k * n___0, hn);
  } else {
    __gmpn_add(xp1, (mp_srcptr )xp1, n___0 + 1L, xp + (mp_size_t )k * n___0, hn);
  }
  tmp___0 = __gmpn_cmp((mp_srcptr )xp1, (mp_srcptr )tp, n___0 + 1L);
  if (tmp___0 < 0) {
    neg = ~ 0;
  } else {
    neg = 0;
  }
  if (neg) {
    __gmpn_sub_n(xm1, (mp_srcptr )tp, (mp_srcptr )xp1, n___0 + 1L);
  } else {
    __gmpn_sub_n(xm1, (mp_srcptr )xp1, (mp_srcptr )tp, n___0 + 1L);
  }
  __gmpn_add_n(xp1, (mp_srcptr )xp1, (mp_srcptr )tp, n___0 + 1L);
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  return (neg);
}
}
#pragma merger("0","./toom_eval_pm2.i","")
int __gmpn_toom_eval_pm2(mp_ptr xp2 , mp_ptr xm2 , unsigned int k , mp_srcptr xp ,
                         mp_size_t n___0 , mp_size_t hn , mp_ptr tp )
{
  int i ;
  int neg ;
  mp_limb_t cy ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;
  mp_limb_t tmp___4 ;
  mp_limb_t tmp___5 ;
  mp_limb_t tmp___6 ;
  int tmp___8 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  cy = (mp_limb_t )0;
  while (1) {
    cy <<= 2;
    tmp = __gmpn_lshift(xp2, xp + (mp_size_t )k * n___0, hn, 2U);
    cy += tmp;
    tmp___0 = __gmpn_add_n(xp2, (mp_srcptr )xp2, xp + (mp_size_t )(k - 2U) * n___0,
                           hn);
    cy += tmp___0;
    break;
  }
  if (hn != n___0) {
    cy = __gmpn_add_1(xp2 + hn, (xp + (mp_size_t )(k - 2U) * n___0) + hn, n___0 - hn,
                      cy);
  }
  i = (int )(k - 4U);
  while (i >= 0) {
    while (1) {
      cy <<= 2;
      tmp___1 = __gmpn_lshift(xp2, (mp_srcptr )xp2, n___0, 2U);
      cy += tmp___1;
      tmp___2 = __gmpn_add_n(xp2, (mp_srcptr )xp2, xp + (mp_size_t )i * n___0, n___0);
      cy += tmp___2;
      break;
    }
    i -= 2;
  }
  *(xp2 + n___0) = cy;
  k --;
  cy = (mp_limb_t )0;
  while (1) {
    cy <<= 2;
    tmp___3 = __gmpn_lshift(tp, xp + (mp_size_t )k * n___0, n___0, 2U);
    cy += tmp___3;
    tmp___4 = __gmpn_add_n(tp, (mp_srcptr )tp, xp + (mp_size_t )(k - 2U) * n___0,
                           n___0);
    cy += tmp___4;
    break;
  }
  i = (int )(k - 4U);
  while (i >= 0) {
    while (1) {
      cy <<= 2;
      tmp___5 = __gmpn_lshift(tp, (mp_srcptr )tp, n___0, 2U);
      cy += tmp___5;
      tmp___6 = __gmpn_add_n(tp, (mp_srcptr )tp, xp + (mp_size_t )i * n___0, n___0);
      cy += tmp___6;
      break;
    }
    i -= 2;
  }
  *(tp + n___0) = cy;
  if (k & 1U) {
    __gmpn_lshift(tp, (mp_srcptr )tp, n___0 + 1L, 1U);
  } else {
    __gmpn_lshift(xp2, (mp_srcptr )xp2, n___0 + 1L, 1U);
  }
  tmp___8 = __gmpn_cmp((mp_srcptr )xp2, (mp_srcptr )tp, n___0 + 1L);
  if (tmp___8 < 0) {
    neg = ~ 0;
  } else {
    neg = 0;
  }
  if (neg) {
    __gmpn_sub_n(xm2, (mp_srcptr )tp, (mp_srcptr )xp2, n___0 + 1L);
  } else {
    __gmpn_sub_n(xm2, (mp_srcptr )xp2, (mp_srcptr )tp, n___0 + 1L);
  }
  __gmpn_add_n(xp2, (mp_srcptr )xp2, (mp_srcptr )tp, n___0 + 1L);
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  neg = (int )((unsigned int )neg ^ ((k & 1U) - 1U));
  return (neg);
}
}
#pragma merger("0","./toom_eval_pm2exp.i","")
int __gmpn_toom_eval_pm2exp(mp_ptr xp2 , mp_ptr xm2 , unsigned int k , mp_srcptr xp ,
                            mp_size_t n___0 , mp_size_t hn , unsigned int shift ,
                            mp_ptr tp )
{
  unsigned int i ;
  int neg ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t tmp___3 ;
  int tmp___5 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  *(xp2 + n___0) = __gmpn_lshift(tp, xp + 2L * n___0, n___0, 2U * shift);
  tmp = __gmpn_add_n(xp2, xp, (mp_srcptr )tp, n___0);
  *(xp2 + n___0) += tmp;
  i = 4U;
  while (i < k) {
    tmp___0 = __gmpn_lshift(tp, xp + (mp_size_t )i * n___0, n___0, i * shift);
    *(xp2 + n___0) += tmp___0;
    tmp___1 = __gmpn_add_n(xp2, (mp_srcptr )xp2, (mp_srcptr )tp, n___0);
    *(xp2 + n___0) += tmp___1;
    i += 2U;
  }
  *(tp + n___0) = __gmpn_lshift(tp, xp + n___0, n___0, shift);
  i = 3U;
  while (i < k) {
    tmp___2 = __gmpn_lshift(xm2, xp + (mp_size_t )i * n___0, n___0, i * shift);
    *(tp + n___0) += tmp___2;
    tmp___3 = __gmpn_add_n(tp, (mp_srcptr )tp, (mp_srcptr )xm2, n___0);
    *(tp + n___0) += tmp___3;
    i += 2U;
  }
  *(xm2 + hn) = __gmpn_lshift(xm2, xp + (mp_size_t )k * n___0, hn, k * shift);
  if (k & 1U) {
    __gmpn_add(tp, (mp_srcptr )tp, n___0 + 1L, (mp_srcptr )xm2, hn + 1L);
  } else {
    __gmpn_add(xp2, (mp_srcptr )xp2, n___0 + 1L, (mp_srcptr )xm2, hn + 1L);
  }
  tmp___5 = __gmpn_cmp((mp_srcptr )xp2, (mp_srcptr )tp, n___0 + 1L);
  if (tmp___5 < 0) {
    neg = ~ 0;
  } else {
    neg = 0;
  }
  if (neg) {
    __gmpn_sub_n(xm2, (mp_srcptr )tp, (mp_srcptr )xp2, n___0 + 1L);
  } else {
    __gmpn_sub_n(xm2, (mp_srcptr )xp2, (mp_srcptr )tp, n___0 + 1L);
  }
  __gmpn_add_n(xp2, (mp_srcptr )xp2, (mp_srcptr )tp, n___0 + 1L);
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  return (neg);
}
}
#pragma merger("0","./toom_eval_pm2rexp.i","")
static mp_limb_t DO_mpn_addlsh_n(mp_ptr dst , mp_srcptr src , mp_size_t n___0 , unsigned int s ,
                                 mp_ptr ws )
{
  mp_limb_t __cy ;
  mp_limb_t tmp ;

  {
  __cy = __gmpn_lshift(ws, src, n___0, s);
  tmp = __gmpn_add_n(dst, (mp_srcptr )dst, (mp_srcptr )ws, n___0);
  return (__cy + tmp);
}
}
int __gmpn_toom_eval_pm2rexp(mp_ptr rp , mp_ptr rm , unsigned int q , mp_srcptr ap ,
                             mp_size_t n___0 , mp_size_t t , unsigned int s , mp_ptr ws )
{
  unsigned int i ;
  int neg ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t tmp___1 ;
  int tmp___3 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  *(rp + n___0) = __gmpn_lshift(rp, ap, n___0, s * q);
  *(ws + n___0) = __gmpn_lshift(ws, ap + n___0, n___0, s * (q - 1U));
  if ((q & 1U) != 0U) {
    __gmpn_add(ws, (mp_srcptr )ws, n___0 + 1L, ap + n___0 * (mp_size_t )q, t);
    tmp = DO_mpn_addlsh_n(rp, ap + n___0 * (mp_size_t )(q - 1U), n___0, s, rm);
    *(rp + n___0) += tmp;
  } else {
    __gmpn_add(rp, (mp_srcptr )rp, n___0 + 1L, ap + n___0 * (mp_size_t )q, t);
  }
  i = 2U;
  while (i < q - 1U) {
    tmp___0 = DO_mpn_addlsh_n(rp, ap + n___0 * (mp_size_t )i, n___0, s * (q - i),
                              rm);
    *(rp + n___0) += tmp___0;
    i ++;
    tmp___1 = DO_mpn_addlsh_n(ws, ap + n___0 * (mp_size_t )i, n___0, s * (q - i),
                              rm);
    *(ws + n___0) += tmp___1;
    i ++;
  }
  tmp___3 = __gmpn_cmp((mp_srcptr )rp, (mp_srcptr )ws, n___0 + 1L);
  if (tmp___3 < 0) {
    neg = ~ 0;
  } else {
    neg = 0;
  }
  if (neg) {
    __gmpn_sub_n(rm, (mp_srcptr )ws, (mp_srcptr )rp, n___0 + 1L);
  } else {
    __gmpn_sub_n(rm, (mp_srcptr )rp, (mp_srcptr )ws, n___0 + 1L);
  }
  __gmpn_add_n(rp, (mp_srcptr )rp, (mp_srcptr )ws, n___0 + 1L);
  return (neg);
}
}
#pragma merger("0","./toom_interpolate_12pts.i","")
static mp_limb_t DO_mpn_sublsh_n(mp_ptr dst , mp_srcptr src , mp_size_t n___0 , unsigned int s ,
                                 mp_ptr ws )
{
  mp_limb_t __cy ;
  mp_limb_t tmp ;

  {
  __cy = __gmpn_lshift(ws, src, n___0, s);
  tmp = __gmpn_sub_n(dst, (mp_srcptr )dst, (mp_srcptr )ws, n___0);
  return (__cy + tmp);
}
}
void __gmpn_toom_interpolate_12pts(mp_ptr pp , mp_ptr r1 , mp_ptr r3 , mp_ptr r5 ,
                                   mp_size_t n___0 , mp_size_t spt , int half , mp_ptr wsi )
{
  mp_limb_t cy ;
  mp_size_t n3 ;
  mp_size_t n3p1 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___1 ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t tmp___4 ;
  mp_limb_t __cy ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  mp_limb_t tmp___7 ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  mp_limb_t tmp___10 ;
  mp_limb_t __x___3 ;
  mp_ptr __p___3 ;
  mp_limb_t tmp___13 ;
  mp_limb_t __cy___0 ;
  mp_limb_t __x___4 ;
  mp_ptr __p___4 ;
  mp_limb_t tmp___16 ;
  mp_limb_t __x___5 ;
  mp_ptr __p___5 ;
  mp_limb_t tmp___19 ;
  mp_limb_t tmp___20 ;
  mp_limb_t __cy___1 ;
  mp_limb_t __x___6 ;
  mp_ptr __p___6 ;
  mp_limb_t tmp___23 ;
  mp_limb_t __x___7 ;
  mp_ptr __p___7 ;
  mp_limb_t tmp___26 ;
  mp_ptr __mp_ptr_swap__tmp ;
  mp_limb_t tmp___27 ;
  mp_limb_t __cy___2 ;
  mp_limb_t __x___8 ;
  mp_ptr __p___8 ;
  mp_limb_t tmp___30 ;
  mp_limb_t __x___9 ;
  mp_ptr __p___9 ;
  mp_limb_t tmp___33 ;
  mp_ptr __mp_ptr_swap__tmp___0 ;
  mp_limb_t tmp___34 ;
  mp_limb_t tmp___35 ;
  mp_limb_t __x___10 ;
  mp_ptr __p___10 ;
  mp_limb_t tmp___37 ;
  mp_limb_t __x___11 ;
  mp_ptr __p___11 ;
  mp_limb_t tmp___39 ;
  mp_limb_t __x___12 ;
  mp_ptr __p___12 ;
  mp_limb_t tmp___41 ;
  mp_limb_t __x___13 ;
  mp_ptr __p___13 ;
  mp_limb_t tmp___43 ;
  mp_limb_t __x___14 ;
  mp_ptr __p___14 ;
  mp_limb_t tmp___45 ;
  mp_limb_t __x___15 ;
  mp_ptr __p___15 ;
  long tmp___47 ;

  {
  n3 = 3L * n___0;
  n3p1 = n3 + 1L;
  if (half != 0) {
    cy = __gmpn_sub_n(r3, (mp_srcptr )r3, (mp_srcptr )(pp + 11L * n___0), spt);
    while (1) {
      __p = r3 + spt;
      __x = *__p;
      *__p = __x - cy;
      if (__x < cy) {
        while (1) {
          __p ++;
          tmp___1 = *__p;
          (*__p) --;
          if (! (tmp___1 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    cy = DO_mpn_sublsh_n(pp + 7L * n___0, (mp_srcptr )(pp + 11L * n___0), spt, 10U,
                         wsi);
    while (1) {
      __p___0 = (pp + 7L * n___0) + spt;
      __x___0 = *__p___0;
      *__p___0 = __x___0 - cy;
      if (__x___0 < cy) {
        while (1) {
          __p___0 ++;
          tmp___4 = *__p___0;
          (*__p___0) --;
          if (! (tmp___4 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    while (1) {
      while (1) {
        __p___1 = r5;
        __x___1 = *__p___1;
        *__p___1 = __x___1 - (*((pp + 11L * n___0) + 0) >> 2);
        if (__x___1 < *((pp + 11L * n___0) + 0) >> 2) {
          while (1) {
            __p___1 ++;
            tmp___7 = *__p___1;
            (*__p___1) --;
            if (! (tmp___7 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      __cy = DO_mpn_sublsh_n(r5, (mp_srcptr )((pp + 11L * n___0) + 1), spt - 1L, 62U,
                             wsi);
      while (1) {
        __p___2 = (r5 + spt) - 1;
        __x___2 = *__p___2;
        *__p___2 = __x___2 - __cy;
        if (__x___2 < __cy) {
          while (1) {
            __p___2 ++;
            tmp___10 = *__p___2;
            (*__p___2) --;
            if (! (tmp___10 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      break;
    }
    cy = DO_mpn_sublsh_n(r1, (mp_srcptr )(pp + 11L * n___0), spt, 20U, wsi);
    while (1) {
      __p___3 = r1 + spt;
      __x___3 = *__p___3;
      *__p___3 = __x___3 - cy;
      if (__x___3 < cy) {
        while (1) {
          __p___3 ++;
          tmp___13 = *__p___3;
          (*__p___3) --;
          if (! (tmp___13 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    while (1) {
      while (1) {
        __p___4 = pp + n3;
        __x___4 = *__p___4;
        *__p___4 = __x___4 - (*((pp + 11L * n___0) + 0) >> 4);
        if (__x___4 < *((pp + 11L * n___0) + 0) >> 4) {
          while (1) {
            __p___4 ++;
            tmp___16 = *__p___4;
            (*__p___4) --;
            if (! (tmp___16 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      __cy___0 = DO_mpn_sublsh_n(pp + n3, (mp_srcptr )((pp + 11L * n___0) + 1), spt - 1L,
                                 60U, wsi);
      while (1) {
        __p___5 = ((pp + n3) + spt) - 1;
        __x___5 = *__p___5;
        *__p___5 = __x___5 - __cy___0;
        if (__x___5 < __cy___0) {
          while (1) {
            __p___5 ++;
            tmp___19 = *__p___5;
            (*__p___5) --;
            if (! (tmp___19 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      break;
    }
  }
  tmp___20 = DO_mpn_sublsh_n((pp + n3) + n___0, (mp_srcptr )pp, 2L * n___0, 20U, wsi);
  *((pp + n3) + n3) -= tmp___20;
  while (1) {
    while (1) {
      __p___6 = r1 + n___0;
      __x___6 = *__p___6;
      *__p___6 = __x___6 - (*(pp + 0) >> 4);
      if (__x___6 < *(pp + 0) >> 4) {
        while (1) {
          __p___6 ++;
          tmp___23 = *__p___6;
          (*__p___6) --;
          if (! (tmp___23 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    __cy___1 = DO_mpn_sublsh_n(r1 + n___0, (mp_srcptr )(pp + 1), 2L * n___0 - 1L,
                               60U, wsi);
    while (1) {
      __p___7 = ((r1 + n___0) + 2L * n___0) - 1;
      __x___7 = *__p___7;
      *__p___7 = __x___7 - __cy___1;
      if (__x___7 < __cy___1) {
        while (1) {
          __p___7 ++;
          tmp___26 = *__p___7;
          (*__p___7) --;
          if (! (tmp___26 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    break;
  }
  __gmpn_add_n(wsi, (mp_srcptr )r1, (mp_srcptr )(pp + n3), n3p1);
  __gmpn_sub_n(pp + n3, (mp_srcptr )(pp + n3), (mp_srcptr )r1, n3p1);
  while (1) {
    __mp_ptr_swap__tmp = r1;
    r1 = wsi;
    wsi = __mp_ptr_swap__tmp;
    break;
  }
  tmp___27 = DO_mpn_sublsh_n(r5 + n___0, (mp_srcptr )pp, 2L * n___0, 10U, wsi);
  *(r5 + n3) -= tmp___27;
  while (1) {
    while (1) {
      __p___8 = (pp + 7L * n___0) + n___0;
      __x___8 = *__p___8;
      *__p___8 = __x___8 - (*(pp + 0) >> 2);
      if (__x___8 < *(pp + 0) >> 2) {
        while (1) {
          __p___8 ++;
          tmp___30 = *__p___8;
          (*__p___8) --;
          if (! (tmp___30 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    __cy___2 = DO_mpn_sublsh_n((pp + 7L * n___0) + n___0, (mp_srcptr )(pp + 1), 2L * n___0 - 1L,
                               62U, wsi);
    while (1) {
      __p___9 = (((pp + 7L * n___0) + n___0) + 2L * n___0) - 1;
      __x___9 = *__p___9;
      *__p___9 = __x___9 - __cy___2;
      if (__x___9 < __cy___2) {
        while (1) {
          __p___9 ++;
          tmp___33 = *__p___9;
          (*__p___9) --;
          if (! (tmp___33 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    break;
  }
  __gmpn_sub_n(wsi, (mp_srcptr )r5, (mp_srcptr )(pp + 7L * n___0), n3p1);
  __gmpn_add_n(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )r5, n3p1);
  while (1) {
    __mp_ptr_swap__tmp___0 = r5;
    r5 = wsi;
    wsi = __mp_ptr_swap__tmp___0;
    break;
  }
  tmp___34 = __gmpn_sub_n(r3 + n___0, (mp_srcptr )(r3 + n___0), (mp_srcptr )pp, 2L * n___0);
  *(r3 + n3) -= tmp___34;
  __gmpn_submul_1(pp + n3, (mp_srcptr )r5, n3p1, (mp_limb_t )257);
  __gmpn_divexact_1(pp + n3, (mp_srcptr )(pp + n3), n3p1, 2835UL << 2);
  if ((*((pp + n3) + n3) & (0xffffffffffffffffUL << 61)) != 0UL) {
    *((pp + n3) + n3) |= 0xffffffffffffffffUL << 62;
  }
  __gmpn_addmul_1(r5, (mp_srcptr )(pp + n3), n3p1, (mp_limb_t )60);
  tmp___35 = __gmpn_bdiv_dbm1c(r5, (mp_srcptr )r5, n3p1, 72340172838076673UL, (mp_limb_t )0);
  DO_mpn_sublsh_n(pp + 7L * n___0, (mp_srcptr )r3, n3p1, 5U, wsi);
  __gmpn_submul_1(r1, (mp_srcptr )(pp + 7L * n___0), n3p1, (mp_limb_t )100);
  DO_mpn_sublsh_n(r1, (mp_srcptr )r3, n3p1, 9U, wsi);
  __gmpn_divexact_1(r1, (mp_srcptr )r1, n3p1, (mp_limb_t )42525L);
  __gmpn_submul_1(pp + 7L * n___0, (mp_srcptr )r1, n3p1, (mp_limb_t )225);
  __gmpn_divexact_1(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), n3p1, 9UL << 2);
  __gmpn_sub_n(r3, (mp_srcptr )r3, (mp_srcptr )(pp + 7L * n___0), n3p1);
  __gmpn_sub_n(pp + n3, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )(pp + n3), n3p1);
  __gmpn_rshift(pp + n3, (mp_srcptr )(pp + n3), n3p1, 1U);
  __gmpn_sub_n(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )(pp + n3),
               n3p1);
  __gmpn_add_n(r5, (mp_srcptr )r5, (mp_srcptr )r1, n3p1);
  __gmpn_rshift(r5, (mp_srcptr )r5, n3p1, 1U);
  __gmpn_sub_n(r3, (mp_srcptr )r3, (mp_srcptr )r1, n3p1);
  __gmpn_sub_n(r1, (mp_srcptr )r1, (mp_srcptr )r5, n3p1);
  cy = __gmpn_add_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )r5, n___0);
  cy = __gmpn_add_1(pp + 2L * n___0, (mp_srcptr )(r5 + n___0), n___0, cy);
  while (1) {
    __p___10 = r5 + 2L * n___0;
    __x___10 = *__p___10 + cy;
    *__p___10 = __x___10;
    if (__x___10 < cy) {
      while (1) {
        __p___10 ++;
        (*__p___10) ++;
        if (! (*__p___10 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___37 = __gmpn_add_n(pp + n3, (mp_srcptr )(pp + n3), (mp_srcptr )(r5 + 2L * n___0),
                          n___0);
  cy = *(r5 + n3) + tmp___37;
  while (1) {
    __p___11 = (pp + n3) + n___0;
    __x___11 = *__p___11 + cy;
    *__p___11 = __x___11;
    if (__x___11 < cy) {
      while (1) {
        __p___11 ++;
        (*__p___11) ++;
        if (! (*__p___11 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___39 = __gmpn_add_n(pp + 5L * n___0, (mp_srcptr )(pp + 5L * n___0), (mp_srcptr )r3,
                          n___0);
  *(pp + 2L * n3) += tmp___39;
  cy = __gmpn_add_1(pp + 2L * n3, (mp_srcptr )(r3 + n___0), n___0, *(pp + 2L * n3));
  while (1) {
    __p___12 = r3 + 2L * n___0;
    __x___12 = *__p___12 + cy;
    *__p___12 = __x___12;
    if (__x___12 < cy) {
      while (1) {
        __p___12 ++;
        (*__p___12) ++;
        if (! (*__p___12 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___41 = __gmpn_add_n(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )(r3 + 2L * n___0),
                          n___0);
  cy = *(r3 + n3) + tmp___41;
  while (1) {
    __p___13 = pp + 8L * n___0;
    __x___13 = *__p___13 + cy;
    *__p___13 = __x___13;
    if (__x___13 < cy) {
      while (1) {
        __p___13 ++;
        (*__p___13) ++;
        if (! (*__p___13 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___43 = __gmpn_add_n(pp + 9L * n___0, (mp_srcptr )(pp + 9L * n___0), (mp_srcptr )r1,
                          n___0);
  *(pp + 10L * n___0) += tmp___43;
  if (half) {
    cy = __gmpn_add_1(pp + 10L * n___0, (mp_srcptr )(r1 + n___0), n___0, *(pp + 10L * n___0));
    while (1) {
      __p___14 = r1 + 2L * n___0;
      __x___14 = *__p___14 + cy;
      *__p___14 = __x___14;
      if (__x___14 < cy) {
        while (1) {
          __p___14 ++;
          (*__p___14) ++;
          if (! (*__p___14 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    tmp___47 = __builtin_expect((long )((spt > n___0) != 0), 1L);
    if (tmp___47) {
      tmp___45 = __gmpn_add_n(pp + 11L * n___0, (mp_srcptr )(pp + 11L * n___0), (mp_srcptr )(r1 + 2L * n___0),
                              n___0);
      cy = *(r1 + n3) + tmp___45;
      while (1) {
        __p___15 = pp + 4L * n3;
        __x___15 = *__p___15 + cy;
        *__p___15 = __x___15;
        if (__x___15 < cy) {
          while (1) {
            __p___15 ++;
            (*__p___15) ++;
            if (! (*__p___15 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    } else {
      __gmpn_add_n(pp + 11L * n___0, (mp_srcptr )(pp + 11L * n___0), (mp_srcptr )(r1 + 2L * n___0),
                   spt);
    }
  } else {
    __gmpn_add_1(pp + 10L * n___0, (mp_srcptr )(r1 + n___0), spt, *(pp + 10L * n___0));
  }
  return;
}
}
#pragma merger("0","./toom_interpolate_16pts.i","")
static mp_limb_t DO_mpn_sublsh_n___0(mp_ptr dst , mp_srcptr src , mp_size_t n___0 ,
                                     unsigned int s , mp_ptr ws )
{
  mp_limb_t __cy ;
  mp_limb_t tmp ;

  {
  __cy = __gmpn_lshift(ws, src, n___0, s);
  tmp = __gmpn_sub_n(dst, (mp_srcptr )dst, (mp_srcptr )ws, n___0);
  return (__cy + tmp);
}
}
void __gmpn_toom_interpolate_16pts(mp_ptr pp , mp_ptr r1 , mp_ptr r3 , mp_ptr r5 ,
                                   mp_ptr r7 , mp_size_t n___0 , mp_size_t spt , int half ,
                                   mp_ptr wsi )
{
  mp_limb_t cy ;
  mp_size_t n3 ;
  mp_size_t n3p1 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___1 ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t tmp___4 ;
  mp_limb_t __cy ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  mp_limb_t tmp___7 ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  mp_limb_t tmp___10 ;
  mp_limb_t __x___3 ;
  mp_ptr __p___3 ;
  mp_limb_t tmp___13 ;
  mp_limb_t __cy___0 ;
  mp_limb_t __x___4 ;
  mp_ptr __p___4 ;
  mp_limb_t tmp___16 ;
  mp_limb_t __x___5 ;
  mp_ptr __p___5 ;
  mp_limb_t tmp___19 ;
  mp_limb_t __x___6 ;
  mp_ptr __p___6 ;
  mp_limb_t tmp___22 ;
  mp_limb_t __cy___1 ;
  mp_limb_t __x___7 ;
  mp_ptr __p___7 ;
  mp_limb_t tmp___25 ;
  mp_limb_t __x___8 ;
  mp_ptr __p___8 ;
  mp_limb_t tmp___28 ;
  mp_limb_t tmp___29 ;
  mp_limb_t __cy___2 ;
  mp_limb_t __x___9 ;
  mp_ptr __p___9 ;
  mp_limb_t tmp___32 ;
  mp_limb_t __x___10 ;
  mp_ptr __p___10 ;
  mp_limb_t tmp___35 ;
  mp_ptr __mp_ptr_swap__tmp ;
  mp_limb_t tmp___36 ;
  mp_limb_t __cy___3 ;
  mp_limb_t __x___11 ;
  mp_ptr __p___11 ;
  mp_limb_t tmp___39 ;
  mp_limb_t __x___12 ;
  mp_ptr __p___12 ;
  mp_limb_t tmp___42 ;
  mp_ptr __mp_ptr_swap__tmp___0 ;
  mp_limb_t __cy___4 ;
  mp_limb_t __x___13 ;
  mp_ptr __p___13 ;
  mp_limb_t tmp___45 ;
  mp_limb_t __x___14 ;
  mp_ptr __p___14 ;
  mp_limb_t tmp___48 ;
  mp_ptr __mp_ptr_swap__tmp___1 ;
  mp_limb_t tmp___49 ;
  mp_limb_t __x___15 ;
  mp_ptr __p___15 ;
  mp_limb_t tmp___51 ;
  mp_limb_t __x___16 ;
  mp_ptr __p___16 ;
  mp_limb_t tmp___53 ;
  mp_limb_t __x___17 ;
  mp_ptr __p___17 ;
  mp_limb_t tmp___55 ;
  mp_limb_t __x___18 ;
  mp_ptr __p___18 ;
  mp_limb_t tmp___57 ;
  mp_limb_t __x___19 ;
  mp_ptr __p___19 ;
  mp_limb_t tmp___59 ;
  mp_limb_t __x___20 ;
  mp_ptr __p___20 ;
  mp_limb_t tmp___61 ;
  mp_limb_t __x___21 ;
  mp_ptr __p___21 ;
  mp_limb_t tmp___63 ;
  mp_limb_t __x___22 ;
  mp_ptr __p___22 ;
  long tmp___65 ;

  {
  n3 = 3L * n___0;
  n3p1 = n3 + 1L;
  while (1) {
    break;
  }
  if (half != 0) {
    cy = __gmpn_sub_n(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )(pp + 15L * n___0),
                      spt);
    while (1) {
      __p = (pp + 7L * n___0) + spt;
      __x = *__p;
      *__p = __x - cy;
      if (__x < cy) {
        while (1) {
          __p ++;
          tmp___1 = *__p;
          (*__p) --;
          if (! (tmp___1 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    cy = DO_mpn_sublsh_n___0(r3, (mp_srcptr )(pp + 15L * n___0), spt, 14U, wsi);
    while (1) {
      __p___0 = r3 + spt;
      __x___0 = *__p___0;
      *__p___0 = __x___0 - cy;
      if (__x___0 < cy) {
        while (1) {
          __p___0 ++;
          tmp___4 = *__p___0;
          (*__p___0) --;
          if (! (tmp___4 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    while (1) {
      while (1) {
        __p___1 = pp + n3;
        __x___1 = *__p___1;
        *__p___1 = __x___1 - (*((pp + 15L * n___0) + 0) >> 2);
        if (__x___1 < *((pp + 15L * n___0) + 0) >> 2) {
          while (1) {
            __p___1 ++;
            tmp___7 = *__p___1;
            (*__p___1) --;
            if (! (tmp___7 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      __cy = DO_mpn_sublsh_n___0(pp + n3, (mp_srcptr )((pp + 15L * n___0) + 1), spt - 1L,
                                 62U, wsi);
      while (1) {
        __p___2 = ((pp + n3) + spt) - 1;
        __x___2 = *__p___2;
        *__p___2 = __x___2 - __cy;
        if (__x___2 < __cy) {
          while (1) {
            __p___2 ++;
            tmp___10 = *__p___2;
            (*__p___2) --;
            if (! (tmp___10 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      break;
    }
    cy = DO_mpn_sublsh_n___0(pp + 11L * n___0, (mp_srcptr )(pp + 15L * n___0), spt,
                             28U, wsi);
    while (1) {
      __p___3 = (pp + 11L * n___0) + spt;
      __x___3 = *__p___3;
      *__p___3 = __x___3 - cy;
      if (__x___3 < cy) {
        while (1) {
          __p___3 ++;
          tmp___13 = *__p___3;
          (*__p___3) --;
          if (! (tmp___13 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    while (1) {
      while (1) {
        __p___4 = r5;
        __x___4 = *__p___4;
        *__p___4 = __x___4 - (*((pp + 15L * n___0) + 0) >> 4);
        if (__x___4 < *((pp + 15L * n___0) + 0) >> 4) {
          while (1) {
            __p___4 ++;
            tmp___16 = *__p___4;
            (*__p___4) --;
            if (! (tmp___16 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      __cy___0 = DO_mpn_sublsh_n___0(r5, (mp_srcptr )((pp + 15L * n___0) + 1), spt - 1L,
                                     60U, wsi);
      while (1) {
        __p___5 = (r5 + spt) - 1;
        __x___5 = *__p___5;
        *__p___5 = __x___5 - __cy___0;
        if (__x___5 < __cy___0) {
          while (1) {
            __p___5 ++;
            tmp___19 = *__p___5;
            (*__p___5) --;
            if (! (tmp___19 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      break;
    }
    cy = DO_mpn_sublsh_n___0(r1 + 0, (mp_srcptr )(pp + 15L * n___0), spt, 42U, wsi);
    while (1) {
      __p___6 = (r1 + spt) + 0;
      __x___6 = *__p___6;
      *__p___6 = __x___6 - cy;
      if (__x___6 < cy) {
        while (1) {
          __p___6 ++;
          tmp___22 = *__p___6;
          (*__p___6) --;
          if (! (tmp___22 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    while (1) {
      while (1) {
        __p___7 = r7;
        __x___7 = *__p___7;
        *__p___7 = __x___7 - (*((pp + 15L * n___0) + 0) >> 6);
        if (__x___7 < *((pp + 15L * n___0) + 0) >> 6) {
          while (1) {
            __p___7 ++;
            tmp___25 = *__p___7;
            (*__p___7) --;
            if (! (tmp___25 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      __cy___1 = DO_mpn_sublsh_n___0(r7, (mp_srcptr )((pp + 15L * n___0) + 1), spt - 1L,
                                     58U, wsi);
      while (1) {
        __p___8 = (r7 + spt) - 1;
        __x___8 = *__p___8;
        *__p___8 = __x___8 - __cy___1;
        if (__x___8 < __cy___1) {
          while (1) {
            __p___8 ++;
            tmp___28 = *__p___8;
            (*__p___8) --;
            if (! (tmp___28 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
      break;
    }
  }
  tmp___29 = DO_mpn_sublsh_n___0(r5 + n___0, (mp_srcptr )pp, 2L * n___0, 28U, wsi);
  *(r5 + n3) -= tmp___29;
  while (1) {
    while (1) {
      __p___9 = (pp + 11L * n___0) + n___0;
      __x___9 = *__p___9;
      *__p___9 = __x___9 - (*(pp + 0) >> 4);
      if (__x___9 < *(pp + 0) >> 4) {
        while (1) {
          __p___9 ++;
          tmp___32 = *__p___9;
          (*__p___9) --;
          if (! (tmp___32 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    __cy___2 = DO_mpn_sublsh_n___0((pp + 11L * n___0) + n___0, (mp_srcptr )(pp + 1),
                                   2L * n___0 - 1L, 60U, wsi);
    while (1) {
      __p___10 = (((pp + 11L * n___0) + n___0) + 2L * n___0) - 1;
      __x___10 = *__p___10;
      *__p___10 = __x___10 - __cy___2;
      if (__x___10 < __cy___2) {
        while (1) {
          __p___10 ++;
          tmp___35 = *__p___10;
          (*__p___10) --;
          if (! (tmp___35 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    break;
  }
  __gmpn_sub_n(wsi, (mp_srcptr )r5, (mp_srcptr )(pp + 11L * n___0), n3p1);
  __gmpn_add_n(pp + 11L * n___0, (mp_srcptr )(pp + 11L * n___0), (mp_srcptr )r5, n3p1);
  while (1) {
    __mp_ptr_swap__tmp = r5;
    r5 = wsi;
    wsi = __mp_ptr_swap__tmp;
    break;
  }
  tmp___36 = DO_mpn_sublsh_n___0((pp + n3) + n___0, (mp_srcptr )pp, 2L * n___0, 14U,
                                 wsi);
  *((pp + n3) + n3) -= tmp___36;
  while (1) {
    while (1) {
      __p___11 = r3 + n___0;
      __x___11 = *__p___11;
      *__p___11 = __x___11 - (*(pp + 0) >> 2);
      if (__x___11 < *(pp + 0) >> 2) {
        while (1) {
          __p___11 ++;
          tmp___39 = *__p___11;
          (*__p___11) --;
          if (! (tmp___39 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    __cy___3 = DO_mpn_sublsh_n___0(r3 + n___0, (mp_srcptr )(pp + 1), 2L * n___0 - 1L,
                                   62U, wsi);
    while (1) {
      __p___12 = ((r3 + n___0) + 2L * n___0) - 1;
      __x___12 = *__p___12;
      *__p___12 = __x___12 - __cy___3;
      if (__x___12 < __cy___3) {
        while (1) {
          __p___12 ++;
          tmp___42 = *__p___12;
          (*__p___12) --;
          if (! (tmp___42 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    break;
  }
  __gmpn_add_n(wsi, (mp_srcptr )r3, (mp_srcptr )(pp + n3), n3p1);
  __gmpn_sub_n(pp + n3, (mp_srcptr )(pp + n3), (mp_srcptr )r3, n3p1);
  while (1) {
    __mp_ptr_swap__tmp___0 = r3;
    r3 = wsi;
    wsi = __mp_ptr_swap__tmp___0;
    break;
  }
  cy = DO_mpn_sublsh_n___0((r7 + n___0) + 0, (mp_srcptr )pp, 2L * n___0, 42U, wsi);
  *(r7 + n3) -= cy;
  while (1) {
    while (1) {
      __p___13 = r1 + n___0;
      __x___13 = *__p___13;
      *__p___13 = __x___13 - (*(pp + 0) >> 6);
      if (__x___13 < *(pp + 0) >> 6) {
        while (1) {
          __p___13 ++;
          tmp___45 = *__p___13;
          (*__p___13) --;
          if (! (tmp___45 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    __cy___4 = DO_mpn_sublsh_n___0(r1 + n___0, (mp_srcptr )(pp + 1), 2L * n___0 - 1L,
                                   58U, wsi);
    while (1) {
      __p___14 = ((r1 + n___0) + 2L * n___0) - 1;
      __x___14 = *__p___14;
      *__p___14 = __x___14 - __cy___4;
      if (__x___14 < __cy___4) {
        while (1) {
          __p___14 ++;
          tmp___48 = *__p___14;
          (*__p___14) --;
          if (! (tmp___48 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    break;
  }
  __gmpn_sub_n(wsi, (mp_srcptr )r7, (mp_srcptr )r1, n3p1);
  __gmpn_add_n(r1, (mp_srcptr )r1, (mp_srcptr )r7, n3p1);
  while (1) {
    __mp_ptr_swap__tmp___1 = r7;
    r7 = wsi;
    wsi = __mp_ptr_swap__tmp___1;
    break;
  }
  tmp___49 = __gmpn_sub_n((pp + 7L * n___0) + n___0, (mp_srcptr )((pp + 7L * n___0) + n___0),
                          (mp_srcptr )pp, 2L * n___0);
  *((pp + 7L * n___0) + n3) -= tmp___49;
  __gmpn_submul_1(r5, (mp_srcptr )(pp + n3), n3p1, (mp_limb_t )1028);
  __gmpn_submul_1(r7, (mp_srcptr )r5, n3p1, (mp_limb_t )1300);
  __gmpn_submul_1(r7, (mp_srcptr )(pp + n3), n3p1, (mp_limb_t )1052688);
  __gmpn_divexact_1(r7, (mp_srcptr )r7, n3p1, 48070897875UL);
  __gmpn_submul_1(r5, (mp_srcptr )r7, n3p1, (mp_limb_t )12567555);
  __gmpn_divexact_1(r5, (mp_srcptr )r5, n3p1, 2835UL << 6);
  if ((*(r5 + n3) & (0xffffffffffffffffUL << 57)) != 0UL) {
    *(r5 + n3) |= 0xffffffffffffffffUL << 58;
  }
  __gmpn_submul_1(pp + n3, (mp_srcptr )r7, n3p1, (mp_limb_t )4095);
  __gmpn_addmul_1(pp + n3, (mp_srcptr )r5, n3p1, (mp_limb_t )240);
  __gmpn_divexact_1(pp + n3, (mp_srcptr )(pp + n3), n3p1, 255UL << 2);
  if ((*((pp + n3) + n3) & (0xffffffffffffffffUL << 61)) != 0UL) {
    *((pp + n3) + n3) |= 0xffffffffffffffffUL << 62;
  }
  DO_mpn_sublsh_n___0(r3, (mp_srcptr )(pp + 7L * n___0), n3p1, 7U, wsi);
  DO_mpn_sublsh_n___0(pp + 11L * n___0, (mp_srcptr )(pp + 7L * n___0), n3p1, 13U,
                      wsi);
  __gmpn_submul_1(pp + 11L * n___0, (mp_srcptr )r3, n3p1, (mp_limb_t )400);
  DO_mpn_sublsh_n___0(r1, (mp_srcptr )(pp + 7L * n___0), n3p1, 19U, wsi);
  __gmpn_submul_1(r1, (mp_srcptr )(pp + 11L * n___0), n3p1, (mp_limb_t )1428);
  __gmpn_submul_1(r1, (mp_srcptr )r3, n3p1, (mp_limb_t )112896);
  __gmpn_divexact_1(r1, (mp_srcptr )r1, n3p1, 46591793325UL);
  __gmpn_submul_1(pp + 11L * n___0, (mp_srcptr )r1, n3p1, (mp_limb_t )15181425);
  __gmpn_divexact_1(pp + 11L * n___0, (mp_srcptr )(pp + 11L * n___0), n3p1, 42525UL << 4);
  __gmpn_submul_1(r3, (mp_srcptr )r1, n3p1, (mp_limb_t )3969);
  __gmpn_submul_1(r3, (mp_srcptr )(pp + 11L * n___0), n3p1, (mp_limb_t )900);
  __gmpn_divexact_1(r3, (mp_srcptr )r3, n3p1, 9UL << 4);
  __gmpn_sub_n(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )r1, n3p1);
  __gmpn_sub_n(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )r3, n3p1);
  __gmpn_sub_n(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )(pp + 11L * n___0),
               n3p1);
  __gmpn_add_n(pp + n3, (mp_srcptr )(pp + 11L * n___0), (mp_srcptr )(pp + n3), n3p1);
  __gmpn_rshift(pp + n3, (mp_srcptr )(pp + n3), n3p1, 1U);
  __gmpn_sub_n(pp + 11L * n___0, (mp_srcptr )(pp + 11L * n___0), (mp_srcptr )(pp + n3),
               n3p1);
  __gmpn_sub_n(r5, (mp_srcptr )r3, (mp_srcptr )r5, n3p1);
  __gmpn_rshift(r5, (mp_srcptr )r5, n3p1, 1U);
  __gmpn_sub_n(r3, (mp_srcptr )r3, (mp_srcptr )r5, n3p1);
  __gmpn_add_n(r7, (mp_srcptr )r1, (mp_srcptr )r7, n3p1);
  __gmpn_rshift(r7, (mp_srcptr )r7, n3p1, 1U);
  __gmpn_sub_n(r1, (mp_srcptr )r1, (mp_srcptr )r7, n3p1);
  cy = __gmpn_add_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )r7, n___0);
  cy = __gmpn_add_1(pp + 2L * n___0, (mp_srcptr )(r7 + n___0), n___0, cy);
  while (1) {
    __p___15 = r7 + 2L * n___0;
    __x___15 = *__p___15 + cy;
    *__p___15 = __x___15;
    if (__x___15 < cy) {
      while (1) {
        __p___15 ++;
        (*__p___15) ++;
        if (! (*__p___15 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___51 = __gmpn_add_n(pp + n3, (mp_srcptr )(pp + n3), (mp_srcptr )(r7 + 2L * n___0),
                          n___0);
  cy = *(r7 + n3) + tmp___51;
  while (1) {
    __p___16 = pp + 4L * n___0;
    __x___16 = *__p___16 + cy;
    *__p___16 = __x___16;
    if (__x___16 < cy) {
      while (1) {
        __p___16 ++;
        (*__p___16) ++;
        if (! (*__p___16 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___53 = __gmpn_add_n(pp + 5L * n___0, (mp_srcptr )(pp + 5L * n___0), (mp_srcptr )r5,
                          n___0);
  *(pp + 2L * n3) += tmp___53;
  cy = __gmpn_add_1(pp + 2L * n3, (mp_srcptr )(r5 + n___0), n___0, *(pp + 2L * n3));
  while (1) {
    __p___17 = r5 + 2L * n___0;
    __x___17 = *__p___17 + cy;
    *__p___17 = __x___17;
    if (__x___17 < cy) {
      while (1) {
        __p___17 ++;
        (*__p___17) ++;
        if (! (*__p___17 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___55 = __gmpn_add_n(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )(r5 + 2L * n___0),
                          n___0);
  cy = *(r5 + n3) + tmp___55;
  while (1) {
    __p___18 = pp + 8L * n___0;
    __x___18 = *__p___18 + cy;
    *__p___18 = __x___18;
    if (__x___18 < cy) {
      while (1) {
        __p___18 ++;
        (*__p___18) ++;
        if (! (*__p___18 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___57 = __gmpn_add_n(pp + 9L * n___0, (mp_srcptr )(pp + 9L * n___0), (mp_srcptr )r3,
                          n___0);
  *(pp + 10L * n___0) += tmp___57;
  cy = __gmpn_add_1(pp + 10L * n___0, (mp_srcptr )(r3 + n___0), n___0, *(pp + 10L * n___0));
  while (1) {
    __p___19 = r3 + 2L * n___0;
    __x___19 = *__p___19 + cy;
    *__p___19 = __x___19;
    if (__x___19 < cy) {
      while (1) {
        __p___19 ++;
        (*__p___19) ++;
        if (! (*__p___19 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___59 = __gmpn_add_n(pp + 11L * n___0, (mp_srcptr )(pp + 11L * n___0), (mp_srcptr )(r3 + 2L * n___0),
                          n___0);
  cy = *(r3 + n3) + tmp___59;
  while (1) {
    __p___20 = pp + 12L * n___0;
    __x___20 = *__p___20 + cy;
    *__p___20 = __x___20;
    if (__x___20 < cy) {
      while (1) {
        __p___20 ++;
        (*__p___20) ++;
        if (! (*__p___20 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___61 = __gmpn_add_n(pp + 13L * n___0, (mp_srcptr )(pp + 13L * n___0), (mp_srcptr )r1,
                          n___0);
  *(pp + 14L * n___0) += tmp___61;
  if (half) {
    cy = __gmpn_add_1(pp + 14L * n___0, (mp_srcptr )(r1 + n___0), n___0, *(pp + 14L * n___0));
    while (1) {
      __p___21 = r1 + 2L * n___0;
      __x___21 = *__p___21 + cy;
      *__p___21 = __x___21;
      if (__x___21 < cy) {
        while (1) {
          __p___21 ++;
          (*__p___21) ++;
          if (! (*__p___21 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    tmp___65 = __builtin_expect((long )((spt > n___0) != 0), 1L);
    if (tmp___65) {
      tmp___63 = __gmpn_add_n(pp + 15L * n___0, (mp_srcptr )(pp + 15L * n___0), (mp_srcptr )(r1 + 2L * n___0),
                              n___0);
      cy = *(r1 + n3) + tmp___63;
      while (1) {
        __p___22 = pp + 16L * n___0;
        __x___22 = *__p___22 + cy;
        *__p___22 = __x___22;
        if (__x___22 < cy) {
          while (1) {
            __p___22 ++;
            (*__p___22) ++;
            if (! (*__p___22 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    } else {
      __gmpn_add_n(pp + 15L * n___0, (mp_srcptr )(pp + 15L * n___0), (mp_srcptr )(r1 + 2L * n___0),
                   spt);
    }
  } else {
    __gmpn_add_1(pp + 14L * n___0, (mp_srcptr )(r1 + n___0), spt, *(pp + 14L * n___0));
  }
  return;
}
}
#pragma merger("0","./toom_interpolate_5pts.i","")
void __gmpn_toom_interpolate_5pts(mp_ptr c , mp_ptr v2 , mp_ptr vm1 , mp_size_t k ,
                                  mp_size_t twor , int sa , mp_limb_t vinf0 )
{
  mp_limb_t cy ;
  mp_limb_t saved ;
  mp_size_t twok ;
  mp_size_t kk1 ;
  mp_ptr c1 ;
  mp_ptr v1 ;
  mp_ptr c3 ;
  mp_ptr vinf ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___2 ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t tmp___5 ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  long tmp___7 ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  mp_limb_t tmp___10 ;
  mp_limb_t __x___3 ;
  mp_ptr __p___3 ;
  mp_limb_t tmp___13 ;
  mp_limb_t __x___4 ;
  mp_ptr __p___4 ;

  {
  twok = k + k;
  kk1 = twok + 1L;
  c1 = c + k;
  v1 = c1 + k;
  c3 = v1 + k;
  vinf = c3 + k;
  if (sa) {
    __gmpn_add_n(v2, (mp_srcptr )v2, (mp_srcptr )vm1, kk1);
  } else {
    __gmpn_sub_n(v2, (mp_srcptr )v2, (mp_srcptr )vm1, kk1);
  }
  tmp = __gmpn_bdiv_dbm1c(v2, (mp_srcptr )v2, kk1, 6148914691236517205UL, (mp_limb_t )0);
  if (sa) {
    __gmpn_add_n(vm1, (mp_srcptr )v1, (mp_srcptr )vm1, kk1);
    __gmpn_rshift(vm1, (mp_srcptr )vm1, kk1, 1U);
  } else {
    __gmpn_sub_n(vm1, (mp_srcptr )v1, (mp_srcptr )vm1, kk1);
    __gmpn_rshift(vm1, (mp_srcptr )vm1, kk1, 1U);
  }
  tmp___0 = __gmpn_sub_n(v1, (mp_srcptr )v1, (mp_srcptr )c, twok);
  *(vinf + 0) -= tmp___0;
  __gmpn_sub_n(v2, (mp_srcptr )v2, (mp_srcptr )v1, kk1);
  __gmpn_rshift(v2, (mp_srcptr )v2, kk1, 1U);
  __gmpn_sub_n(v1, (mp_srcptr )v1, (mp_srcptr )vm1, kk1);
  cy = __gmpn_add_n(c1, (mp_srcptr )c1, (mp_srcptr )vm1, kk1);
  while (1) {
    __p = c3 + 1;
    __x = *__p + cy;
    *__p = __x;
    if (__x < cy) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  saved = *(vinf + 0);
  *(vinf + 0) = vinf0;
  cy = __gmpn_lshift(vm1, (mp_srcptr )vinf, twor, 1U);
  tmp___2 = __gmpn_sub_n(v2, (mp_srcptr )v2, (mp_srcptr )vm1, twor);
  cy += tmp___2;
  while (1) {
    __p___0 = v2 + twor;
    __x___0 = *__p___0;
    *__p___0 = __x___0 - cy;
    if (__x___0 < cy) {
      while (1) {
        __p___0 ++;
        tmp___5 = *__p___0;
        (*__p___0) --;
        if (! (tmp___5 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___7 = __builtin_expect((long )((twor > k + 1L) != 0), 1L);
  if (tmp___7) {
    cy = __gmpn_add_n(vinf, (mp_srcptr )vinf, (mp_srcptr )(v2 + k), k + 1L);
    while (1) {
      __p___1 = c3 + kk1;
      __x___1 = *__p___1 + cy;
      *__p___1 = __x___1;
      if (__x___1 < cy) {
        while (1) {
          __p___1 ++;
          (*__p___1) ++;
          if (! (*__p___1 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  } else {
    __gmpn_add_n(vinf, (mp_srcptr )vinf, (mp_srcptr )(v2 + k), twor);
  }
  cy = __gmpn_sub_n(v1, (mp_srcptr )v1, (mp_srcptr )vinf, twor);
  vinf0 = *(vinf + 0);
  *(vinf + 0) = saved;
  while (1) {
    __p___2 = v1 + twor;
    __x___2 = *__p___2;
    *__p___2 = __x___2 - cy;
    if (__x___2 < cy) {
      while (1) {
        __p___2 ++;
        tmp___10 = *__p___2;
        (*__p___2) --;
        if (! (tmp___10 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  cy = __gmpn_sub_n(c1, (mp_srcptr )c1, (mp_srcptr )v2, k);
  while (1) {
    __p___3 = v1;
    __x___3 = *__p___3;
    *__p___3 = __x___3 - cy;
    if (__x___3 < cy) {
      while (1) {
        __p___3 ++;
        tmp___13 = *__p___3;
        (*__p___3) --;
        if (! (tmp___13 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  cy = __gmpn_add_n(c3, (mp_srcptr )c3, (mp_srcptr )v2, k);
  *(vinf + 0) += cy;
  while (1) {
    break;
  }
  while (1) {
    __p___4 = vinf;
    __x___4 = *__p___4 + vinf0;
    *__p___4 = __x___4;
    if (__x___4 < vinf0) {
      while (1) {
        __p___4 ++;
        (*__p___4) ++;
        if (! (*__p___4 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  return;
}
}
#pragma merger("0","./toom_interpolate_6pts.i","")
void __gmpn_toom_interpolate_6pts(mp_ptr pp , mp_size_t n___0 , enum toom6_flags flags ,
                                  mp_ptr w4 , mp_ptr w2 , mp_ptr w1 , mp_size_t w0n )
{
  mp_limb_t cy ;
  mp_limb_t cy4 ;
  mp_limb_t cy6 ;
  mp_limb_t embankment ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___4 ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t tmp___7 ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  mp_limb_t tmp___10 ;
  mp_limb_t tmp___11 ;
  mp_limb_t tmp___12 ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  mp_limb_t tmp___14 ;
  long tmp___15 ;
  mp_limb_t __x___3 ;
  mp_ptr __p___3 ;
  mp_limb_t __x___4 ;
  mp_ptr __p___4 ;
  mp_limb_t tmp___19 ;
  mp_limb_t __x___5 ;
  mp_ptr __p___5 ;
  mp_limb_t tmp___22 ;
  mp_limb_t __x___6 ;
  mp_ptr __p___6 ;
  mp_limb_t __x___7 ;
  mp_ptr __p___7 ;
  mp_limb_t __x___8 ;
  mp_ptr __p___8 ;
  mp_limb_t tmp___27 ;
  long tmp___28 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  if ((unsigned int )flags & 2U) {
    __gmpn_add_n(w2, (mp_srcptr )w1, (mp_srcptr )w2, 2L * n___0 + 1L);
  } else {
    __gmpn_sub_n(w2, (mp_srcptr )w1, (mp_srcptr )w2, 2L * n___0 + 1L);
  }
  __gmpn_rshift(w2, (mp_srcptr )w2, 2L * n___0 + 1L, 2U);
  tmp = __gmpn_sub_n(w1, (mp_srcptr )w1, (mp_srcptr )pp, 2L * n___0);
  *(w1 + 2L * n___0) -= tmp;
  __gmpn_rshift(w1, (mp_srcptr )w1, 2L * n___0 + 1L, 1U);
  __gmpn_sub_n(w1, (mp_srcptr )w1, (mp_srcptr )w2, 2L * n___0 + 1L);
  __gmpn_rshift(w1, (mp_srcptr )w1, 2L * n___0 + 1L, 1U);
  if ((unsigned int )flags & 1U) {
    __gmpn_add_n(w4, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )w4, 2L * n___0 + 1L);
    __gmpn_rshift(w4, (mp_srcptr )w4, 2L * n___0 + 1L, 1U);
  } else {
    __gmpn_sub_n(w4, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )w4, 2L * n___0 + 1L);
    __gmpn_rshift(w4, (mp_srcptr )w4, 2L * n___0 + 1L, 1U);
  }
  __gmpn_sub_n(w2, (mp_srcptr )w2, (mp_srcptr )w4, 2L * n___0 + 1L);
  tmp___0 = __gmpn_bdiv_dbm1c(w2, (mp_srcptr )w2, 2L * n___0 + 1L, 6148914691236517205UL,
                              (mp_limb_t )0);
  __gmpn_sub_n(pp + 2L * n___0, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )w4, 2L * n___0 + 1L);
  tmp___1 = __gmpn_sub_n(pp + 2L * n___0, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )pp,
                         2L * n___0);
  *((pp + 2L * n___0) + 2L * n___0) -= tmp___1;
  __gmpn_sub_n(w1, (mp_srcptr )w1, (mp_srcptr )(pp + 2L * n___0), 2L * n___0 + 1L);
  tmp___2 = __gmpn_bdiv_dbm1c(w1, (mp_srcptr )w1, 2L * n___0 + 1L, 6148914691236517205UL,
                              (mp_limb_t )0);
  cy = __gmpn_add_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )w4, 2L * n___0 + 1L);
  while (1) {
    __p = (pp + 3L * n___0) + 1;
    __x = *__p + cy;
    *__p = __x;
    if (__x < cy) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  cy = __gmpn_lshift(w4, (mp_srcptr )(pp + 5L * n___0), w0n, 2U);
  tmp___4 = __gmpn_sub_n(w2, (mp_srcptr )w2, (mp_srcptr )w4, w0n);
  cy += tmp___4;
  while (1) {
    __p___0 = w2 + w0n;
    __x___0 = *__p___0;
    *__p___0 = __x___0 - cy;
    if (__x___0 < cy) {
      while (1) {
        __p___0 ++;
        tmp___7 = *__p___0;
        (*__p___0) --;
        if (! (tmp___7 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  cy = __gmpn_sub_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )w2, n___0);
  while (1) {
    __p___1 = pp + 2L * n___0;
    __x___1 = *__p___1;
    *__p___1 = __x___1 - cy;
    if (__x___1 < cy) {
      while (1) {
        __p___1 ++;
        tmp___10 = *__p___1;
        (*__p___1) --;
        if (! (tmp___10 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___11 = __gmpn_add_n(pp + 3L * n___0, (mp_srcptr )(pp + 3L * n___0), (mp_srcptr )w2,
                          n___0);
  cy4 = *((pp + 2L * n___0) + 2L * n___0) + tmp___11;
  tmp___12 = __gmpn_add_n(pp + 4L * n___0, (mp_srcptr )w1, (mp_srcptr )(w2 + n___0),
                          n___0);
  cy = *(w2 + 2L * n___0) + tmp___12;
  while (1) {
    __p___2 = w1 + n___0;
    __x___2 = *__p___2 + cy;
    *__p___2 = __x___2;
    if (__x___2 < cy) {
      while (1) {
        __p___2 ++;
        (*__p___2) ++;
        if (! (*__p___2 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___15 = __builtin_expect((long )((w0n > n___0) != 0), 1L);
  if (tmp___15) {
    tmp___14 = __gmpn_add_n(pp + 5L * n___0, (mp_srcptr )(pp + 5L * n___0), (mp_srcptr )(w1 + n___0),
                            n___0);
    cy6 = *(w1 + 2L * n___0) + tmp___14;
  } else {
    cy6 = __gmpn_add_n(pp + 5L * n___0, (mp_srcptr )(pp + 5L * n___0), (mp_srcptr )(w1 + n___0),
                       w0n);
  }
  cy = __gmpn_sub_n(pp + 2L * n___0, (mp_srcptr )(pp + 2L * n___0), (mp_srcptr )(pp + 4L * n___0),
                    n___0 + w0n);
  embankment = *((pp + 5L * n___0) + (w0n - 1L)) - 1UL;
  *((pp + 5L * n___0) + (w0n - 1L)) = (mp_limb_t )1;
  tmp___28 = __builtin_expect((long )((w0n > n___0) != 0), 1L);
  if (tmp___28) {
    if (cy4 > cy6) {
      while (1) {
        __p___3 = pp + 4L * n___0;
        __x___3 = *__p___3 + (cy4 - cy6);
        *__p___3 = __x___3;
        if (__x___3 < cy4 - cy6) {
          while (1) {
            __p___3 ++;
            (*__p___3) ++;
            if (! (*__p___3 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    } else {
      while (1) {
        __p___4 = pp + 4L * n___0;
        __x___4 = *__p___4;
        *__p___4 = __x___4 - (cy6 - cy4);
        if (__x___4 < cy6 - cy4) {
          while (1) {
            __p___4 ++;
            tmp___19 = *__p___4;
            (*__p___4) --;
            if (! (tmp___19 == 0UL)) {
              break;
            }
          }
        }
        break;
      }
    }
    while (1) {
      __p___5 = (pp + 3L * n___0) + w0n;
      __x___5 = *__p___5;
      *__p___5 = __x___5 - cy;
      if (__x___5 < cy) {
        while (1) {
          __p___5 ++;
          tmp___22 = *__p___5;
          (*__p___5) --;
          if (! (tmp___22 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    while (1) {
      __p___6 = (pp + 5L * n___0) + n___0;
      __x___6 = *__p___6 + cy6;
      *__p___6 = __x___6;
      if (__x___6 < cy6) {
        while (1) {
          __p___6 ++;
          (*__p___6) ++;
          if (! (*__p___6 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  } else {
    while (1) {
      __p___7 = pp + 4L * n___0;
      __x___7 = *__p___7 + cy4;
      *__p___7 = __x___7;
      if (__x___7 < cy4) {
        while (1) {
          __p___7 ++;
          (*__p___7) ++;
          if (! (*__p___7 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    while (1) {
      __p___8 = (pp + 3L * n___0) + w0n;
      __x___8 = *__p___8;
      *__p___8 = __x___8 - (cy + cy6);
      if (__x___8 < cy + cy6) {
        while (1) {
          __p___8 ++;
          tmp___27 = *__p___8;
          (*__p___8) --;
          if (! (tmp___27 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  }
  *((pp + 5L * n___0) + (w0n - 1L)) += embankment;
  return;
}
}
#pragma merger("0","./toom_interpolate_7pts.i","")
void __gmpn_toom_interpolate_7pts(mp_ptr rp , mp_size_t n___0 , enum toom7_flags flags ,
                                  mp_ptr w1 , mp_ptr w3 , mp_ptr w4 , mp_ptr w5 ,
                                  mp_size_t w6n , mp_ptr tp )
{
  mp_size_t m ;
  mp_limb_t cy ;
  mp_limb_t tmp ;
  mp_limb_t tmp___0 ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  mp_limb_t __x___3 ;
  mp_ptr __p___3 ;

  {
  m = 2L * n___0 + 1L;
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  __gmpn_add_n(w5, (mp_srcptr )w5, (mp_srcptr )w4, m);
  if ((unsigned int )flags & 1U) {
    __gmpn_add_n(w1, (mp_srcptr )w1, (mp_srcptr )w4, m);
    while (1) {
      break;
    }
    __gmpn_rshift(w1, (mp_srcptr )w1, m, 1U);
  } else {
    __gmpn_sub_n(w1, (mp_srcptr )w4, (mp_srcptr )w1, m);
    while (1) {
      break;
    }
    __gmpn_rshift(w1, (mp_srcptr )w1, m, 1U);
  }
  __gmpn_sub(w4, (mp_srcptr )w4, m, (mp_srcptr )rp, 2L * n___0);
  __gmpn_sub_n(w4, (mp_srcptr )w4, (mp_srcptr )w1, m);
  while (1) {
    break;
  }
  __gmpn_rshift(w4, (mp_srcptr )w4, m, 2U);
  *(tp + w6n) = __gmpn_lshift(tp, (mp_srcptr )(rp + 6L * n___0), w6n, 4U);
  __gmpn_sub(w4, (mp_srcptr )w4, m, (mp_srcptr )tp, w6n + 1L);
  if ((unsigned int )flags & 2U) {
    __gmpn_add_n(w3, (mp_srcptr )w3, (mp_srcptr )(rp + 2L * n___0), m);
    while (1) {
      break;
    }
    __gmpn_rshift(w3, (mp_srcptr )w3, m, 1U);
  } else {
    __gmpn_sub_n(w3, (mp_srcptr )(rp + 2L * n___0), (mp_srcptr )w3, m);
    while (1) {
      break;
    }
    __gmpn_rshift(w3, (mp_srcptr )w3, m, 1U);
  }
  __gmpn_sub_n(rp + 2L * n___0, (mp_srcptr )(rp + 2L * n___0), (mp_srcptr )w3, m);
  __gmpn_submul_1(w5, (mp_srcptr )(rp + 2L * n___0), m, (mp_limb_t )65);
  __gmpn_sub(rp + 2L * n___0, (mp_srcptr )(rp + 2L * n___0), m, (mp_srcptr )(rp + 6L * n___0),
             w6n);
  __gmpn_sub(rp + 2L * n___0, (mp_srcptr )(rp + 2L * n___0), m, (mp_srcptr )rp, 2L * n___0);
  __gmpn_addmul_1(w5, (mp_srcptr )(rp + 2L * n___0), m, (mp_limb_t )45);
  while (1) {
    break;
  }
  __gmpn_rshift(w5, (mp_srcptr )w5, m, 1U);
  __gmpn_sub_n(w4, (mp_srcptr )w4, (mp_srcptr )(rp + 2L * n___0), m);
  tmp = __gmpn_bdiv_dbm1c(w4, (mp_srcptr )w4, m, 6148914691236517205UL, (mp_limb_t )0);
  __gmpn_sub_n(rp + 2L * n___0, (mp_srcptr )(rp + 2L * n___0), (mp_srcptr )w4, m);
  __gmpn_sub_n(w1, (mp_srcptr )w5, (mp_srcptr )w1, m);
  __gmpn_lshift(tp, (mp_srcptr )w3, m, 3U);
  __gmpn_sub_n(w5, (mp_srcptr )w5, (mp_srcptr )tp, m);
  __gmpn_divexact_1(w5, (mp_srcptr )w5, m, (mp_limb_t )9);
  __gmpn_sub_n(w3, (mp_srcptr )w3, (mp_srcptr )w5, m);
  tmp___0 = __gmpn_bdiv_dbm1c(w1, (mp_srcptr )w1, m, 1229782938247303441UL, (mp_limb_t )0);
  __gmpn_add_n(w1, (mp_srcptr )w1, (mp_srcptr )w5, m);
  while (1) {
    break;
  }
  __gmpn_rshift(w1, (mp_srcptr )w1, m, 1U);
  __gmpn_sub_n(w5, (mp_srcptr )w5, (mp_srcptr )w1, m);
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  cy = __gmpn_add_n(rp + n___0, (mp_srcptr )(rp + n___0), (mp_srcptr )w1, m);
  while (1) {
    __p = ((rp + 2L * n___0) + n___0) + 1;
    __x = *__p + cy;
    *__p = __x;
    if (__x < cy) {
      while (1) {
        __p ++;
        (*__p) ++;
        if (! (*__p == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  cy = __gmpn_add_n(rp + 3L * n___0, (mp_srcptr )(rp + 3L * n___0), (mp_srcptr )w3,
                    n___0);
  while (1) {
    __p___0 = w3 + n___0;
    __x___0 = *__p___0 + (*((rp + 2L * n___0) + 2L * n___0) + cy);
    *__p___0 = __x___0;
    if (__x___0 < *((rp + 2L * n___0) + 2L * n___0) + cy) {
      while (1) {
        __p___0 ++;
        (*__p___0) ++;
        if (! (*__p___0 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  cy = __gmpn_add_n(rp + 4L * n___0, (mp_srcptr )(w3 + n___0), (mp_srcptr )w4, n___0);
  while (1) {
    __p___1 = w4 + n___0;
    __x___1 = *__p___1 + (*(w3 + 2L * n___0) + cy);
    *__p___1 = __x___1;
    if (__x___1 < *(w3 + 2L * n___0) + cy) {
      while (1) {
        __p___1 ++;
        (*__p___1) ++;
        if (! (*__p___1 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  cy = __gmpn_add_n(rp + 5L * n___0, (mp_srcptr )(w4 + n___0), (mp_srcptr )w5, n___0);
  while (1) {
    __p___2 = w5 + n___0;
    __x___2 = *__p___2 + (*(w4 + 2L * n___0) + cy);
    *__p___2 = __x___2;
    if (__x___2 < *(w4 + 2L * n___0) + cy) {
      while (1) {
        __p___2 ++;
        (*__p___2) ++;
        if (! (*__p___2 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  if (w6n > n___0 + 1L) {
    cy = __gmpn_add_n(rp + 6L * n___0, (mp_srcptr )(rp + 6L * n___0), (mp_srcptr )(w5 + n___0),
                      n___0 + 1L);
    while (1) {
      __p___3 = (rp + 7L * n___0) + 1;
      __x___3 = *__p___3 + cy;
      *__p___3 = __x___3;
      if (__x___3 < cy) {
        while (1) {
          __p___3 ++;
          (*__p___3) ++;
          if (! (*__p___3 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  } else {
    __gmpn_add_n(rp + 6L * n___0, (mp_srcptr )(rp + 6L * n___0), (mp_srcptr )(w5 + n___0),
                 w6n);
  }
  return;
}
}
#pragma merger("0","./toom_interpolate_8pts.i","")
static mp_limb_t DO_mpn_sublsh_n___1(mp_ptr dst , mp_srcptr src , mp_size_t n___0 ,
                                     unsigned int s , mp_ptr ws )
{
  mp_limb_t __cy ;
  mp_limb_t tmp ;

  {
  __cy = __gmpn_lshift(ws, src, n___0, s);
  tmp = __gmpn_sub_n(dst, (mp_srcptr )dst, (mp_srcptr )ws, n___0);
  return (__cy + tmp);
}
}
void __gmpn_toom_interpolate_8pts(mp_ptr pp , mp_size_t n___0 , mp_ptr r3 , mp_ptr r7 ,
                                  mp_size_t spt , mp_ptr ws )
{
  mp_limb_signed_t cy ;
  mp_ptr r5 ;
  mp_ptr r1 ;
  mp_limb_t __cy ;
  mp_limb_t __x ;
  mp_ptr __p ;
  mp_limb_t tmp___1 ;
  mp_limb_t __x___0 ;
  mp_ptr __p___0 ;
  mp_limb_t tmp___4 ;
  mp_limb_t tmp___5 ;
  mp_limb_t __x___1 ;
  mp_ptr __p___1 ;
  mp_limb_t tmp___8 ;
  mp_limb_t __cy___0 ;
  mp_limb_t __x___2 ;
  mp_ptr __p___2 ;
  mp_limb_t tmp___11 ;
  mp_limb_t __x___3 ;
  mp_ptr __p___3 ;
  mp_limb_t tmp___14 ;
  mp_limb_t tmp___15 ;
  mp_limb_t __x___4 ;
  mp_ptr __p___4 ;
  mp_limb_t tmp___18 ;
  mp_limb_t tmp___19 ;
  mp_limb_t tmp___20 ;
  mp_limb_t __x___5 ;
  mp_ptr __p___5 ;
  mp_limb_t tmp___23 ;
  mp_limb_t tmp___24 ;
  mp_limb_t tmp___25 ;
  mp_limb_t tmp___26 ;
  mp_ptr __p___6 ;
  mp_ptr tmp___27 ;
  mp_limb_t tmp___28 ;
  mp_limb_t __x___7 ;
  mp_ptr __p___7 ;
  mp_limb_t tmp___31 ;
  mp_limb_t __x___8 ;
  mp_ptr __p___8 ;
  mp_limb_t tmp___34 ;
  mp_limb_t tmp___35 ;
  mp_limb_t tmp___36 ;
  mp_limb_t tmp___37 ;
  mp_ptr __p___9 ;
  mp_ptr tmp___38 ;
  mp_limb_t tmp___39 ;
  mp_limb_t __x___10 ;
  mp_ptr __p___10 ;
  long tmp___42 ;
  mp_limb_t tmp___43 ;
  mp_limb_t __x___11 ;
  mp_ptr __p___11 ;
  mp_limb_t tmp___45 ;
  mp_limb_t __x___12 ;
  mp_ptr __p___12 ;
  long tmp___47 ;

  {
  r5 = pp + 3L * n___0;
  r1 = pp + 7L * n___0;
  while (1) {
    while (1) {
      __p = r3 + n___0;
      __x = *__p;
      *__p = __x - (*(pp + 0) >> 4);
      if (__x < *(pp + 0) >> 4) {
        while (1) {
          __p ++;
          tmp___1 = *__p;
          (*__p) --;
          if (! (tmp___1 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    __cy = DO_mpn_sublsh_n___1(r3 + n___0, (mp_srcptr )(pp + 1), 2L * n___0 - 1L,
                               60U, ws);
    while (1) {
      __p___0 = ((r3 + n___0) + 2L * n___0) - 1;
      __x___0 = *__p___0;
      *__p___0 = __x___0 - __cy;
      if (__x___0 < __cy) {
        while (1) {
          __p___0 ++;
          tmp___4 = *__p___0;
          (*__p___0) --;
          if (! (tmp___4 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    break;
  }
  tmp___5 = DO_mpn_sublsh_n___1(r3, (mp_srcptr )r1, spt, 12U, ws);
  cy = (mp_limb_signed_t )tmp___5;
  while (1) {
    __p___1 = r3 + spt;
    __x___1 = *__p___1;
    *__p___1 = __x___1 - (mp_limb_t )cy;
    if (__x___1 < (mp_limb_t )cy) {
      while (1) {
        __p___1 ++;
        tmp___8 = *__p___1;
        (*__p___1) --;
        if (! (tmp___8 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  while (1) {
    while (1) {
      __p___2 = r5 + n___0;
      __x___2 = *__p___2;
      *__p___2 = __x___2 - (*(pp + 0) >> 2);
      if (__x___2 < *(pp + 0) >> 2) {
        while (1) {
          __p___2 ++;
          tmp___11 = *__p___2;
          (*__p___2) --;
          if (! (tmp___11 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    __cy___0 = DO_mpn_sublsh_n___1(r5 + n___0, (mp_srcptr )(pp + 1), 2L * n___0 - 1L,
                                   62U, ws);
    while (1) {
      __p___3 = ((r5 + n___0) + 2L * n___0) - 1;
      __x___3 = *__p___3;
      *__p___3 = __x___3 - __cy___0;
      if (__x___3 < __cy___0) {
        while (1) {
          __p___3 ++;
          tmp___14 = *__p___3;
          (*__p___3) --;
          if (! (tmp___14 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
    break;
  }
  tmp___15 = DO_mpn_sublsh_n___1(r5, (mp_srcptr )r1, spt, 6U, ws);
  cy = (mp_limb_signed_t )tmp___15;
  while (1) {
    __p___4 = r5 + spt;
    __x___4 = *__p___4;
    *__p___4 = __x___4 - (mp_limb_t )cy;
    if (__x___4 < (mp_limb_t )cy) {
      while (1) {
        __p___4 ++;
        tmp___18 = *__p___4;
        (*__p___4) --;
        if (! (tmp___18 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___19 = __gmpn_sub_n(r7 + n___0, (mp_srcptr )(r7 + n___0), (mp_srcptr )pp, 2L * n___0);
  *(r7 + 3L * n___0) -= tmp___19;
  tmp___20 = __gmpn_sub_n(r7, (mp_srcptr )r7, (mp_srcptr )r1, spt);
  cy = (mp_limb_signed_t )tmp___20;
  while (1) {
    __p___5 = r7 + spt;
    __x___5 = *__p___5;
    *__p___5 = __x___5 - (mp_limb_t )cy;
    if (__x___5 < (mp_limb_t )cy) {
      while (1) {
        __p___5 ++;
        tmp___23 = *__p___5;
        (*__p___5) --;
        if (! (tmp___23 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  __gmpn_sub_n(r3, (mp_srcptr )r3, (mp_srcptr )r5, 3L * n___0 + 1L);
  __gmpn_rshift(r3, (mp_srcptr )r3, 3L * n___0 + 1L, 2U);
  __gmpn_sub_n(r5, (mp_srcptr )r5, (mp_srcptr )r7, 3L * n___0 + 1L);
  __gmpn_sub_n(r3, (mp_srcptr )r3, (mp_srcptr )r5, 3L * n___0 + 1L);
  __gmpn_divexact_1(r3, (mp_srcptr )r3, 3L * n___0 + 1L, (mp_limb_t )45);
  tmp___24 = __gmpn_bdiv_dbm1c(r5, (mp_srcptr )r5, 3L * n___0 + 1L, 6148914691236517205UL,
                               (mp_limb_t )0);
  DO_mpn_sublsh_n___1(r5, (mp_srcptr )r3, 3L * n___0 + 1L, 2U, ws);
  tmp___25 = __gmpn_add_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )r7, n___0);
  cy = (mp_limb_signed_t )tmp___25;
  tmp___26 = __gmpn_sub_n(pp + n___0, (mp_srcptr )(pp + n___0), (mp_srcptr )r5, n___0);
  cy = (mp_limb_signed_t )((mp_limb_t )cy - tmp___26);
  if (0L > cy) {
    while (1) {
      __p___6 = r7 + n___0;
      while (1) {
        tmp___27 = __p___6;
        __p___6 ++;
        tmp___28 = *tmp___27;
        (*tmp___27) --;
        if (! (tmp___28 == 0UL)) {
          break;
        }
      }
      break;
    }
  } else {
    while (1) {
      __p___7 = r7 + n___0;
      __x___7 = *__p___7 + (mp_limb_t )cy;
      *__p___7 = __x___7;
      if (__x___7 < (mp_limb_t )cy) {
        while (1) {
          __p___7 ++;
          (*__p___7) ++;
          if (! (*__p___7 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  }
  tmp___31 = __gmpn_sub_n(pp + 2L * n___0, (mp_srcptr )(r7 + n___0), (mp_srcptr )(r5 + n___0),
                          n___0);
  cy = (mp_limb_signed_t )tmp___31;
  while (1) {
    __p___8 = r7 + 2L * n___0;
    __x___8 = *__p___8;
    *__p___8 = __x___8 - (mp_limb_t )cy;
    if (__x___8 < (mp_limb_t )cy) {
      while (1) {
        __p___8 ++;
        tmp___34 = *__p___8;
        (*__p___8) --;
        if (! (tmp___34 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___35 = __gmpn_add_n(pp + 3L * n___0, (mp_srcptr )r5, (mp_srcptr )(r7 + 2L * n___0),
                          n___0 + 1L);
  cy = (mp_limb_signed_t )tmp___35;
  tmp___36 = __gmpn_add_n(r5 + 2L * n___0, (mp_srcptr )(r5 + 2L * n___0), (mp_srcptr )r3,
                          n___0);
  *(r5 + 3L * n___0) += tmp___36;
  tmp___37 = __gmpn_sub_n(pp + 3L * n___0, (mp_srcptr )(pp + 3L * n___0), (mp_srcptr )(r5 + 2L * n___0),
                          n___0 + 1L);
  cy = (mp_limb_signed_t )((mp_limb_t )cy - tmp___37);
  tmp___42 = __builtin_expect((long )((0L > cy) != 0), 0L);
  if (tmp___42) {
    while (1) {
      __p___9 = (r5 + n___0) + 1;
      while (1) {
        tmp___38 = __p___9;
        __p___9 ++;
        tmp___39 = *tmp___38;
        (*tmp___38) --;
        if (! (tmp___39 == 0UL)) {
          break;
        }
      }
      break;
    }
  } else {
    while (1) {
      __p___10 = (r5 + n___0) + 1;
      __x___10 = *__p___10 + (mp_limb_t )cy;
      *__p___10 = __x___10;
      if (__x___10 < (mp_limb_t )cy) {
        while (1) {
          __p___10 ++;
          (*__p___10) ++;
          if (! (*__p___10 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  }
  __gmpn_sub_n(pp + 4L * n___0, (mp_srcptr )(r5 + n___0), (mp_srcptr )(r3 + n___0),
               2L * n___0 + 1L);
  tmp___43 = __gmpn_add_1(pp + 6L * n___0, (mp_srcptr )(r3 + n___0), n___0, *(pp + 6L * n___0));
  cy = (mp_limb_signed_t )tmp___43;
  while (1) {
    __p___11 = r3 + 2L * n___0;
    __x___11 = *__p___11 + (mp_limb_t )cy;
    *__p___11 = __x___11;
    if (__x___11 < (mp_limb_t )cy) {
      while (1) {
        __p___11 ++;
        (*__p___11) ++;
        if (! (*__p___11 == 0UL)) {
          break;
        }
      }
    }
    break;
  }
  tmp___45 = __gmpn_add_n(pp + 7L * n___0, (mp_srcptr )(pp + 7L * n___0), (mp_srcptr )(r3 + 2L * n___0),
                          n___0);
  cy = (mp_limb_signed_t )tmp___45;
  tmp___47 = __builtin_expect((long )((spt != n___0) != 0), 1L);
  if (tmp___47) {
    while (1) {
      __p___12 = pp + 8L * n___0;
      __x___12 = *__p___12 + ((mp_limb_t )cy + *(r3 + 3L * n___0));
      *__p___12 = __x___12;
      if (__x___12 < (mp_limb_t )cy + *(r3 + 3L * n___0)) {
        while (1) {
          __p___12 ++;
          (*__p___12) ++;
          if (! (*__p___12 == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  } else {
    while (1) {
      break;
    }
  }
  return;
}
}
#pragma merger("0","./trace.i","")


extern __attribute__((__nothrow__)) int sprintf(char * __restrict __s , char const * __restrict __format
                                                 , ...) ;
extern int putchar(int __c ) ;
extern void perror(char const *__s ) ;
void mp_limb_trace(char const *name , mp_limb_t n___0 ) ;
void mpn_trace(char const *name , mp_srcptr ptr , mp_size_t size ) ;
void mpn_tracea(char const *name , mp_ptr const *a , int count , mp_size_t size ) ;
void mpn_tracen(char const *name , int num , mp_srcptr ptr , mp_size_t size ) ;
void mpn_trace_file(char const *filename , mp_srcptr ptr , mp_size_t size ) ;
void mpn_tracea_file(char const *filename , mp_ptr const *a , int count , mp_size_t size ) ;
void mpf_trace(char const *name , mpf_srcptr f ) ;
void mpq_trace(char const *name , mpq_srcptr q ) ;
void mpz_tracen(char const *name , int num , mpz_srcptr z ) ;
void byte_trace(char const *name , void const *ptr , mp_size_t size ) ;
void byte_tracen(char const *name , int num , void const *ptr , mp_size_t size ) ;
void d_trace(char const *name , double d ) ;
int mp_trace_base = 10;
void mp_trace_start(char const *name )
{
  int tmp ;
  int tmp___0 ;

  {
  if ((unsigned long )name != (unsigned long )((void *)0)) {
    if ((int const )*(name + 0) != 0) {
      printf((char const * __restrict )"%s=", name);
    }
  }
  if (mp_trace_base >= 0) {
    tmp = mp_trace_base;
  } else {
    tmp = - mp_trace_base;
  }
  switch (tmp) {
  case 2:
  printf((char const * __restrict )"bin:");
  break;
  case 8:
  printf((char const * __restrict )"oct:");
  break;
  case 10:
  break;
  case 16:
  printf((char const * __restrict )"0x");
  break;
  default:
  if (mp_trace_base >= 0) {
    tmp___0 = mp_trace_base;
  } else {
    tmp___0 = - mp_trace_base;
  }
  printf((char const * __restrict )"base%d:", tmp___0);
  break;
  }
  return;
}
}
void mpq_trace(char const *name , mpq_srcptr q )
{


  {
  mp_trace_start(name);
  if ((unsigned long )q == (unsigned long )((void *)0)) {
    printf((char const * __restrict )"NULL\n");
    return;
  }
  printf((char const * __restrict )"\n");
  return;
}
}
void mpz_trace(char const *name , mpz_srcptr z )
{
  mpq_t q ;
  mp_limb_t one ;

  {
  if ((unsigned long )z == (unsigned long )((void *)0)) {
    mpq_trace(name, (mpq_srcptr )((void *)0));
    return;
  }
  q[0]._mp_num._mp_alloc = (int )z->_mp_alloc;
  q[0]._mp_num._mp_size = (int )z->_mp_size;
  q[0]._mp_num._mp_d = (mp_limb_t *)z->_mp_d;
  one = (mp_limb_t )1;
  q[0]._mp_den._mp_alloc = 1;
  q[0]._mp_den._mp_size = 1;
  q[0]._mp_den._mp_d = & one;
  mpq_trace(name, (mpq_srcptr )(q));
  return;
}
}
void mpf_trace(char const *name , mpf_srcptr f )
{


  {
  mp_trace_start(name);
  if ((unsigned long )f == (unsigned long )((void *)0)) {
    printf((char const * __restrict )"NULL\n");
    return;
  }
  printf((char const * __restrict )"\n");
  return;
}
}
void mpz_tracen(char const *name , int num , mpz_srcptr z )
{


  {
  if ((unsigned long )name != (unsigned long )((void *)0)) {
    if ((int const )*(name + 0) != 0) {
      printf((char const * __restrict )name, num);
      putchar('=');
    }
  }
  mpz_trace((char const *)((void *)0), z);
  return;
}
}
void mpn_trace(char const *name , mp_srcptr ptr , mp_size_t size )
{
  mpz_t z ;

  {
  if ((unsigned long )ptr == (unsigned long )((void *)0)) {
    mpz_trace(name, (mpz_srcptr )((void *)0));
    return;
  }
  while (1) {
    while (size > 0L) {
      if (*(ptr + (size - 1L)) != 0UL) {
        break;
      }
      size --;
    }
    break;
  }
  z[0]._mp_d = (mp_ptr )ptr;
  z[0]._mp_size = (int )size;
  z[0]._mp_alloc = (int )size;
  mpz_trace(name, (mpz_srcptr )(z));
  return;
}
}
void mp_limb_trace(char const *name , mp_limb_t n___0 )
{


  {
  mpn_trace(name, (mp_srcptr )(& n___0), (mp_size_t )1);
  return;
}
}
void mpn_tracen(char const *name , int num , mp_srcptr ptr , mp_size_t size )
{


  {
  if ((unsigned long )name != (unsigned long )((void *)0)) {
    if ((int const )*(name + 0) != 0) {
      printf((char const * __restrict )name, num);
      putchar('=');
    }
  }
  mpn_trace((char const *)((void *)0), ptr, size);
  return;
}
}
void mpn_tracea(char const *name , mp_ptr const *a , int count , mp_size_t size )
{
  int i ;

  {
  i = 0;
  while (i < count) {
    mpn_tracen(name, i, (mp_srcptr )*(a + i), size);
    i ++;
  }
  return;
}
}
# 23023 "a.cil.c"
void mpn_tracea_file(char const *filename , mp_ptr const *a , int count , mp_size_t size )
{
  char *s ;
  int i ;
  struct tmp_reentrant_t *__tmp_marker ;
  size_t tmp___1 ;
  void *tmp___2 ;
  size_t tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  size_t tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;

  {
  __tmp_marker = (struct tmp_reentrant_t *)0;
  tmp___6 = strlen(filename);
  tmp___7 = __builtin_expect((long )((tmp___6 + 50UL <= 32512UL) != 0), 1L);
  if (tmp___7) {
    tmp___1 = strlen(filename);
    tmp___2 = alloca(tmp___1 + 50UL);
    tmp___5 = tmp___2;
  } else {
    tmp___3 = strlen(filename);
    tmp___4 = __gmp_tmp_reentrant_alloc(& __tmp_marker, tmp___3 + 50UL);
    tmp___5 = tmp___4;
  }
  s = (char *)tmp___5;
  i = 0;
  while (i < count) {
    sprintf((char * __restrict )s, (char const * __restrict )"%s%d", filename,
            i);

    i ++;
  }
  while (1) {
    tmp___8 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                               0L);
    if (tmp___8) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
void byte_trace(char const *name , void const *ptr , mp_size_t size )
{
  char const *fmt ;
  mp_size_t i ;

  {
  mp_trace_start(name);
  switch (mp_trace_base) {
  case 8:
  fmt = " %o";
  break;
  case 10:
  fmt = " %d";
  break;
  case 16:
  fmt = " %x";
  break;
  case -16:
  fmt = " %X";
  break;
  default:
  printf((char const * __restrict )"Oops, unsupported base in byte_trace\n");
  abort();
  break;
  }
  i = (mp_size_t )0;
  while (i < size) {
    printf((char const * __restrict )fmt, (int )*((unsigned char *)ptr + i));
    i ++;
  }
  printf((char const * __restrict )"\n");
  return;
}
}
void byte_tracen(char const *name , int num , void const *ptr , mp_size_t size )
{


  {
  if ((unsigned long )name != (unsigned long )((void *)0)) {
    if ((int const )*(name + 0) != 0) {
      printf((char const * __restrict )name, num);
      putchar('=');
    }
  }
  byte_trace((char const *)((void *)0), ptr, size);
  return;
}
}
void d_trace(char const *name , double d )
{
  union __anonunion_u_63425915 u ;
  int i ;

  {
  if ((unsigned long )name != (unsigned long )((void *)0)) {
    if ((int const )*(name + 0) != 0) {
      printf((char const * __restrict )"%s=", name);
    }
  }
  u.d = d;
  printf((char const * __restrict )"[");
  i = 0;
  while ((unsigned long )i < sizeof(u.b)) {
    if (i != 0) {
      printf((char const * __restrict )" ");
    }
    printf((char const * __restrict )"%02X", (int )u.b[i]);
    i ++;
  }
  printf((char const * __restrict )"] %.20g\n", d);
  return;
}
}
#pragma merger("0","./tstbit.i","")
int __gmpz_tstbit(mpz_srcptr u , mp_bitcnt_t bit_index ) __attribute__((__pure__)) ;
int __gmpz_tstbit(mpz_srcptr u , mp_bitcnt_t bit_index )
{
  mp_srcptr u_ptr ;
  mp_size_t size ;
  unsigned int abs_size ;
  mp_size_t tmp ;
  mp_size_t limb_index ;
  mp_srcptr p ;
  mp_limb_t limb ;

  {
  u_ptr = (mp_srcptr )u->_mp_d;
  size = (mp_size_t )u->_mp_size;
  if (size >= 0L) {
    tmp = size;
  } else {
    tmp = - size;
  }
  abs_size = (unsigned int )tmp;
  limb_index = (mp_size_t )(bit_index / 64UL);
  p = u_ptr + limb_index;
  if (limb_index >= (mp_size_t )abs_size) {
    return (size < 0L);
  }
  limb = (mp_limb_t )*p;
  if (size < 0L) {
    limb = - limb;
    while ((unsigned long )p != (unsigned long )u_ptr) {
      p --;
      if (*p != 0UL) {
        limb --;
        break;
      }
    }
  }
  return ((int )((limb >> bit_index % 64UL) & 1UL));
}
}
#pragma merger("0","./urandomb.i","")
void __gmpz_urandomb(mpz_ptr rop , __gmp_randstate_struct *rstate , mp_bitcnt_t nbits )
{
  mp_ptr rp ;
  mp_size_t size ;
  void *tmp___0 ;
  long tmp___1 ;
  gmp_randstate_ptr __rstate ;

  {
  size = (mp_size_t )((nbits + 63UL) / 64UL);
  tmp___1 = __builtin_expect((long )((size > (mp_size_t )rop->_mp_alloc) != 0), 0L);
  if (tmp___1) {
    tmp___0 = __gmpz_realloc(rop, size);
    rp = (mp_ptr )tmp___0;
  } else {
    rp = rop->_mp_d;
  }
  while (1) {
    __rstate = (gmp_randstate_ptr )rstate;
    (*(((gmp_randfnptr_t *)__rstate->_mp_algdata._mp_lc)->randget_fn))((__gmp_randstate_struct *)__rstate,
                                                                       rp, nbits);
    break;
  }
  while (1) {
    while (size > 0L) {
      if (*(rp + (size - 1L)) != 0UL) {
        break;
      }
      size --;
    }
    break;
  }
  rop->_mp_size = (int )size;
  return;
}
}
#pragma merger("0","./version.i","")
char const * const __gmp_version = (char const * const )"6.1.1";
#pragma merger("0","./xadd.i","")
void __gmpz_add(mpz_ptr w , mpz_srcptr u , mpz_srcptr v )
{
  mp_srcptr up ;
  mp_srcptr vp ;
  mp_ptr wp ;
  mp_size_t usize ;
  mp_size_t vsize ;
  mp_size_t wsize ;
  mp_size_t abs_usize ;
  mp_size_t abs_vsize ;
  mpz_srcptr __mpz_srcptr_swap__tmp ;
  mp_size_t __mp_size_t_swap__tmp ;
  mp_size_t __mp_size_t_swap__tmp___0 ;
  void *tmp___0 ;
  long tmp___1 ;
  int tmp___2 ;
  mp_limb_t cy_limb ;
  mp_limb_t tmp___3 ;

  {
  usize = (mp_size_t )u->_mp_size;
  vsize = (mp_size_t )v->_mp_size;
  if (usize >= 0L) {
    abs_usize = usize;
  } else {
    abs_usize = - usize;
  }
  if (vsize >= 0L) {
    abs_vsize = vsize;
  } else {
    abs_vsize = - vsize;
  }
  if (abs_usize < abs_vsize) {
    while (1) {
      __mpz_srcptr_swap__tmp = u;
      u = v;
      v = __mpz_srcptr_swap__tmp;
      break;
    }
    while (1) {
      __mp_size_t_swap__tmp = usize;
      usize = vsize;
      vsize = __mp_size_t_swap__tmp;
      break;
    }
    while (1) {
      __mp_size_t_swap__tmp___0 = abs_usize;
      abs_usize = abs_vsize;
      abs_vsize = __mp_size_t_swap__tmp___0;
      break;
    }
  }
  wsize = abs_usize + 1L;
  tmp___1 = __builtin_expect((long )((wsize > (mp_size_t )w->_mp_alloc) != 0), 0L);
  if (tmp___1) {
    tmp___0 = __gmpz_realloc(w, wsize);
    wp = (mp_ptr )tmp___0;
  } else {
    wp = w->_mp_d;
  }
  up = (mp_srcptr )u->_mp_d;
  vp = (mp_srcptr )v->_mp_d;
  if ((usize ^ vsize) < 0L) {
    if (abs_usize != abs_vsize) {
      __gmpn_sub(wp, up, abs_usize, vp, abs_vsize);
      wsize = abs_usize;
      while (1) {
        while (wsize > 0L) {
          if (*(wp + (wsize - 1L)) != 0UL) {
            break;
          }
          wsize --;
        }
        break;
      }
      if (usize < 0L) {
        wsize = - wsize;
      }
    } else {
      tmp___2 = __gmpn_cmp(up, vp, abs_usize);
      if (tmp___2 < 0) {
        __gmpn_sub_n(wp, vp, up, abs_usize);
        wsize = abs_usize;
        while (1) {
          while (wsize > 0L) {
            if (*(wp + (wsize - 1L)) != 0UL) {
              break;
            }
            wsize --;
          }
          break;
        }
        if (usize >= 0L) {
          wsize = - wsize;
        }
      } else {
        __gmpn_sub_n(wp, up, vp, abs_usize);
        wsize = abs_usize;
        while (1) {
          while (wsize > 0L) {
            if (*(wp + (wsize - 1L)) != 0UL) {
              break;
            }
            wsize --;
          }
          break;
        }
        if (usize < 0L) {
          wsize = - wsize;
        }
      }
    }
  } else {
    tmp___3 = __gmpn_add(wp, up, abs_usize, vp, abs_vsize);
    cy_limb = tmp___3;
    *(wp + abs_usize) = cy_limb;
    wsize = (mp_size_t )((mp_limb_t )abs_usize + cy_limb);
    if (usize < 0L) {
      wsize = - wsize;
    }
  }
  w->_mp_size = (int )wsize;
  return;
}
}
#pragma merger("0","./xcmp.i","")
int __gmpz_cmp(mpz_srcptr u , mpz_srcptr v ) __attribute__((__pure__)) ;
int __gmpz_cmp(mpz_srcptr u , mpz_srcptr v )
{
  mp_size_t usize ;
  mp_size_t vsize ;
  mp_size_t dsize ;
  mp_size_t asize ;
  mp_srcptr up ;
  mp_srcptr vp ;
  int cmp ;
  mp_size_t __gmp_i ;
  mp_limb_t __gmp_x ;
  mp_limb_t __gmp_y ;
  int tmp ;

  {
  usize = (mp_size_t )u->_mp_size;
  vsize = (mp_size_t )v->_mp_size;
  dsize = usize - vsize;
  if (dsize != 0L) {
    return ((int )dsize);
  }
  if (usize >= 0L) {
    asize = usize;
  } else {
    asize = - usize;
  }
  up = (mp_srcptr )u->_mp_d;
  vp = (mp_srcptr )v->_mp_d;
  while (1) {
    cmp = 0;
    __gmp_i = asize;
    while (1) {
      __gmp_i --;
      if (! (__gmp_i >= 0L)) {
        break;
      }
      __gmp_x = (mp_limb_t )*(up + __gmp_i);
      __gmp_y = (mp_limb_t )*(vp + __gmp_i);
      if (__gmp_x != __gmp_y) {
        if (__gmp_x > __gmp_y) {
          cmp = 1;
        } else {
          cmp = -1;
        }
        break;
      }
    }
    break;
  }
  if (usize >= 0L) {
    tmp = cmp;
  } else {
    tmp = - cmp;
  }
  return (tmp);
}
}
#pragma merger("0","./xmemory.i","")
void *tests_allocate(size_t size ) ;
void *tests_reallocate(void *ptr , size_t old_size , size_t new_size ) ;
void tests_free(void *ptr , size_t size ) ;
void tests_free_nosize(void *ptr ) ;
int tests_memory_valid(void *ptr ) ;
struct header *tests_memory_list = (struct header *)((void *)0);
struct header **tests_memory_find(void *ptr )
{
  struct header **hp ;

  {
  hp = & tests_memory_list;
  while ((unsigned long )*hp != (unsigned long )((void *)0)) {
    if ((unsigned long )(*hp)->ptr == (unsigned long )ptr) {
      return (hp);
    }
    hp = & (*hp)->next;
  }
  return ((struct header **)((void *)0));
}
}
int tests_memory_valid(void *ptr )
{
  struct header **tmp ;

  {
  tmp = tests_memory_find(ptr);
  return ((unsigned long )tmp != (unsigned long )((void *)0));
}
}
void *tests_allocate(size_t size )
{
  void *tmp ;

  {
  tmp = malloc(size);
  return (tmp);
}
}
void *tests_reallocate(void *ptr , size_t old_size , size_t new_size )
{
  void *tmp ;

  {
  tmp = realloc(ptr, new_size);
  return (tmp);
}
}
struct header **tests_free_find(void *ptr )
{


  {
  return ((struct header **)0);
}
}
void tests_free_nosize(void *ptr )
{


  {
  free(ptr);
  return;
}
}
void tests_free(void *ptr , size_t size )
{


  {
  tests_free_nosize(ptr);
  return;
}
}
void tests_memory_start(void)
{


  {
  __gmp_set_memory_functions(& tests_allocate, & tests_reallocate, & tests_free);
  return;
}
}
void tests_memory_end(void)
{
  struct header *h ;
  unsigned int count ;

  {
  if ((unsigned long )tests_memory_list != (unsigned long )((void *)0)) {
    printf((char const * __restrict )"tests_memory_end(): not all memory freed\n");
    count = 0U;
    h = tests_memory_list;
    while ((unsigned long )h != (unsigned long )((void *)0)) {
      count ++;
      h = h->next;
    }
    printf((char const * __restrict )"    %u blocks remaining\n", count)
                  ;
    abort();
  }
  return;
}
}
#pragma merger("0","./xmul.i","")
void __gmpz_mul(mpz_ptr w , mpz_srcptr u , mpz_srcptr v )
{
  mp_size_t usize ;
  mp_size_t vsize ;
  mp_size_t wsize ;
  mp_size_t sign_product ;
  mp_ptr up ;
  mp_ptr vp ;
  mp_ptr wp ;
  mp_ptr free_me ;
  size_t free_me_size ;
  mp_limb_t cy_limb ;
  struct tmp_reentrant_t *__tmp_marker ;
  mpz_srcptr __mpz_srcptr_swap__tmp ;
  mp_size_t __mp_size_t_swap__tmp ;
  void *tmp___0 ;
  long tmp___1 ;
  void *tmp___2 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  long tmp___7 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___8 ;
  mp_ptr tmp___9 ;
  mp_srcptr tmp___10 ;
  mp_ptr tmp___11 ;
  void *tmp___13 ;
  void *tmp___14 ;
  void *tmp___15 ;
  long tmp___16 ;
  mp_size_t __n___0 ;
  mp_ptr __dst___0 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___0 ;
  mp_srcptr tmp___17 ;
  mp_ptr tmp___18 ;
  mp_srcptr tmp___19 ;
  mp_ptr tmp___20 ;
  long tmp___21 ;

  {
  usize = (mp_size_t )u->_mp_size;
  vsize = (mp_size_t )v->_mp_size;
  sign_product = usize ^ vsize;
  if (usize >= 0L) {
    usize = usize;
  } else {
    usize = - usize;
  }
  if (vsize >= 0L) {
    vsize = vsize;
  } else {
    vsize = - vsize;
  }
  if (usize < vsize) {
    while (1) {
      __mpz_srcptr_swap__tmp = u;
      u = v;
      v = __mpz_srcptr_swap__tmp;
      break;
    }
    while (1) {
      __mp_size_t_swap__tmp = usize;
      usize = vsize;
      vsize = __mp_size_t_swap__tmp;
      break;
    }
  }
  if (vsize == 0L) {
    w->_mp_size = 0;
    return;
  }
  if (vsize == 1L) {
    tmp___1 = __builtin_expect((long )((usize + 1L > (mp_size_t )w->_mp_alloc) != 0),
                               0L);
    if (tmp___1) {
      tmp___0 = __gmpz_realloc(w, usize + 1L);
      wp = (mp_ptr )tmp___0;
    } else {
      wp = w->_mp_d;
    }
    cy_limb = __gmpn_mul_1(wp, (mp_srcptr )u->_mp_d, usize, *(v->_mp_d + 0));
    *(wp + usize) = cy_limb;
    usize += (mp_size_t )(cy_limb != 0UL);
    if (sign_product >= 0L) {
      w->_mp_size = (int )usize;
    } else {
      w->_mp_size = (int )(- usize);
    }
    return;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  free_me = (mp_ptr )((void *)0);
  up = (mp_ptr )u->_mp_d;
  vp = (mp_ptr )v->_mp_d;
  wp = w->_mp_d;
  wsize = usize + vsize;
  if ((mp_size_t )w->_mp_alloc < wsize) {
    if ((unsigned long )wp == (unsigned long )up) {
      free_me = wp;
      free_me_size = (size_t )w->_mp_alloc;
    } else
    if ((unsigned long )wp == (unsigned long )vp) {
      free_me = wp;
      free_me_size = (size_t )w->_mp_alloc;
    } else {
      (*__gmp_free_func)((void *)wp, (size_t )w->_mp_alloc * 8UL);
    }
    w->_mp_alloc = (int )wsize;
    tmp___2 = (*__gmp_allocate_func)((unsigned long )wsize * sizeof(mp_limb_t ));
    wp = (mp_limb_t *)tmp___2;
    w->_mp_d = wp;
  } else
  if ((unsigned long )wp == (unsigned long )up) {
    tmp___7 = __builtin_expect((long )(((unsigned long )usize * sizeof(mp_limb_t ) <= 32512UL) != 0),
                               1L);
    if (tmp___7) {
      tmp___4 = alloca((unsigned long )usize * sizeof(mp_limb_t ));
      tmp___6 = tmp___4;
    } else {
      tmp___5 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )usize * sizeof(mp_limb_t ));
      tmp___6 = tmp___5;
    }
    up = (mp_limb_t *)tmp___6;
    if ((unsigned long )wp == (unsigned long )vp) {
      vp = up;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (usize != 0L) {
          __n = usize - 1L;
          __dst = up;
          __src = (mp_srcptr )wp;
          tmp___8 = __src;
          __src ++;
          __x = (mp_limb_t )*tmp___8;
          if (__n != 0L) {
            while (1) {
              tmp___9 = __dst;
              __dst ++;
              *tmp___9 = __x;
              tmp___10 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___10;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___11 = __dst;
          __dst ++;
          *tmp___11 = __x;
        }
        break;
      }
      break;
    }
  } else
  if ((unsigned long )wp == (unsigned long )vp) {
    tmp___16 = __builtin_expect((long )(((unsigned long )vsize * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___16) {
      tmp___13 = alloca((unsigned long )vsize * sizeof(mp_limb_t ));
      tmp___15 = tmp___13;
    } else {
      tmp___14 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )vsize * sizeof(mp_limb_t ));
      tmp___15 = tmp___14;
    }
    vp = (mp_limb_t *)tmp___15;
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (vsize != 0L) {
          __n___0 = vsize - 1L;
          __dst___0 = vp;
          __src___0 = (mp_srcptr )wp;
          tmp___17 = __src___0;
          __src___0 ++;
          __x___0 = (mp_limb_t )*tmp___17;
          if (__n___0 != 0L) {
            while (1) {
              tmp___18 = __dst___0;
              __dst___0 ++;
              *tmp___18 = __x___0;
              tmp___19 = __src___0;
              __src___0 ++;
              __x___0 = (mp_limb_t )*tmp___19;
              __n___0 --;
              if (! __n___0) {
                break;
              }
            }
          }
          tmp___20 = __dst___0;
          __dst___0 ++;
          *tmp___20 = __x___0;
        }
        break;
      }
      break;
    }
  }
  if ((unsigned long )up == (unsigned long )vp) {
    __gmpn_sqr(wp, (mp_srcptr )up, usize);
    cy_limb = *(wp + (wsize - 1L));
  } else {
    cy_limb = __gmpn_mul(wp, (mp_srcptr )up, usize, (mp_srcptr )vp, vsize);
  }
  wsize -= (mp_size_t )(cy_limb == 0UL);
  if (sign_product < 0L) {
    w->_mp_size = (int )(- wsize);
  } else {
    w->_mp_size = (int )wsize;
  }
  if ((unsigned long )free_me != (unsigned long )((void *)0)) {
    (*__gmp_free_func)((void *)free_me, free_me_size * 8UL);
  }
  while (1) {
    tmp___21 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___21) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return;
}
}
# 23845 "a.cil.c"
#pragma merger("0","./xset_str.i","")
mp_size_t __gmpn_dc_set_str(mp_ptr rp , unsigned char const *str , size_t str_len ,
                            powers_t const *powtab , mp_ptr tp ) ;
mp_size_t __gmpn_bc_set_str(mp_ptr rp , unsigned char const *str , size_t str_len ,
                            int base ) ;
void __gmpn_set_str_compute_powtab(powers_t *powtab , mp_ptr powtab_mem , mp_size_t un ,
                                   int base ) ;
mp_size_t __gmpn_set_str(mp_ptr rp , unsigned char const *str , size_t str_len ,
                         int base )
{
  unsigned char const *s ;
  int next_bitpos ;
  mp_limb_t res_digit ;
  mp_size_t size ;
  int bits_per_indigit ;
  int inp_digit ;
  mp_size_t tmp ;
  mp_size_t tmp___0 ;
  mp_size_t tmp___1 ;
  mp_ptr powtab_mem ;
  mp_ptr tp ;
  powers_t powtab[64] ;
  int chars_per_limb ;
  mp_size_t size___0 ;
  mp_size_t un ;
  struct tmp_reentrant_t *__tmp_marker ;
  void *tmp___2 ;
  void *tmp___3 ;
  long tmp___4 ;

  {
  if ((base & (base - 1)) == 0) {
    bits_per_indigit = (int )__gmpn_bases[base].big_base;
    size = (mp_size_t )0;
    res_digit = (mp_limb_t )0;
    next_bitpos = 0;
    s = (str + str_len) - 1;
    while ((unsigned long )s >= (unsigned long )str) {
      inp_digit = (int )*s;
      res_digit |= ((mp_limb_t )inp_digit << next_bitpos) & 0xffffffffffffffffUL;
      next_bitpos += bits_per_indigit;
      if (next_bitpos >= 64) {
        tmp = size;
        size ++;
        *(rp + tmp) = res_digit;
        next_bitpos -= 64;
        res_digit = (mp_limb_t )(inp_digit >> (bits_per_indigit - next_bitpos));
      }
      s --;
    }
    if (res_digit != 0UL) {
      tmp___0 = size;
      size ++;
      *(rp + tmp___0) = res_digit;
    }
    return (size);
  }
  if (! (str_len >= 2000UL)) {
    tmp___1 = __gmpn_bc_set_str(rp, str, str_len, base);
    return (tmp___1);
  } else {
    __tmp_marker = (struct tmp_reentrant_t *)0;
    chars_per_limb = (int )__gmpn_bases[base].chars_per_limb;
    un = (mp_size_t )(str_len / (size_t )chars_per_limb + 1UL);
    tmp___2 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(un + 64L) * sizeof(mp_limb_t ));
    powtab_mem = (mp_limb_t *)tmp___2;
    __gmpn_set_str_compute_powtab(powtab, powtab_mem, un, base);
    tmp___3 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(un + 64L) * sizeof(mp_limb_t ));
    tp = (mp_limb_t *)tmp___3;
    size___0 = __gmpn_dc_set_str(rp, str, str_len, (powers_t const *)(powtab), tp);
    while (1) {
      tmp___4 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                 0L);
      if (tmp___4) {
        __gmp_tmp_reentrant_free(__tmp_marker);
      }
      break;
    }
    return (size___0);
  }
}
}
void __gmpn_set_str_compute_powtab(powers_t *powtab , mp_ptr powtab_mem , mp_size_t un ,
                                   int base )
{
  mp_ptr powtab_mem_ptr ;
  long i ;
  long pi ;
  mp_size_t n___0 ;
  mp_ptr p ;
  mp_ptr t ;
  mp_limb_t big_base ;
  int chars_per_limb ;
  size_t digits_in_base ;
  mp_size_t shift ;
  UWtype __xr ;
  UWtype __a ;
  long tmp___1 ;

  {
  powtab_mem_ptr = powtab_mem;
  chars_per_limb = (int )__gmpn_bases[base].chars_per_limb;
  big_base = (mp_limb_t )__gmpn_bases[base].big_base;
  p = powtab_mem_ptr;
  powtab_mem_ptr ++;
  digits_in_base = (size_t )chars_per_limb;
  *(p + 0) = big_base;
  n___0 = (mp_size_t )1;
  while (1) {
    __xr = (UWtype )(un - 1L);
    __a = (UWtype )56;
    while (__a > 0UL) {
      if (((__xr >> __a) & 255UL) != 0UL) {
        break;
      }
      __a -= 8UL;
    }
    __a ++;
    i = (long )((65UL - __a) - (UWtype )__gmpn_clz_tab[__xr >> __a]);
    break;
  }
  i = 63L - i;
  (powtab + i)->p = p;
  (powtab + i)->n = n___0;
  (powtab + i)->digits_in_base = digits_in_base;
  (powtab + i)->base = base;
  (powtab + i)->shift = (mp_size_t )0;
  shift = (mp_size_t )0;
  pi = i - 1L;
  while (pi >= 0L) {
    t = powtab_mem_ptr;
    powtab_mem_ptr += 2L * n___0;
    while (1) {
      tmp___1 = __builtin_expect((long )(! ((unsigned long )powtab_mem_ptr < (unsigned long )(powtab_mem + (un + 64L))) != 0),
                                 0L);
      if (tmp___1) {
        __gmp_assert_fail("xset_str.c", 178, "powtab_mem_ptr < powtab_mem + ((un) + 64)");
      }
      break;
    }
    __gmpn_sqr(t, (mp_srcptr )p, n___0);
    n___0 = 2L * n___0 - 1L;
    n___0 += (mp_size_t )(*(t + n___0) != 0UL);
    digits_in_base *= 2UL;
    if ((((un - 1L) >> pi) & 2L) == 0L) {
      __gmpn_divexact_1(t, (mp_srcptr )t, n___0, big_base);
      n___0 -= (mp_size_t )(*(t + (n___0 - 1L)) == 0UL);
      digits_in_base -= (size_t )chars_per_limb;
    }
    shift *= 2L;
    while (1) {
      if (*(t + 0) == 0UL) {
        if (! ((*(t + 1) & ((big_base & - big_base) - 1UL)) == 0UL)) {
          break;
        }
      } else {
        break;
      }
      t ++;
      n___0 --;
      shift ++;
    }
    p = t;
    (powtab + pi)->p = p;
    (powtab + pi)->n = n___0;
    (powtab + pi)->digits_in_base = digits_in_base;
    (powtab + pi)->base = base;
    (powtab + pi)->shift = shift;
    pi --;
  }
  return;
}
}
mp_size_t __gmpn_dc_set_str(mp_ptr rp , unsigned char const *str , size_t str_len ,
                            powers_t const *powtab , mp_ptr tp )
{
  size_t len_lo ;
  size_t len_hi ;
  mp_limb_t cy ;
  mp_size_t ln ;
  mp_size_t hn ;
  mp_size_t n___0 ;
  mp_size_t sn ;
  mp_size_t tmp ;
  mp_size_t tmp___0 ;
  mp_ptr __dst ;
  mp_size_t __n ;
  mp_ptr tmp___1 ;
  mp_ptr __dst___0 ;
  mp_size_t __n___0 ;
  mp_ptr tmp___2 ;
  mp_limb_t __x ;
  mp_ptr __p ;

  {
  len_lo = (size_t )powtab->digits_in_base;
  if (str_len <= len_lo) {
    if (! (str_len >= 750UL)) {
      tmp = __gmpn_bc_set_str(rp, str, str_len, (int )powtab->base);
      return (tmp);
    } else {
      tmp___0 = __gmpn_dc_set_str(rp, str, str_len, powtab + 1, tp);
      return (tmp___0);
    }
  }
  len_hi = str_len - len_lo;
  while (1) {
    break;
  }
  if (! (len_hi >= 750UL)) {
    hn = __gmpn_bc_set_str(tp, str, len_hi, (int )powtab->base);
  } else {
    hn = __gmpn_dc_set_str(tp, str, len_hi, powtab + 1, rp);
  }
  sn = (mp_size_t )powtab->shift;
  if (hn == 0L) {
    while (1) {
      while (1) {
        break;
      }
      if ((powtab->n + (mp_size_t const )sn) + 1L != 0L) {
        while (1) {
          __dst = rp;
          __n = (mp_size_t )((powtab->n + (mp_size_t const )sn) + 1L);
          while (1) {
            break;
          }
          while (1) {
            tmp___1 = __dst;
            __dst ++;
            *tmp___1 = (mp_limb_t )0L;
            __n --;
            if (! __n) {
              break;
            }
          }
          break;
        }
      }
      break;
    }
  } else {
    if (powtab->n > (mp_size_t const )hn) {
      __gmpn_mul(rp + sn, (mp_srcptr )powtab->p, (mp_size_t )powtab->n, (mp_srcptr )tp,
                 hn);
    } else {
      __gmpn_mul(rp + sn, (mp_srcptr )tp, hn, (mp_srcptr )powtab->p, (mp_size_t )powtab->n);
    }
    while (1) {
      while (1) {
        break;
      }
      if (sn != 0L) {
        while (1) {
          __dst___0 = rp;
          __n___0 = sn;
          while (1) {
            break;
          }
          while (1) {
            tmp___2 = __dst___0;
            __dst___0 ++;
            *tmp___2 = (mp_limb_t )0L;
            __n___0 --;
            if (! __n___0) {
              break;
            }
          }
          break;
        }
      }
      break;
    }
  }
  str = (str + str_len) - len_lo;
  if (! (len_lo >= 750UL)) {
    ln = __gmpn_bc_set_str(tp, str, len_lo, (int )powtab->base);
  } else {
    ln = __gmpn_dc_set_str(tp, str, len_lo, powtab + 1, ((tp + powtab->n) + sn) + 1);
  }
  if (ln != 0L) {
    cy = __gmpn_add_n(rp, (mp_srcptr )rp, (mp_srcptr )tp, ln);
    while (1) {
      __p = rp + ln;
      __x = *__p + cy;
      *__p = __x;
      if (__x < cy) {
        while (1) {
          __p ++;
          (*__p) ++;
          if (! (*__p == 0UL)) {
            break;
          }
        }
      }
      break;
    }
  }
  n___0 = (hn + (mp_size_t )powtab->n) + sn;
  return (n___0 - (mp_size_t )(*(rp + (n___0 - 1L)) == 0UL));
}
}
mp_size_t __gmpn_bc_set_str(mp_ptr rp , unsigned char const *str , size_t str_len ,
                            int base )
{
  mp_size_t size ;
  size_t i ;
  long j ;
  mp_limb_t cy_limb ;
  mp_limb_t big_base ;
  int chars_per_limb ;
  mp_limb_t res_digit ;
  unsigned char const *tmp ;
  unsigned char const *tmp___0 ;
  unsigned char const *tmp___1 ;
  mp_limb_t tmp___2 ;
  mp_size_t tmp___3 ;
  unsigned char const *tmp___4 ;
  unsigned char const *tmp___5 ;
  unsigned char const *tmp___6 ;
  mp_limb_t tmp___7 ;
  mp_size_t tmp___8 ;

  {
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  big_base = (mp_limb_t )__gmpn_bases[base].big_base;
  chars_per_limb = (int )__gmpn_bases[base].chars_per_limb;
  size = (mp_size_t )0;
  i = (size_t )chars_per_limb;
  while (i < str_len) {
    tmp = str;
    str ++;
    res_digit = (mp_limb_t )*tmp;
    if (base == 10) {
      j = 18L;
      while (j != 0L) {
        tmp___0 = str;
        str ++;
        res_digit = res_digit * 10UL + (mp_limb_t )*tmp___0;
        j --;
      }
    } else {
      j = (long )(chars_per_limb - 1);
      while (j != 0L) {
        tmp___1 = str;
        str ++;
        res_digit = res_digit * (mp_limb_t )base + (mp_limb_t )*tmp___1;
        j --;
      }
    }
    if (size == 0L) {
      if (res_digit != 0UL) {
        *(rp + 0) = res_digit;
        size = (mp_size_t )1;
      }
    } else {
      cy_limb = __gmpn_mul_1(rp, (mp_srcptr )rp, size, big_base);
      tmp___2 = __gmpn_add_1(rp, (mp_srcptr )rp, size, res_digit);
      cy_limb += tmp___2;
      if (cy_limb != 0UL) {
        tmp___3 = size;
        size ++;
        *(rp + tmp___3) = cy_limb;
      }
    }
    i += (size_t )chars_per_limb;
  }
  big_base = (mp_limb_t )base;
  tmp___4 = str;
  str ++;
  res_digit = (mp_limb_t )*tmp___4;
  if (base == 10) {
    j = (long )((str_len - (i - 19UL)) - 1UL);
    while (j > 0L) {
      tmp___5 = str;
      str ++;
      res_digit = res_digit * 10UL + (mp_limb_t )*tmp___5;
      big_base *= 10UL;
      j --;
    }
  } else {
    j = (long )((str_len - (i - (size_t )chars_per_limb)) - 1UL);
    while (j > 0L) {
      tmp___6 = str;
      str ++;
      res_digit = res_digit * (mp_limb_t )base + (mp_limb_t )*tmp___6;
      big_base *= (mp_limb_t )base;
      j --;
    }
  }
  if (size == 0L) {
    if (res_digit != 0UL) {
      *(rp + 0) = res_digit;
      size = (mp_size_t )1;
    }
  } else {
    cy_limb = __gmpn_mul_1(rp, (mp_srcptr )rp, size, big_base);
    tmp___7 = __gmpn_add_1(rp, (mp_srcptr )rp, size, res_digit);
    cy_limb += tmp___7;
    if (cy_limb != 0UL) {
      tmp___8 = size;
      size ++;
      *(rp + tmp___8) = cy_limb;
    }
  }
  return (size);
}
}
#pragma merger("0","./xxset_str.i","")
extern __attribute__((__nothrow__)) struct lconv *( __attribute__((__leaf__)) localeconv)(void) ;
static mp_size_t mpn_pow_1_highpart(mp_ptr rp , mp_size_t *ignp , mp_limb_t base ,
                                    mp_exp_t exp , mp_size_t prec , mp_ptr tp )
{
  mp_size_t ign ;
  mp_size_t off ;
  mp_ptr passed_rp ;
  mp_size_t rn ;
  int cnt ;
  int i ;
  UWtype __xr ;
  UWtype __a ;
  mp_ptr __mp_ptr_swap__tmp ;
  mp_limb_t cy ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___1 ;
  mp_ptr tmp___2 ;
  mp_srcptr tmp___3 ;
  mp_ptr tmp___4 ;

  {
  passed_rp = rp;
  *(rp + 0) = base;
  rn = (mp_size_t )1;
  off = (mp_size_t )0;
  ign = (mp_size_t )0;
  while (1) {
    __xr = (UWtype )exp;
    __a = (UWtype )56;
    while (__a > 0UL) {
      if (((__xr >> __a) & 255UL) != 0UL) {
        break;
      }
      __a -= 8UL;
    }
    __a ++;
    cnt = (int )((65UL - __a) - (UWtype )__gmpn_clz_tab[__xr >> __a]);
    break;
  }
  i = (64 - cnt) - 2;
  while (i >= 0) {
    __gmpn_sqr(tp, (mp_srcptr )(rp + off), rn);
    rn = 2L * rn;
    rn -= (mp_size_t )(*(tp + (rn - 1L)) == 0UL);
    ign <<= 1;
    off = (mp_size_t )0;
    if (rn > prec) {
      ign += rn - prec;
      off = rn - prec;
      rn = prec;
    }
    while (1) {
      __mp_ptr_swap__tmp = rp;
      rp = tp;
      tp = __mp_ptr_swap__tmp;
      break;
    }
    if (((exp >> i) & 1L) != 0L) {
      cy = __gmpn_mul_1(rp, (mp_srcptr )(rp + off), rn, base);
      *(rp + rn) = cy;
      rn += (mp_size_t )(cy != 0UL);
      off = (mp_size_t )0;
    }
    i --;
  }
  if (rn > prec) {
    ign += rn - prec;
    rp += rn - prec;
    rn = prec;
  }
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      break;
    }
    if (rn != 0L) {
      __n = rn - 1L;
      __dst = passed_rp;
      __src = (mp_srcptr )(rp + off);
      tmp___1 = __src;
      __src ++;
      __x = (mp_limb_t )*tmp___1;
      if (__n != 0L) {
        while (1) {
          tmp___2 = __dst;
          __dst ++;
          *tmp___2 = __x;
          tmp___3 = __src;
          __src ++;
          __x = (mp_limb_t )*tmp___3;
          __n --;
          if (! __n) {
            break;
          }
        }
      }
      tmp___4 = __dst;
      __dst ++;
      *tmp___4 = __x;
    }
    break;
  }
  *ignp = ign;
  return (rn);
}
}
int __gmpf_set_str(mpf_ptr x , char const *str , int base )
{
  size_t str_size ;
  char *s ;
  char *begs ;
  size_t i ;
  size_t j ;
  int c ;
  int negative ;
  char *dotpos ;
  char const *expptr ;
  int exp_base ;
  char const *point ;
  struct lconv *tmp ;
  size_t pointlen ;
  size_t tmp___0 ;
  unsigned char const *digit_value ;
  struct tmp_reentrant_t *__tmp_marker ;
  unsigned short const **tmp___1 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  long tmp___6 ;
  int dig ;
  long tmp___7 ;
  long tmp___8 ;
  char *tmp___9 ;
  unsigned short const **tmp___10 ;
  long exp_in_base ;
  mp_size_t ra ;
  mp_size_t ma ;
  mp_size_t rn ;
  mp_size_t mn ;
  int cnt ;
  mp_ptr mp ;
  mp_ptr tp ;
  mp_ptr rp ;
  mp_exp_t exp_in_limbs ;
  mp_size_t prec ;
  int divflag ;
  mp_size_t madj ;
  mp_size_t radj ;
  mp_limb_t _ph ;
  mp_limb_t _dummy ;
  UWtype __x0 ;
  UWtype __x1 ;
  UWtype __x2 ;
  UWtype __x3 ;
  UHWtype __ul ;
  UHWtype __vl ;
  UHWtype __uh ;
  UHWtype __vh ;
  UWtype __u ;
  UWtype __v ;
  void *tmp___12 ;
  void *tmp___13 ;
  void *tmp___14 ;
  long tmp___15 ;
  long tmp___16 ;
  long dig___0 ;
  long minus ;
  long plusminus ;
  char const *tmp___17 ;
  long tmp___18 ;
  char const *tmp___19 ;
  char const *tmp___20 ;
  mp_size_t __n ;
  mp_ptr __dst ;
  mp_srcptr __src ;
  mp_limb_t __x ;
  mp_srcptr tmp___21 ;
  mp_ptr tmp___22 ;
  mp_srcptr tmp___23 ;
  mp_ptr tmp___24 ;
  long tmp___25 ;
  void *tmp___27 ;
  void *tmp___28 ;
  void *tmp___29 ;
  long tmp___30 ;
  void *tmp___32 ;
  void *tmp___33 ;
  void *tmp___34 ;
  long tmp___35 ;
  mp_ptr qp ;
  mp_limb_t qlimb ;
  mp_ptr tmp___36 ;
  void *tmp___38 ;
  void *tmp___39 ;
  void *tmp___40 ;
  long tmp___41 ;
  mp_ptr __dst___0 ;
  mp_size_t __n___0 ;
  mp_ptr tmp___42 ;
  mp_size_t __n___1 ;
  mp_ptr __dst___1 ;
  mp_srcptr __src___0 ;
  mp_limb_t __x___0 ;
  mp_srcptr tmp___43 ;
  mp_ptr tmp___44 ;
  mp_srcptr tmp___45 ;
  mp_ptr tmp___46 ;
  mp_limb_t cy ;
  UWtype __xr ;
  UWtype __a ;
  mp_size_t tmp___49 ;
  void *tmp___51 ;
  void *tmp___52 ;
  void *tmp___53 ;
  long tmp___54 ;
  void *tmp___56 ;
  void *tmp___57 ;
  void *tmp___58 ;
  long tmp___59 ;
  mp_size_t __n___2 ;
  mp_ptr __dst___2 ;
  mp_srcptr __src___1 ;
  mp_limb_t __x___1 ;
  mp_srcptr tmp___60 ;
  mp_ptr tmp___61 ;
  mp_srcptr tmp___62 ;
  mp_ptr tmp___63 ;
  long tmp___64 ;

  {
  dotpos = (char *)0;
  tmp = localeconv();
  point = (char const *)tmp->decimal_point;
  tmp___0 = strlen(point);
  pointlen = tmp___0;
  c = (int )((unsigned char )*str);
  while (1) {
    tmp___1 = __ctype_b_loc();
    if (! ((int const )*(*tmp___1 + c) & 8192)) {
      break;
    }
    str ++;
    c = (int )((unsigned char )*str);
  }
  negative = 0;
  if (c == 45) {
    negative = 1;
    str ++;
    c = (int )((unsigned char )*str);
  }
  if (base == 0) {
    base = 10;
  }
  exp_base = base;
  if (base < 0) {
    exp_base = 10;
    base = - base;
  }
  digit_value = __gmp_digit_value_tab;
  if (base > 36) {
    digit_value += 208;
    if (base > 62) {
      return (-1);
    }
  }
  if ((int const )*(digit_value + c) >= (int const )base) {
    i = (size_t )0;
    while (i < pointlen) {
      if ((int const )*(str + i) != (int const )*(point + i)) {
        return (-1);
      }
      i ++;
    }
    if ((int const )*(digit_value + (unsigned char )*(str + pointlen)) >= (int const )base) {
      return (-1);
    }
  }
  expptr = (char const *)((void *)0);
  str_size = strlen(str);
  i = str_size - 1UL;
  while (i > 0UL) {
    c = (int )((unsigned char )*(str + i));
    if (c == 64) {
      expptr = (str + i) + 1;
      str_size = i;
      break;
    } else
    if (base <= 10) {
      if (c == 101) {
        expptr = (str + i) + 1;
        str_size = i;
        break;
      } else
      if (c == 69) {
        expptr = (str + i) + 1;
        str_size = i;
        break;
      }
    }
    i --;
  }
  __tmp_marker = (struct tmp_reentrant_t *)0;
  tmp___6 = __builtin_expect((long )((str_size + 1UL <= 32512UL) != 0), 1L);
  if (tmp___6) {
    tmp___3 = alloca(str_size + 1UL);
    tmp___5 = tmp___3;
  } else {
    tmp___4 = __gmp_tmp_reentrant_alloc(& __tmp_marker, str_size + 1UL);
    tmp___5 = tmp___4;
  }
  begs = (char *)tmp___5;
  s = begs;
  i = (size_t )0;
  while (i < str_size) {
    c = (int )((unsigned char )*str);
    tmp___10 = __ctype_b_loc();
    if (! ((int const )*(*tmp___10 + c) & 8192)) {
      j = (size_t )0;
      while (j < pointlen) {
        if ((int const )*(str + j) != (int const )*(point + j)) {
          goto not_point;
        }
        j ++;
      }
      if (1) {
        if ((unsigned long )dotpos != (unsigned long )((char *)0)) {
          while (1) {
            tmp___7 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                       0L);
            if (tmp___7) {
              __gmp_tmp_reentrant_free(__tmp_marker);
            }
            break;
          }
          return (-1);
        }
        dotpos = s;
        str += pointlen - 1UL;
        i += pointlen - 1UL;
      } else {
        not_point:
        dig = (int )*(digit_value + c);
        if (dig >= base) {
          while (1) {
            tmp___8 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                       0L);
            if (tmp___8) {
              __gmp_tmp_reentrant_free(__tmp_marker);
            }
            break;
          }
          return (-1);
        }
        tmp___9 = s;
        s ++;
        *tmp___9 = (char )dig;
      }
    }
    str ++;
    c = (int )((unsigned char )*str);
    i ++;
  }
  str_size = (size_t )(s - begs);
  prec = (mp_size_t )(x->_mp_prec + 1);
  while (1) {
    while (1) {
      __u = (UWtype )__gmpn_bases[base].log2b;
      __v = str_size;
      __ul = (UHWtype )(__u & ((1UL << 32) - 1UL));
      __uh = (UHWtype )(__u >> 32);
      __vl = (UHWtype )(__v & ((1UL << 32) - 1UL));
      __vh = (UHWtype )(__v >> 32);
      __x0 = (UWtype )__ul * (UWtype )__vl;
      __x1 = (UWtype )__ul * (UWtype )__vh;
      __x2 = (UWtype )__uh * (UWtype )__vl;
      __x3 = (UWtype )__uh * (UWtype )__vh;
      __x1 += __x0 >> 32;
      __x1 += __x2;
      if (__x1 < __x2) {
        __x3 += 1UL << 32;
      }
      _ph = __x3 + (__x1 >> 32);
      _dummy = (__x1 << 32) + (__x0 & ((1UL << 32) - 1UL));
      break;
    }
    ma = (mp_size_t )((8UL * _ph) / 64UL + 2UL);
    break;
  }
  tmp___15 = __builtin_expect((long )(((unsigned long )ma * sizeof(mp_limb_t ) <= 32512UL) != 0),
                              1L);
  if (tmp___15) {
    tmp___12 = alloca((unsigned long )ma * sizeof(mp_limb_t ));
    tmp___14 = tmp___12;
  } else {
    tmp___13 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )ma * sizeof(mp_limb_t ));
    tmp___14 = tmp___13;
  }
  mp = (mp_limb_t *)tmp___14;
  mn = __gmpn_set_str(mp, (unsigned char const *)((unsigned char *)begs), str_size,
                      base);
  if (mn == 0L) {
    x->_mp_size = 0;
    x->_mp_exp = (mp_exp_t )0;
    while (1) {
      tmp___16 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                  0L);
      if (tmp___16) {
        __gmp_tmp_reentrant_free(__tmp_marker);
      }
      break;
    }
    return (0);
  }
  madj = (mp_size_t )0;
  if (mn > prec) {
    madj = mn - prec;
    mp += mn - prec;
    mn = prec;
  }
  if ((unsigned long )expptr != (unsigned long )((char const *)0)) {
    c = (int )((unsigned char )*expptr);
    minus = - ((long )(c == 45));
    plusminus = minus | - ((long )(c == 43));
    expptr -= plusminus;
    tmp___17 = expptr;
    expptr ++;
    c = (int )((unsigned char )*tmp___17);
    dig___0 = (long )*(digit_value + c);
    if (dig___0 >= (long )exp_base) {
      while (1) {
        tmp___18 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                    0L);
        if (tmp___18) {
          __gmp_tmp_reentrant_free(__tmp_marker);
        }
        break;
      }
      return (-1);
    }
    exp_in_base = dig___0;
    tmp___19 = expptr;
    expptr ++;
    c = (int )((unsigned char )*tmp___19);
    dig___0 = (long )*(digit_value + c);
    while (dig___0 < (long )exp_base) {
      exp_in_base *= (long )exp_base;
      exp_in_base += dig___0;
      tmp___20 = expptr;
      expptr ++;
      c = (int )((unsigned char )*tmp___20);
      dig___0 = (long )*(digit_value + c);
    }
    exp_in_base = (exp_in_base ^ minus) - minus;
  } else {
    exp_in_base = 0L;
  }
  if ((unsigned long )dotpos != (unsigned long )((char *)0)) {
    exp_in_base -= s - dotpos;
  }
  divflag = exp_in_base < 0L;
  if (exp_in_base >= 0L) {
    exp_in_base = exp_in_base;
  } else {
    exp_in_base = - exp_in_base;
  }
  if (exp_in_base == 0L) {
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          break;
        }
        if (mn != 0L) {
          __n = mn - 1L;
          __dst = x->_mp_d;
          __src = (mp_srcptr )mp;
          tmp___21 = __src;
          __src ++;
          __x = (mp_limb_t )*tmp___21;
          if (__n != 0L) {
            while (1) {
              tmp___22 = __dst;
              __dst ++;
              *tmp___22 = __x;
              tmp___23 = __src;
              __src ++;
              __x = (mp_limb_t )*tmp___23;
              __n --;
              if (! __n) {
                break;
              }
            }
          }
          tmp___24 = __dst;
          __dst ++;
          *tmp___24 = __x;
        }
        break;
      }
      break;
    }
    if (negative) {
      x->_mp_size = (int )(- mn);
    } else {
      x->_mp_size = (int )mn;
    }
    x->_mp_exp = mn + madj;
    while (1) {
      tmp___25 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                  0L);
      if (tmp___25) {
        __gmp_tmp_reentrant_free(__tmp_marker);
      }
      break;
    }
    return (0);
  }
  ra = 2L * (prec + 1L);
  tmp___30 = __builtin_expect((long )(((unsigned long )ra * sizeof(mp_limb_t ) <= 32512UL) != 0),
                              1L);
  if (tmp___30) {
    tmp___27 = alloca((unsigned long )ra * sizeof(mp_limb_t ));
    tmp___29 = tmp___27;
  } else {
    tmp___28 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )ra * sizeof(mp_limb_t ));
    tmp___29 = tmp___28;
  }
  rp = (mp_limb_t *)tmp___29;
  tmp___35 = __builtin_expect((long )(((unsigned long )ra * sizeof(mp_limb_t ) <= 32512UL) != 0),
                              1L);
  if (tmp___35) {
    tmp___32 = alloca((unsigned long )ra * sizeof(mp_limb_t ));
    tmp___34 = tmp___32;
  } else {
    tmp___33 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )ra * sizeof(mp_limb_t ));
    tmp___34 = tmp___33;
  }
  tp = (mp_limb_t *)tmp___34;
  rn = mpn_pow_1_highpart(rp, & radj, (mp_limb_t )base, exp_in_base, prec, tp);
  if (divflag) {
    if (mn < rn) {
      tmp___41 = __builtin_expect((long )(((unsigned long )(rn + 1L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                  1L);
      if (tmp___41) {
        tmp___38 = alloca((unsigned long )(rn + 1L) * sizeof(mp_limb_t ));
        tmp___40 = tmp___38;
      } else {
        tmp___39 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(rn + 1L) * sizeof(mp_limb_t ));
        tmp___40 = tmp___39;
      }
      tmp___36 = (mp_limb_t *)tmp___40;
      while (1) {
        while (1) {
          break;
        }
        if (rn - mn != 0L) {
          while (1) {
            __dst___0 = tmp___36;
            __n___0 = rn - mn;
            while (1) {
              break;
            }
            while (1) {
              tmp___42 = __dst___0;
              __dst___0 ++;
              *tmp___42 = (mp_limb_t )0L;
              __n___0 --;
              if (! __n___0) {
                break;
              }
            }
            break;
          }
        }
        break;
      }
      while (1) {
        while (1) {
          break;
        }
        while (1) {
          while (1) {
            break;
          }
          while (1) {
            break;
          }
          if (mn != 0L) {
            __n___1 = mn - 1L;
            __dst___1 = (tmp___36 + rn) - mn;
            __src___0 = (mp_srcptr )mp;
            tmp___43 = __src___0;
            __src___0 ++;
            __x___0 = (mp_limb_t )*tmp___43;
            if (__n___1 != 0L) {
              while (1) {
                tmp___44 = __dst___1;
                __dst___1 ++;
                *tmp___44 = __x___0;
                tmp___45 = __src___0;
                __src___0 ++;
                __x___0 = (mp_limb_t )*tmp___45;
                __n___1 --;
                if (! __n___1) {
                  break;
                }
              }
            }
            tmp___46 = __dst___1;
            __dst___1 ++;
            *tmp___46 = __x___0;
          }
          break;
        }
        break;
      }
      mp = tmp___36;
      madj -= rn - mn;
      mn = rn;
    }
    if ((*(rp + (rn - 1L)) & (1UL << 63)) == 0UL) {
      while (1) {
        __xr = *(rp + (rn - 1L));
        __a = (UWtype )56;
        while (__a > 0UL) {
          if (((__xr >> __a) & 255UL) != 0UL) {
            break;
          }
          __a -= 8UL;
        }
        __a ++;
        cnt = (int )((65UL - __a) - (UWtype )__gmpn_clz_tab[__xr >> __a]);
        break;
      }
      cnt = cnt;
      __gmpn_lshift(rp, (mp_srcptr )rp, rn, (unsigned int )cnt);
      cy = __gmpn_lshift(mp, (mp_srcptr )mp, mn, (unsigned int )cnt);
      if (cy) {
        tmp___49 = mn;
        mn ++;
        *(mp + tmp___49) = cy;
      }
    }
    tmp___54 = __builtin_expect((long )(((unsigned long )(prec + 1L) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___54) {
      tmp___51 = alloca((unsigned long )(prec + 1L) * sizeof(mp_limb_t ));
      tmp___53 = tmp___51;
    } else {
      tmp___52 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(prec + 1L) * sizeof(mp_limb_t ));
      tmp___53 = tmp___52;
    }
    qp = (mp_limb_t *)tmp___53;
    qlimb = __gmpn_divrem(qp, prec - (mn - rn), mp, mn, (mp_srcptr )rp, rn);
    tp = qp;
    exp_in_limbs = (mp_exp_t )((qlimb + (mp_limb_t )(mn - rn)) + (mp_limb_t )(madj - radj));
    rn = prec;
    if (qlimb != 0UL) {
      *(tp + prec) = qlimb;
      tp ++;
    }
  } else {
    tmp___59 = __builtin_expect((long )(((unsigned long )(rn + mn) * sizeof(mp_limb_t ) <= 32512UL) != 0),
                                1L);
    if (tmp___59) {
      tmp___56 = alloca((unsigned long )(rn + mn) * sizeof(mp_limb_t ));
      tmp___58 = tmp___56;
    } else {
      tmp___57 = __gmp_tmp_reentrant_alloc(& __tmp_marker, (unsigned long )(rn + mn) * sizeof(mp_limb_t ));
      tmp___58 = tmp___57;
    }
    tp = (mp_limb_t *)tmp___58;
    if (rn > mn) {
      __gmpn_mul(tp, (mp_srcptr )rp, rn, (mp_srcptr )mp, mn);
    } else {
      __gmpn_mul(tp, (mp_srcptr )mp, mn, (mp_srcptr )rp, rn);
    }
    rn += mn;
    rn -= (mp_size_t )(*(tp + (rn - 1L)) == 0UL);
    exp_in_limbs = (rn + madj) + radj;
    if (rn > prec) {
      tp += rn - prec;
      rn = prec;
      exp_in_limbs = exp_in_limbs;
    }
  }
  while (1) {
    while (1) {
      break;
    }
    while (1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      if (rn != 0L) {
        __n___2 = rn - 1L;
        __dst___2 = x->_mp_d;
        __src___1 = (mp_srcptr )tp;
        tmp___60 = __src___1;
        __src___1 ++;
        __x___1 = (mp_limb_t )*tmp___60;
        if (__n___2 != 0L) {
          while (1) {
            tmp___61 = __dst___2;
            __dst___2 ++;
            *tmp___61 = __x___1;
            tmp___62 = __src___1;
            __src___1 ++;
            __x___1 = (mp_limb_t )*tmp___62;
            __n___2 --;
            if (! __n___2) {
              break;
            }
          }
        }
        tmp___63 = __dst___2;
        __dst___2 ++;
        *tmp___63 = __x___1;
      }
      break;
    }
    break;
  }
  if (negative) {
    x->_mp_size = (int )(- rn);
  } else {
    x->_mp_size = (int )rn;
  }
  x->_mp_exp = exp_in_limbs;
  while (1) {
    tmp___64 = __builtin_expect((long )(((unsigned long )__tmp_marker != (unsigned long )((struct tmp_reentrant_t *)0)) != 0),
                                0L);
    if (tmp___64) {
      __gmp_tmp_reentrant_free(__tmp_marker);
    }
    break;
  }
  return (0);
}
}
#pragma merger("0","./xxxset_str.i","")
extern __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strchr)(char const *__s ,
                                                                                               int __c ) __attribute__((__pure__)) ;
int __gmpq_set_str(mpq_ptr q , char const *str , int base )
{
  char const *slash ;
  char *num ;
  size_t numlen ;
  int ret ;
  char *tmp ;
  int tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;

  {
  tmp = strchr(str, '/');
  slash = (char const *)tmp;
  if ((unsigned long )slash == (unsigned long )((void *)0)) {
    q->_mp_den._mp_size = 1;
    *(q->_mp_den._mp_d + 0) = (mp_limb_t )1;
    tmp___0 = __gmpz_set_str(& q->_mp_num, str, base);
    return (tmp___0);
  }
  numlen = (size_t )(slash - str);
  tmp___1 = (*__gmp_allocate_func)((numlen + 1UL) * sizeof(char ));
  num = (char *)tmp___1;
  memcpy((void * __restrict )num, (void const * __restrict )str, numlen);
  *(num + numlen) = (char )'\000';
  ret = __gmpz_set_str(& q->_mp_num, (char const *)num, base);
  (*__gmp_free_func)((void *)num, numlen + 1UL);
  if (ret != 0) {
    return (ret);
  }
  tmp___2 = __gmpz_set_str(& q->_mp_den, slash + 1, base);
  return (tmp___2);
}
}
#pragma merger("0","./zero_p.i","")

void
__gmpz_set (mpz_ptr w, mpz_srcptr u)
{
  mp_ptr wp, up;
  mp_size_t usize, size;

  usize = ((u)->_mp_size);
  size = ((usize) >= 0 ? (usize) : -(usize));

  wp = (__builtin_expect (((size) > ((w)->_mp_alloc)) != 0, 0) ? (mp_ptr) __gmpz_realloc(w,size) : ((w)->_mp_d));

  up = ((u)->_mp_d);

  do { do {} while (0); do { do {} while (0); do {} while (0); if ((size) != 0) { mp_size_t __n = (size) - 1; mp_ptr __dst = (
                     wp); mp_srcptr __src = (up); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
  ((w)->_mp_size) = usize;
}


mp_bitcnt_t
__gmpn_popcount (mp_srcptr up,



       mp_size_t n)
{
  mp_bitcnt_t result = 0;
  mp_limb_t p0, p1, p2, p3, x, p01, p23;
  mp_size_t i;

  do {} while (0);


  for (i = n >> 2; i != 0; i--)
    {
      p0 = up[0];
      p0 -= (p0 >> 1) & (~ (mp_limb_t) 0)/3;
      p0 = ((p0 >> 2) & (~ (mp_limb_t) 0)/5) + (p0 & (~ (mp_limb_t) 0)/5);

      p1 = up[1];
      p1 -= (p1 >> 1) & (~ (mp_limb_t) 0)/3;
      p1 = ((p1 >> 2) & (~ (mp_limb_t) 0)/5) + (p1 & (~ (mp_limb_t) 0)/5);

      p01 = p0 + p1;
      p01 = ((p01 >> 4) & (~ (mp_limb_t) 0)/17) + (p01 & (~ (mp_limb_t) 0)/17);

      p2 = up[2];
      p2 -= (p2 >> 1) & (~ (mp_limb_t) 0)/3;
      p2 = ((p2 >> 2) & (~ (mp_limb_t) 0)/5) + (p2 & (~ (mp_limb_t) 0)/5);

      p3 = up[3];
      p3 -= (p3 >> 1) & (~ (mp_limb_t) 0)/3;
      p3 = ((p3 >> 2) & (~ (mp_limb_t) 0)/5) + (p3 & (~ (mp_limb_t) 0)/5);

      p23 = p2 + p3;
      p23 = ((p23 >> 4) & (~ (mp_limb_t) 0)/17) + (p23 & (~ (mp_limb_t) 0)/17);

      x = p01 + p23;
      x = (x >> 8) + x;
      x = (x >> 16) + x;

      x = ((x >> 32) & 0xff) + (x & 0xff);
      result += x;



      up += 4;



    }

  n &= 3;
  if (n != 0)
    {
      x = 0;
      do
 {
   p0 = up[0];
   p0 -= (p0 >> 1) & (~ (mp_limb_t) 0)/3;
   p0 = ((p0 >> 2) & (~ (mp_limb_t) 0)/5) + (p0 & (~ (mp_limb_t) 0)/5);
   p0 = ((p0 >> 4) + p0) & (~ (mp_limb_t) 0)/17;

   x += p0;
   up += 1;



 }
      while (--n);

      x = (x >> 8) + x;
      x = (x >> 16) + x;

      x = (x >> 32) + x;

      result += x & 0xff;
    }

  return result;
}


static mp_limb_t
mpn_sqrtrem1 (mp_ptr rp, mp_limb_t a0);

static mp_limb_t
mpn_dc_sqrtrem (mp_ptr sp, mp_ptr np, mp_size_t n, mp_limb_t approx, mp_ptr scratch);

static int
mpn_dc_sqrt (mp_ptr sp, mp_srcptr np, mp_size_t n, unsigned nsh, unsigned odd);

mp_size_t
__gmpn_sqrtrem (mp_ptr sp, mp_ptr rp, mp_srcptr np, mp_size_t nn)
{
  mp_limb_t *tp, s0[1], cc, high, rl;
  int c;
  mp_size_t rn, tn;
  struct tmp_reentrant_t *__tmp_marker;

  do {} while (0);
  do {} while (0);

  do {} while (0);
  do {} while (0);
  do {} while (0);
  do {} while (0);

  high = np[nn - 1];
  if (high & ((((mp_limb_t) 1L) << ((64 - 0)-1)) | ((((mp_limb_t) 1L) << ((64 - 0)-1)) / 2)))
    c = 0;
  else
    {
      do { UWtype __xr = (high); UWtype __a; if (64 == 32) { __a = __xr < ((UWtype) 1 << 2*(64 / 4)) ? (__xr < ((UWtype) 1 << (64 / 4)) ? 1 : (64 / 4) + 1) : (__xr < ((UWtype) 1 << 3*(64 / 4)) ? 2*(64 / 4) + 1 : 3*(64 / 4) + 1); } else { for (__a = 64 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; ++__a; } (c) = 64 + 1 - __a - __gmpn_clz_tab[__xr >> __a]; } while (0);
      c -= 0;

      c = c / 2;
    }
  if (nn == 1) {
    if (c == 0)
      {
 sp[0] = mpn_sqrtrem1 (&rl, high);
 if (rp != ((void *)0))
   rp[0] = rl;
      }
    else
      {
 cc = mpn_sqrtrem1 (&rl, high << (2*c)) >> c;
 sp[0] = cc;
 if (rp != ((void *)0))
   rp[0] = rl = high - cc*cc;
      }
    return rl != 0;
  }
  tn = (nn + 1) / 2;

  if ((rp == ((void *)0)) && (nn > 8))
    return mpn_dc_sqrt (sp, np, tn, c, nn & 1);
  __tmp_marker = 0;
  if (((nn & 1) | c) != 0)
    {
      mp_limb_t mask;
      mp_ptr scratch;
      do { if (0) { (tp) = ((mp_limb_t *) (__builtin_expect ((((2 * tn) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((2 * tn) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (2 * tn) * sizeof (mp_limb_t)))); (scratch) = ((mp_limb_t *) (__builtin_expect ((((tn / 2 + 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((tn / 2 + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (tn / 2 + 1) * sizeof (mp_limb_t)))); } else { (tp) = ((mp_limb_t *) (__builtin_expect (((((2 * tn) + (tn / 2 + 1)) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca(((2 * tn) + (tn / 2 + 1)) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, ((2 * tn) + (tn / 2 + 1)) * sizeof (mp_limb_t)))); (scratch) = (tp) + (2 * tn); } } while (0);
      tp[0] = 0;
      if (c != 0)
 __gmpn_lshift (tp + (nn & 1), np, nn, 2 * c);
      else
 do { do {} while (0); do { do {} while (0); do {} while (0); if ((nn) != 0) { mp_size_t __n = (nn) - 1; mp_ptr __dst = (tp + (nn & 1)); mp_srcptr __src = (np); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
      c += (nn & 1) ? (64 - 0) / 2 : 0;
      mask = (((mp_limb_t) 1L) << c) - 1;
      rl = mpn_dc_sqrtrem (sp, tp, tn, (rp == ((void *)0)) ? mask - 1 : 0, scratch);


      s0[0] = sp[0] & mask;
      rl += __gmpn_addmul_1 (tp, sp, tn, 2 * s0[0]);
      cc = __gmpn_submul_1 (tp, s0, 1, s0[0]);
      rl -= (tn > 1) ? __gmpn_sub_1 (tp + 1, tp + 1, tn - 1, cc) : cc;
      __gmpn_rshift (sp, sp, tn, c);
      tp[tn] = rl;
      if (rp == ((void *)0))
 rp = tp;
      c = c << 1;
      if (c < (64 - 0))
 tn++;
      else
 {
   tp++;
   c -= (64 - 0);
 }
      if (c != 0)
 __gmpn_rshift (rp, tp, tn, c);
      else
 do { do {} while (0); do {} while (0); if ((tn) != 0) { mp_size_t __n = (tn) - 1; mp_ptr __dst = (rp); mp_srcptr __src = (tp); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0);
      rn = tn;
    }
  else
    {
      if (rp != np)
 {
   if (rp == ((void *)0))
     rp = ((mp_limb_t *) alloca((nn) * sizeof (mp_limb_t)));
   do { do {} while (0); do { do {} while (0); do {} while (0); if ((nn) != 0) { mp_size_t __n = (nn) - 1; mp_ptr __dst = (rp); mp_srcptr __src = (np); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
 }
      rn = tn + (rp[tn] = mpn_dc_sqrtrem (sp, rp, tn, 0, ((mp_limb_t *) (__builtin_expect ((((tn / 2 + 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((tn / 2 + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (tn / 2 + 1) * sizeof (mp_limb_t))))));
    }

  do { while ((rn) > 0) { if ((rp)[(rn) - 1] != 0) break; (rn)--; } } while (0);

  do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);
  return rn;
}


static const mp_limb_t
sq_res_0x100[4] = {
  ((mp_limb_t) 0x202021202030213L),
  ((mp_limb_t) 0x202021202020213L),
  ((mp_limb_t) 0x202021202030212L),
  ((mp_limb_t) 0x202021202020212L),
};



mp_limb_t
__gmpn_mod_34lsub1 (mp_srcptr p, mp_size_t n)
{
  mp_limb_t c0 = 0;
  mp_limb_t c1 = 0;
  mp_limb_t c2 = 0;
  mp_limb_t a0, a1, a2;

  do {} while (0);
  do {} while (0);

  a0 = a1 = a2 = 0;
  c0 = c1 = c2 = 0;

  while ((n -= 3) >= 0)
    {
      do { mp_limb_t new_c; do { mp_limb_t __x = (a0); mp_limb_t __y = (p[0]); mp_limb_t __w = __x + __y; (a0) = __w; (new_c) = __w < __x; } while (0); (c0) += new_c; } while (0);
      do { mp_limb_t new_c; do { mp_limb_t __x = (a1); mp_limb_t __y = (p[1]); mp_limb_t __w = __x + __y; (a1) = __w; (new_c) = __w < __x; } while (0); (c1) += new_c; } while (0);
      do { mp_limb_t new_c; do { mp_limb_t __x = (a2); mp_limb_t __y = (p[2]); mp_limb_t __w = __x + __y; (a2) = __w; (new_c) = __w < __x; } while (0); (c2) += new_c; } while (0);
      p += 3;
    }

  if (n != -3)
    {
      do { mp_limb_t new_c; do { mp_limb_t __x = (a0); mp_limb_t __y = (p[0]); mp_limb_t __w = __x + __y; (a0) = __w; (new_c) = __w < __x; } while (0); (c0) += new_c; } while (0);
      if (n != -2)
 do { mp_limb_t new_c; do { mp_limb_t __x = (a1); mp_limb_t __y = (p[1]); mp_limb_t __w = __x + __y; (a1) = __w; (new_c) = __w < __x; } while (0); (c1) += new_c; } while (0);
    }

  return
    (((a0) & ((((mp_limb_t) 1L) << (((64 - 0) / 4) * 3)) - 1)) + ((a0) >> (((64 - 0) / 4) * 3))) + ((((a1) & ((((mp_limb_t) 1L) << (((64 - 0) / 4) * 2)) - 1)) << ((64 - 0) / 4)) + ((a1) >> (((64 - 0) / 4) * 2))) + ((((a2) & ((((mp_limb_t) 1L) << ((64 - 0) / 4)) - 1)) << (((64 - 0) / 4) * 2)) + ((a2) >> ((64 - 0) / 4)))
    + ((((c0) & ((((mp_limb_t) 1L) << (((64 - 0) / 4) * 2)) - 1)) << ((64 - 0) / 4)) + ((c0) >> (((64 - 0) / 4) * 2))) + ((((c1) & ((((mp_limb_t) 1L) << ((64 - 0) / 4)) - 1)) << (((64 - 0) / 4) * 2)) + ((c1) >> ((64 - 0) / 4))) + (((c2) & ((((mp_limb_t) 1L) << (((64 - 0) / 4) * 3)) - 1)) + ((c2) >> (((64 - 0) / 4) * 3)));
}

int
__gmpn_perfect_square_p (mp_srcptr up, mp_size_t usize)
{
  do {} while (0);

  ;



  {
    unsigned idx = up[0] % 0x100;
    if (((sq_res_0x100[idx / 64]
   >> (idx % 64)) & 1) == 0)
      return 0;
  }
# 221 "perfsqr.c"
  do { mp_limb_t r; do { (r) = __gmpn_mod_34lsub1 (up, usize); (r) = ((r) & ((((mp_limb_t) 1L) << ((64 - 0) / 4 * 3)) - 1)) + ((r) >> ((64 - 0) / 4 * 3)); } while (0); do { mp_limb_t m; unsigned idx; do {} while (0); do { mp_limb_t q; do {} while (0); do {} while (0); do {} while (0); q = ((r) * (((mp_limb_t) 0xfd2fd2fd2fd3L))) & ((((mp_limb_t) 1L) << 49) - 1); do {} while (0); (idx) = (q * (((mp_limb_t) 91L))) >> 49; } while (0); ; m = ((int) idx - 64 < 0 ? (((mp_limb_t) 0x8850a206953820e1L)) : (((mp_limb_t) 0x2191240L))); idx %= 64; if (((m >> idx) & 1) == 0) { ; return 0; } } while (0); do { mp_limb_t m; unsigned idx; do {} while (0); do { mp_limb_t q; do {} while (0); do {} while (0); do {} while (0); q = ((r) * (((mp_limb_t) 0xfcfcfcfcfcfdL))) & ((((mp_limb_t) 1L) << 49) - 1); do {} while (0); (idx) = (q * (((mp_limb_t) 85L))) >> 49; } while (0); ; m = ((int) idx - 64 < 0 ? (((mp_limb_t) 0x10b48c4b4206a105L)) : (((mp_limb_t) 0x82158L))); idx %= 64; if (((m >> idx) & 1) == 0) { ; return 0; } } while (0); do { unsigned idx; do {} while (0); do { mp_limb_t q; do {} while (0); do {} while (0); do {} while (0); q = ((r) * (((mp_limb_t) 0xe38e38e38e39L))) & ((((mp_limb_t) 1L) << 49) - 1); do {} while (0); (idx) = (q * (((mp_limb_t) 9L))) >> 49; } while (0); ; if ((((((mp_limb_t) 0x93L)) >> idx) & 1) == 0) { ; return 0; } } while (0); do { mp_limb_t m; unsigned idx; do {} while (0); do { mp_limb_t q; do {} while (0); do {} while (0); do {} while (0); q = ((r) * (((mp_limb_t) 0xfd5c5f02a3a1L))) & ((((mp_limb_t) 1L) << 49) - 1); do {} while (0); (idx) = (q * (((mp_limb_t) 97L))) >> 49; } while (0); ; m = ((int) idx - 64 < 0 ? (((mp_limb_t) 0x6067981b8b451b5fL)) : (((mp_limb_t) 0x1eb628b47L))); idx %= 64; if (((m >> idx) & 1) == 0) { ; return 0; } } while (0); } while (0);




  {
    mp_ptr root_ptr;
    int res;
    struct tmp_reentrant_t *__tmp_marker;

    __tmp_marker = 0;
    root_ptr = ((mp_limb_t *) (__builtin_expect (((((usize + 1) / 2) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca(((usize + 1) / 2) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, ((usize + 1) / 2) * sizeof (mp_limb_t))));


    res = ! __gmpn_sqrtrem (root_ptr, ((void *)0), up, usize);
    do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);

    return res;
  }
}





static const unsigned char invsqrttab[384] =
{
  0xff,0xfd,0xfb,0xf9,0xf7,0xf5,0xf3,0xf2,
  0xf0,0xee,0xec,0xea,0xe9,0xe7,0xe5,0xe4,
  0xe2,0xe0,0xdf,0xdd,0xdb,0xda,0xd8,0xd7,
  0xd5,0xd4,0xd2,0xd1,0xcf,0xce,0xcc,0xcb,
  0xc9,0xc8,0xc6,0xc5,0xc4,0xc2,0xc1,0xc0,
  0xbe,0xbd,0xbc,0xba,0xb9,0xb8,0xb7,0xb5,
  0xb4,0xb3,0xb2,0xb0,0xaf,0xae,0xad,0xac,
  0xaa,0xa9,0xa8,0xa7,0xa6,0xa5,0xa4,0xa3,
  0xa2,0xa0,0x9f,0x9e,0x9d,0x9c,0x9b,0x9a,
  0x99,0x98,0x97,0x96,0x95,0x94,0x93,0x92,
  0x91,0x90,0x8f,0x8e,0x8d,0x8c,0x8c,0x8b,
  0x8a,0x89,0x88,0x87,0x86,0x85,0x84,0x83,
  0x83,0x82,0x81,0x80,0x7f,0x7e,0x7e,0x7d,
  0x7c,0x7b,0x7a,0x79,0x79,0x78,0x77,0x76,
  0x76,0x75,0x74,0x73,0x72,0x72,0x71,0x70,
  0x6f,0x6f,0x6e,0x6d,0x6d,0x6c,0x6b,0x6a,
  0x6a,0x69,0x68,0x68,0x67,0x66,0x66,0x65,
  0x64,0x64,0x63,0x62,0x62,0x61,0x60,0x60,
  0x5f,0x5e,0x5e,0x5d,0x5c,0x5c,0x5b,0x5a,
  0x5a,0x59,0x59,0x58,0x57,0x57,0x56,0x56,
  0x55,0x54,0x54,0x53,0x53,0x52,0x52,0x51,
  0x50,0x50,0x4f,0x4f,0x4e,0x4e,0x4d,0x4d,
  0x4c,0x4b,0x4b,0x4a,0x4a,0x49,0x49,0x48,
  0x48,0x47,0x47,0x46,0x46,0x45,0x45,0x44,
  0x44,0x43,0x43,0x42,0x42,0x41,0x41,0x40,
  0x40,0x3f,0x3f,0x3e,0x3e,0x3d,0x3d,0x3c,
  0x3c,0x3b,0x3b,0x3a,0x3a,0x39,0x39,0x39,
  0x38,0x38,0x37,0x37,0x36,0x36,0x35,0x35,
  0x35,0x34,0x34,0x33,0x33,0x32,0x32,0x32,
  0x31,0x31,0x30,0x30,0x2f,0x2f,0x2f,0x2e,
  0x2e,0x2d,0x2d,0x2d,0x2c,0x2c,0x2b,0x2b,
  0x2b,0x2a,0x2a,0x29,0x29,0x29,0x28,0x28,
  0x27,0x27,0x27,0x26,0x26,0x26,0x25,0x25,
  0x24,0x24,0x24,0x23,0x23,0x23,0x22,0x22,
  0x21,0x21,0x21,0x20,0x20,0x20,0x1f,0x1f,
  0x1f,0x1e,0x1e,0x1e,0x1d,0x1d,0x1d,0x1c,
  0x1c,0x1b,0x1b,0x1b,0x1a,0x1a,0x1a,0x19,
  0x19,0x19,0x18,0x18,0x18,0x18,0x17,0x17,
  0x17,0x16,0x16,0x16,0x15,0x15,0x15,0x14,
  0x14,0x14,0x13,0x13,0x13,0x12,0x12,0x12,
  0x12,0x11,0x11,0x11,0x10,0x10,0x10,0x0f,
  0x0f,0x0f,0x0f,0x0e,0x0e,0x0e,0x0d,0x0d,
  0x0d,0x0c,0x0c,0x0c,0x0c,0x0b,0x0b,0x0b,
  0x0a,0x0a,0x0a,0x0a,0x09,0x09,0x09,0x09,
  0x08,0x08,0x08,0x07,0x07,0x07,0x07,0x06,
  0x06,0x06,0x06,0x05,0x05,0x05,0x04,0x04,
  0x04,0x04,0x03,0x03,0x03,0x03,0x02,0x02,
  0x02,0x02,0x01,0x01,0x01,0x01,0x00,0x00
};
# 113 "sqrtrem.c"
static mp_limb_t
mpn_sqrtrem1 (mp_ptr rp, mp_limb_t a0)
{

  mp_limb_t a1;

  mp_limb_t x0, t2, t, x2;
  unsigned abits;

  do { if (__builtin_expect ((!(0 == 0)) != 0, 0)) __gmp_assert_fail ("sqrtrem.c", 122, "0 == 0"); } while (0);
  do { if (__builtin_expect ((!(64 == 32 || 64 == 64)) != 0, 0)) __gmp_assert_fail ("sqrtrem.c", 123, "64 == 32 || 64 == 64"); } while (0);
  do {} while (0);





  abits = a0 >> (64 - 1 - 8);
  x0 = 0x100 | invsqrttab[abits - 0x80];




  a1 = a0 >> (64 - 1 - 32);
  t = (mp_limb_signed_t) (((mp_limb_t) 0x2000000000000L) - 0x30000 - a1 * x0 * x0) >> 16;
  x0 = (x0 << 16) + ((mp_limb_signed_t) (x0 * t) >> (16+2));



  t2 = x0 * (a0 >> (32-8));
  t = t2 >> 25;
  t = ((mp_limb_signed_t) ((a0 << 14) - t * t - ((mp_limb_t) 0x10000000000L)) >> (32-8));
  x0 = t2 + ((mp_limb_signed_t) (x0 * t) >> 15);
  x0 >>= 32;
# 157 "sqrtrem.c"
  x2 = x0 * x0;
  if (x2 + 2*x0 <= a0 - 1)
    {
      x2 += 2*x0 + 1;
      x0++;
    }

  *rp = a0 - x2;
  return x0;
}






static mp_limb_t
mpn_sqrtrem2 (mp_ptr sp, mp_ptr rp, mp_srcptr np)
{
  mp_limb_t q, u, np0, sp0, rp0, q2;
  int cc;

  do {} while (0);

  np0 = np[0];
  sp0 = mpn_sqrtrem1 (rp, np[1]);
  rp0 = rp[0];

  rp0 = (rp0 << (((64 - 0) >> 1) - 1)) + (np0 >> (((64 - 0) >> 1) + 1));
  q = rp0 / sp0;

  q -= q >> ((64 - 0) >> 1);

  u = rp0 - q * sp0;

  sp0 = (sp0 << ((64 - 0) >> 1)) | q;
  cc = u >> (((64 - 0) >> 1) - 1);
  rp0 = ((u << (((64 - 0) >> 1) + 1)) & ((~ ((mp_limb_t) (0))) >> 0)) + (np0 & ((((mp_limb_t) 1L) << (((64 - 0) >> 1) + 1)) - 1));

  q2 = q * q;
  cc -= rp0 < q2;
  rp0 -= q2;
  if (cc < 0)
    {
      rp0 += sp0;
      cc += rp0 < sp0;
      --sp0;
      rp0 += sp0;
      cc += rp0 < sp0;
    }

  rp[0] = rp0;
  sp[0] = sp0;
  return cc;
}







static mp_limb_t
mpn_dc_sqrtrem (mp_ptr sp, mp_ptr np, mp_size_t n, mp_limb_t approx, mp_ptr scratch)
{
  mp_limb_t q;
  int c, b;
  mp_size_t l, h;

  do {} while (0);

  if (n == 1)
    c = mpn_sqrtrem2 (sp, np, np);
  else
    {
      l = n / 2;
      h = n - l;
      q = mpn_dc_sqrtrem (sp + l, np + 2 * l, h, 0, scratch);
      if (q != 0)
 (__gmpn_sub_n (np + 2 * l, np + 2 * l, sp + l, h));
      ;
      __gmpn_tdiv_qr (scratch, np + l, 0, np + l, n, sp + l, h);
      q += scratch[l];
      c = scratch[0] & 1;
      __gmpn_rshift (sp, scratch, l, 1);
      sp[l - 1] |= (q << ((64 - 0) - 1)) & ((~ ((mp_limb_t) (0))) >> 0);
      if (__builtin_expect (((sp[0] & approx) != 0) != 0, 0))
 return 1;
      q >>= 1;
      if (c != 0)
 c = __gmpn_add_n (np + l, np + l, sp + l, h);
      ;
      __gmpn_sqr (np + n, sp, l);
      b = q + __gmpn_sub_n (np, np, np + n, 2 * l);
      c -= (l == h) ? b : __gmpn_sub_1 (np + 2 * l, np + 2 * l, 1, (mp_limb_t) b);

      if (c < 0)
 {
   q = __gmpn_add_1 (sp + l, sp + l, h, q);



   c += __gmpn_addmul_1 (np, sp, n, ((mp_limb_t) 2L)) + 2 * q;

   c -= __gmpn_sub_1 (np, np, n, ((mp_limb_t) 1L));
   q -= __gmpn_sub_1 (sp, sp, n, ((mp_limb_t) 1L));
 }
    }

  return c;
}

static mp_limb_t
__gmpn_dcpi1_divappr_q_n (mp_ptr qp, mp_ptr np, mp_srcptr dp, mp_size_t n,
     gmp_pi1_t *dinv, mp_ptr tp);


mp_limb_t
__gmpn_dcpi1_divappr_q (mp_ptr qp, mp_ptr np, mp_size_t nn,
   mp_srcptr dp, mp_size_t dn, gmp_pi1_t *dinv);

mp_limb_t
__gmpn_mu_divappr_q (mp_ptr qp,
    mp_srcptr np,
    mp_size_t nn,
    mp_srcptr dp,
    mp_size_t dn,
       mp_ptr scratch);

mp_size_t
__gmpn_mu_divappr_q_itch (mp_size_t nn, mp_size_t dn, int mua_k);

static void
mpn_divappr_q (mp_ptr qp, mp_srcptr np, mp_size_t nn, mp_srcptr dp, mp_size_t dn, mp_ptr scratch)
{
  gmp_pi1_t inv;
  mp_limb_t qh;
  do {} while (0);
  do {} while (0);
  do {} while (0);

  do { do {} while (0); do { do {} while (0); do {} while (0); if ((nn) != 0) { mp_size_t __n = (nn) - 1; mp_ptr __dst = (scratch); mp_srcptr __src = (np); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
  do { mp_limb_t _v, _p, _t1, _t0, _mask; do { mp_limb_t _dummy; do {} while (0); do { UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m; do {} while (0); do {} while (0); __d1 = ((UWtype) (dp[dn-1]) >> (64 / 2)); __d0 = ((UWtype) (dp[dn-1]) & (((UWtype) 1 << (64 / 2)) - 1)); __q1 = (~(dp[dn-1])) / __d1; __r1 = (~(dp[dn-1])) - __q1 * __d1; __m = __q1 * __d0; __r1 = __r1 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) >> (64 / 2)); if (__r1 < __m) { __q1--, __r1 += (dp[dn-1]); if (__r1 >= (dp[dn-1])) if (__r1 < __m) __q1--, __r1 += (dp[dn-1]); } __r1 -= __m; __q0 = __r1 / __d1; __r0 = __r1 - __q0 * __d1; __m = __q0 * __d0; __r0 = __r0 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) & (((UWtype) 1 << (64 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (dp[dn-1]); if (__r0 >= (dp[dn-1])) if (__r0 < __m) __q0--, __r0 += (dp[dn-1]); } __r0 -= __m; (_v) = __q1 * ((UWtype) 1 << (64 / 2)) | __q0; (_dummy) = __r0; } while (0); } while (0); _p = (dp[dn-1]) * _v; _p += (dp[dn-2]); if (_p < (dp[dn-2])) { _v--; _mask = -(mp_limb_t) (_p >= (dp[dn-1])); _p -= (dp[dn-1]); _v += _mask; _p -= _mask & (dp[dn-1]); } do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = (dp[dn-2]), __v = (_v); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); _p += _t1; if (_p < _t1) { _v--; if (__builtin_expect ((_p >= (dp[dn-1])) != 0, 0)) { if (_p > (dp[dn-1]) || _t0 >= (dp[dn-2])) _v--; } } (inv).inv32 = _v; } while (0);
  if ((! ((__builtin_constant_p (200) && (200) == 0) || (!(__builtin_constant_p (200) && (200) == 9223372036854775807L) && (dn) >= (200)))))
    qh = __gmpn_sbpi1_divappr_q (qp, scratch, nn, dp, dn, inv.inv32);
  else if ((! ((__builtin_constant_p (2000) && (2000) == 0) || (!(__builtin_constant_p (2000) && (2000) == 9223372036854775807L) && (dn) >= (2000)))))
    qh = __gmpn_dcpi1_divappr_q (qp, scratch, nn, dp, dn, &inv);
  else
    {
      mp_size_t itch = __gmpn_mu_divappr_q_itch (nn, dn, 0);
      struct tmp_reentrant_t *__tmp_marker;
      __tmp_marker = 0;

      qh = __gmpn_mu_divappr_q (qp, np, nn, dp, dn, ((mp_limb_t *) (__builtin_expect ((((itch) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((itch) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (itch) * sizeof (mp_limb_t)))));
      do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);
    }
  qp [nn - dn] = qh;
}

static int
mpn_dc_sqrt (mp_ptr sp, mp_srcptr np, mp_size_t n, unsigned nsh, unsigned odd)
{
  mp_limb_t q;
  int c;
  mp_size_t l, h;
  mp_ptr qp, tp, scratch;
  struct tmp_reentrant_t *__tmp_marker;
  __tmp_marker = 0;

  do {} while (0);
  do {} while (0);
  do {} while (0);

  l = (n - 1) / 2;
  h = n - l;
  do {} while (0);
  scratch = ((mp_limb_t *) (__builtin_expect ((((l + 2 * n + 5 - 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((l + 2 * n + 5 - 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (l + 2 * n + 5 - 1) * sizeof (mp_limb_t))));
  tp = scratch + n + 2 - 1;
  if (nsh != 0)
    {

      int o = l > (1 + odd);
      (__gmpn_lshift (tp - o, np + l - 1 - o - odd, n + h + 1 + o, 2 * nsh));
    }
  else
    do { do {} while (0); do { do {} while (0); do {} while (0); if ((n + h + 1) != 0) { mp_size_t __n = (n + h + 1) - 1; mp_ptr __dst = (tp); mp_srcptr __src = (np + l - 1 - odd); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
  q = mpn_dc_sqrtrem (sp + l, tp + l + 1, h, 0, scratch);
  if (q != 0)
    (__gmpn_sub_n (tp + l + 1, tp + l + 1, sp + l, h));
  qp = tp + n + 1;
  ;

  mpn_divappr_q (qp, tp, n + 1, sp + l, h, scratch);



  q += qp [l + 1];
  c = 1;
  if (q > 1)
    {

      do { mp_ptr __dst = (sp); mp_size_t __n = (l); do {} while (0); do *__dst++ = (((~ ((mp_limb_t) (0))) >> 0)); while (--__n); } while (0);
    }
  else
    {

      __gmpn_rshift (sp, qp + 1, l, 1);
      sp[l - 1] |= q << ((64 - 0) - 1);
      if (((qp[0] >> (2 + 1)) |
    (qp[1] & (((~ ((mp_limb_t) (0))) >> 0) >> (((64 - 0) >> odd)- nsh - 1)))) == 0)
 {
   mp_limb_t cy;





   ;
   (__gmpn_mul (scratch, sp + l, h, qp + 1, l + 1));

   cy = __gmpn_sub_n (tp + 1, tp + 1, scratch, h);

   do { mp_limb_t __x; mp_ptr __p = (tp + 1 + h); if (__builtin_constant_p (cy) && (cy) == 1) { while ((*(__p++))-- == 0) ; } else { __x = *__p; *__p = __x - (cy); if (__x < (cy)) while ((*(++__p))-- == 0) ; } } while (0);

   do {} while (0);
   if (__gmpn_cmp (tp + 1 + h, scratch + h, l) < 0)
     {




       cy = __gmpn_addmul_1 (tp + 1, sp + l, h, ((mp_limb_t) 2L));

       (__gmpn_add_1 (tp + 1 + h, tp + 1 + h, l, cy));
       do { mp_limb_t __x; mp_ptr __p = (sp); if (__builtin_constant_p (1) && (1) == 1) { while ((*(__p++))-- == 0) ; } else { __x = *__p; *__p = __x - (1); if (__x < (1)) while ((*(++__p))-- == 0) ; } } while (0);
     }
# 390 "sqrtrem.c"
   if (__gmpn_zero_p (tp + l + 1, h - l))
     {
       ;
       __gmpn_sqr (scratch, sp, l);
       c = __gmpn_cmp (tp + 1, scratch + l, l);
       if (c == 0)
  {
    if (nsh != 0)
      {
        __gmpn_lshift (tp, np, l, 2 * nsh);
        np = tp;
      }
    c = __gmpn_cmp (np, scratch + odd, l - odd);
  }
       if (c < 0)
  {
    do { mp_limb_t __x; mp_ptr __p = (sp); if (__builtin_constant_p (1) && (1) == 1) { while ((*(__p++))-- == 0) ; } else { __x = *__p; *__p = __x - (1); if (__x < (1)) while ((*(++__p))-- == 0) ; } } while (0);
    c = 1;
  }
     }
 }
    }
  do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);

  if ((odd | nsh) != 0)
    __gmpn_rshift (sp, sp, n, nsh + (odd ? (64 - 0) / 2 : 0));
  return c;
}




mp_limb_t
__gmpn_dcpi1_divappr_q_n (mp_ptr qp, mp_ptr np, mp_srcptr dp, mp_size_t n,
         gmp_pi1_t *dinv, mp_ptr tp)
{
  mp_size_t lo, hi;
  mp_limb_t cy, qh, ql;

  lo = n >> 1;
  hi = n - lo;

  if ((! ((__builtin_constant_p ((2*30)) && ((2*30)) == 0) || (!(__builtin_constant_p ((2*30)) && ((2*30)) == 9223372036854775807L) && (hi) >= ((2*30))))))
    qh = __gmpn_sbpi1_div_qr (qp + lo, np + 2 * lo, 2 * hi, dp + lo, hi, dinv->inv32);
  else
    qh = __gmpn_dcpi1_div_qr_n (qp + lo, np + 2 * lo, dp + lo, hi, dinv, tp);

  __gmpn_mul (tp, qp + lo, hi, dp, lo);

  cy = __gmpn_sub_n (np + lo, np + lo, tp, n);
  if (qh != 0)
    cy += __gmpn_sub_n (np + n, np + n, dp, lo);

  while (cy != 0)
    {
      qh -= __gmpn_sub_1 (qp + lo, qp + lo, hi, 1);
      cy -= __gmpn_add_n (np + lo, np + lo, dp, n);
    }

  if ((! ((__builtin_constant_p (200) && (200) == 0) || (!(__builtin_constant_p (200) && (200) == 9223372036854775807L) && (lo) >= (200)))))
    ql = __gmpn_sbpi1_divappr_q (qp, np + hi, 2 * lo, dp + hi, lo, dinv->inv32);
  else
    ql = __gmpn_dcpi1_divappr_q_n (qp, np + hi, dp + hi, lo, dinv, tp);

  if (__builtin_expect ((ql != 0) != 0, 0))
    {
      mp_size_t i;
      for (i = 0; i < lo; i++)
 qp[i] = ((~ ((mp_limb_t) (0))) >> 0);
    }

  return qh;
}



mp_limb_t
__gmpn_sbpi1_div_q (mp_ptr qp,
   mp_ptr np, mp_size_t nn,
   mp_srcptr dp, mp_size_t dn,
   mp_limb_t dinv)
{
  mp_limb_t qh;
  mp_size_t qn, i;
  mp_limb_t n1, n0;
  mp_limb_t d1, d0;
  mp_limb_t cy, cy1;
  mp_limb_t q;
  mp_limb_t flag;

  mp_size_t dn_orig = dn;
  mp_srcptr dp_orig = dp;
  mp_ptr np_orig = np;

  do {} while (0);
  do {} while (0);
  do {} while (0);

  np += nn;

  qn = nn - dn;
  if (qn + 1 < dn)
    {
      dp += dn - (qn + 1);
      dn = qn + 1;
    }

  qh = __gmpn_cmp (np - dn, dp, dn) >= 0;
  if (qh != 0)
    __gmpn_sub_n (np - dn, np - dn, dp, dn);

  qp += qn;

  dn -= 2;

  d1 = dp[dn + 1];
  d0 = dp[dn + 0];

  np -= 2;

  n1 = np[1];

  for (i = qn - (dn + 2); i >= 0; i--)
    {
      np--;
      if (__builtin_expect ((n1 == d1) != 0, 0) && np[1] == d0)
 {
   q = ((~ ((mp_limb_t) (0))) >> 0);
   __gmpn_submul_1 (np - dn, dp, dn + 2, q);
   n1 = np[1];
 }
      else
 {
   do { mp_limb_t _q0, _t1, _t0, _mask; do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = ((n1)), __v = ((dinv)); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); ((q)) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_q0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); do { UWtype __x; __x = (_q0) + ((np[1])); ((q)) = ((q)) + ((n1)) + (__x < (_q0)); (_q0) = __x; } while (0); (n1) = (np[1]) - (d1) * (q); do { UWtype __x; __x = ((np[0])) - ((d0)); ((n1)) = ((n1)) - ((d1)) - (((np[0])) < ((d0))); ((n0)) = __x; } while (0); do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = ((d0)), __v = ((q)); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); do { UWtype __x; __x = ((n0)) - (_t0); ((n1)) = ((n1)) - (_t1) - (((n0)) < (_t0)); ((n0)) = __x; } while (0); (q)++; _mask = - (mp_limb_t) ((n1) >= _q0); (q) += _mask; do { UWtype __x; __x = ((n0)) + (_mask & (d0)); ((n1)) = ((n1)) + (_mask & (d1)) + (__x < ((n0))); ((n0)) = __x; } while (0); if (__builtin_expect (((n1) >= (d1)) != 0, 0)) { if ((n1) > (d1) || (n0) >= (d0)) { (q)++; do { UWtype __x; __x = ((n0)) - ((d0)); ((n1)) = ((n1)) - ((d1)) - (((n0)) < ((d0))); ((n0)) = __x; } while (0); } } } while (0);

   cy = __gmpn_submul_1 (np - dn, dp, dn, q);

   cy1 = n0 < cy;
   n0 = (n0 - cy) & ((~ ((mp_limb_t) (0))) >> 0);
   cy = n1 < cy1;
   n1 -= cy1;
   np[0] = n0;

   if (__builtin_expect ((cy != 0) != 0, 0))
     {
       n1 += d1 + __gmpn_add_n (np - dn, np - dn, dp, dn + 1);
       q--;
     }
 }

      *--qp = q;
    }

  flag = ~((mp_limb_t) 0L);

  if (dn >= 0)
    {
      for (i = dn; i > 0; i--)
 {
   np--;
   if (__builtin_expect ((n1 >= (d1 & flag)) != 0, 0))
     {
       q = ((~ ((mp_limb_t) (0))) >> 0);
       cy = __gmpn_submul_1 (np - dn, dp, dn + 2, q);

       if (__builtin_expect ((n1 != cy) != 0, 0))
  {
    if (n1 < (cy & flag))
      {
        q--;
        __gmpn_add_n (np - dn, np - dn, dp, dn + 2);
      }
    else
      flag = 0;
  }
       n1 = np[1];
     }
   else
     {
       do { mp_limb_t _q0, _t1, _t0, _mask; do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = ((n1)), __v = ((dinv)); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); ((q)) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_q0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); do { UWtype __x; __x = (_q0) + ((np[1])); ((q)) = ((q)) + ((n1)) + (__x < (_q0)); (_q0) = __x; } while (0); (n1) = (np[1]) - (d1) * (q); do { UWtype __x; __x = ((np[0])) - ((d0)); ((n1)) = ((n1)) - ((d1)) - (((np[0])) < ((d0))); ((n0)) = __x; } while (0); do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = ((d0)), __v = ((q)); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); do { UWtype __x; __x = ((n0)) - (_t0); ((n1)) = ((n1)) - (_t1) - (((n0)) < (_t0)); ((n0)) = __x; } while (0); (q)++; _mask = - (mp_limb_t) ((n1) >= _q0); (q) += _mask; do { UWtype __x; __x = ((n0)) + (_mask & (d0)); ((n1)) = ((n1)) + (_mask & (d1)) + (__x < ((n0))); ((n0)) = __x; } while (0); if (__builtin_expect (((n1) >= (d1)) != 0, 0)) { if ((n1) > (d1) || (n0) >= (d0)) { (q)++; do { UWtype __x; __x = ((n0)) - ((d0)); ((n1)) = ((n1)) - ((d1)) - (((n0)) < ((d0))); ((n0)) = __x; } while (0); } } } while (0);

       cy = __gmpn_submul_1 (np - dn, dp, dn, q);

       cy1 = n0 < cy;
       n0 = (n0 - cy) & ((~ ((mp_limb_t) (0))) >> 0);
       cy = n1 < cy1;
       n1 -= cy1;
       np[0] = n0;

       if (__builtin_expect ((cy != 0) != 0, 0))
  {
    n1 += d1 + __gmpn_add_n (np - dn, np - dn, dp, dn + 1);
    q--;
  }
     }

   *--qp = q;


   dn--;
   dp++;
 }

      np--;
      if (__builtin_expect ((n1 >= (d1 & flag)) != 0, 0))
 {
   q = ((~ ((mp_limb_t) (0))) >> 0);
   cy = __gmpn_submul_1 (np, dp, 2, q);

   if (__builtin_expect ((n1 != cy) != 0, 0))
     {
       if (n1 < (cy & flag))
  {
    q--;
    do { UWtype __x; __x = (np[0]) + (dp[0]); (np[1]) = (np[1]) + (dp[1]) + (__x < (np[0])); (np[0]) = __x; } while (0);
  }
       else
  flag = 0;
     }
   n1 = np[1];
 }
      else
 {
   do { mp_limb_t _q0, _t1, _t0, _mask; do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = ((n1)), __v = ((dinv)); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); ((q)) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_q0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); do { UWtype __x; __x = (_q0) + ((np[1])); ((q)) = ((q)) + ((n1)) + (__x < (_q0)); (_q0) = __x; } while (0); (n1) = (np[1]) - (d1) * (q); do { UWtype __x; __x = ((np[0])) - ((d0)); ((n1)) = ((n1)) - ((d1)) - (((np[0])) < ((d0))); ((n0)) = __x; } while (0); do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = ((d0)), __v = ((q)); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); do { UWtype __x; __x = ((n0)) - (_t0); ((n1)) = ((n1)) - (_t1) - (((n0)) < (_t0)); ((n0)) = __x; } while (0); (q)++; _mask = - (mp_limb_t) ((n1) >= _q0); (q) += _mask; do { UWtype __x; __x = ((n0)) + (_mask & (d0)); ((n1)) = ((n1)) + (_mask & (d1)) + (__x < ((n0))); ((n0)) = __x; } while (0); if (__builtin_expect (((n1) >= (d1)) != 0, 0)) { if ((n1) > (d1) || (n0) >= (d0)) { (q)++; do { UWtype __x; __x = ((n0)) - ((d0)); ((n1)) = ((n1)) - ((d1)) - (((n0)) < ((d0))); ((n0)) = __x; } while (0); } } } while (0);

   np[0] = n0;
   np[1] = n1;
 }

      *--qp = q;
    }
  do { if (__builtin_expect ((!(np[1] == n1)) != 0, 0)) __gmp_assert_fail ("sbpi1_div_q.c", 198, "np[1] == n1"); } while (0);
  np += 2;


  dn = dn_orig;
  if (__builtin_expect ((n1 < (dn & flag)) != 0, 0))
    {
      mp_limb_t q, x;
# 223 "sbpi1_div_q.c"
      x = n1;

      if (dn > 2)
 {

   mp_limb_t y;

   dp = dp_orig;
   if (qn + 1 < dn)
     {
       dp += dn - (qn + 1);
       dn = qn + 1;
     }

   y = np[-2];

   for (i = dn - 3; i >= 0; i--)
     {
       q = qp[i];
       cy = __gmpn_submul_1 (np - (dn - i), dp, dn - i - 2, q);

       if (y < cy)
  {
    if (x == 0)
      {
        cy = __gmpn_sub_1 (qp, qp, qn, 1);
        do { if (__builtin_expect ((!(cy == 0)) != 0, 0)) __gmp_assert_fail ("sbpi1_div_q.c", 249, "cy == 0"); } while (0);
        return qh - cy;
      }
    x--;
  }
       y -= cy;
     }
   np[-2] = y;
 }

      dn = dn_orig;
      if (qn + 1 < dn)
 {


   dp = dp_orig;
   np = np_orig;

   if (qh != 0)
     {
       cy = __gmpn_sub_n (np + qn, np + qn, dp, dn - (qn + 1));
       if (cy != 0)
  {
    if (x == 0)
      {
        if (qn != 0)
   cy = __gmpn_sub_1 (qp, qp, qn, 1);
        return qh - cy;
      }
    x--;
  }
     }

   if (qn == 0)
     return qh;

   for (i = dn - qn - 2; i >= 0; i--)
     {
       cy = __gmpn_submul_1 (np + i, qp, qn, dp[i]);
       cy = __gmpn_sub_1 (np + qn + i, np + qn + i, dn - qn - i - 1, cy);
       if (cy != 0)
  {
    if (x == 0)
      {
        cy = __gmpn_sub_1 (qp, qp, qn, 1);
        return qh;
      }
    x--;
  }
     }
 }
    }

  return qh;
}


mp_limb_t
__gmpn_dcpi1_divappr_q (mp_ptr qp, mp_ptr np, mp_size_t nn,
       mp_srcptr dp, mp_size_t dn, gmp_pi1_t *dinv)
{
  mp_size_t qn;
  mp_limb_t qh, cy, qsave;
  mp_ptr tp;
  struct tmp_reentrant_t *__tmp_marker;

  __tmp_marker = 0;

  do {} while (0);
  do {} while (0);
  do {} while (0);

  qn = nn - dn;
  qp += qn;
  np += nn;
  dp += dn;

  if (qn >= dn)
    {
      qn++;

      do
 qn -= dn;
      while (qn > dn);

      qp -= qn;
      np -= qn;

      tp = ((mp_limb_t *) alloca((dn) * sizeof (mp_limb_t)));


      if (qn == 1)
 {
   mp_limb_t q, n2, n1, n0, d1, d0;


   qh = __gmpn_cmp (np - dn + 1, dp - dn, dn) >= 0;
   if (qh)
     (__gmpn_sub_n (np - dn + 1, np - dn + 1, dp - dn, dn));



   n2 = np[0];
   n1 = np[-1];
   n0 = np[-2];
   d1 = dp[-1];
   d0 = dp[-2];

   do {} while (0);

   if (__builtin_expect ((n2 == d1) != 0, 0) && n1 == d0)
     {
       q = ((~ ((mp_limb_t) (0))) >> 0);
       cy = __gmpn_submul_1 (np - dn, dp - dn, dn, q);
       do {} while (0);
     }
   else
     {
       do { mp_limb_t _q0, _t1, _t0, _mask; do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = ((n2)), __v = ((dinv->inv32)); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); ((q)) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_q0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); do { UWtype __x; __x = (_q0) + ((n1)); ((q)) = ((q)) + ((n2)) + (__x < (_q0)); (_q0) = __x; } while (0); (n1) = (n1) - (d1) * (q); do { UWtype __x; __x = ((n0)) - ((d0)); ((n1)) = ((n1)) - ((d1)) - (((n0)) < ((d0))); ((n0)) = __x; } while (0); do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = ((d0)), __v = ((q)); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); do { UWtype __x; __x = ((n0)) - (_t0); ((n1)) = ((n1)) - (_t1) - (((n0)) < (_t0)); ((n0)) = __x; } while (0); (q)++; _mask = - (mp_limb_t) ((n1) >= _q0); (q) += _mask; do { UWtype __x; __x = ((n0)) + (_mask & (d0)); ((n1)) = ((n1)) + (_mask & (d1)) + (__x < ((n0))); ((n0)) = __x; } while (0); if (__builtin_expect (((n1) >= (d1)) != 0, 0)) { if ((n1) > (d1) || (n0) >= (d0)) { (q)++; do { UWtype __x; __x = ((n0)) - ((d0)); ((n1)) = ((n1)) - ((d1)) - (((n0)) < ((d0))); ((n0)) = __x; } while (0); } } } while (0);

       if (dn > 2)
  {
    mp_limb_t cy, cy1;
    cy = __gmpn_submul_1 (np - dn, dp - dn, dn - 2, q);

    cy1 = n0 < cy;
    n0 = (n0 - cy) & ((~ ((mp_limb_t) (0))) >> 0);
    cy = n1 < cy1;
    n1 = (n1 - cy1) & ((~ ((mp_limb_t) (0))) >> 0);
    np[-2] = n0;

    if (__builtin_expect ((cy != 0) != 0, 0))
      {
        n1 += d1 + __gmpn_add_n (np - dn, np - dn, dp - dn, dn - 1);
        qh -= (q == 0);
        q = (q - 1) & ((~ ((mp_limb_t) (0))) >> 0);
      }
  }
       else
  np[-2] = n0;

       np[-1] = n1;
     }
   qp[0] = q;
 }
      else
 {
   if (qn == 2)
     qh = __gmpn_divrem_2 (qp, 0L, np - 2, 4, dp - 2);
   else if ((! ((__builtin_constant_p ((2*30)) && ((2*30)) == 0) || (!(__builtin_constant_p ((2*30)) && ((2*30)) == 9223372036854775807L) && (qn) >= ((2*30))))))
     qh = __gmpn_sbpi1_div_qr (qp, np - qn, 2 * qn, dp - qn, qn, dinv->inv32);
   else
     qh = __gmpn_dcpi1_div_qr_n (qp, np - qn, dp - qn, qn, dinv, tp);

   if (qn != dn)
     {
       if (qn > dn - qn)
  __gmpn_mul (tp, qp, qn, dp - dn, dn - qn);
       else
  __gmpn_mul (tp, dp - dn, dn - qn, qp, qn);

       cy = __gmpn_sub_n (np - dn, np - dn, tp, dn);
       if (qh != 0)
  cy += __gmpn_sub_n (np - dn + qn, np - dn + qn, dp - dn, dn - qn);

       while (cy != 0)
  {
    qh -= __gmpn_sub_1 (qp, qp, qn, 1);
    cy -= __gmpn_add_n (np - dn, np - dn, dp - dn, dn);
  }
     }
 }
      qn = nn - dn - qn + 1;
      while (qn > dn)
 {
   qp -= dn;
   np -= dn;
   __gmpn_dcpi1_div_qr_n (qp, np - dn, dp - dn, dn, dinv, tp);
   qn -= dn;
 }




      qn--;
      qp -= qn;
      np -= dn;
      qsave = qp[qn];
      __gmpn_dcpi1_divappr_q_n (qp, np - dn, dp - dn, dn, dinv, tp);
      do { do {} while (0); do {} while (0); if ((qn) != 0) { mp_size_t __n = (qn) - 1; mp_ptr __dst = (qp); mp_srcptr __src = (qp + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0);
      qp[qn] = qsave;
    }
  else
    {
      mp_ptr q2p;
# 234 "dcpi1_divappr_q.c"
      qp -= qn;
      np -= qn;

      q2p = ((mp_limb_t *) alloca((qn + 1) * sizeof (mp_limb_t)));


      if ((! ((__builtin_constant_p (200) && (200) == 0) || (!(__builtin_constant_p (200) && (200) == 9223372036854775807L) && (qn) >= (200)))))
 {
   qh = __gmpn_sbpi1_divappr_q (q2p, np - qn - 2, 2 * (qn + 1),
        dp - (qn + 1), qn + 1, dinv->inv32);
 }
      else
 {


   tp = ((mp_limb_t *) alloca((qn + 1) * sizeof (mp_limb_t)));
   qh = __gmpn_dcpi1_divappr_q_n (q2p, np - qn - 2, dp - (qn + 1), qn + 1, dinv, tp);
 }
      do { do {} while (0); do { do {} while (0); do {} while (0); if ((qn) != 0) { mp_size_t __n = (qn) - 1; mp_ptr __dst = (qp); mp_srcptr __src = (q2p + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
    }

  do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);
  return qh;
}



mp_limb_t
__gmpn_preinv_mu_divappr_q (mp_ptr qp,
    mp_srcptr np,
    mp_size_t nn,
    mp_srcptr dp,
    mp_size_t dn,
    mp_srcptr ip,
    mp_size_t in,
       mp_ptr scratch);


mp_size_t
__gmpn_mu_divappr_q_choose_in (mp_size_t qn, mp_size_t dn, int k);

mp_limb_t
__gmpn_mu_divappr_q (mp_ptr qp,
    mp_srcptr np,
    mp_size_t nn,
    mp_srcptr dp,
    mp_size_t dn,
    mp_ptr scratch)
{
  mp_size_t qn, in;
  mp_limb_t cy=0, qh;
  mp_ptr ip, tp;

  do {} while (0);

  qn = nn - dn;


  if (qn + 1 < dn)
    {
      np += dn - (qn + 1);
      nn -= dn - (qn + 1);
      dp += dn - (qn + 1);
      dn = qn + 1;
    }


  in = __gmpn_mu_divappr_q_choose_in (qn, dn, 0);
  do {} while (0);





  ip = scratch;
  tp = scratch + in + 1;


  if (dn == in)
    {
      do { do {} while (0); do { do {} while (0); do {} while (0); if ((in) != 0) { mp_size_t __n = (in) - 1; mp_ptr __dst = (tp + 1); mp_srcptr __src = (dp); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
      tp[0] = 1;
      __gmpn_invertappr (ip, tp, in + 1, tp + in + 1);
      do { do {} while (0); do {} while (0); if ((in) != 0) { mp_size_t __n = (in) - 1; mp_ptr __dst = (ip); mp_srcptr __src = (ip + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0);
    }
  else
    {
      cy = __gmpn_add_1 (tp, dp + dn - (in + 1), in + 1, 1);
      if (__builtin_expect ((cy != 0) != 0, 0))
 do { do {} while (0); if ((in) != 0) do { mp_ptr __dst = (ip); mp_size_t __n = (in); do {} while (0); do *__dst++ = (((mp_limb_t) 0L)); while (--__n); } while (0); } while (0);
      else
 {
   __gmpn_invertappr (ip, tp, in + 1, tp + in + 1);
   do { do {} while (0); do {} while (0); if ((in) != 0) { mp_size_t __n = (in) - 1; mp_ptr __dst = (ip); mp_srcptr __src = (ip + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0);
 }
    }
# 154 "mu_divappr_q.c"
  qh = __gmpn_preinv_mu_divappr_q (qp, np, nn, dp, dn, ip, in, scratch + in);

  return qh;
}

mp_limb_t
__gmpn_preinv_mu_divappr_q (mp_ptr qp,
    mp_srcptr np,
    mp_size_t nn,
    mp_srcptr dp,
    mp_size_t dn,
    mp_srcptr ip,
    mp_size_t in,
    mp_ptr scratch)
{
  mp_size_t qn;
  mp_limb_t cy = 0, cx, qh;
  mp_limb_t r;
  mp_size_t tn, wn;





  qn = nn - dn;

  np += qn;
  qp += qn;

  qh = __gmpn_cmp (np, dp, dn) >= 0;
  if (qh != 0)
    __gmpn_sub_n (scratch, np, dp, dn);
  else
    do { do {} while (0); do { do {} while (0); do {} while (0); if ((dn) != 0) { mp_size_t __n = (dn) - 1; mp_ptr __dst = (scratch); mp_srcptr __src = (np); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);

  if (qn == 0)
    return qh;

  while (qn > 0)
    {
      if (qn < in)
 {
   ip += in - qn;
   in = qn;
 }
      np -= in;
      qp -= in;



      __gmpn_mul_n ((scratch + dn), scratch + dn - in, ip, in);
      cy = __gmpn_add_n (qp, (scratch + dn) + in, scratch + dn - in, in);
      do { if (__builtin_expect ((!(cy == 0)) != 0, 0)) __gmp_assert_fail ("mu_divappr_q.c", 206, "cy == 0"); } while (0);

      qn -= in;
      if (qn == 0)
 break;





      if ((! ((__builtin_constant_p (((4*16)/2)) && (((4*16)/2)) == 0) || (!(__builtin_constant_p (((4*16)/2)) && (((4*16)/2)) == 9223372036854775807L) && (in) >= (((4*16)/2))))))
 __gmpn_mul ((scratch + dn), dp, dn, qp, in);
      else
 {
   tn = __gmpn_mulmod_bnm1_next_size (dn + 1);
   __gmpn_mulmod_bnm1 ((scratch + dn), tn, dp, dn, qp, in, (scratch + dn + tn));
   wn = dn + in - tn;
   if (wn > 0)
     {
       cy = __gmpn_sub_n ((scratch + dn), (scratch + dn), scratch + dn - wn, wn);
       cy = __gmpn_sub_1 ((scratch + dn) + wn, (scratch + dn) + wn, tn - wn, cy);
       cx = __gmpn_cmp (scratch + dn - in, (scratch + dn) + dn, tn - dn) < 0;
       do { if (__builtin_expect ((!(cx >= cy)) != 0, 0)) __gmp_assert_fail ("mu_divappr_q.c", 228, "cx >= cy"); } while (0);
       do { mp_limb_t __x; mp_ptr __p = ((scratch + dn)); if (__builtin_constant_p (cx - cy) && (cx - cy) == 1) { while (++(*(__p++)) == 0) ; } else { __x = *__p + (cx - cy); *__p = __x; if (__x < (cx - cy)) while (++(*(++__p)) == 0) ; } } while (0);
     }
 }

      r = scratch[dn - in] - (scratch + dn)[dn];



      if (dn != in)
 {
   cy = __gmpn_sub_n ((scratch + dn), np, (scratch + dn), in);
   cy = mpn_sub_nc ((scratch + dn) + in, scratch, (scratch + dn) + in, dn - in, cy);
   do { do {} while (0); do { do {} while (0); do {} while (0); if ((dn) != 0) { mp_size_t __n = (dn) - 1; mp_ptr __dst = (scratch); mp_srcptr __src = ((scratch + dn)); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
 }
      else
 {
   cy = __gmpn_sub_n (scratch, np, (scratch + dn), in);
 }


                                                              ;


      r -= cy;
      while (r != 0)
 {



   do { mp_limb_t __x; mp_ptr __p = (qp); if (__builtin_constant_p (1) && (1) == 1) { while (++(*(__p++)) == 0) ; } else { __x = *__p + (1); *__p = __x; if (__x < (1)) while (++(*(++__p)) == 0) ; } } while (0);
   cy = __gmpn_sub_n (scratch, scratch, dp, dn);
   r -= cy;
   ;
 }
      if (__gmpn_cmp (scratch, dp, dn) >= 0)
 {

   do { mp_limb_t __x; mp_ptr __p = (qp); if (__builtin_constant_p (1) && (1) == 1) { while (++(*(__p++)) == 0) ; } else { __x = *__p + (1); *__p = __x; if (__x < (1)) while (++(*(++__p)) == 0) ; } } while (0);
   cy = __gmpn_sub_n (scratch, scratch, dp, dn);
   ;
 }
# 282 "mu_divappr_q.c"
      ;
    }




  qn = nn - dn;
  cy += __gmpn_add_1 (qp, qp, qn, 3);
  if (cy != 0)
    {
      if (qh != 0)
 {

   mp_size_t i;
   for (i = 0; i < qn; i++)
     qp[i] = ((~ ((mp_limb_t) (0))) >> 0);
 }
      else
 {

   qh = 1;
 }
    }

  return qh;
}







mp_size_t
__gmpn_mu_divappr_q_choose_in (mp_size_t qn, mp_size_t dn, int k)
{
  mp_size_t in;

  if (k == 0)
    {
      mp_size_t b;
      if (qn > dn)
 {

   b = (qn - 1) / dn + 1;
   in = (qn - 1) / b + 1;
 }
      else if (3 * qn > dn)
 {
   in = (qn - 1) / 2 + 1;
 }
      else
 {
   in = (qn - 1) / 1 + 1;
 }
    }
  else
    {
      mp_size_t xn;
      xn = ((dn) < (qn) ? (dn) : (qn));
      in = (xn - 1) / k + 1;
    }

  return in;
}

mp_size_t
__gmpn_mu_divappr_q_itch (mp_size_t nn, mp_size_t dn, int mua_k)
{
  mp_size_t qn, in, itch_local, itch_out, itch_invapp;

  qn = nn - dn;
  if (qn + 1 < dn)
    {
      dn = qn + 1;
    }
  in = __gmpn_mu_divappr_q_choose_in (qn, dn, mua_k);

  itch_local = __gmpn_mulmod_bnm1_next_size (dn + 1);
  itch_out = mpn_mulmod_bnm1_itch (itch_local, dn, in);
  itch_invapp = (2 * (in + 1)) + in + 2;

  do {} while (0);
  return in + ((dn + itch_local + itch_out) > (itch_invapp) ? (dn + itch_local + itch_out) : (itch_invapp));
}


void
__gmpq_set (mpq_ptr dest, mpq_srcptr src)
{
  mp_size_t num_size, den_size;
  mp_size_t abs_num_size;
  mp_ptr dp;

  num_size = (((&((src)->_mp_num)))->_mp_size);
  abs_num_size = ((num_size) >= 0 ? (num_size) : -(num_size));
  dp = (__builtin_expect (((abs_num_size) > (((&((dest)->_mp_num)))->_mp_alloc)) != 0, 0) ? (mp_ptr) __gmpz_realloc((&((dest)->_mp_num)),abs_num_size) : (((&((dest)->_mp_num)))->_mp_d));
  (((&((dest)->_mp_num)))->_mp_size) = num_size;
  do { do {} while (0); do { do {} while (0); do {} while (0); if ((abs_num_size) != 0) { mp_size_t __n = (abs_num_size) - 1; mp_ptr __dst = (dp); mp_srcptr __src = ((((&((src)->_mp_num)))->_mp_d)); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);

  den_size = (((&((src)->_mp_den)))->_mp_size);
  dp = (__builtin_expect (((den_size) > (((&((dest)->_mp_den)))->_mp_alloc)) != 0, 0) ? (mp_ptr) __gmpz_realloc((&((dest)->_mp_den)),den_size) : (((&((dest)->_mp_den)))->_mp_d));
  (((&((dest)->_mp_den)))->_mp_size) = den_size;
  do { do {} while (0); do { do {} while (0); do {} while (0); if ((den_size) != 0) { mp_size_t __n = (den_size) - 1; mp_ptr __dst = (dp); mp_srcptr __src = ((((&((src)->_mp_den)))->_mp_d)); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
}



mp_limb_t
__gmpn_mu_div_q (mp_ptr qp,
       mp_srcptr np, mp_size_t nn,
       mp_srcptr dp, mp_size_t dn,
   mp_ptr scratch);

mp_size_t
__gmpn_mu_div_q_itch (mp_size_t nn, mp_size_t dn, int mua_k);


void
__gmpn_div_q (mp_ptr qp,
    mp_srcptr np, mp_size_t nn,
    mp_srcptr dp, mp_size_t dn, mp_ptr scratch)
{
  mp_ptr new_dp, new_np, tp, rp;
  mp_limb_t cy, dh, qh;
  mp_size_t new_nn, qn;
  gmp_pi1_t dinv;
  int cnt;
  struct tmp_reentrant_t *__tmp_marker;
  __tmp_marker = 0;

  do {} while (0);
  do {} while (0);
  do {} while (0);
  do {} while (0);
  do {} while (0);
  do {} while (0);

  do { if (__builtin_expect ((!(5 >= 2)) != 0, 0)) __gmp_assert_fail ("div_q.c", 120, "5 >= 2"); } while (0);

  if (dn == 1)
    {
      __gmpn_divrem_1 (qp, 0L, np, nn, dp[dn - 1]);
      return;
    }

  qn = nn - dn + 1;

  if (qn + 5 >= dn)
    {


      new_np = scratch;

      dh = dp[dn - 1];
      if (__builtin_expect (((dh & (((mp_limb_t) 1L) << ((64 - 0)-1))) == 0) != 0, 1))
 {
   do { UWtype __xr = (dh); UWtype __a; if (64 == 32) { __a = __xr < ((UWtype) 1 << 2*(64 / 4)) ? (__xr < ((UWtype) 1 << (64 / 4)) ? 1 : (64 / 4) + 1) : (__xr < ((UWtype) 1 << 3*(64 / 4)) ? 2*(64 / 4) + 1 : 3*(64 / 4) + 1); } else { for (__a = 64 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; ++__a; } (cnt) = 64 + 1 - __a - __gmpn_clz_tab[__xr >> __a]; } while (0);

   cy = __gmpn_lshift (new_np, np, nn, cnt);
   new_np[nn] = cy;
   new_nn = nn + (cy != 0);

   new_dp = ((mp_limb_t *) (__builtin_expect ((((dn) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((dn) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (dn) * sizeof (mp_limb_t))));
   __gmpn_lshift (new_dp, dp, dn, cnt);

   if (dn == 2)
     {
       qh = __gmpn_divrem_2 (qp, 0L, new_np, new_nn, new_dp);
     }
   else if ((! ((__builtin_constant_p (200) && (200) == 0) || (!(__builtin_constant_p (200) && (200) == 9223372036854775807L) && (dn) >= (200)))) ||
     (! ((__builtin_constant_p (200) && (200) == 0) || (!(__builtin_constant_p (200) && (200) == 9223372036854775807L) && (new_nn - dn) >= (200)))))
     {
       do { mp_limb_t _v, _p, _t1, _t0, _mask; do { mp_limb_t _dummy; do {} while (0); do { UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m; do {} while (0); do {} while (0); __d1 = ((UWtype) (new_dp[dn - 1]) >> (64 / 2)); __d0 = ((UWtype) (new_dp[dn - 1]) & (((UWtype) 1 << (64 / 2)) - 1)); __q1 = (~(new_dp[dn - 1])) / __d1; __r1 = (~(new_dp[dn - 1])) - __q1 * __d1; __m = __q1 * __d0; __r1 = __r1 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) >> (64 / 2)); if (__r1 < __m) { __q1--, __r1 += (new_dp[dn - 1]); if (__r1 >= (new_dp[dn - 1])) if (__r1 < __m) __q1--, __r1 += (new_dp[dn - 1]); } __r1 -= __m; __q0 = __r1 / __d1; __r0 = __r1 - __q0 * __d1; __m = __q0 * __d0; __r0 = __r0 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) & (((UWtype) 1 << (64 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (new_dp[dn - 1]); if (__r0 >= (new_dp[dn - 1])) if (__r0 < __m) __q0--, __r0 += (new_dp[dn - 1]); } __r0 -= __m; (_v) = __q1 * ((UWtype) 1 << (64 / 2)) | __q0; (_dummy) = __r0; } while (0); } while (0); _p = (new_dp[dn - 1]) * _v; _p += (new_dp[dn - 2]); if (_p < (new_dp[dn - 2])) { _v--; _mask = -(mp_limb_t) (_p >= (new_dp[dn - 1])); _p -= (new_dp[dn - 1]); _v += _mask; _p -= _mask & (new_dp[dn - 1]); } do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = (new_dp[dn - 2]), __v = (_v); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); _p += _t1; if (_p < _t1) { _v--; if (__builtin_expect ((_p >= (new_dp[dn - 1])) != 0, 0)) { if (_p > (new_dp[dn - 1]) || _t0 >= (new_dp[dn - 2])) _v--; } } (dinv).inv32 = _v; } while (0);
       qh = __gmpn_sbpi1_div_q (qp, new_np, new_nn, new_dp, dn, dinv.inv32);
     }
   else if ((! ((__builtin_constant_p (200) && (200) == 0) || (!(__builtin_constant_p (200) && (200) == 9223372036854775807L) && (dn) >= (200)))) ||
     (! ((__builtin_constant_p (2 * 2000) && (2 * 2000) == 0) || (!(__builtin_constant_p (2 * 2000) && (2 * 2000) == 9223372036854775807L) && (nn) >= (2 * 2000)))) ||
     (double) (2 * (2000 - 200)) * dn
     + (double) 200 * nn > (double) dn * nn)
     {
       do { mp_limb_t _v, _p, _t1, _t0, _mask; do { mp_limb_t _dummy; do {} while (0); do { UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m; do {} while (0); do {} while (0); __d1 = ((UWtype) (new_dp[dn - 1]) >> (64 / 2)); __d0 = ((UWtype) (new_dp[dn - 1]) & (((UWtype) 1 << (64 / 2)) - 1)); __q1 = (~(new_dp[dn - 1])) / __d1; __r1 = (~(new_dp[dn - 1])) - __q1 * __d1; __m = __q1 * __d0; __r1 = __r1 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) >> (64 / 2)); if (__r1 < __m) { __q1--, __r1 += (new_dp[dn - 1]); if (__r1 >= (new_dp[dn - 1])) if (__r1 < __m) __q1--, __r1 += (new_dp[dn - 1]); } __r1 -= __m; __q0 = __r1 / __d1; __r0 = __r1 - __q0 * __d1; __m = __q0 * __d0; __r0 = __r0 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) & (((UWtype) 1 << (64 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (new_dp[dn - 1]); if (__r0 >= (new_dp[dn - 1])) if (__r0 < __m) __q0--, __r0 += (new_dp[dn - 1]); } __r0 -= __m; (_v) = __q1 * ((UWtype) 1 << (64 / 2)) | __q0; (_dummy) = __r0; } while (0); } while (0); _p = (new_dp[dn - 1]) * _v; _p += (new_dp[dn - 2]); if (_p < (new_dp[dn - 2])) { _v--; _mask = -(mp_limb_t) (_p >= (new_dp[dn - 1])); _p -= (new_dp[dn - 1]); _v += _mask; _p -= _mask & (new_dp[dn - 1]); } do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = (new_dp[dn - 2]), __v = (_v); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); _p += _t1; if (_p < _t1) { _v--; if (__builtin_expect ((_p >= (new_dp[dn - 1])) != 0, 0)) { if (_p > (new_dp[dn - 1]) || _t0 >= (new_dp[dn - 2])) _v--; } } (dinv).inv32 = _v; } while (0);
       qh = __gmpn_dcpi1_div_q (qp, new_np, new_nn, new_dp, dn, &dinv);
     }
   else
     {
       mp_size_t itch = __gmpn_mu_div_q_itch (new_nn, dn, 0);
       mp_ptr scratch = ((mp_limb_t *) (__builtin_expect ((((itch) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((itch) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (itch) * sizeof (mp_limb_t))));
       qh = __gmpn_mu_div_q (qp, new_np, new_nn, new_dp, dn, scratch);
     }
   if (cy == 0)
     qp[qn - 1] = qh;
   else if (__builtin_expect ((qh != 0) != 0, 0))
     {


       mp_size_t i, n;
       n = new_nn - dn;
       for (i = 0; i < n; i++)
  qp[i] = ((~ ((mp_limb_t) (0))) >> 0);
       qh = 0;
     }
 }
      else
 {
   if (new_np != np)
     do { do {} while (0); do { do {} while (0); do {} while (0); if ((nn) != 0) { mp_size_t __n = (nn) - 1; mp_ptr __dst = (new_np); mp_srcptr __src = (np); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);

   if (dn == 2)
     {
       qh = __gmpn_divrem_2 (qp, 0L, new_np, nn, dp);
     }
   else if ((! ((__builtin_constant_p (200) && (200) == 0) || (!(__builtin_constant_p (200) && (200) == 9223372036854775807L) && (dn) >= (200)))) ||
     (! ((__builtin_constant_p (200) && (200) == 0) || (!(__builtin_constant_p (200) && (200) == 9223372036854775807L) && (nn - dn) >= (200)))))
     {
       do { mp_limb_t _v, _p, _t1, _t0, _mask; do { mp_limb_t _dummy; do {} while (0); do { UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m; do {} while (0); do {} while (0); __d1 = ((UWtype) (dh) >> (64 / 2)); __d0 = ((UWtype) (dh) & (((UWtype) 1 << (64 / 2)) - 1)); __q1 = (~(dh)) / __d1; __r1 = (~(dh)) - __q1 * __d1; __m = __q1 * __d0; __r1 = __r1 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) >> (64 / 2)); if (__r1 < __m) { __q1--, __r1 += (dh); if (__r1 >= (dh)) if (__r1 < __m) __q1--, __r1 += (dh); } __r1 -= __m; __q0 = __r1 / __d1; __r0 = __r1 - __q0 * __d1; __m = __q0 * __d0; __r0 = __r0 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) & (((UWtype) 1 << (64 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (dh); if (__r0 >= (dh)) if (__r0 < __m) __q0--, __r0 += (dh); } __r0 -= __m; (_v) = __q1 * ((UWtype) 1 << (64 / 2)) | __q0; (_dummy) = __r0; } while (0); } while (0); _p = (dh) * _v; _p += (dp[dn - 2]); if (_p < (dp[dn - 2])) { _v--; _mask = -(mp_limb_t) (_p >= (dh)); _p -= (dh); _v += _mask; _p -= _mask & (dh); } do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = (dp[dn - 2]), __v = (_v); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); _p += _t1; if (_p < _t1) { _v--; if (__builtin_expect ((_p >= (dh)) != 0, 0)) { if (_p > (dh) || _t0 >= (dp[dn - 2])) _v--; } } (dinv).inv32 = _v; } while (0);
       qh = __gmpn_sbpi1_div_q (qp, new_np, nn, dp, dn, dinv.inv32);
     }
   else if ((! ((__builtin_constant_p (200) && (200) == 0) || (!(__builtin_constant_p (200) && (200) == 9223372036854775807L) && (dn) >= (200)))) ||
     (! ((__builtin_constant_p (2 * 2000) && (2 * 2000) == 0) || (!(__builtin_constant_p (2 * 2000) && (2 * 2000) == 9223372036854775807L) && (nn) >= (2 * 2000)))) ||
     (double) (2 * (2000 - 200)) * dn
     + (double) 200 * nn > (double) dn * nn)
     {
       do { mp_limb_t _v, _p, _t1, _t0, _mask; do { mp_limb_t _dummy; do {} while (0); do { UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m; do {} while (0); do {} while (0); __d1 = ((UWtype) (dh) >> (64 / 2)); __d0 = ((UWtype) (dh) & (((UWtype) 1 << (64 / 2)) - 1)); __q1 = (~(dh)) / __d1; __r1 = (~(dh)) - __q1 * __d1; __m = __q1 * __d0; __r1 = __r1 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) >> (64 / 2)); if (__r1 < __m) { __q1--, __r1 += (dh); if (__r1 >= (dh)) if (__r1 < __m) __q1--, __r1 += (dh); } __r1 -= __m; __q0 = __r1 / __d1; __r0 = __r1 - __q0 * __d1; __m = __q0 * __d0; __r0 = __r0 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) & (((UWtype) 1 << (64 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (dh); if (__r0 >= (dh)) if (__r0 < __m) __q0--, __r0 += (dh); } __r0 -= __m; (_v) = __q1 * ((UWtype) 1 << (64 / 2)) | __q0; (_dummy) = __r0; } while (0); } while (0); _p = (dh) * _v; _p += (dp[dn - 2]); if (_p < (dp[dn - 2])) { _v--; _mask = -(mp_limb_t) (_p >= (dh)); _p -= (dh); _v += _mask; _p -= _mask & (dh); } do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = (dp[dn - 2]), __v = (_v); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); _p += _t1; if (_p < _t1) { _v--; if (__builtin_expect ((_p >= (dh)) != 0, 0)) { if (_p > (dh) || _t0 >= (dp[dn - 2])) _v--; } } (dinv).inv32 = _v; } while (0);
       qh = __gmpn_dcpi1_div_q (qp, new_np, nn, dp, dn, &dinv);
     }
   else
     {
       mp_size_t itch = __gmpn_mu_div_q_itch (nn, dn, 0);
       mp_ptr scratch = ((mp_limb_t *) (__builtin_expect ((((itch) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((itch) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (itch) * sizeof (mp_limb_t))));
       qh = __gmpn_mu_div_q (qp, np, nn, dp, dn, scratch);
     }
   qp[nn - dn] = qh;
 }
    }
  else
    {


      tp = ((mp_limb_t *) (__builtin_expect ((((qn + 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((qn + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (qn + 1) * sizeof (mp_limb_t))));

      new_np = scratch;
      new_nn = 2 * qn + 1;
      if (new_np == np)


 new_np = ((mp_limb_t *) (__builtin_expect ((((new_nn + 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((new_nn + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (new_nn + 1) * sizeof (mp_limb_t))));


      dh = dp[dn - 1];
      if (__builtin_expect (((dh & (((mp_limb_t) 1L) << ((64 - 0)-1))) == 0) != 0, 1))
 {
   do { UWtype __xr = (dh); UWtype __a; if (64 == 32) { __a = __xr < ((UWtype) 1 << 2*(64 / 4)) ? (__xr < ((UWtype) 1 << (64 / 4)) ? 1 : (64 / 4) + 1) : (__xr < ((UWtype) 1 << 3*(64 / 4)) ? 2*(64 / 4) + 1 : 3*(64 / 4) + 1); } else { for (__a = 64 - 8; __a > 0; __a -= 8) if (((__xr >> __a) & 0xff) != 0) break; ++__a; } (cnt) = 64 + 1 - __a - __gmpn_clz_tab[__xr >> __a]; } while (0);

   cy = __gmpn_lshift (new_np, np + nn - new_nn, new_nn, cnt);
   new_np[new_nn] = cy;

   new_nn += (cy != 0);

   new_dp = ((mp_limb_t *) (__builtin_expect ((((qn + 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((qn + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (qn + 1) * sizeof (mp_limb_t))));
   __gmpn_lshift (new_dp, dp + dn - (qn + 1), qn + 1, cnt);
   new_dp[0] |= dp[dn - (qn + 1) - 1] >> ((64 - 0) - cnt);

   if (qn + 1 == 2)
     {
       qh = __gmpn_divrem_2 (tp, 0L, new_np, new_nn, new_dp);
     }
   else if ((! ((__builtin_constant_p (200 - 1) && (200 - 1) == 0) || (!(__builtin_constant_p (200 - 1) && (200 - 1) == 9223372036854775807L) && (qn) >= (200 - 1)))))
     {
       do { mp_limb_t _v, _p, _t1, _t0, _mask; do { mp_limb_t _dummy; do {} while (0); do { UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m; do {} while (0); do {} while (0); __d1 = ((UWtype) (new_dp[qn]) >> (64 / 2)); __d0 = ((UWtype) (new_dp[qn]) & (((UWtype) 1 << (64 / 2)) - 1)); __q1 = (~(new_dp[qn])) / __d1; __r1 = (~(new_dp[qn])) - __q1 * __d1; __m = __q1 * __d0; __r1 = __r1 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) >> (64 / 2)); if (__r1 < __m) { __q1--, __r1 += (new_dp[qn]); if (__r1 >= (new_dp[qn])) if (__r1 < __m) __q1--, __r1 += (new_dp[qn]); } __r1 -= __m; __q0 = __r1 / __d1; __r0 = __r1 - __q0 * __d1; __m = __q0 * __d0; __r0 = __r0 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) & (((UWtype) 1 << (64 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (new_dp[qn]); if (__r0 >= (new_dp[qn])) if (__r0 < __m) __q0--, __r0 += (new_dp[qn]); } __r0 -= __m; (_v) = __q1 * ((UWtype) 1 << (64 / 2)) | __q0; (_dummy) = __r0; } while (0); } while (0); _p = (new_dp[qn]) * _v; _p += (new_dp[qn - 1]); if (_p < (new_dp[qn - 1])) { _v--; _mask = -(mp_limb_t) (_p >= (new_dp[qn])); _p -= (new_dp[qn]); _v += _mask; _p -= _mask & (new_dp[qn]); } do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = (new_dp[qn - 1]), __v = (_v); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); _p += _t1; if (_p < _t1) { _v--; if (__builtin_expect ((_p >= (new_dp[qn])) != 0, 0)) { if (_p > (new_dp[qn]) || _t0 >= (new_dp[qn - 1])) _v--; } } (dinv).inv32 = _v; } while (0);
       qh = __gmpn_sbpi1_divappr_q (tp, new_np, new_nn, new_dp, qn + 1, dinv.inv32);
     }
   else if ((! ((__builtin_constant_p (2000 - 1) && (2000 - 1) == 0) || (!(__builtin_constant_p (2000 - 1) && (2000 - 1) == 9223372036854775807L) && (qn) >= (2000 - 1)))))
     {
       do { mp_limb_t _v, _p, _t1, _t0, _mask; do { mp_limb_t _dummy; do {} while (0); do { UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m; do {} while (0); do {} while (0); __d1 = ((UWtype) (new_dp[qn]) >> (64 / 2)); __d0 = ((UWtype) (new_dp[qn]) & (((UWtype) 1 << (64 / 2)) - 1)); __q1 = (~(new_dp[qn])) / __d1; __r1 = (~(new_dp[qn])) - __q1 * __d1; __m = __q1 * __d0; __r1 = __r1 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) >> (64 / 2)); if (__r1 < __m) { __q1--, __r1 += (new_dp[qn]); if (__r1 >= (new_dp[qn])) if (__r1 < __m) __q1--, __r1 += (new_dp[qn]); } __r1 -= __m; __q0 = __r1 / __d1; __r0 = __r1 - __q0 * __d1; __m = __q0 * __d0; __r0 = __r0 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) & (((UWtype) 1 << (64 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (new_dp[qn]); if (__r0 >= (new_dp[qn])) if (__r0 < __m) __q0--, __r0 += (new_dp[qn]); } __r0 -= __m; (_v) = __q1 * ((UWtype) 1 << (64 / 2)) | __q0; (_dummy) = __r0; } while (0); } while (0); _p = (new_dp[qn]) * _v; _p += (new_dp[qn - 1]); if (_p < (new_dp[qn - 1])) { _v--; _mask = -(mp_limb_t) (_p >= (new_dp[qn])); _p -= (new_dp[qn]); _v += _mask; _p -= _mask & (new_dp[qn]); } do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = (new_dp[qn - 1]), __v = (_v); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); _p += _t1; if (_p < _t1) { _v--; if (__builtin_expect ((_p >= (new_dp[qn])) != 0, 0)) { if (_p > (new_dp[qn]) || _t0 >= (new_dp[qn - 1])) _v--; } } (dinv).inv32 = _v; } while (0);
       qh = __gmpn_dcpi1_divappr_q (tp, new_np, new_nn, new_dp, qn + 1, &dinv);
     }
   else
     {
       mp_size_t itch = __gmpn_mu_divappr_q_itch (new_nn, qn + 1, 0);
       mp_ptr scratch = ((mp_limb_t *) (__builtin_expect ((((itch) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((itch) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (itch) * sizeof (mp_limb_t))));
       qh = __gmpn_mu_divappr_q (tp, new_np, new_nn, new_dp, qn + 1, scratch);
     }
   if (cy == 0)
     tp[qn] = qh;
   else if (__builtin_expect ((qh != 0) != 0, 0))
     {


       mp_size_t i, n;
       n = new_nn - (qn + 1);
       for (i = 0; i < n; i++)
  tp[i] = ((~ ((mp_limb_t) (0))) >> 0);
       qh = 0;
     }
 }
      else
 {
   do { do {} while (0); do { do {} while (0); do {} while (0); if ((new_nn) != 0) { mp_size_t __n = (new_nn) - 1; mp_ptr __dst = (new_np); mp_srcptr __src = (np + nn - new_nn); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);

   new_dp = (mp_ptr) dp + dn - (qn + 1);

   if (qn == 2 - 1)
     {
       qh = __gmpn_divrem_2 (tp, 0L, new_np, new_nn, new_dp);
     }
   else if ((! ((__builtin_constant_p (200 - 1) && (200 - 1) == 0) || (!(__builtin_constant_p (200 - 1) && (200 - 1) == 9223372036854775807L) && (qn) >= (200 - 1)))))
     {
       do { mp_limb_t _v, _p, _t1, _t0, _mask; do { mp_limb_t _dummy; do {} while (0); do { UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m; do {} while (0); do {} while (0); __d1 = ((UWtype) (dh) >> (64 / 2)); __d0 = ((UWtype) (dh) & (((UWtype) 1 << (64 / 2)) - 1)); __q1 = (~(dh)) / __d1; __r1 = (~(dh)) - __q1 * __d1; __m = __q1 * __d0; __r1 = __r1 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) >> (64 / 2)); if (__r1 < __m) { __q1--, __r1 += (dh); if (__r1 >= (dh)) if (__r1 < __m) __q1--, __r1 += (dh); } __r1 -= __m; __q0 = __r1 / __d1; __r0 = __r1 - __q0 * __d1; __m = __q0 * __d0; __r0 = __r0 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) & (((UWtype) 1 << (64 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (dh); if (__r0 >= (dh)) if (__r0 < __m) __q0--, __r0 += (dh); } __r0 -= __m; (_v) = __q1 * ((UWtype) 1 << (64 / 2)) | __q0; (_dummy) = __r0; } while (0); } while (0); _p = (dh) * _v; _p += (new_dp[qn - 1]); if (_p < (new_dp[qn - 1])) { _v--; _mask = -(mp_limb_t) (_p >= (dh)); _p -= (dh); _v += _mask; _p -= _mask & (dh); } do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = (new_dp[qn - 1]), __v = (_v); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); _p += _t1; if (_p < _t1) { _v--; if (__builtin_expect ((_p >= (dh)) != 0, 0)) { if (_p > (dh) || _t0 >= (new_dp[qn - 1])) _v--; } } (dinv).inv32 = _v; } while (0);
       qh = __gmpn_sbpi1_divappr_q (tp, new_np, new_nn, new_dp, qn + 1, dinv.inv32);
     }
   else if ((! ((__builtin_constant_p (2000 - 1) && (2000 - 1) == 0) || (!(__builtin_constant_p (2000 - 1) && (2000 - 1) == 9223372036854775807L) && (qn) >= (2000 - 1)))))
     {
       do { mp_limb_t _v, _p, _t1, _t0, _mask; do { mp_limb_t _dummy; do {} while (0); do { UWtype __d1, __d0, __q1, __q0, __r1, __r0, __m; do {} while (0); do {} while (0); __d1 = ((UWtype) (dh) >> (64 / 2)); __d0 = ((UWtype) (dh) & (((UWtype) 1 << (64 / 2)) - 1)); __q1 = (~(dh)) / __d1; __r1 = (~(dh)) - __q1 * __d1; __m = __q1 * __d0; __r1 = __r1 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) >> (64 / 2)); if (__r1 < __m) { __q1--, __r1 += (dh); if (__r1 >= (dh)) if (__r1 < __m) __q1--, __r1 += (dh); } __r1 -= __m; __q0 = __r1 / __d1; __r0 = __r1 - __q0 * __d1; __m = __q0 * __d0; __r0 = __r0 * ((UWtype) 1 << (64 / 2)) | ((UWtype) (~((mp_limb_t) 0L)) & (((UWtype) 1 << (64 / 2)) - 1)); if (__r0 < __m) { __q0--, __r0 += (dh); if (__r0 >= (dh)) if (__r0 < __m) __q0--, __r0 += (dh); } __r0 -= __m; (_v) = __q1 * ((UWtype) 1 << (64 / 2)) | __q0; (_dummy) = __r0; } while (0); } while (0); _p = (dh) * _v; _p += (new_dp[qn - 1]); if (_p < (new_dp[qn - 1])) { _v--; _mask = -(mp_limb_t) (_p >= (dh)); _p -= (dh); _v += _mask; _p -= _mask & (dh); } do { UWtype __x0, __x1, __x2, __x3; UHWtype __ul, __vl, __uh, __vh; UWtype __u = (new_dp[qn - 1]), __v = (_v); __ul = ((UWtype) (__u) & (((UWtype) 1 << (64 / 2)) - 1)); __uh = ((UWtype) (__u) >> (64 / 2)); __vl = ((UWtype) (__v) & (((UWtype) 1 << (64 / 2)) - 1)); __vh = ((UWtype) (__v) >> (64 / 2)); __x0 = (UWtype) __ul * __vl; __x1 = (UWtype) __ul * __vh; __x2 = (UWtype) __uh * __vl; __x3 = (UWtype) __uh * __vh; __x1 += ((UWtype) (__x0) >> (64 / 2)); __x1 += __x2; if (__x1 < __x2) __x3 += ((UWtype) 1 << (64 / 2)); (_t1) = __x3 + ((UWtype) (__x1) >> (64 / 2)); (_t0) = (__x1 << 64/2) + ((UWtype) (__x0) & (((UWtype) 1 << (64 / 2)) - 1)); } while (0); _p += _t1; if (_p < _t1) { _v--; if (__builtin_expect ((_p >= (dh)) != 0, 0)) { if (_p > (dh) || _t0 >= (new_dp[qn - 1])) _v--; } } (dinv).inv32 = _v; } while (0);
       qh = __gmpn_dcpi1_divappr_q (tp, new_np, new_nn, new_dp, qn + 1, &dinv);
     }
   else
     {
       mp_size_t itch = __gmpn_mu_divappr_q_itch (new_nn, qn + 1, 0);
       mp_ptr scratch = ((mp_limb_t *) (__builtin_expect ((((itch) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((itch) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (itch) * sizeof (mp_limb_t))));
       qh = __gmpn_mu_divappr_q (tp, new_np, new_nn, new_dp, qn + 1, scratch);
     }
   tp[qn] = qh;
 }

      do { do {} while (0); do { do {} while (0); do {} while (0); if ((qn) != 0) { mp_size_t __n = (qn) - 1; mp_ptr __dst = (qp); mp_srcptr __src = (tp + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
      if (tp[0] <= 4)
        {
   mp_size_t rn;

          rp = ((mp_limb_t *) (__builtin_expect ((((dn + qn) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((dn + qn) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (dn + qn) * sizeof (mp_limb_t))));
          __gmpn_mul (rp, dp, dn, tp + 1, qn);
   rn = dn + qn;
   rn -= rp[rn - 1] == 0;

          if (rn > nn || __gmpn_cmp (np, rp, nn) < 0)
            do { mp_limb_t __x; mp_ptr __p = (qp); if (__builtin_constant_p (1) && (1) == 1) { while ((*(__p++))-- == 0) ; } else { __x = *__p; *__p = __x - (1); if (__x < (1)) while ((*(++__p))-- == 0) ; } } while (0);
        }
    }

  do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);
}


void
__gmpz_tdiv_q (mpz_ptr quot, mpz_srcptr num, mpz_srcptr den)
{
  mp_size_t ql;
  mp_size_t ns, ds, nl, dl;
  mp_ptr np, dp, qp;
  struct tmp_reentrant_t *__tmp_marker;

  ns = ((num)->_mp_size);
  ds = ((den)->_mp_size);
  nl = ((ns) >= 0 ? (ns) : -(ns));
  dl = ((ds) >= 0 ? (ds) : -(ds));
  ql = nl - dl + 1;

  if (__builtin_expect ((dl == 0) != 0, 0))
    __gmp_divide_by_zero ();

  if (ql <= 0)
    {
      ((quot)->_mp_size) = 0;
      return;
    }

  qp = (__builtin_expect (((ql) > ((quot)->_mp_alloc)) != 0, 0) ? (mp_ptr) __gmpz_realloc(quot,ql) : ((quot)->_mp_d));

  __tmp_marker = 0;
  np = ((num)->_mp_d);
  dp = ((den)->_mp_d);


  if (dp == qp)
    {
      mp_ptr tp;
      tp = ((mp_limb_t *) (__builtin_expect ((((dl) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((dl) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (dl) * sizeof (mp_limb_t))));
      do { do {} while (0); do { do {} while (0); do {} while (0); if ((dl) != 0) { mp_size_t __n = (dl) - 1; mp_ptr __dst = (tp); mp_srcptr __src = (dp); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
      dp = tp;
    }

  if (np == qp)
    {
      mp_ptr tp;
      tp = ((mp_limb_t *) (__builtin_expect ((((nl + 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((nl + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (nl + 1) * sizeof (mp_limb_t))));
      do { do {} while (0); do { do {} while (0); do {} while (0); if ((nl) != 0) { mp_size_t __n = (nl) - 1; mp_ptr __dst = (tp); mp_srcptr __src = (np); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);

      __gmpn_div_q (qp, tp, nl, dp, dl, tp);
    }
  else
    {
      mp_ptr tp;
      tp = ((mp_limb_t *) (__builtin_expect ((((nl + 1) * sizeof (mp_limb_t)) <= 0x7f00) != 0, 1) ? alloca((nl + 1) * sizeof (mp_limb_t)) : __gmp_tmp_reentrant_alloc (&__tmp_marker, (nl + 1) * sizeof (mp_limb_t))));
      __gmpn_div_q (qp, np, nl, dp, dl, tp);
    }

  ql -= qp[ql - 1] == 0;

  ((quot)->_mp_size) = (ns ^ ds) >= 0 ? ql : -ql;
  do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);
}





mp_limb_t
__gmpn_mu_div_q (mp_ptr qp,
       mp_srcptr np, mp_size_t nn,
       mp_srcptr dp, mp_size_t dn,
       mp_ptr scratch)
{
  mp_ptr tp, rp;
  mp_size_t qn;
  mp_limb_t cy, qh;
  struct tmp_reentrant_t *__tmp_marker;

  __tmp_marker = 0;

  qn = nn - dn;

  tp = ((mp_limb_t *) __gmp_tmp_reentrant_alloc (&__tmp_marker, (qn + 1) * sizeof (mp_limb_t)));

  if (qn >= dn)
    {



      rp = ((mp_limb_t *) __gmp_tmp_reentrant_alloc (&__tmp_marker, (nn + 1) * sizeof (mp_limb_t)));
      do { do {} while (0); do { do {} while (0); do {} while (0); if ((nn) != 0) { mp_size_t __n = (nn) - 1; mp_ptr __dst = (rp + 1); mp_srcptr __src = (np); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
      rp[0] = 0;

      qh = __gmpn_cmp (rp + 1 + nn - dn, dp, dn) >= 0;
      if (qh != 0)
 __gmpn_sub_n (rp + 1 + nn - dn, rp + 1 + nn - dn, dp, dn);

      cy = __gmpn_mu_divappr_q (tp, rp, nn + 1, dp, dn, scratch);

      if (__builtin_expect ((cy != 0) != 0, 0))
 {



   mp_size_t i;
   for (i = 0; i < qn + 1; i++)
     tp[i] = ((~ ((mp_limb_t) (0))) >> 0);
 }



      if (tp[0] > 4)
 {
   do { do {} while (0); do { do {} while (0); do {} while (0); if ((qn) != 0) { mp_size_t __n = (qn) - 1; mp_ptr __dst = (qp); mp_srcptr __src = (tp + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
 }
      else
 {
   mp_limb_t cy;
   mp_ptr pp;

   pp = rp;
   __gmpn_mul (pp, tp + 1, qn, dp, dn);

   cy = (qh != 0) ? __gmpn_add_n (pp + qn, pp + qn, dp, dn) : 0;

   if (cy || __gmpn_cmp (pp, np, nn) > 0)
     qh -= __gmpn_sub_1 (qp, tp + 1, qn, 1);
   else
     do { do {} while (0); do { do {} while (0); do {} while (0); if ((qn) != 0) { mp_size_t __n = (qn) - 1; mp_ptr __dst = (qp); mp_srcptr __src = (tp + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
 }
    }
  else
    {
# 140 "mu_div_q.c"
      qh = __gmpn_mu_divappr_q (tp, np + nn - (2 * qn + 2), 2 * qn + 2,
        dp + dn - (qn + 1), qn + 1, scratch);



      if (tp[0] > 6)
 {
   do { do {} while (0); do { do {} while (0); do {} while (0); if ((qn) != 0) { mp_size_t __n = (qn) - 1; mp_ptr __dst = (qp); mp_srcptr __src = (tp + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
 }
      else
 {
   mp_limb_t cy;



   rp = ((mp_limb_t *) __gmp_tmp_reentrant_alloc (&__tmp_marker, (nn) * sizeof (mp_limb_t)));
   __gmpn_mul (rp, dp, dn, tp + 1, qn);

   cy = (qh != 0) ? __gmpn_add_n (rp + qn, rp + qn, dp, dn) : 0;

   if (cy || __gmpn_cmp (rp, np, nn) > 0)
     qh -= __gmpn_sub_1 (qp, tp + 1, qn, 1);
   else
     do { do {} while (0); do { do {} while (0); do {} while (0); if ((qn) != 0) { mp_size_t __n = (qn) - 1; mp_ptr __dst = (qp); mp_srcptr __src = (tp + 1); mp_limb_t __x; __x = *__src++; if (__n != 0) { do { *__dst++ = __x; __x = *__src++; } while (--__n); } *__dst++ = __x; } } while (0); } while (0);
 }
    }

  do { if (__builtin_expect ((__tmp_marker != 0) != 0, 0)) __gmp_tmp_reentrant_free (__tmp_marker); } while (0);
  return qh;
}

mp_size_t
__gmpn_mu_div_q_itch (mp_size_t nn, mp_size_t dn, int mua_k)
{
  mp_size_t qn;

  qn = nn - dn;
  if (qn >= dn)
    {
      return __gmpn_mu_divappr_q_itch (nn + 1, dn, mua_k);
    }
  else
    {
      return __gmpn_mu_divappr_q_itch (2 * qn + 2, qn + 1, mua_k);
    }
}
