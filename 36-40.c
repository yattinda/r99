#include <stdio.h>
#include <stdlib.h>

int is_perfect(int n) {
  int sum = 0, i;

  for (i=1; i<n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  if (sum == n) {
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
