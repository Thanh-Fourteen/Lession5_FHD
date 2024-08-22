#include <stdio.h>

int main() {
  int q, a, sum, digit;
  scanf("%d", &q);

  while (q--) {
    scanf("%d", &a);
    sum = 0;
    a *= a;
    while (a > 0) {
      digit = a % 10;
      sum += digit;
      a /= 10;
    }
    printf("%d\n", sum);
  }
  return 0;
}
