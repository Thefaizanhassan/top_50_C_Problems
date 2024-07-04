#include<stdio.h>
#include<math.h>

int main(){
    double P, R, T;
    float A, CI;

    printf("Enter the Principal(Initial) Amount: ");
    scanf("%lf", &P);
    printf("Enter Anual Intrest rate: ");
    scanf("%lf", &R);
    printf("Enter Time Period (in Years): ");
    scanf("%lf", &T);

    A = P * ((pow((1 + R / 100), T)));

    CI = A - P;

    printf("Compound Intrest is %f\n", CI);

    return 0;
}