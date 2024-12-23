#include<stdio.h>

void printBinary(int n) {
    for (int i = 7; i >= 0; i--)
     {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    char char1;

    printf("Please enter a character: ");
    scanf("%c", &char1);

    printf("\nThe ASCII Code of character '%c' is: %d", char1, char1);

    printf("\nThe Binary representation of '%c' is: ", char1);
    printBinary(char1);

    printf("\n");

    return 0;
}
