#include<stdio.h>

int find_max(int x,int y,int z){
    int max_xy = (x > y) ? x : y;
    return (max_xy > z) ? max_xy : z;
}

int main(){
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    max = find_max(a, b, c);
    printf("%d\n", max);

    return 0;
}