//16
int power(int n, int m){
   int i = 0, sum = 1;
    for (i=0; i<m; i++) {
    sum = sum * n;
    }
  return sum;
}
//17
int teenage(int y){
 if (12 < y && y < 20){
   return 1;
 } else {
   return 0;
 }
}
//18
int max2(int x, int y){
  if (x > y){
    return x;
  } else {
    return y;
  }
}
//19
void max_p(int x, int y){
  if (x > y){
    printf("%d", x);
  } else {
    printf("%d", y);
  }
}
//20
int max3(int x, int y, int z) {
  if (x > y) {
    if (x > z){
      return x;
    } else if (z > x){
      return z;
    }
  }
  if (y > x) {
    if (y > z){
      return y;
    } else if (z > y){
      return z;
    }
  }
}
//21
int max4 (int x, int y, int z, int w) {
  return max2(max2(x,y), max2(z,w));
}
//22
int triangle(int x, int y, int z) {
  if (x+y<z || y+z<x || z+x<y) {
    return 0;
  } else {
    return 1;
  }
}
//23
int right_angle(int x, int y, int z){
  return ((x*x == y*y+z*z)||(y*y ==z*z+x*x)||(z*z == x*x+y*y));
}
//24
int sum(int n, int m){
  int i;
  for (i = n+1; i < m+1; i++) {
    n += i;
  }
  return n;
}
//25
int sum(int n, int m){
  int i;
  for (i = n+1; i < m+1; i++) {
    n *= i;
  }
  return n;
}
//26
int sum_of_digits(int n) {
  int sum = 0, remain = 0;
    while(n){
    remain = n % 10;
    sum = sum + remain;
    n = n / 10;
  }
  return sum;
}
//27
int fz(int n) {
  if (n % 15 == 0) {
    return 3;
  } else if (n % 3 == 0) {
    return 1;
  } else if (n % 5 == 0) {
    return 2;
  } else {
    return 0;
  }
}
//28
void divisors_p(int n) {
  int i = 0;
  for( i=1; i<=n; i++ ){
    if( n%i == 0 ){
      printf("%d,", i);
    }
  }
}

//29
int sum_of_divisors(int n) {
  int i = 0, sum = 0;
  for( i=1; i<=n; i++ ){
    if( n%i == 0 ){
      sum += i;
    }
  }
  return sum;
}
int main(void) {
    // 定義した関数の呼び出しをここに。
    return 0;
}
