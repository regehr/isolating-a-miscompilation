typedef unsigned long a;
typedef struct {
  int b;
  int c;
  a *d;
} e;
#define f(g) g->d
void *(*__gmp_reallocate_func)();
#define h(i, j, k, l) __gmp_reallocate_func(i, sizeof 0, sizeof(l))
#define n(i, j, k) h(i, , , a)
void *__gmpz_realloc(e *m, long o) {
  a *mp = n(f(m), , );
  f(m) = mp;
  return mp;
}
