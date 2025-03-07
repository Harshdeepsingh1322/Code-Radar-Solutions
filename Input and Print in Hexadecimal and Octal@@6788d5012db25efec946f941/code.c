#include <stdio.h>

int main() {
    int number;

    // Take an integer as input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Print the number in hexadecimal and octal formats
    printf("Hexadecimal: %X\n", number);  // %X prints uppercase hexadecimal
    printf("Octal: %o\n", number);        // %o prints octal representation

    return 0;
}

