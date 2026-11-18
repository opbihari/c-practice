#include <stdio.h>

int main(void){
    int binary = 0, decimal, reminder, final_biary = 0;
    printf("enter the decimal to change into binary ");
    scanf("%d", &decimal);
    while( decimal != 0){
        reminder = decimal%2;
        decimal = decimal/2;
        binary = (binary*10)+ reminder;
    }
    while( binary != 0){
        final_biary = (final_biary*10) +(binary%10);  
        binary = binary/10;
    }
    printf("%d", final_biary);

    return 0;
}