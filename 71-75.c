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
  for (i=0; ; i++){
    if (fibo(i) > n){
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
//my_randを用いて100までの乱数を生成しそれぞれ配列に加えた
int my_rand(int n) {
  return (int)(random() % n);
}

void init_randoms_99(int a[] , int n) {
  int i;
  for (i=0; i<n; i++){
    a[i] = my_rand(100);
  }
}

int main(void) {
  srandom(getpid( ));//voidらしい
  int list[5];
  init_randoms_99(list, 5);
  int i = 0;
  for(i=0; i<5; i++){
    printf("%i\n", list[i]);
  }
  return 0;
}

//74
//100までの数字それぞれに対して配列内の数字全てと比較しカウントする.カウントが0か否かで場合分け
int my_rand(int n) {
  return (int)(random() % n);
}

void init_randoms_99(int a[] , int n) {
  int i;
  for (i=0; i<n; i++){
    a[i] = my_rand(100);
  }
}

void find_not(int a[], int n){
  int i, j;
  int find_count = 0;
  for(i=0; i<100; i++){
    for(j=0; j<n; j++){
      if(a[j] == i){
        find_count++;
      }
    }
    if(find_count == 0){
      printf("%i\n", i);
    } else {
      find_count  = 0;
    }
  }
}

int main(void){
  srandom(getpid( ));//voidらしい
  int a[100];
  init_randoms_99(a, 100);
  find_not(a, 100);
}

//75
void find_not(int_a[], int n){
  int i, j;
  int find_count = 0, biggest == 0, ans = 0;
  for(i=0; i<100; i++){
    for(j=0; j<n; j++){
      if(a[j] == i){
        find_count++ ;
      }
    }
    if(find_count > biggest){
      biggest == find_count;
      ans = i
      find_count  = 0;
    }
  }
}

int main(void){
  find_not(list, 10)
}
