#include<stdio.h>

int reverse(int value){
    int remainder, reversed = 0;
    while (value != 0)
    {
        remainder = value % 10;
        reversed = reversed * 10 + remainder;
        value = value / 10;
    }
    return reversed;
    
}

int main(){
    int a;
    printf("Enter a Value: ");
    scanf("%d",&a);

    if (a == reverse(a))
    {
        printf("%d is palindrome.\n", a);
    } else
    {
        printf("%d is not a palindrome.\n", a);
    }

    return 0;
}