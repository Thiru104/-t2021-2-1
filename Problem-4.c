#include <stdio.h>

void countMultiples(int arr[], int n) {
    int counts[10] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 9; j++) {
            if (arr[i] % j == 0) {
                counts[j]++;
            }
        }
    }

    for (int i = 1; i <= 9; i++) {
        printf("{%d: %d} ", i, counts[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    countMultiples(arr, n);

    return 0;
}
