#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    scanf("%s", a);

    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < strlen(a); ++i) {
        if (a[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%d %d\n", oddCount, evenCount);
    return 0;
}
