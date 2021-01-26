#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//81
//一致した数をカウントしカウントした数を文字配列に渡し文字列の最後が’\0’かどうかで条件分岐
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

 int main(void) {
   char s1[50] = "AAACCC";
   char s2[50] = "AAACCC";
   printf("%i\n", str_eql(s1, s2));
   return 0;
 }

 //82
 //81を改変し一致した数とｎを比較する
 int str_eql_n(char* s1, char* s2, int n){
   int total, tmp;
   for(tmp=0; tmp=n; tmp++) {
     if (s1[tmp] == s2[tmp]) {
       total++;
     }
   }
   if (total == n) {
    return 1;
  } else {
    return 0;
  }
 }

 int main(void) {
   char s1[50] = "AAACCC";
   char s2[50] = "AAACCC";
   int p;
   scanf("%i", &p);
   printf("%i\n", str_eql_n(s1, s2, p));
   return 0;
 }

 //83
 //どちらかが'\0'になるまで文字配列の中身を移す
 void str_copy(char* s1, char* s2){
   int i;
   for (i=0; s1[i]!='\0'||s2[i]!='\0'; i++) {
     s2[i] = s1[i];
   }
 }

 int main(void) {
   char s1[50] = "AAACCC";
   char s2[50] = "BB";
   str_copy(s1, s2);
   printf("%s\n", s2);
   return 0;
 }

//84
//s1の文字数をカウントし、その数からs2が'\0'になるまで文字配列の中身を移す
char* str_append(char* s1, char* s2){
  int i, count;
  for (count=0; s1[count]!='\0'; count++) {
    ;
  }
  for (i=0; s2[i]!='\0'; i++) {
    s1[count + i] = s2[i];
  }
  return s1;
}

int main(void) {
  char s1[50] = "AAACCC";
  char s2[50] = "PAPA";
  printf("%s\n", str_append(s1, s2));
  return 0;
}

//85
//はじめにnを変数に渡し、s１のn文字目からm文字までをs２に移した。最後に'\0'を渡した
char* str_take(char* s1, int n, int m, char* s2){
  int start = n;
  for (; n<=m; n++) {
    s2[n - start] = s1[n];
  }
  s2[m]  ='\0';
  return s2;
}

int main(void) {
  char s2[10000];
  printf("%s\n", str_take("0123456", 1, 3, s2));
  return 0;
}
