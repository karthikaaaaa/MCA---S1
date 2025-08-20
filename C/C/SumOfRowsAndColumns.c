#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i, rowSum);
    }

    printf("\nSum of each column:\n");
    for (int j = 0; j < columns; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d sum = %d\n", j, colSum);
    }

    return 0;
}
