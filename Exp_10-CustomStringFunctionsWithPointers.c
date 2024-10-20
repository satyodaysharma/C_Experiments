#include <stdio.h>

int my_strlen(const char* str) {
    const char* ptr = str; 
    while (*ptr != '\0') {
        ptr++; 
    }
    return (ptr - str);
}

char* my_strcat(char* destination, const char* source) {
    char* dest_ptr = destination;

    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    while (*source != '\0') {
        *dest_ptr = *source;
        dest_ptr++;
        source++;
    }
    *dest_ptr = '\0';

    return destination;
}

char* my_strcpy(char* destination, const char* source) {
    char* dest_ptr = destination;

    while (*source != '\0') {
        *dest_ptr = *source;
        dest_ptr++;
        source++;
    }
    *dest_ptr = '\0';

    return destination;
}

int main() {
    char str1[100], str2[100], copy[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[my_strlen(str1) - 1] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[my_strlen(str2) - 1] = '\0'; 

    printf("\nLength of first string: %d\n", my_strlen(str1));

    printf("\nConcatenation of strings: %s\n", my_strcat(str1, str2));

    printf("\nCopying second string to a new string: %s\n", my_strcpy(copy, str2));

    return 0;
}
