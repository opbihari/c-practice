#include <stdio.h>

int main(void){
    int n , rev = 0, reminder = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(n != 0){
        reminder = n % 10;
        rev = rev * 10 + reminder;
        n = n/10;
    }
    printf("reverse  is %d", rev);
    return 0;
} 
   