#include <ctype.h>
#include <stdio.h>

void right_triangle(int n, char symbol) {
  for (int count = 1; count <= n; count++) {
    for (int j = 1; j <= count; j++) {
      printf("%c", symbol);
    }
    printf("\n");
  }
}

void inverted_right_triangle(int n, char symbol) {
  for (int count = 0; count < n; count++) {
    for (int j = 0; j < count; j++) {
      printf(" ");
    }
    for (int stars = 0; stars < n - count; stars++) {
      printf("%c", symbol);
    }
    printf("\n");
  }
}

void middle_triangle(int n, char symbol) {
  for (int count = 1; count <= n; count++) {
    for (int j = 1; j <= n - count; j++) {
      printf(" ");
    }
    for (int stars = 1; stars <= 2 * count - 1; stars++) {
      printf("%c", symbol);
    }
    printf("\n");
  }
}

void inverted_middle_triangle(int n, char symbol) {
  for (int count = 0; count < n; count++) {
    for (int j = 0; j < count; j++) {
      printf(" ");
    }
    for (int stars = 0; stars < 2 * (n - count) - 1; stars++) {
      printf("%c", symbol);
    }
    printf("\n");
  }
}

void character_pattern(void) {
  int choice;
  int n;
  char symbol;
  char custom_choice;

  printf("\nSelect the character pattern you want to print:\n");
  printf(" 1 - Right triangle\n");
  printf(" 2 - Inverted right triangle\n");
  printf(" 3 - Middle triangle (Pyramid)\n");
  printf(" 4 - Inverted middle triangle\n");
  printf("Enter choice (1-4): ");
  scanf("%d", &choice);

  printf("Enter the number of lines: ");
  scanf("%d", &n);

  printf("Do you want to choose character for pattern (y/n)? ");
  scanf(" %c", &custom_choice);
  custom_choice = (char)tolower((unsigned char)custom_choice);

  if (custom_choice == 'y') {
    printf("Enter the character which you want to print: ");
    scanf(" %c", &symbol);
  } else {
    symbol = '*';
  }

  printf("\n");
  switch (choice) {
  case 1:
    right_triangle(n, symbol);
    break;
  case 2:
    inverted_right_triangle(n, symbol);
    break;
  case 3:
    middle_triangle(n, symbol);
    break;
  case 4:
    inverted_middle_triangle(n, symbol);
    break;
  default:
    printf("Invalid pattern choice.\n");
    break;
  }
}

void math_number_triangle(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
}

void math_inverted_number_triangle(int n) {
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
}

void math_floyds_triangle(int n) {
  int num = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", num++);
    }
    printf("\n");
  }
}

void math_number_pyramid(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      printf("  ");
    }
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    for (int j = i - 1; j >= 1; j--) {
      printf("%d ", j);
    }
    printf("\n");
  }
}

void math_pattern(void) {
  int choice;
  int n;

  printf("\nSelect the math pattern you want to print:\n");
  printf(" 1 - Number right triangle (1, 1 2, 1 2 3...)\n");
  printf(" 2 - Inverted number triangle (1 2 3..., 1 2, 1)\n");
  printf(" 3 - Floyd's triangle (1, 2 3, 4 5 6...)\n");
  printf(" 4 - Number pyramid (palindrome numbers)\n");
  printf("Enter choice (1-4): ");
  scanf("%d", &choice);

  printf("Enter the number of lines: ");
  scanf("%d", &n);

  printf("\n");
  switch (choice) {
  case 1:
    math_number_triangle(n);
    break;
  case 2:
    math_inverted_number_triangle(n);
    break;
  case 3:
    math_floyds_triangle(n);
    break;
  case 4:
    math_number_pyramid(n);
    break;
  default:
    printf("Invalid choice.\n");
    break;
  }
}

int main(void) {
  int choice;
  printf("Which pattern do you want to choose?\n");
  printf(" 1 - character_pattern\n");
  printf(" 2 - math_pattern\n");
  printf("Enter choice (1-2): ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    character_pattern();
    break;
  case 2:
    math_pattern();
    break;
  default:
    printf("Invalid choice.\n");
    break;
  }

  return 0;
}