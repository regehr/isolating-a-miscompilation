#define b(c) __gmpn_##c
void b(sqr_basecase)();
void b(sqr)(unsigned long *d, unsigned long *a, long e) {
  b(sqr_basecase)(d, a, e);
}
