/*
    Program: reverse the array elements.
*/
#include <stdio.h>

void reverseArr(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;   
        end--;
    }
}

int main() {
    int arr[] = {4, 5, 6, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    reverseArr(arr, n);

    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
