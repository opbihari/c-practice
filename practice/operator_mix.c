#include <stdio.h>
/*
**Create a program to decide if it's a good day for solar panel energy production

> Initialize these variables:
   -- isSunny with the value 1 (true)
   -- windSpeed with the value 5.4
   -- temperature with the value 23
   -- solarPanelOutput with the value 9
   -- isCloudy with the value 0 (false)
> Create one logical expression that checks ALL of these conditions:

---It's sunny
---The wind speed is less than 10
---The solar panel output is less than 15
---The temperature is above 20 OR there are no clouds
-->Print "Good day for solar energy" if all conditions are met, otherwise print "Not ideal for solar energy".*/
int main() {
    // Initialize variables
    int isSunny = 1;
    float windSpeed = 5.4f;
    int temperature = 23;
    int solarPanelOutput = 9;
    int isCloudy = 0;

    int isGoodDay = 1;
    

    if (isGoodDay) {
        printf("Good day for solar energy\n");
    } else {
        printf("Not ideal for solar energy\n");
    }
    
    return 0;
}