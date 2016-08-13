typedef unsigned long a;
typedef struct {
  int b;
  int c;
  a *d;
} e;
typedef int ab;
typedef e *f;
#define g(h, i, j, k)                                                          \
  ab l;                                                                        \
  a m, n;                                                                      \
  h = 0;                                                                       \
  l = k;                                                                       \
  if (--l >= 0) {                                                              \
    m = i[l];                                                                  \
    n = j[l];                                                                  \
    if (m != n)                                                                \
      h = 1;                                                                   \
  }
#define o(h, i, j, k) g(h, i, j, k)
#define p(q) q->c
#define r(q) q->d
ab s, ac;
a *ad, *ae;
int __gmpz_cmp(f t, f u) {
  int af;
  s = p(t);
  ac = s;
  ad = r(t);
  ae = r(u);
  o(af, ad, ae, ac) return af;
}
