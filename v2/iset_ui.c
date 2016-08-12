typedef unsigned long a;
typedef struct {
  int b;
  int c;
  a *d;
} * e;
#define f(g) g->d
void *(*__gmp_allocate_func)();
#define h(i, j) __gmp_allocate_func(sizeof(j))
#define k() h(, a)
void __gmpz_init_set_ui(e dest, unsigned long l) {
  f(dest) = k();
  f(dest)[0] = l;
}
