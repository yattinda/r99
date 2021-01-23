#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//81
int str_eql(char* s1, char* s2){
  int total, tmp;
  for(tmp=0; s1[tmp]!='\0'; tmp++) {
    if (s1[tmp] == s2[tmp]) {
      total++;
    }
  }
  if (s2[tmp] == '\0' && total == tmp) {
   return 1;
 } else{
   return 0;
 }
}

 int main(void) {
   char s1[50] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
   char c2[50] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
   printf("%i\n", str_eql(s[50], c[50]));
   return 0;
 }
