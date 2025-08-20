#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], sum[r][c];

    printf("Enter elements of 1st Matrix\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2nd Matrix\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
