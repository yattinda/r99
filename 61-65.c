#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//61

// Why CAN'T work???
// int sum_tail(int n){
//   FILE* fp;
//   int count;
//   char c_num[100];
//   int i, num, sum;
//
//   fp = fopen("numbers.txt", "r");
//   for (count=0; fgets(c_num, 100, fp); ) {
//     count++;
//   }
//   for(i=0; i<count; i++){
//     if(fscanf(fp, "%i", &num) != EOF){
//       if(count - i < n){
//         sum += num;
//       }
//     }
//   }
//   return sum;
//   fclose(fp);
// }

int lines(void) {
  FILE* fp;
  int count;
  char c_num[100];

  fp = fopen("numbers.txt", "r");
  for (count=0; fgets(c_num, 100, fp); ) {
    count++;
  }
  fclose(fp);

  return count;
}

int sum_tail(int n){
  FILE* fp;

  int i, num, sum;
  int count = lines();
  fp = fopen("numbers.txt", "r");

  for(i=0; i<count; i++){
    if(fscanf(fp, "%i", &num) != EOF){
      if(count - i <= n){
        sum += num;
      }
    }
  }
  return sum;
  fclose(fp);
}

int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i\n", sum_tail(p));
  return 0;
}

//62

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
