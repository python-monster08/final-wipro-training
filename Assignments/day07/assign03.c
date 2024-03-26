#include <stdio.h>

#define CAP 100

int main() {
    int arr[CAP]; 

    // Storing element here
    for (int i = 0; i < CAP; i++) {
        arr[i] = i + 1;
    }

    // Displaying the array elements
    printf("Array from 1 to 100: \n");
    for (int i = 0; i < CAP; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
