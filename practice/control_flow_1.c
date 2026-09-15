#include <stdio.h>
/*You are writing a simple program to check the weather condition based on a temperature value read from the input.

Here’s the task:

==> The int variable temperature is 
==> Use if statements to print messages based on the value of temperature:
==> If the temperature is above 30, print "It's a hot day!"
==> If the temperature is between 20 and 30 (inclusive), print "The weather is nice."
==> If the temperature is below 20, print "It's a bit cold today."
*/

int main() {
    int temperature;
    scanf("%d", &temperature);

    if (temperature > 30) {
        printf("It's a hot day!");
    }
    if (temperature >= 20 && temperature <= 30) {
        printf("The weather is nice.");
    }
    if (temperature < 20) {
        printf("It's a bit cold today.");
    }

    return 0;
}
