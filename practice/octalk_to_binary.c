#include <stdio.h>

int main(void){
    int octal, reminder;
    long long binary = 0;
    long long palace = 1;
    printf("enter the decimal to change into binary ");
    scanf("%d", &octal);
    if (octal == 0){
        printf("0\n");
        return 0;
    }
    while( octal > 0){
        reminder = octal%8;
        octal = octal/8;
        binary = binary+(palace * reminder);
        palace = palace*10;
    }
    printf("%lld\n", binary);

    return 0;
}