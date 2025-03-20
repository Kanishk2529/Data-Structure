#include <stdio.h>
int main() {
    int n, i, newBeginning, newEnd;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int numbers[n + 2];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Enter a number to insert at the beginning:\n");
    scanf("%d", &newBeginning); 
    for (i = n; i > 0; i--) {
        numbers[i] = numbers[i - 1];
    }
    numbers[0] = newBeginning;
    printf("Enter a number to insert at the end:\n");
    scanf("%d", &newEnd);
    numbers[n + 1] = newEnd;
    printf("Updated array: ");
    for (i = 0; i <= n + 1; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
