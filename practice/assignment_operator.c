#include <stdio.h>
/*
Write a C program that demonstrates the use of assignment operators. Your program should:

1. Declare an integer variable num and initialize it with the value 10.
2. Use the += operator to add 5 to num.
3. Use the -= operator to subtract 3 from num.
4. Use the *= operator to multiply num by 2.
5. Use the /= operator to divide num by 3.
6. Use the %= operator to get the remainder of num divided by 4.
--->> 
After += 5: [value]
After -= 3: [value]
After *= 2: [value]
After /= 3: [value]
After %= 4: [value]*/
int main(void){
    int num = 10;
    num += 5;
    printf("After += 5: %d\n", num);
    num -= 3;
    printf("After -= 3: %d\n", num);
    num *= 2;
    printf("After *= 2: %d\n", num);
    num /= 3;
    printf("After /= 3: %d\n", num);
    num %= 4;
    printf("After %%= 4: %d\n", num);

    return 0;
}