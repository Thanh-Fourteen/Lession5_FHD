#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, temp = num;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return reversed == num;
}

int main() {
    int l, r, count = 0;
    scanf("%d %d", &l, &r);

    for (int i = l; i <= r; i++) {
        if (isPalindrome(i)) {
            count++;
        }
    }

    printf("%d\n", count);
    for (int i = l; i <= r; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
