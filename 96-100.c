#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

//96
int str_eql(char* s1, char* s2){
  int total, tmp;
  for(tmp=0; s1[tmp]!='\0'; tmp++) {
    if (s1[tmp] == s2[tmp]) {
      total++;
    }
  }
  if (s1[total] == '\0' && s2[total] == '\0') {
    return 1;
  } else {
    return 0;
  }
}

//str_eqlを用いてそれぞれ条件分岐させた
void greet(char* s){
  char *corona = "コロナ";
  char *beer = "ビール";
  char *credit = "単位";

  if(str_eql(s,corona) == 0){
    printf("no thanks\n");
  } else if(str_eql(s,beer) == 0) {
    printf("乾杯\n");
  } else if(str_eql(s,credit) == 0) {
    printf("よかったね\n");
  } else {
    printf("なんくるないさ\n");
  }
}

int main(void){
  char s[30];
  scanf("%s", s);
  greet(s);
}

//97
//33,34をともに満たす数を返した
int is_square (int n) {
  int i;
  for (i=1; i*i <= n; i++) {
    if (i*i == n) {
      return 1;
    }
  }
  return 0;
}

int is_cubic (int n) {
  int i;
  for (i=1; i*i*i <= n; i++) {
    if (i*i*i == n) {
      return 1;
    }
  }
  return 0;
}

int square_cubic(int n){
  int i;
  for(i=n;;i--){
    if(is_square(i) == 1 && is_cubic(i) == 1){
      return i;
      break;
    }
  }
}

int main(void){
  printf("%i\n", square_cubic(999999));
}

//98
int my_rand(int n) {
  return (int)(random() % n);
}

//まず配列に1からn-1まで順に値を代入し、配列の0番目から一つづつランダムに他の要素と入れ替えた
int* shuffle(int n) {
  int i, j, tmp, set_num;
  int* a = (int*)malloc(sizeof(int) * n);
  for(set_num=0; set_num<n; set_num++){
    a[set_num] = set_num;
  }

  for(i=0; i<n; i++) {
    j = my_rand(n) % n;
    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
  }
  return a;
}

int main(void){
  int i;
  int* s = shuffle(10);
  for (i= 0; i<10; i++) {
    printf("%i\n", s[i]);
  }
  return 0;
}
