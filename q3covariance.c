/* Q3>Find the strength of the linear relationship (Covariance ) of two given data sets (X and Y)
  if cov(x,y) > 0 then X and Y tend to move in the same direction
  if cov(x,y) < 0 then X and Y tend to move in the opposite direction
  if cov(x,y) = 0 then X and Y tend independent */

#include <stdio.h>

double cov(double X[], double Y[], int n) {
    double sum_X = 0, sum_Y = 0, sum_XY = 0, sum_X2 = 0, sum_Y2 = 0;
    for (int i = 0; i < n; i++) {
        sum_X += X[i];
        sum_Y += Y[i];
        sum_XY += X[i] * Y[i];
        sum_X2 += X[i] * X[i];
        sum_Y2 += Y[i] * Y[i];
    }
    double cov = (sum_XY - sum_X * sum_Y / n) / (n - 1);
    return cov;
}

int main() {
    double X[] = {1, 2, 3, 4, 5};
    double Y[] = {2, 4, 6, 8, 10};
    int n = 5;
    double covariance = cov(X, Y, n);
    printf("Covariance: %f\n", covariance);
    if (covariance > 0) {
        printf("X and Y tend to move in the same direction\n");
    } else if (covariance < 0) {
        printf("X and Y tend to move in the opposite direction\n");
    } else {
        printf("X and Y tend to be independent\n");
    }
    return 0;
}