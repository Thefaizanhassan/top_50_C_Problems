#include<stdio.h>
#include<math.h>

int main(){
    int n, flag = 0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i==0) {
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
    {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is a non-prime.\n", n);
    }
    return 0;
}