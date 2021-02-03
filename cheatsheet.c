#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//ファイル書き込み
//ファイル一行づつ読み込み
//積分
//一定の範囲のrandom

/*char* s = (char*)malloc(sizeof(char) * n); は、ほぼ、 char s[n]; と同様。
ただし、変数 s は関数が終了した後もクリアされない。
他の関数でそのクリアされない変数 s を使うには戻り値に指定する。
*/

//x sin(x)を表示
void sin_from_to(double from, double to, double dt) {
  double x;

  // File* fp = fopen("sin.dat", "w");
  for (x=from; x<=to; x += dt) {
    printf("%f %f\n", x, sin(x));
    // fprintf(fp, "%f %f\n", x, sin(x));
  }
  // fclose(fp);
}

int main(void) {
  sin_from_to(0.0, 10.0, 0.1);
  return 0;
}
