#include<stdio.h>

int main(){
    int a, b;
    printf("Enter Value of a: ");
    scanf("%d",&a);
    printf("Enter Value of b: ");
    scanf("%d",&b);

    a = a + b;
    b = a - b; // b = a
    a = a - b;

    printf(" New Value of a is %d\n", a);
    printf(" New Value of a is %d\n", b);

    return 0;
}