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

    printf("Reversed value of %d is %d\n", a, reverse(a));

}