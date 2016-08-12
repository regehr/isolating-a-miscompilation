#define a(b) __gmpn_##b
typedef long c;
typedef unsigned d;
#define e(f, l, g, h)                                                          \
  c i;                                                                         \
  d j, k;                                                                      \
  c m = g, o = j = m;                                                          \
  k = o;                                                                       \
  i = j * k;                                                                   \
  l = i
long p, __gmpn_sqr_basecase_lpl;
void a(sqr_basecase)(unsigned long *q, unsigned long *r, long n) {
  p = r[0];
  e(, __gmpn_sqr_basecase_lpl, p, );
  q[0] = __gmpn_sqr_basecase_lpl;
}
