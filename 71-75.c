#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//71
//fivo(i)がn以上のときiを返した
int fibo(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibo(n-1) + fibo(n-2);
  }
}

int fibo_over(n) {
  int i;
  for (i=0;;i++){
    if (fibo(i)>n){
      return i;
    }
  }
}


int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i\n", fibo_over(p));
  return 0;
}

//72
//start_numとend_numをfibo_overで計算しその範囲で和をそれぞれ足した
int fibo(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibo(n-1) + fibo(n-2);
  }
}

int fibo_over(n) {
  int i;
  for (i=0;;i++){
    if (fibo(i)>n){
      return i;
    }
  }
}

int sum_of_fibo_between(int n, int m) {
  int start_num = fibo_over(n);
  int end_num = fibo_over(m - 1);
  int i, total = 0;
  for (i=start_num; i<end_num; i++){
    total += fibo(i);
  }
  return total;
}

int main(void) {
  int p, q;
  scanf("%i %i", &p, &q);
  printf("%i\n", sum_of_fibo_between(p, q));
  return 0;
}

//73
void init_randoms_99(int a[] , int n) {
  int i;
  for (i=0; i<n; i++){
    a[i] = rand() % 100;
  }
  for (i = 0; i < n; i++) {
    printf("%i", a[i]);
  }
}

int main(void) {
  srandom(getpid( ));//voidらしい
  int p;
  scanf("%i", &p);
  init_randoms_99(p);
  return 0;
}
