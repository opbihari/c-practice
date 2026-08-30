#include <stdio.h>
/*Write a program that initializes 2 variables n1 and n2 with the values 8 and 9 (accordingly).

--After that initialize another variable n3 that will hold whether n1 is greater than n2.

--Print the values of all three variables using printf() in the following format:
   --> n1 = [value of n1], n2 = [value of n2], n3 = [value of n3]*/

int main (void){
    int n1 = 8;
    int n2 = 9;
    int n3 = n1 > n2;
    printf("n1 = %d, n2 = %d, n3 = %d", n1,n2,n3);
    return 0;
}