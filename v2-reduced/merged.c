int printf(const char *, ...);
struct a {
  long *b;
} typedef *c;
typedef struct a *d;
typedef struct a e[1];
unsigned long f, az, cs;
long g, aq, as, bb, h, cg, ch, ci, cr, cv;
void *(*i)(), *(*bj)();
long ae[] = {1,
             0,
             1,
             0,
             2,
             0,
             5,
             0,
             3,
             0,
             4,
             0,
             9,
             0,
             3,
             0,
             0,
             0,
             7,
             0,
             1,
             0,
             10946,
             0,
             7,
             0,
             5,
             0,
             8,
             0,
             9,
             0,
             9,
             0,
             8,
             0,
             5,
             0,
             7,
             0,
             6,
             0,
             1,
             0,
             7,
             0,
             0,
             3,
             3,
             807526976,
             2049,
             5,
             4,
             80099,
             53316291173,
             2,
             5,
             25851433717,
             2,
             9,
             1,
             8008755920,
             504730781961,
             4052739537881,
             70319842,
             10610209857723,
             065,
             90035288,
             70212853,
             723460248141,
             117669030460994,
             90392490709135,
             308061521170129,
             498454011879264,
             806515533049393,
             304969544928657,
             5077978050,
             7,
             700884757,
             8944394323791464,
             472334024676221,
             5,
             9062373143906,
             305790721611591,
             3094755497,
             60500643816367088,
             5,
             20196140727489673,
             38612258,
             100087778366101931,
             6004714189,
             80067194370816120,
             660046610375530309,
             0};
void *j, *au, *av, *ba;
int at;
long *bd, *df;
unsigned ck, cl;
e cw, cx, cy;
d da = cw, dd = cx, de = cw, m = cx, n = cy, o = cw, p = cx, y = cx;
void *k();
void(abort)();
void *alloca();
void l();
void ad();
void al();
void be(d q, long s) {
  unsigned long *bg, *bh;
  void *bi;
  au = k(q, aq);
  bg = au;
  av = alloca(sizeof(long));
  bh = av;
  while (1) {
    if (s & 1) {
      if (bb)
        bi = ba;
      bi = 0;
      l(bg, bh, as, &az, as);
      break;
    }
    bd = bh;
    bh = bg;
    bg = bd;
    at++;
    s /= 2;
    if (s <= 92) {
      *bg = ae[s + 1] + 2 * ae[s];
      break;
    }
  }
  while (at) {
    ad(bh, bg, as);
    if (s)
      ;
    else
      *bh = 2;
    at--;
  }
}
void *malloc();
void *realloc();
void bk();
void l(unsigned long *q, unsigned long *s, long t, unsigned long *u, long v) {
  al(q, s, u, t);
}
void al(unsigned long *q, unsigned long *s, unsigned long *t, long u) {
  *q = h;
}
void *k(d q, long s) {
  void *ce = bj(q->b, sizeof(long));
  q->b = ce;
  return ce;
}
void ad(unsigned long *q, unsigned long *s, long t) {
  long r = *s;
  ck = cl = r;
  ch = ck * (unsigned long)cl;
  ci = ch >> 32;
  cg = ci + (ch & (1UL << 32) - 1);
  *q = cg;
}
void(exit)();
void dg() {
  j = i(sizeof(long));
  m->b = j;
  *m->b = 1;
  void *dh = i(sizeof(long));
  da->b = dh;
  *da->b = 2;
  while (cv < 320) {
    be(cy, cv);
    cr = *n->b;
    cs = *o->b;
    if (cr > cs) {
      printf("mpz_lucnum_ui0 wrong\n");
      abort();
    }
    long r = *y->b;
    f = g = r + f;
    *p->b = g;
    df = de->b;
    de->b = dd->b;
    dd->b = df;
    cv++;
  }
}
int main() {
  bk();
  dg();
  exit(0);
}
void *di(unsigned long q) {
  void *dh = malloc(q);
  return dh;
}
void *dk(void *q, unsigned long s) {
  void *dh = realloc(q, s);
  return dh;
}
void bk() {
  i = di;
  bj = dk;
}
