#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//66
//30,32を応用した
int sum_primes_under(int n) {
  int ans = 0;
  if (n == 1) {
    ans = 0;
  } else {
    int i;
    for(i=2; i<n; i++){
      int tmp = 0, j = 0;
      for (j=1; j<=i*i; j++){
        if(i % j == 0){
          tmp++;
        }
      }
      if (tmp == 2) {
        ans += i;
      }
      tmp = 0;
    }
    return ans;
  }
}

int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i\n", sum_primes_under(p));
  return 0;
}

//67
//n=0の返り値に注意し、再起関数を用いた
int factorial(int n) {
  int m;
  if (n == 0){
    return 1;
  } else {
    m = factorial(n - 1);
    return n * m;
  }
}

int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i\n", factorial(p));
  return 0;
}

//68
//67を使い、m以下の階乗から条件に合うものを探索した
int factorial(int n) {
  int m;
  if (n == 0){
    return 1;
  } else {
    m = factorial(n - 1);
    return n * m;
  }
}
int factorial_over(int m) {
  int i;
  for(i=0; i<m; i++){
    if(factorial(i) > m){
      return i;
    }
  }
}

int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i\n", factorial_over(p));
  return 0;
}

//69
//68を使った
int factorial(int n) {
  int m;
  if (n == 0){
    return 1;
  } else {
    m = factorial(n - 1);
    return n * m;
  }
}
int factorial_overflow(void) {
  int i;
  for(i=0; ; i++){
    if(factorial(i) < 0){
      return i;
    }
  }
}

int main(void) {
  printf("%i\n", factorial_overflow());
  return 0;
}

//70
//n<2に注意し、それ以外はフィボナッチ数列を返す
int fibo(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
  return fibo(n-1) + fibo(n-2);
  }
}

int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i\n", fibo(p));
  return 0;
}
