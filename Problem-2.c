#include <stdio.h>

void generateSeries(int x) {
    if (x < 1) {
        printf("Input should be a positive integer.\n");
        return;
    }

    printf("Output: ");
    for (int i = 1; i <= x; i++) {
        printf("%d", 2 * i - 1);
        if (i < x) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int x;

    printf("Enter a positive integer (x): ");
    scanf("%d", &x);

    generateSeries(x);

    return 0;
}
