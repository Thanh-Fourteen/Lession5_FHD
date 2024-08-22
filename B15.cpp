#include <stdio.h>

int isPrime(int n){
	for(int i = 2; i * i <= n; ++i){
		if(n % i == 0){
			return 0;
		}
	}
	return n > 1;
}

long long countDivisors(int n, int k){
	long long cnt = 0;
	for(long long i = k; i <= n; i *= k){
		cnt += n / i;
	}
	return cnt;
}

int main(){
	int n;
	long long cnt = 1;
	scanf("%d", &n);
	for(int i = 2; i <= n; ++i){
		if(isPrime(i)){
			long long temp = (countDivisors(n, i) + 1) % (long long)(1e9 + 7);
			cnt = cnt * temp % (long long)(1e9 + 7); 
		}
	}
	printf("%lld", cnt - 1);
}
