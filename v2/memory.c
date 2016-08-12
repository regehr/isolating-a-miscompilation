#include <stdlib.h>
void *a();
void *b();
void *(*__gmp_allocate_func)() = a, *(*__gmp_reallocate_func)() = b;
void *a(size_t c) {
  void *d = malloc(c);
  return d;
}
void *b(void *e, size_t f, size_t g) {
  void *d = realloc(e, g);
  return d;
}
