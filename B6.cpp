#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long f1 = 1, f2 = 2, f3;
	for (int i = 1; i < n; ++i){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%lld %lld", f1, f2);
}
