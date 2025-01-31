#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    b *= -1;

    float delta = b * b - 4 * a * c;

    if (delta == 0) {
        printf("1\n%.2f 0.00", -b / (2 * a));
    } else if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("2\n%.2f 0.00\n%.2f 0.00", fmin(x1, x2), fmax(x1, x2));
    } else {
        printf("0");
    }

    return 0;
}
