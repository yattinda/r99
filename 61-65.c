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

//総行数を数えfscanfで最後のn行のみ足した
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
//NULLが帰ってくるまでfgetsで1行づつprintした
void cat(char* fname){
  FILE* fp;
  char tmp[100];

  fp = fopen(fname, "r");

  for(;fgets(tmp, 100, fp) != NULL;){
    printf("%s", tmp);
  }
}

int main(void){
  cat("numbers.txt");
}

//63
//62に行番号をつけてprintした
void cat(char* fname){
  FILE* fp;
  char tmp[100];
  int linenum;
  fp = fopen(fname, "r");

  for(linenum = 0; fgets(tmp, 100, fp) != NULL; linenum++){
    printf("%i: %s", linenum, tmp);
  }
}

int main(void){
  cat("numbers.txt");
}
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
//forで次の完全数がでるまでstatusで状態管理し、1のときにi-1を返した
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

int next_perfect(int n){
  int i, status = 0 ;
  for (i=n+1 ;status != 1; i++){
    if (is_perfect(i) == 1){
      status = 1;
    }
  }
  return i - 1;
}

int main(void){
  int n = 0;
  scanf("%i", &n);
  printf("%i\n", next_perfect(n));
  return 0;
}
