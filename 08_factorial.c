#include<stdio.h>

int factorial(int n){
    if (n == 0 || n == 1 )
        return 1;

    return n * factorial(n-1);
    
}

int main(){
    int n, val=1;
    printf("Enter an Integer: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        val = val * i;
    }

    printf("Factorial of %d using for loop is %d\n", n ,val);

    val = factorial(n);

    printf("Factorial of %d using for recursion is %d\n", n ,val);


    return 0;
}