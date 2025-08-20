#include <stdio.h>
int main(){
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *ptr = arr;
    printf("[");
    for(int i = 0 ; i < 5; i++){
        printf("%d\t", *ptr);
        ptr++;
    }
        printf("]");
    return 0;
}