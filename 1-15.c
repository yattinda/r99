#include <stdio.h>
#include <stdlib.h>
//1
void hello_p(void) {
  printf("hello, robocar!\n");
}
//2
int add1(int x) {
  x++;
  return x;
}
//3
void add1_p(void) {
  int x;
  scanf("%d", &x);
  x++;
  printf("%d", x);
}
//4
float en(int r){
  return r*r*3.14;
}
//5
float en_p(void){
  int r;
  scanf("%d", &r);
  printf("%f\n", r*r*3.14);
}

//6
int even(int x){
  if (x%2) {
    return 0;
  } else {
    return 1;
  }
}
//7
void even_p(void){
  int x;
  scanf("%d", &x);
  if (x%2) {
    printf("奇数です");
  } else {
    printf("偶数です");
  }
}
//8
int add2(int x, int y) {
  return x + y;
}
//9
void add2(int x, int y) {
  printf("%d\n", x+y);
}
//10
void wa_sa_seki_sho_p(int x, int y) {
  printf("和は%d\n", x+y);
  printf("差は%d\n", x-y);
  printf("積は%d\n", x*y);
  printf("整数商は%d\n", x/y);
}
//11
 int divide(int x, int y) {
   if(x % y){
     return 0;
   } else {
     return 1;
   }
 }
//12
 void divide_p(void) {
   int x, y;
   scanf("%d %d", &x, &y);
   if(x % y){
     printf("割り切れない\n");
   } else {
     printf("割り切れる\n");
   }
 }
//13
int abs(int n){
  if (n < 0) {
    n =  -n;
  }
  return n;
}
//14
 int square(int n){
  return n*n;
}
//15
 int triple(int n){
  return n*n*n;
}
