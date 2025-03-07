#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;

    // Taking input for name, age, and hobby
    scanf("%s %d %s", name, &age, hobby);

    // Printing the details
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
