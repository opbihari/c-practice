#include <stdio.h>
/*Create a program that demonstrates type casting between different numeric data types:

1. Declare an int variable named smallNumber with value 42
2. Declare a float variable named mediumNumber with value 123.456
3. Declare a double variable named largeNumber
4. Use implicit casting to convert smallNumber to largeNumber
5. Print largeNumber with the message "Small to large: " using printf and 1 decimal place
6. Use implicit casting to convert mediumNumber to largeNumber
7. Print largeNumber with the message "Medium to large: " using printf and 1 decimal place*/

int main() {
    int smallNumber = 42;
    float mediumNumber = 123.456f;
    double largeNumber;
    largeNumber = smallNumber;
    printf("Small to large: %f\n",largeNumber);
    largeNumber = mediumNumber;
    printf("Medium to large: %f\n",largeNumber);
    return 0;

}