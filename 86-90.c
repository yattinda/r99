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
//n番目の文字列から一つづつi+m番目の文字を加えた
char* str_remove(char* s1, int n, int m) {
  int i;
  for (i=n; s1[i]!='\0' ; i++){
    s1[i] = s1[i+m];
  }
  s1[i + m]  = '\0';
  return s1;
}

int main(void) {
  char s[100] = "0123456789";
  printf("%s\n", str_remove(s, 5, 3));
  return 0;
}

//88
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
  return - 1;
}

int str_len(char* s) {
  int total;
  for(total=0; s[total]!='\0'; total++) {
    total++;
  }
  return total;
}

char* str_remove(char* s1, int n, int m) {
  int i;
  for (i=n; s1[i]!='\0' ; i++){
    s1[i] = s1[i+m];
  }
  s1[i + m]  = '\0';
  return s1;
}
//一致する文字列があればstr_removeで引いた
char* str_remove_str(char s1[ ], char s2[ ]){
  int search_num = str_search(s1, s2);
  int s2_len = str_len(s2);
  if(search_num != -1){
    return str_remove(s1, search_num - 1, s2_len);
    }
  return s1;
}

int main(void){
  char p[50] = "abcdefg";
  char q[50] = "bc";
  printf("%s\n", str_remove_str(p, q));
  return 0;
}

//89
int str_len(char* s) {
  int total;
  for(total=0; s[total]!='\0'; total++) {
    total++;
  }
  return total;
}
/*mallocでs1とs2を合わせた分のメモリを確保する
確保したメモリにそれぞれ文字を代入する*/
char* str_insert(char* s1, int n, char* s2){
  int total_len = str_len(s1) + str_len(s2);
  char* ans_str = (char*)malloc(sizeof(char) * total_len);

  int i;
  for(i=0; i<n; i++){
    ans_str[i] = s1[i];
  }
  for(i=0; s2[i]!='\0'; i++){
    ans_str[n + i] = s2[i];
  }
  for(i=n; s1[i]!='\0'; i++){
    ans_str[str_len(s2) + i - 1] = s1[i];
  }
  ans_str[total_len - 1] = '\0';
  return ans_str;
}

int main(void){
  char p[50] = "012345";
  char q[50] = "abc";
  printf("%s",str_insert(p, 3, q));
  return 0;
}

//90
void str_copy(char* s1, char* s2){
  int i;
  for (i=0; s1[i]!='\0'||s2[i]!='\0'; i++) {
    s2[i] = s1[i];
  }
}

int str_len(char* s) {
  int total;
  for(total=0; s[total]!='\0'; total++) {
    total++;
  }
  return total;
}

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
  return - 1;
}

char* str_remove(char* s1, int n, int m) {
  int i;
  for (i=n; s1[i]!='\0' ; i++){
    s1[i] = s1[i+m];
  }
  s1[i + m]  = '\0';
  return s1;
}

char* str_remove_str(char s1[ ], char s2[ ]){
  int search_num = str_search(s1, s2) - 1 ;
  int s2_len = str_len(s2);
  if(search_num != -1){
    return str_remove(s1, search_num, s2_len);
    }
  return s1;
}



char* str_insert(char* s1, int n, char* s2){
  int total_len = str_len(s1) + str_len(s2);
  char* ans_str = (char*)malloc(sizeof(char) * total_len);

  int i;
  for(i=0; i<n; i++){
    ans_str[i] = s1[i];
  }
  for(i=0; s2[i]!='\0'; i++){
    ans_str[n + i] = s2[i];
  }
  for(i=n; s1[i]!='\0'; i++){
    ans_str[str_len(s2) + i - 1] = s1[i];
  }
  ans_str[total_len - 1] = '\0';
  return ans_str;
}

char* str_subst(char* s1, char* s2, char* s3){
  int tmp_len = str_len(s1) + str_len(s2);
  int tmp2_len = str_len(s1) + str_len(s3);
  int total_len = tmp_len;
  if (tmp2_len > tmp_len){
    total_len = tmp2_len;
  }
  char* ans_str = (char*)malloc(sizeof(char) * total_len);

  str_copy(s1, ans_str);
  ans_str = str_remove_str(ans_str, s2);
  int str_num = str_search(ans_str, s2);
  ans_str = str_insert(ans_str, str_num, s3);

  return ans_str;
}

int main(void){
  char p[50] = "abcdefg";
  char q[50] = "bc";
  char r[50] = "12";
  printf("%s",str_subst(p, q, r));
  return 0;
}
