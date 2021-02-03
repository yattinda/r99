#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//91
//コード表より一文字づつ-32だけ引いた
int str_len(char* s) {
  int total;
  for(total=0; s[total]!='\0'; total++) {
    ;
  }
  return total;
}

char* toUpper(char* s){
  int i;
  for(i=0; i<str_len(s); i++){
    s[i] -= 32;
  }
  return s;
}

int main(void){
  char p[] = "vuathugvoteibsahi";
  printf("%s", toUpper(p));
  return 0;
}

//92
/*まず正負で場合分けをし、数字から数え上げられるようにする
その後、一桁づつ'0'である48を引いて一桁ずらして足すことで数字に戻した。*/
int str_to_int(char* a) {
  int i, p_or_n  = 1, is_minas = 0, ans = 0;
  if(a[0] == '-'){
    p_or_n = -1;
  }
  if(p_or_n == -1){
    is_minas = 1;
  }

  for(i=is_minas; a[i]!='\0'; i++){
    ans = (ans * 10) + a[i] - 48;
  }

  if(p_or_n == -1){
    ans = -ans;
  }
  return ans;
}

int main(void){
  char p[] = "-114514";
  printf("%i", str_to_int(p));
  return 0;
}

//93
int str_len(char* s) {
  int total;
  for(total=0; s[total]!='\0'; total++) {
    ;
  }
  return total;
}

char* str_reverse(char* s){
    int len_size = str_len(s);
    int i;

    for(i=0; i<len_size/2; i++){
        char tmp = s[i];
        s[i] = s[len_size - i - 1];
        s[len_size - i - 1] = tmp;
    }
    return s;
}

/*mallocでメモリを確保し、はじめに正負で場合分けをする。その後１の位から1桁づつ
'\0'である48を足していき配列に格納した。最後に負だった場合-をつけた
最後に配列に入っている順序が逆なので94で整形した*/
char* int_to_str(int a) {
  char* ans  =(char*)malloc(sizeof(char) * 1000);
  int i, p_or_n  = 0;
  if(a < 0){
    p_or_n = -1;
    a = -a;
  }

  for(i=0; a!=0; i++){
    ans[i] = (a % 10) + 48;
    a /= 10;
  }
  if(p_or_n == -1){
    ans[i] = '-';
  }
  ans = str_reverse(ans);
  return ans;
}

int main(void){
  int p = -114514;
  char* q;
  q = int_to_str(p);
  printf("%s", q);
  return 0;
}

int main(void){
  int p = 114514;
  char* q;
  q = int_to_str(p);
  printf("%s", q);
  return 0;
}


//94
int str_len(char* s) {
  int total;
  for(total=0; s[total]!='\0'; total++) {
    ;
  }
  return total;
}

//外側から順に文字を入れ替えていく
char* str_reverse(char* s){
  int len_size = str_len(s);
  int i;

  for(i=0; i<len_size/2; i++){
    char tmp = s[i];
    s[i] = s[len_size - i - 1];
    s[len_size - i - 1] = tmp;
  }
  return s;
}

int main(void){
  char p[100] = "abcdefg";
  printf("%s", str_reverse(p));
  return 0;
}

//95

char* jstr_reverse(char* s){
  int len_size = str_len(s);
  int i;

  for(i=0; i<len_size/2; i++){
    char tmp = s[i];
    s[i] = s[len_size - i - 1];
    s[len_size - i - 1] = tmp;
  }
  return s;
}

int main(void){
  char p[100] = "abcdefg";
  printf("%s", str_reverse(p));
  return 0;
}
