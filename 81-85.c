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
  if (s2[total] == '\0') {
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
