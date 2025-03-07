#include <stdio.h>

int main() {
    int number;

    // Input the integer
    scanf("%d", &number);

    // Print its hexadecimal and octal representations
    printf("Hexadecimal: %X\n", number);  // %X for hexadecimal
    printf("Octal: %o\n", number);        // %o for octal

    return 0;
}

