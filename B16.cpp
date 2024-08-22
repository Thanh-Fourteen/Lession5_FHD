#include <stdio.h>
#include <math.h>

int sum_digits(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int is_prime(int n) {
	if (n <= 1) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int is_smith(int n) {
	if (is_prime(n)) return 0;
	int sum_digits_n = sum_digits(n);
	int sum_digits_factors = 0;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			while (n % i == 0) {
				sum_digits_factors += sum_digits(i);
				n /= i;
			}
		}
	}
	return sum_digits_n == sum_digits_factors;
}

int is_hoax(int n) {
	int sum_digits_n = sum_digits(n);
	int sum_digits_factors = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0 && is_prime(i)) {
			sum_digits_factors += sum_digits(i);
			while (n % i == 0) n /= i;
		}
	}
	if (n > 1) sum_digits_factors += sum_digits(n);
	return sum_digits_n == sum_digits_factors;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		if (is_smith(i) && is_hoax(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}
