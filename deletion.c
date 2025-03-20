#include <stdio.h>

int main() {
    int size, i, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter the index position (0 to %d) of the number to delete: ", size - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= size) {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = pos; i < size - 1; i++) {
        numbers[i] = numbers[i + 1]; 
    }

    printf("Updated array after deletion: ");
    for (i = 0; i < size - 1; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
