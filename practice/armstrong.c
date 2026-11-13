#include <stdio.h>

int main(){
    int n, orig = n, sum, d;
    printf("enter the number");
    scanf("%d", &n);

    while(n <= 0){
        d = n % 10;
        sum += (d*d*d);
        n = n/10;
    }
    if (orig == sum){
        printf("the number %d is armstrong", orig);
    }else{
        printf(" the number %d is  not armstrong", orig);
    }
    return 0;
}