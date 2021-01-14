#include <stdio.h>
#include <stdlib.h>

//41
//配列にその月の総日数を入れ、その月になるまでそれぞれ足した
int days(int mm, int dd) {
  int ans = 0, i;
  int monthDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for (i=0; i<mm-1; i++) {
    ans += monthDay[i];
  }
  ans += dd;
  return ans;
}

int main(void) {
  int mm, dd;
  scanf("%i %i", &mm, &dd);
  printf("%i\n", days(mm, dd));
  return 0;
}
// 42
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

int days_between(int y1, int m1, int d1, int y2, int m2, int m2){
  int i, totalday = 0,
  for(y1+1; i<y2; i++){
    totalday += 365 + leap(i)
  }

}
//44
//1の位と100の位の数をそれぞれ変数に代入し計算し直した
int rev3(int n) {
  int one_to_hundred = n % 10;
  int ten = (n % 100) - one_to_hundred;
  int hundred_to_one = n / 100;

  return (one_to_hundred * 100) + ten + hundred_to_one;
}

int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i", rev3(p));
  return 0;
}

//45
//rev3を使い、条件一致したものをカウントした
int rev3(int n) {
  int one_to_hundred = n % 10;
  int ten = (n % 100) - one_to_hundred;
  int hundred_to_one = n / 100;

  return (one_to_hundred * 100) + ten + hundred_to_one;
}

int how_many_rev3(void) {
  int i, count = 0;
  for (i=100; i<1000; i++) {
    if (rev3(i) == i) {
      count++;
    }
  }
  return count;
}

int main(void) {
  int p;
  scanf("%i", &p);
  printf("%i", how_many_rev3(p));
  return 0;
}
