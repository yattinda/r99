#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

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
    total++;
  }
  return total;
}

int main(void) {
  char s[50] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
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
