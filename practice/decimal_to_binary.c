#include <stdio.h>

int main(void){
    int binary, decimal = 0,weight = 1, last_digi;
    printf("enter the  binary number \n");
    scanf("%d", &binary);

    while( binary != 0){
        last_digi = binary%10;
        decimal = decimal +(last_digi*weight);
        binary = binary/10;
        weight = weight*2;
    }
    printf(" decimal number is %d", decimal);
    return 0;

}