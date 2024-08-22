// 5.13
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        long long count = (n + 1) / 10;
        
        printf("%lld\n", count);
    }
    return 0;
}

