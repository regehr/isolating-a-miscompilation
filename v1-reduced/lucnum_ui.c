typedef unsigned long a;
typedef a *b;
#define c(d) __gmpn_##d
long an, ao, ar;
void *__gmpz_realloc();
void c(sqr)();
#include <alloca.h>
void e();
#define f(g) alloca(g)
#define o() e
#define i(g) 40 ? f(g) : o()
#define n(g, j) i(g * sizeof 0)
#define aa(g) n(g, )
#define k() 0
#define l(d, m)                                                                \
  b q = d;                                                                     \
  d = m;                                                                       \
  m = q
#define ad(r, g) g ? __gmpz_realloc(r, g) : k()
#define ae() 4
#define ah(p, ai)                                                              \
  a aj;                                                                        \
  b ak = p;                                                                    \
  aj = *ak;                                                                    \
  *ak = aj - ai
#define al(ptr, am, g) ah(ptr, g)
void __gmpz_lucnum_ui(struct at *au, unsigned long g) {
  long av;
  b aw, ax;
  av = 2;
  aw = ad(au, av);
  an = 2;
  ax = aa(an);
  for (;;) {
    if (g & 1) {
      ar = ae();
      break;
    }
    l(ax, aw);
    g /= 2;
    if (g <= 2) {
      aw[0] = 2;
      break;
    }
  }
  c(sqr)(ax, aw, ao);
  al(ax, , 2);
}
