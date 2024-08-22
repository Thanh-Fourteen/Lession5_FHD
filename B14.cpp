#include <stdio.h>

long long gt(int a){
	long long ans = 1;
	for (int i = 1; i <= a; ++i)
		ans *= i;
	return ans;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a <= b) printf("%lld", gt(a));
    else printf("%lld", gt(b));
    return 0;
}

