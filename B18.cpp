#include <stdio.h>

int factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n - 1);
}

int is_krishnamurthy(int n) {
  int sum = 0;
  int temp = n;
  while (temp > 0) {
    sum += factorial(temp % 10);
    temp /= 10;
  }
  return sum == n;
}

int main() {
  int n;
  scanf("%d", &n);
  if (is_krishnamurthy(n)) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
