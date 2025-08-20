#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (n x n):\n");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int primarySum = 0;
    int secondarySum = 0;

    printf("\nPrimary Diagonal Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        primarySum += arr[i][i];
    }

    printf("\nSecondary Diagonal Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][n - i - 1]);
        secondarySum += arr[i][n - i - 1];
    }

    printf("\n\nSum of Primary Diagonal: %d", primarySum);
    printf("\nSum of Secondary Diagonal: %d", secondarySum);

    int totalDiagonalSum = primarySum + secondarySum;
    if (n % 2 == 1) {
        totalDiagonalSum -= arr[n/2][n/2]; 
    }

    printf("\nTotal Sum of Diagonals: %d\n", totalDiagonalSum);

    return 0;
}
