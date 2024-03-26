/*

 Q.7 rotate array every kth element i/p
    No of Elements in the list = 9
    Enter the elements:
    1 2 3 4 5 6 7 8 9
    i/p: 
    k= 3
    
    o/p
    3 2 1 6 5 4 9 8 7
    
    
    k=6
    6 5 4 3 2 1 9 8 7
    
    k=4
    4 3 2 1 8 7 6 5 9

*/

#include <stdio.h>

// Function to reverse a segment of the array from `start` to `end`
void reverseSegment(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array every k-th element
void rotateEveryKth(int arr[], int n, int k) {
    for (int i = 0; i < n; i += k) {
        // If the remaining elements are less than k, reverse all of them
        if (i + k > n) {
            reverseSegment(arr, i, n - 1);
        } else {
            reverseSegment(arr, i, i + k - 1);
        }
    }
}

int main() {
    int n, k;
    
    // Read the number of elements in the array
    printf("No of Elements in the list = ");
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the array
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of k
    printf("k=");
    scanf("%d", &k);

    // Rotate the array every k-th element
    rotateEveryKth(arr, n, k);

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
<<<<<<< HEAD
}
=======
}


>>>>>>> 89dae5b3094c4daefc3593ec67e52b257aeaa47c
