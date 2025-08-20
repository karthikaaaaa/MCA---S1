#include <stdio.h>

int isPalindrome(int num) {
    int ori = num, rev = 0, rem;
    
    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    return (ori == rev);
}

int main() {
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nPalindrome numbers,\n");
    int found = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (isPalindrome(matrix[i][j])) {
                printf("%d\n", matrix[i][j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No palindrome numbers\n");
    }

    return 0;
}
