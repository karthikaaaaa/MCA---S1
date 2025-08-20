#include <stdio.h>

int main() {
    int row, column;
    printf("Enter number of rows and columns\n");
    scanf("%d %d", &row, &column);

    int a = 0, b = 1, c;

    printf("\nFibonacci Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d\t", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}
