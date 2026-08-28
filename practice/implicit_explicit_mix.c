#include <stdio.h>

/*Create a C program that:

Declares and initializes:
An integer variable age with value 25
A float variable price with value 19.99
A character variable grade with value 'A'
A constant MAX_SCORE with value 100 using #define
Calculate:
The price after a 15% discount and store it in a variable discounted_price
Convert the discounted_price to an integer using explicit casting, and store as rounded_price*/

int main() {
    int age = 25;
    float price = 19.99f;
    char grade = 'A';
    #define MAX_SCORE 100

    double discounted_price = price * 0.85;
    int rounded_price = (int)discounted_price;

    printf("Age: %d\n", age);
    printf("Price: %.2f\n", price);
    printf("Grade: %c\n", grade);
    printf("Max score: %d\n", MAX_SCORE);
    printf("Discounted price: %.2f\n", discounted_price);
    printf("Rounded price: %d\n", rounded_price);

    return 0;
}