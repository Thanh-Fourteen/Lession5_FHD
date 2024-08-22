#include <stdio.h>
#include <math.h>

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i * i <= n; ++i){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int q;
	scanf("%d", &q);
	while(q--){
		int l, r, cnt = 0;
		scanf("%d%d", &l, &r);
		for (int i = ceil(sqrt(l)); i <= sqrt(r); ++i){
			if (snt(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
}
