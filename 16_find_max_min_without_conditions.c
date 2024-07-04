#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("max = %d\n", ((a+b) + abs(a-b))/2);
    printf("max = %d\n", ((a+b) - abs(a-b))/2);
    return 0;
}