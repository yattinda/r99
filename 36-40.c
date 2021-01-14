#include <stdio.h>
#include <stdlib.h>

//36
//割ったあまりが０の数をsumに足し、最後にもとの数と比較する、ｎ自身をたさないようにする
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

int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i\n", is_perfect(p));
  return 0;
}

//37
//昭和平成令和で場合分け
void j_era(int year) {
  if (year >= 2019) {
    printf("令和%i年\n", (year - 2018));
  } else if (year >= 1989) {
    printf("平成%i年\n", (year - 1988));
  } else if (year >= 1926) {
    printf("昭和%i年\n", (year - 1925));
  }
}

int main(void) {
  int p;
  scanf("%i", &p);
  j_era(p);
  return 0;
}

//38
//条件として限定的なものから場合分け
int leap(int year) {
  if (year % 400 == 0) {
    return 1;
  } else if (year % 100 == 0) {
    return 0;
  } else if (year % 4 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i\n", leap(p));
  return 0;
}

//39
//hour minute secondをそれぞれ秒にする
int time_to_int(int h, int m, int s) {
  return (h * 3600) + (m * 60) + (s);
}

int main(void) {
  int h, m, s;
  scanf("%i:%i:%i", &h, &m, &s);
  printf("%i\n", time_to_int(h, m, s));
  return 0;
}

//40
//time_to_intを用いる。絶対値を返す
int time_to_int(int h, int m, int s) {
  return (h * 3600) + (m * 60) + (s);
}

int sec_between(int h1, int m1, int s1, int h2, int m2, int s2){
  int tmp1, tmp2, ans;
  tmp1 = time_to_int(h1, m1, s1);
  tmp2 = time_to_int(h2, m2, s2);

  ans = tmp1 - tmp2;
  if (ans < 0) {
    ans = -ans;
  }
  return ans;
}

int main(void) {
  int h1, m1, s1, h2, m2, s2;
  scanf("%i:%i:%i %i:%i:%i", &h1, &m1, &s1, &h2, &m2, &s2);
  printf("%i\n", sec_between(h1, m1, s1, h2, m2, s2));
  return 0;
}
