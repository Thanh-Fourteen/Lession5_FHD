#include <stdio.h>
#include <math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	for(int i = 2; i <= 5; ++i){
		while(n % i == 0){
			n /= i;
		}
	}
	if (n > 5) printf("NO");
	else printf("YES");
}
