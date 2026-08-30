#include <stdio.h>
/*You need to assign integer values to variables b1 and b2 so that b3 evaluates to 1 (true) in the expression:
--> int b3 = !((b1 + b2) > (b1 * b2));*/
int main() {
    int b1 = 3;
    int b2 = 4;
    int b3 = !((b1 + b2) > (b1 * b2));
    printf("b3 = %d\n", b3);
    
    return 0;
}