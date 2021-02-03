#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//76
//隣り合う数をそれぞれ比較していき、入れ替えを行う作業を繰り返す
void sort(int a[], int b[], int n){
  int p;
  for(p=0; p<n; p++){
    b[p] = a[p];
  }

  int i, j, tmp;
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(b[i] > b[j]){
        tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
      }
    }
  }
}

int main(void){
  int n = 15;
  int a[15] = {9,7,5,3,1,77,8,22,511,6,43,12,65,31,74};
  int b[15];
  sort(a, b, n);
  int i;
  for(i=0; i<n; i++){
    printf("%i\n", b[i]);
  }
  return 0;
}
//77
//間違いが間違ったとき0を返し、問題なければ1を返す
int is_sorted(int b[], int n){
  int i;
  for(i=0; i<n-1; i++){
    if(b[i]>b[i+1]){
      return 0;
    }
  }
  return 1;
}

int main(void){
  int n = 15;
  int a[15] = {9,7,5,3,1,77,8,22,511,6,43,12,65,31,74};
  int b[15];
  //sort(a, b, n);
  printf("%i", is_sorted(b, n));
  return 0;
}

//78
// 文字列の最初が空文字だったら1を返す
int is_empty(char* s) {
  if (s[0] == '\0') {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  char s[10];
  scanf("%s", s);
  printf("%i\n", is_empty(s))

  return 0;
}

//79
//forで文字配列を'\0'が出るまでカウント
int str_len(char* s) {
  int total;
  for(total=0; s[total]!='\0'; total++) {
    ;
  }
  return total;
}

int main(void) {
  char s[50] = "123456";
  printf("%s %i \n", s, str_len(s));
  return 0;
}

//80
//forで一致した回数をカウント
int count_chars(char* s, char c){
  int total, tmp;
  for(tmp=0; s[tmp]!='\0'; tmp++) {
    if (s[tmp] == c) {
      total++;
    }
  }
   return total;
 }

 int main(void) {
   char s[50] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
   char c[5]  = "A";
   printf("%i\n", count_chars(s, c[0]));
   return 0;
 }
