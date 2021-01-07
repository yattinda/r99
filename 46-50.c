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
