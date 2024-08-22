// 5.9
#include <stdio.h>
#include <math.h>

int main() {
    int a1, b1, a2, b2;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    if (a1 != a2) {
        // C?t nhau
        double x = (double)(b2 - b1) / (a1 - a2);
        double y = a1 * x + b1;
        printf("Cat %.2lf %.2lf\n", x, y);
    } else {
        // Song song ho?c trùng nhau
        if (b1 != b2) {
            // Song song
            // distance = |b2 - b1| / sqrt(a2^2 + 1)
            double distance = fabs((double)(b2 - b1)) / sqrt(a2 * a2 + 1);
            printf("Song song %.2lf\n", distance);
        } else {
            // Trùng nhau
            printf("Trung\n");
        }
    }

    return 0;
}
