#include <stdio.h>

int main() {
    char inputChar;
    
    // Prompt user for input
    printf("Enter a character: ");
    scanf("%c", &inputChar);
    
    // Print the ASCII value of the entered character
    printf("ASCII Value: %d\n", inputChar);
    
    return 0;
}
