#include <stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    printf("Address of ptr -> %p\n",ptr);
    printf("Value of *ptr -> %d\n", *ptr);
    printf("Value of a -> %d\n", a);
    printf("Address of a -> %p\n",&a);
    return 0;

}