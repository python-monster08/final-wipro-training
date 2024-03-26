/*
    Program: Sum of Even and odd values in the array
*/

#include <stdio.h>

int main() {
    int array[10];
    int size, i;
    int sum_even = 0, sum_odd = 0;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &size);

    printf("Enter %d elements into the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sum_even += array[i];
        } else {
            sum_odd += array[i];
        }
    }

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
