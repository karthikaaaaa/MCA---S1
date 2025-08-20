#include <stdio.h>
int main(){
    int a = 10, b = 5;
    int *pa = &a, *pb = &b;
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("a -> %d\nb -> %d", a, b);
    return 0;
}