#include <stdio.h>
#include <stdlib.h>

void get_data(int arr[], int n) {
    int i;
    printf("Enter %d data values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

float calculate_mean(int arr[], int n) {
    int i;
    float sum = 0.0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

float calculate_median(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);
    if (n % 2 == 0) {
        return (float)(arr[n/2 - 1] + arr[n/2]) / 2;
    } else {
        return (float)arr[n/2];
    }
}

int calculate_mode(int arr[], int n) {
    int i, j, mode, count, max_count = 0;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int n, arr[100], choice;
    float mean, median;
    int mode;
    
    printf("Enter the number of data values: ");
    scanf("%d", &n);
    
    get_data(arr, n);
    
    do {
        printf("\n");
        printf("Menu:\n");
        printf("1. Calculate mean\n");
        printf("2. Calculate median\n");
        printf("3. Calculate mode\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                mean = calculate_mean(arr, n);
                printf("Mean = %.2f\n", mean);
                break;
            case 2:
                median = calculate_median(arr, n);
                printf("Median = %.2f\n", median);
                break;
            case 3:
                mode = calculate_mode(arr, n);
                printf("Mode = %d\n", mode);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (1);
    
    return 0;
}
