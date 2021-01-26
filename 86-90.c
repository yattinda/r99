#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//86
/*二重ループにし、s1のi文字目から一つづつs２の文字列と一致する文字をカウントし
s２の文字数と一致した場合i+1を返した。
また、totalとtmpのスコープに注意し内側のループの終了時に初期化した*/
int str_search(char* s1, char* s2) {
  int i, j, tmp = 0, total = 0;
  for(i=0; s1[i]!='\0'; i++){
    for(j=0; s2[j]!='\0'; j++){
      total++;
      if(s1[i + j] == s2[j]){
        tmp++;
      }
    }
    if(total == tmp){
      return i + 1;
    }
    total = 0;
    tmp = 0;
  }
  return -1;
}

int main(void){
  char s1[100] = "qawsedrftgyhujikolp";
  char s2[20]  = "yhu";
  printf("%i\n", str_search(s1, s2));
}


//87
char* str_remove(char* s1, int n, int m) {
  int i, count;
  for (count=0; s1[count]!='\0'; count++) {
    ;
  }
  for (i=1; i<=count-(n+m) ; i++){
    s1[n + i - 1] = s1[n + m + i - 1];
  }
  s1[n + m - 1]  = '\0';
  return s1;
}

int main(void) {
  char s[100] = "0123456789";
  printf("%s\n", str_remove(s, 5, 3));
  return 0;
}
