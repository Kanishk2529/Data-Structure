#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Reversed array: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
