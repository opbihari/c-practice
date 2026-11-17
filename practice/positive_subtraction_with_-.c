#include <stdio.h>

int main(void){
    int a,b;
    printf("enter the 1st numbers ");
    scanf("%d", &a);
    printf("enter the 2nd number ");
    scanf("%d", &b);

    while( b!= 0){
        a--;
        b--;
    }
    printf(" subtraction is %d", a);
    return 0;


}