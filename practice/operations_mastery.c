#include <stdio.h>
/*Create a program that determines if a student can apply for a scholarship.

> Criteria for eligibility:

--->The student has a GPA of 3.5 or higher OR has recommendations
--->The student must have completed at least 60 credit hours
--->The student must NOT have any academic violations*/

int checkEligibility(float gpa, int creditHours, int hasViolations, int hasRecommendations) {
    if ((gpa > 0 || hasRecommendations == 0 ) && (creditHours >= 60) && (hasViolations != 1)) {
        return 1;
    } else
    {
        return 0;
    }
    
    
}

int main() {
    float gpa;
    int creditHours, hasViolations, hasRecommendations;
    
    // Read input values
    scanf("%f", &gpa);
    scanf("%d", &creditHours);
    scanf("%d", &hasViolations);
    scanf("%d", &hasRecommendations);
    
    // Check eligibility
    if (checkEligibility(gpa, creditHours, hasViolations, hasRecommendations)) {
        printf("The student is eligible for the scholarship.\n");
    } else {
        printf("The student is not eligible for the scholarship.\n");
    }
    
    return 0;
}