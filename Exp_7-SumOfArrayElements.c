#include <stdio.h>

int main() {
    int a, sum = 0;

    printf("Please enter the number of elements: ");
    scanf("%d", &a);

    int arr[a];

    printf("Please enter %d elements: \n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++) {
        sum += arr[i];
    }

    printf("The sum of the elements is: %d\n", sum);

    return 0;
}
