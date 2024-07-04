#include<stdio.h>
#include<math.h>

int count_digit(int n){
    int count = 0;
    while (n!=0){
        count ++;
        n = n / 10;
    }
    return count;
}

void is_armstrong(int count, int n){
    int temp = n;
    int remainder, sum = 0;
    while (temp != 0) {
        remainder = temp % 10;
        sum = sum + pow(remainder,count);
        temp = temp / 10;
    }
    if (sum == n) {
        printf("%d is an armstron number.\n", n);
    } else {
        printf("%d is not an armstron number.\n", n);
    }
}

int main(){
    int n, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    count = count_digit(n);

    is_armstrong(count,n);
    
    return 0;
}