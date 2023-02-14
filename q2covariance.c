// write a in c to find the variance and standard deviation for n input data
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double data[100], mean, variance, stdev = 0.0;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter the data points: ");
    for (i = 0; i < n; i++) {
        scanf("%lf", &data[i]);
        mean += data[i];
    }

    mean /= n;

    for (i = 0; i < n; i++)
        variance += pow(data[i] - mean, 2);

    variance /= n;
    stdev = sqrt(variance);

    printf("Mean: %lf\n", mean);
    printf("Variance: %lf\n", variance);
    printf("Standard deviation: %lf\n", stdev);

    return 0;
}
