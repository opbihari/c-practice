#include <stdio.h>

/*
Write a program that takes a temperature value and a character ('C' or 'F') indicating the scale.
Based on the Celsius temperature, print one of the following messages:

- If temperature < 0°C: "Freezing"
- If temperature is between 0°C and 20°C: "Cold"
- If temperature is between 21°C and 30°C: "Pleasant"
- If temperature > 30°C: "Hot"

If the input is in Fahrenheit, convert it to Celsius first using the formula: C = (F - 32) * 5/9.

Print the message exactly as shown above based on the temperature.
*/

int main() {
    float temp;
    char scale;

    printf("Enter temperature and scale (C/F): ");
    scanf("%f %c", &temp, &scale);

    float celsius = temp;

    // Convert Fahrenheit to Celsius if scale is 'F' or 'f'
    if (scale == 'F' || scale == 'f') {
        celsius = (temp - 32.0f) * 5.0f / 9.0f;
    }

    // Print message based on Celsius temperature
    if (celsius < 0) {
        printf("Freezing\n");
    } else if (celsius <= 20) {
        printf("Cold\n");
    } else if (celsius <= 30) {
        printf("Pleasant\n");
    } else {
        printf("Hot\n");
    }

    return 0;
}
