#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//64
//ｎの偶奇を整形し、forで２ずつ足した
int sum_odds(int n, int m) {
  int i, sum  = 0;
  if (n % 2 == 0) {
    n += 1;
  }
  for(i=n; i<m; i+=2){
    sum += i;
  }
  return sum;
}

int main(void) {
  int p, q;
  scanf("%i %i", &p, &q);
  printf("%i\n", sum_odds(p, q));
  return 0;
}

//65
int is_perfect(int n) {
  int sum = 0, i;
  for (i=1; i<n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }
  if(sum == n){
    return 1;
  } else {
    return 0;
  }
}
