#include <stdio.h>

int main(void){
    int decimal, reminder;
    long long binary = 0;
    long long palace = 1;
    printf("enter the decimal to change into binary ");
    scanf("%d", &decimal);
    if (decimal == 0){
        printf("0\n");
        return 0;
    }
    while( decimal > 0){
        reminder = decimal%2;
        decimal = decimal/2;
        binary = binary+(palace * reminder);
        palace = palace*10;
    }
    printf("%lld\n", binary);

    return 0;
}