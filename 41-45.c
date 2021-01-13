#include <stdio.h>
#include <stdlib.h>

//41
//配列にその月の総日数を入れ、その月になるまでそれぞれ足した
int days(int mm, int dd) {
  int ans = 0, i;
  int monthDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for (i=0; i<mm-1; i++) {
    ans += month[i];
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

//44
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
