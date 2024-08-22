#include <stdio.h>

int main(){
	int q; scanf("%d", &q);
	while(q--){
		int n, a, b;
		scanf("%d%d%d", &n, &a, &b);
		int behind = n - a;
		int before = b + 1;
		
		if (behind < before) printf("%d\n",  behind);
		else printf("%d\n", before);
	}
}
