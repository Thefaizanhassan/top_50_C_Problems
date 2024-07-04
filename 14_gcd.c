#include<stdio.h>

int calculate_hcf(int x, int y){
    int a=x, b=y, r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

int main(){
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a >= b)
    {
        hcf = calculate_hcf(a , b);
    } else
    {
        hcf = calculate_hcf(b , a);
    }
    printf("HCF of %d and %d is %d\n", a, b, hcf);
    return 0;
}