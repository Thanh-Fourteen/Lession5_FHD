#include <stdio.h>

long long countDivisors(int n, int k){
	long long cnt = 0;
	for(long long i = k; i <= n; i *= k){
		cnt += n / i;
	}
	return cnt;
}

int main(){
	int n, p;
	scanf("%d%d", &n, &p);
	printf("%d", countDivisors(n,p));
}
