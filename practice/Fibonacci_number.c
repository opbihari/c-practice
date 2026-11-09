#include <stdio.h>

int main(void){
    int current_count , up_to;
    int a = 0, b = 1, c;

    printf("Enter the no of count for Fibonacci Number : ");
    scanf("%d", &up_to);

    for(current_count = 1; current_count <= up_to; current_count++){
        printf(" %d ,", a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;

}