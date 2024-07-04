#include<stdio.h>

int main(){
    int a, rem, final;
    final = 0;
    printf("Enter a number: ");
    scanf("%d",&a);

    while (a!=0)
    {
        rem = a % 10;
        if (rem == 0)
        {
            final = final * 10 + 1;
        } else
        {
            final = final * 10 + rem;
        }
        a = a / 10;
    }
    printf("%d\n", final);

    return 0;
}