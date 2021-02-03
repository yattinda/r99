#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

//102
int is_prime(int n) {
  int i;
  for (i=2; i*i<=n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

//countが1000になるまで素数判定で真だったものをansに足した
int u_1000_sum(void){
  int i, ans = 0, count = 0;
  for(i=2; ; i++){
    if(is_prime(i) == 1){
      ans += i;
      count++;
      if(count == 1000){
        break;
      }
    }
  }
  return ans;
}

int main(void){
  printf("%i", u_1000_sum());
}
//104
int factorial(int n) {
  int m;
  if (n == 0){
    return 1;
  } else {
    m = factorial(n - 1);
    return n * m;
  }
}

int is_cubic(int n){
  int i;
  for(i=1; i*i*i <= n; i++){
    if (i*i*i == n){
      return 1;
    }
  }
  return 0;
}

void is_cubic_add2(void){
  int i;
  for(i=0; ; i++){
    if(is_cubic(factorial(i) + 2)){
      printf("%i", i);
    }
  }
}

int main(void){
  is_cubic_add2();
  return 0;
}
//105
//aをbで割ったときcならば1を返す
int remind_status(int a, int b, int c){
  if(a % b == c){
    return 1;
  } else {
    return 0;
  }
}
//で割って1余り、5 で割って2余り、7 で割って 3 余る正の整数の判定
int MrSon(void){
  int i;
  for (i=1; ; i++){
    if(remind_status(i, 3, 1) && remind_status(i, 5 ,2) && remind_status(i, 7, 3)){
      return i;
    }
  }
}

int main(void){
  printf("%i", MrSon());
  return 0;
}

//106
//1から20まで割り切れるとき1を返す
int one_to_twenty(int n){
  int i;
  for(i=0; i<=20; i++){
    if(n % i != 0){
      return 0;
      break;
    }
  }
  return 1;
}

//探索する
int no_reminder_one_to_twenty(void){
  int i;
  for(i=2520; ; i++){
    if(one_to_twenty(i) == 1){
      return i;
      break;
    }
  }
}

int main(void){
  printf("%i", no_reminder_one_to_twenty());
  return 0;
}

//107
// 被積分関数の定義
double f(double x) {
  return 4/(1 + x*x);
}

// double g(double x) {
//   return 4 * sqrt(1 - x*x);
// }

// 矩形（長方形）積分を定義
double integrate(double from, double to, double dx) {
  double sum = 0.0;
  double x;

  for (x = from; x < to; x += dx) {
    sum += f(x)*dx;
  }
  return sum;
}

// ./a.out 0 1 1000 のように呼び出せるように。
int main(int argc, char *argv[]) {
  double from = (double)atoi(argv[1]);
  double to   = (double)atoi(argv[2]);
  double dx   = (double)1.0/atoi(argv[3]);

  printf("%16.15lf\n", integrate(from, to, dx));
  return 0;
}
