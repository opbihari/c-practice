#include <stdio.h>

void right_triangle(int n ,char symbol) {

    for (int count = 1; count <= n; count++) {
        for (int j = 1; j <= count; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    
}
void inverted_right_triangle (int n, char symbol){
    int stars;
    for( int count = 0; count < n; count++){
        for (int j = 0; j < count; j++) {
            printf(" ");
        }
        for (stars = 0; stars < n - count; stars++){
        printf("%c", symbol);
        }
        printf("\n");
    }
}
int main(void){
    int choice;
    int n, j;
    char symbol = '*';
    printf("Select the pattern you want to print.\n");
    printf(" 1  - right triangle\n");
    printf(" 2  - inverted right triangle\n");
    printf(" 3  - middle triangle\n");
    printf(" 4  - inverted middle triangle\n");
    scanf("%d", &choice);
    
    printf("enter the lines up to which pattern should be ");
    scanf("%d", &n);
    printf("eneter the character which yoy mant to print in.  ");
    scanf("%c", &symbol);

    switch (choice){
        case 1:
        right_triangle(n, symbol);
        break;
        case 2:
        inverted_right_triangle(n,symbol);
        break;
        default:
        printf("Invalid choice.\n");
        break;
    }
    return 0;
}