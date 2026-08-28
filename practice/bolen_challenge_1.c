#include <stdio.h>
/*Create a program that determines whether a person is eligible for a discount.

1. Define an age variable and set it to 65
2. Define an isMember variable and set it to 0 (false)
3. Create a boolean expression called isEligible that evaluates to true if either: 
   >The person is a senior (age 65 or older), OR
   >The person is a member
4. Print the result of whether the person is eligible for a discount*/
int main(){
    int age = 65;
    int isMember = 0;
    int isEligible;
    if (age >= 65 || isMember) {
        isEligible = 1;
    }
    else{
        isEligible = 0;
    }
    if (isEligible) {
        printf("Person is eligible  for discount");

    }
    else
    {
        printf("Person is  not eligible for discount") ;  
    }
    return 0; 
}