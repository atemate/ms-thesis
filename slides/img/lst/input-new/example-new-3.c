{  int *x = 1; }

extern int z;

void thread_0(int &x, int &y) {
  L0: x = 0;
  int r;
  while (x * (5 + 4 / 2) % 3 == 1) {
    if (x != 0)
      goto L0;
    if (y > 6)
      continue;
    else if (++y > 7) {
      r = r + 10;
      break;
    }
    else
      goto L1;
    r = 11;
  }
  y = x.[*\yellowemph{load}*](_rx) + 1;
  L1: x.[*\yellowemph{store}*](_rx, r);
}

exists (y == x + 1 && thread_0:r > 21)