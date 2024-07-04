#include<stdio.h>
#include<math.h>

float findArea(int r){
    return 3.14*pow(r,2);
}

int main(){
    int r;
    printf("Enter radius of circle: ");
    scanf("%d",&r);

    printf("Radius of Circle with radius %d is %.2f\n",r,findArea(r));
    return 0;
}