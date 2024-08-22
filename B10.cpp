// Take note
#include <stdio.h>
#include <math.h>

// H�m t�nh kho?ng c�ch gi?a hai di?m (x1, y1) v� (x2, y2)
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// H�m ki?m tra hai do?n th?ng (x1, y1) -> (x2, y2) v� (x3, y3) -> (x4, y4) c� song song hay kh�ng
int isParallel(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    // �oan thang noi 2 diem (x1, y1), (x2, y2) c� he so goc: slop = y2 - y1 / (x2 - x1)
    // Ta so sanh 2 slop cua 2 duong voi nhau
	return (y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1);
}

// H�m t�nh di?n t�ch h�nh b�nh h�nh d?a tr�n hai do?n song song
double parallelogramArea(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    double base = distance(x1, y1, x2, y2);
    double height = fabs((y3 - y1) * (x2 - x1) - (x3 - x1) * (y2 - y1)) / base;
    return base * height;
}

int main() {
    double xA, yA, xB, yB, xC, yC, xD, yD;
    scanf("%lf %lf", &xA, &yA);
    scanf("%lf %lf", &xB, &yB);
    scanf("%lf %lf", &xC, &yC);
    scanf("%lf %lf", &xD, &yD);

    int foundParallelogram = 0;
    double maxArea = 0;

    // Ki?m tra c�c c�ch n?i d? t?o th�nh h�nh b�nh h�nh
    if (isParallel(xA, yA, xB, yB, xC, yC, xD, yD) && isParallel(xB, yB, xC, yC, xD, yD, xA, yA)) {
        double area = parallelogramArea(xA, yA, xB, yB, xC, yC, xD, yD);
        if (area > maxArea) maxArea = area;
        foundParallelogram = 1;
    }
    if (isParallel(xA, yA, xC, yC, xB, yB, xD, yD) && isParallel(xC, yC, xB, yB, xD, yD, xA, yA)) {
        double area = parallelogramArea(xA, yA, xC, yC, xB, yB, xD, yD);
        if (area > maxArea) maxArea = area;
        foundParallelogram = 1;
    }
    if (isParallel(xA, yA, xC, yC, xD, yD, xB, yB) && isParallel(xC, yC, xD, yD, xB, yB, xA, yA)) {
        double area = parallelogramArea(xA, yA, xB, yB, xD, yD, xC, yC);
        if (area > maxArea) maxArea = area;
        foundParallelogram = 1;
    }

    if (foundParallelogram) {
        printf("YES %.2f\n", maxArea);
    } else {
        printf("NO\n");
    }

    return 0;
}

