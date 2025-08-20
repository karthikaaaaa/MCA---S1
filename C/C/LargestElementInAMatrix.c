#include <stdio.h>

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



    


    int max = arr[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("\nThe largest element is %d\n", max);
    printf("It is located at position: [%d][%d]\n", maxRow, maxCol);

    return 0;
}
