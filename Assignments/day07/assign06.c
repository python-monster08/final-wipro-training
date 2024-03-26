#include <stdio.h>

int main() {
    int arr[10];
    int size, i;
    int sum_even_pos = 0, sum_odd_pos = 0;

    printf("Enter the size of the arr: ");
    scanf("%d", &size);

    printf("Enter %d elements into the arr:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (i % 2 == 0) { 
            sum_even_pos += i;   // sum of even position
        } else { 
            sum_odd_pos += i;   // sum of odd position
        }
    }

    printf("Sum of even positions: %d\n", sum_even_pos);
    printf("Sum of odd positions: %d\n", sum_odd_pos);

    return 0;
}
