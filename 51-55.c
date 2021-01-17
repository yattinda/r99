
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//51
//あまりを使うことでn以下の乱数を作った
int my_rand(int n) {
  return (int)(random() % n);
}

int main(void) {
  srandom(getpid( ));//voidらしい
  int n = 0;
  scanf("%i", &n);
  printf("%i\n", my_rand(n));
  return 0;
}

//52
//my_randを用いて99999999までの乱数を生成し、それを99999999で割ったものをfloat型にした
int my_rand(int n) {
  return (int)(random() % n);
}

float randf(void) {
  return (float) my_rand(99999999) / 99999999;
}

int main(void) {
  srandom(getpid( ));//voidらしい
  printf("%lf\n", randf());
  return 0;
}

//53
//m - n + 1以下の乱数をｎに足した
int my_rand(int n) {
  return (int)(random() % n);
}

int rand_int(int n, int m) {
  return my_rand(m - n + 1) + n;
}

int main(void) {
  srandom(getpid( ));//voidらしい
  int n = 0, m = 0;
  scanf("%i %i", &n, &m);
  printf("%i\n", rand_int(n, m));
  return 0;
}

//54
//forを用いてn回分乱数を生成させた
int my_rand(int n) {
  return (int)(random() % n);
}

float randf(void) {
  return (float) my_rand(99999999) / 99999999;
}

void randf_p(int n) {
  int i;
  for (i=0; i<n; i++) {
    printf("[%f, %f]\n", randf(), randf());
  }
}

int main(void) {
  srandom(getpid( ));//voidらしい
  int p;
  scanf("%i", &p);
  randf_p(p);
  return 0;
}

//55
//forを用いてn回分x,yに乱数を生成させ、条件に従うものをカウントし、計算した。
int my_rand(int n) {
  return (int)(random() % n);
}

float randf(void) {
  return (float) my_rand(99999999) / 99999999;
}

float pi(int n) {
  int i = 0, count = 0;
  for (i=0; i<n; i++){
    float x  = randf();
    float y  = randf();
    if ((x * x) + (y * y) <= 1){
      count++;
    }
  }
  float tmp = (float) count / 1000;
  return tmp * 4;
}

int main(void) {
  srandom(getpid( ));//voidらしい
  int p;
  scanf("%i", &p);
  printf("%lf\n", pi(p));
  return 0;
}
