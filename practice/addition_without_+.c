#include <stdio.h>

int main(void){
    int a,b;

    printf("enter the 1st numbers to add ");
    scanf("%d", &a);
    printf("enter the 2nd numbers to add ");
    scanf("%d", &b);

    while( b != 0){
        a++;
        b--;
    }
    printf("sum is %d", a);
    return 0;

}