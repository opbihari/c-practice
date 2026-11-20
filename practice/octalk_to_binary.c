#include <stdio.h>

int main(void) {
    const char *binary[] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    char octal[50];

    printf("enter the octal to change into binary: ");
    scanf("%49s", octal);

    for (int i = 0; octal[i] != '\0'; i++) {
        int digit = octal[i] - '0';

        if (digit < 0 || digit > 7) {
            printf("\nInvalid octal digit: %c\n", octal[i]);
            return 1;
        }

        printf("%s", binary[digit]);
    }
    printf("\n");

    return 0;
}