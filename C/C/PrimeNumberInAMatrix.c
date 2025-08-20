#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int row, column;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &row, &column);

    int arr[row][column];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nPrime numbers in the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}
