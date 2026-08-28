#include <stdio.h>

/*Write a C program that does the following:

1. Declare an integer variable number and initialize it with the value 17.
2. Use the modulo operator to calculate the remainder when number is divided by 5, and store the result in a variable called remainder.
3. Use the modulo operator to determine if number is even or odd (remember booleans)
4. Print the results using three separate printf() calls, each ending with \n, in the following format:
   >printf("Number: %d\n", number);
   >printf("Remainder when divided by 5: %d\n", remainder);
   >printf("%d is even? %d\n", number, is_even);*/
   
   int main(void) {
    int number = 17;
    int remainder = number%5;
    int is_even = (number%2 == 0);
    printf("Number: %d\n", number);
    printf("Remainder when divided by 5: %d\n", remainder);
    printf("%d is even? %d\n", number, is_even);
    return 0;
   }