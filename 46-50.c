#include <stdio.h>
#include <stdlib.h>
//46
// forでそれぞれ20乗
void squares_p(void) {
  int i;
  for (i=1; i<=20; i++) {
    printf("%i\n", i*i);
  }
}

// int main(void) {
//   squares_p();
//   return 0;
// }

//47
// 始めて２乗をこえた整数値の１つ前の整数を返す
int sqrt_int(int n) {
  int i;
    for(i=0; i<n; i++) {
      if (i * i >= n) {
        return i - 1;
      }
    }
}

// int main(void) {
//   int p;
//   scanf("%i", &p);
//   printf("%i\n", sqrt_int(p));
//   return 0;
// }

//48
// (int)xで整数部分を得て、小数部の大小比較で四捨五入を行う
int f_to_i(float x) {
  int i = (int)x;
  if (x - i < 0.5){
    return i;
  } else {
    return i + 1;
  }
}

// int main(void) {
//   float p;
//   scanf("p\n", &p);
//   printf("%i\n", f_to_i(a));
//   return 0;
// }

//49
//引数を10倍にし、(int)xの差を比較して四捨五入した
float f_to_f1(float x){
  x *= 10;
  if (x - (int)x < 0.5) {
    return (int)x * 0.1;
  } else {
   return ((int)x * 0.1) + 0.1;
  }
}

int main(void) {
  float p;
  scanf("%f", &p);
  printf("%f\n", f_to_f1(p));
  return 0;
}

//50
//aのb乗を返す関数を作り、49と同じ流れで四捨五入した
float factorial(float a, float b){
  int i;
  float fact = 1;
  for (i=0; i<b; i++){
    fact *= a;
  }
  return fact;
}

float f_to_f(float x, int n){
  x *= factorial(10, n);
  if (x - (int)x < 0.5) {
    return (int)x * factorial(0.1, n);
  } else {
   return ((int)x * factorial(0.1, n)) + factorial(0.1, n);
  }
}

int main(void) {
  float p, q;
  scanf("%f %f", &p ,&q);
  printf("%f\n", f_to_f(p, q));
  return 0;
}
