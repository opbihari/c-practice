#include <stdio.h>
/*
Write a program that:

1. Takes two integers as input from the user
2. Calculates and prints:
   --> The remainder when the first number is divided by the second
   --> Whether the sum of the two numbers is even or odd
   --> Whether the first number is divisible by the second (no remainder)*/

int main(void) {
    int first;
    int second;
    scanf("%d", &first);
    scanf("%d", &second);

    int remainder = (first % second);
    int is_odd = ((first + second) % 2);
    int divisible_by_second = (remainder == 0);

    printf("remainder : %d\n",remainder);
    printf("is number odd : %d\n", is_odd);
    printf("divisible by second : %d\n",divisible_by_second);
    return 0;

}