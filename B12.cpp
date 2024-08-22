#include <stdio.h>
#include <math.h>

int main(){
	int q;
	scanf("%d", &q);
	while(q--){
		int l, r;
		scanf("%d%d", &l, &r);
		int ans = (int)sqrt(r) - ceil(sqrt(l)) + 1;
		printf("%d\n", ans);
	}
}
