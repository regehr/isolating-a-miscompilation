int printf(const char *, ...);
struct a {
  long *b;
} typedef *c;
typedef struct a *d;
typedef struct a e[1];
unsigned long f, bb, df;
long g, as, au, bd, h, ch, ci, cj, i, de;
void *(*ab)(), *(*bl)();
long ag[] = {1,
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
int av, cu, dd;
void *aw, *ax, *bc;
long *bf, *da;
unsigned cl, cm;
e cr, cs, ct;
d cv = cr, cy = cs, cz = cr, k = cs, l = cs, m = cs;
void *j();
void(abort)();
void *alloca();
void aa();
void af();
void am();
void bg(d n, long p) {
  unsigned long *bi, *bj;
  void *bk;
  aw = j(n, as);
  bi = aw;
  ax = alloca(sizeof(long));
  bj = ax;
  while (1) {
    if (p & 1) {
      if (bd)
        bk = bc;
      bk = 0;
      aa(bi, bj, au, &bb, au);
      break;
    }
    bf = bj;
    bj = bi;
    bi = bf;
    av++;
    p /= 2;
    if (p <= 92) {
      *bi = ag[p + 1] + 2 * ag[p];
      break;
    }
  }
  while (av) {
    af(bj, bi, au);
    if (p)
      ;
    else
      *bj = 2;
    av--;
  }
}
void *malloc();
void *realloc();
void bm();
void aa(unsigned long *n, unsigned long *p, long r, unsigned long *p4, long s) {
  am(n, p, p4, s);
}
void am(unsigned long *n, unsigned long *p, unsigned long *r, long p4) {
  *n = h;
}
void *j(d n, long p) {
  void *q = bl(n->b, sizeof(long));
  n->b = q;
  return q;
}
void af(unsigned long *n, unsigned long *p, long r) {
  long o = *p;
  cl = cm = o;
  ci = cl * (unsigned long)cm;
  cj = ci >> 32;
  ch = cj + (ci & (1UL << 32) - 1);
  *n = ch;
}
void(exit)();
int cq();
void db() {
  {
    void *aq = ab(sizeof(long));
    k->b = aq;
    *k->b = 1;
  }
  void *aq = ab(sizeof(long));
  cv->b = aq;
  *cv->b = 2;
  while (i < 320) {
    bg(ct, i);
    cu = cq(ct, cr);
    if (cu) {
      printf("mpz_lucnum_ui0 wrong\n");
      abort();
    }
    long o = *m->b;
    f = g = o + f;
    *l->b = g;
    da = cz->b;
    cz->b = cy->b;
    cy->b = da;
    i++;
  }
}
int main() {
  bm();
  db();
  exit(0);
}
int cq(c n, c p) {
  de = *n->b;
  df = *p->b;
  if (de > df)
    dd = 1;
  return dd;
}
void *dh(unsigned long n) {
  void *aq = malloc(n);
  return aq;
}
void *dj(void *n, unsigned long p) {
  void *aq = realloc(n, p);
  return aq;
}
void bm() {
  ab = dh;
  bl = dj;
}
