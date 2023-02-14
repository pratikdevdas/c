#include <stdio.h>

double covariance(int x[], int y[], int n) {
    double sum_xy = 0, sum_x = 0, sum_y = 0, sum_x2 = 0, sum_y2 = 0;

    for (int i = 0; i < n; i++) {
        sum_xy += x[i] * y[i];
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
    }

    double cov = (sum_xy - ((sum_x * sum_y) / n)) / (n - 1);

    return cov;
}

int main() {
    int x[] = {1, 2, 3, 4, 5};
    int y[] = {2, 4, 6, 8, 10};
    int n = 5;

    double cov = covariance(x, y, n);

    printf("The covariance between X and Y is: %lf", cov);

    return 0;
}


// Find the strength of the linear relationship (Covariance ) of two given data sets (X and Y)
//  if cov(x,y) > 0 then X and Y tend to move in the same direction
//  if cov(x,y) < 0 then X and Y tend to move in the opposite direction
//  if cov(x,y) = 0 then X and Y tend independent

