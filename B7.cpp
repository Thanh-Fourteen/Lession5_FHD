#include <stdio.h>

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%d %lld", n, 1ll * n * k  + 1); 
}
