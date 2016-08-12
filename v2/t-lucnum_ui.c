typedef struct {
  int a;
  int b;
  unsigned long *c;
} d;
typedef d e[1];
typedef d *f;
e g, j, i;
int __gmpz_cmp();
void __gmpz_init_set_ui(f, unsigned long);
void __gmpz_lucnum_ui(f, unsigned long);
void __gmpz_lucnum2_ui(f, f, unsigned long);
#include <stdio.h>
#include <stdlib.h>
int main() {
  __gmpz_init_set_ui(g, 2);
  __gmpz_lucnum2_ui(j, i, 0);
  __gmpz_lucnum_ui(j, 0);
  if (__gmpz_cmp(j, g)) {
    printf("mpz_lucnum_ui0 wrong\n");
    abort();
  }
  exit(0);
}
