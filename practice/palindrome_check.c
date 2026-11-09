#include <stdio.h>

int main(void){
    int n , rev = 0, reminder = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    int original_number = n;
    while(n != 0){
        reminder = n % 10;
        rev = rev * 10 + reminder;
        n = n/10;
    }
    if( original_number == rev){
        printf("number %d is a palindrome number.", original_number);
    }else{
        printf("number %d is  not palindrome number.", original_number);
    }
    return 0;
} 