#include <stdio.h>

void generateSeries(int x) {
    if (x < 1) {
        printf("Input should be a positive integer.\n");
        return;
    }

    printf("Output: ");
    for (int i = 1; i <= x; i += 2) {
        printf("%d", i);
        if (i + 2 <= x) {
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
