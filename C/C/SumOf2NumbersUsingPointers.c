#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a, &b);
    int *pa = &a;
    int *pb = &b;
    printf("Sum of a and b is : %d", *pa + *pb);
    return 0;

}