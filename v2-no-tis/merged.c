int printf(const char *, ...);
struct a {
  long *b;
} typedef *c;
typedef struct a *d;
typedef struct a e[1];
long f, aq, g, h, i;
void *(*ab)(unsigned long), *(*an)();
void *ac, *ae, *af;
int ad;
long *ag;
unsigned j;
e at, k, l;
d au = at, m = k, n = at, o = k, p = k, w = at;
void *am();
void(abort)();
void *alloca();
void aw();
void ah(d q, long r) {
  long *ak, *al;
  ae = am(q);
  ak = ae;
  af = alloca(sizeof(long));
  al = af;
  while (1) {
    if (r & 1) {
      *ak = -4;
      break;
    }
    ag = al;
    al = ak;
    ak = ag;
    ad++;
    r /= 2;
    if (r <= 2) {
      *ak = 0;
      break;
    }
  }
  while (ad) {
    aw(al, ak);
    if (r)
      break;
    ad--;
  }
}

#include <stdlib.h>

void ao();
void *am(d q) {
  void *ap = an(q->b, sizeof(long));
  q->b = ap;
  return ap;
}
void aw(long *q, long *r) {
  aq = *r;
  g = aq * aq;
  *q = g;
}
void(exit)();
int main() {
  ao();
  ac = ab(sizeof(long));
  o->b = ac;
  void *s = ab(sizeof(long));
  au->b = s;
  *au->b = 2;
  while (i < 20) {
    ah(l, i);
    c u = l;
    h = *u->b;
    j = *w->b;
    if (h > j) {
      printf("mpz_lucnum_ui0 wrong\n");
      abort();
    }
    u = k;
    long aj = *u->b, t = *w->b;
    f = aj + t;
    *p->b = f;
    m->b = n->b;
    i++;
  }
  exit(0);
}
void *ax(q) {
  void *s = malloc(q);
  return s;
}
void az(void *q, long r) { realloc(q, r); }
void *bc = az;
void ao() {
  ab = ax;
  an = bc;
}
