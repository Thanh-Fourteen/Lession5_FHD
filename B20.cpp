#include <stdio.h>
#include <string.h>

int isPalindrome(char x[]) {
	int len = strlen(x);
	for (int i = 0; i < len / 2; i++) {
		if (x[i] != x[len - i - 1]) {
			return 0; 
		}
	}
	return 1; 
}

int main() {
	int q;
	scanf("%d", &q);
	while(q--){
		char x[1000001];
		scanf("%s", &x);
		if (isPalindrome(x)) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
}
