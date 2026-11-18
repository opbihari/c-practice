#include <stdio.h>

int main(void){
    int binary,octal = 0,weight = 1, last_digit;
    printf("enter the  binary digit to change into the octal ");
    scanf("%d", &binary);

    while ( binary != 0)
    {
        last_digit = binary%10;
        octal = octal +(last_digit*weight);
        binary = binary/10;
        weight = weight*8;
    }
    printf("%d ", octal);
    return 0;

}