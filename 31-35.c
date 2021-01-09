#include <stdio.h>
#include <stdlib.h>

//31
//入力された整数までそれぞれの数について約数の総数をtmpに保存しそれまでの約数の総数の最大値と比較する
int most_divisors(int n) {
  int i, total = 0, ans = 1;
  for(i=1; i<n; i++){
    int j, tmp = 0;
    for(j=1; j<i; j++){
      if(i % j == 0){
        tmp += 1;
      }
    }
    if(total <= tmp){
      ans = i;
      total = tmp;
    }
  }
  return ans;
}

// int main(void){
//   int p;
//   scanf("%i", &p);
//   printf("%i\n", most_divisors(p));
//   return 0;
// }

//32
//i*i<nとし、総計算量を半分にした
int is_prime(int n) {
  int i;
  for(i=2; i*i<n; i++){
    if (n % i == 0){
      return 0;
    }
  }
  return 1;
}

// int main(void){
//   int p;
//   scanf("%i", &p);
//   printf("%i\n", is_prime(p));
//   return 0;
// }

//33
// i*iとｎの比較
int is_square(int n){
   int i;
   for(i=1; i*i <= n; i++){
     if (i*i == n){
       return 1;
     }
   }
   return 0;
 }

 // int main(void){
 //   int p;
 //   scanf("%i", &p);
 //   printf("%i\n", is_square(p));
 //   return 0;
 // }

 //34
// i*i*iとｎの比較
 int is_cubic(int n){
   int i;
   for(i=1; i*i*i <= n; i++){
     if (i*i*i == n){
       return 1;
     }
   }
   return 0;
 }

 // int main(void){
 //   int p;
 //   scanf("%i", &p);
 //   printf("%i\n", is_cubic(p));
 //   return 0;
 // }

//35
//33を用いてｎから二乗したものを引いたものをis_squareで判定する
int is_squeare_sum(int n){
  int i;
  for(i=1; i*i<= n; i++){
    if (is_square(n - (i * i))){
      return 1;
    }
  }
  return 0;
}

// int main(void){
//   int p;
//   scanf("%i", &p);
//   printf("%i\n", is_squeare_sum(p));
//   return 0;
// }
