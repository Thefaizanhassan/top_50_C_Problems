#include<stdio.h>
#include<math.h>

int main(){
    int bin_val, remainder, count = 0, dec_val = 0, bool = 0;
    printf("Enter a binary no: ");
    scanf("%d", &bin_val);
    

    while (bin_val != 0)
    {
        remainder = bin_val % 10;
        if (remainder == 1 || remainder == 0)
        {
            dec_val = dec_val + remainder * pow(2 , count);
            count++;
        } else
        {
            bool = 1;
            break;
        }
        bin_val = bin_val / 10;
    }
    if (bool == 1)
    {
        printf("Invalid Input!!!...\nEnter a Binary Number.\n");
    } else {
        printf("Decimal value of %d is %d\n",bin_val,dec_val);
    }
    
    
    return 0;
}