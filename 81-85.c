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
  if (s1[total] == '\0' && s2[total] == 0) {
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
 int str_eql_n(char* s1, char* s2, int n){
   int total, tmp;
   for(tmp=0; tmp=n ; tmp++) {
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
void str_copy(char* s1, char* s2){
  int i;
  for (i=0; s1[i]!='\0'||s2[i]!='\0'; i++) {
    s2[i] = s1[i];
  }
}

int main(void) {
  char s1[50] = "AAACCC";
  char s2[50] = "AAACCC";
  printf("%i\n", str_copy(s1, s2));
  return 0;
}
