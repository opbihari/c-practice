#include <stdio.h>
/*Write a program that:

1. Declares a double variable named temperature and assigns it a value of 98.6.
2. Uses explicit type casting to convert temperature to an integer and stores it in a variable named whole_part.
3. Prints the original temperature and the whole part on separate lines.*/

int main(){
    double temperature = 98.6;
    int whole_part = (int)temperature;
    printf("original temperatue : %f\n",temperature);
    printf("whole part temperature : %d\n",whole_part);
    return 0;
}