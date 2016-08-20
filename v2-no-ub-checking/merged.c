 #include <stdio.h>
struct a {
  long *b;
} typedef *c;
typedef struct a *d;
typedef struct a e[];
long f, g, j, bp, bq, cx, da;
void *(*i)();
void *az, *ba;
long *k;
e cm;
int cn, cw;
d cp = cm;
void(abort)();
void *alloca();
void h();
void bb(d m) {
  az = alloca(sizeof(long));
  k = az;
  ba = alloca(sizeof(long));
  long *l = ba, *o = ba;
  *l = 1;
  long n = *k;
  f = *o;
  g = n + f;
  *k = g;
  h(m->b, k);
  {
    n = *m->b;
    j = n << 2;
    *k = j;
    long o = *k;
    *m->b = o - 4;
  }
}
#include <stdlib.h>
void bh();
void bv(long *m, long *p) {
  bp = *p;
  bq = bp & 1;
  *m = bq;
}
void h(long *m, long *p) {
  long cb = *p;
  bv(m, &cb);
}
void(exit)();
int main() {
  bh();
  void *av = i();
  cp->b = av;
  bb(cm);
  cn = cu(cm);
  if (cn) {
    printf("mpz_lucnum_ui0 wrong\n");
    abort();
  }
  exit(0);
}
int cu(c m) {
  cx = *m->b;
  if (cx)
    cw = 1;
  return cw;
}
void *db() {
  void *av = malloc(da);
  return av;
}
void bh() { i = db; }
