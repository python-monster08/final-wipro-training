/*
  Q2. Check whether a given number can be expressed as the sum of two prime number

    i/p
    Enter a positive integer: 34
    Output
    34 = 3 + 31
    
    34 = 5 + 29
    34 = 11 + 23
    34 = 17 + 17
    NoofWays = 4

*/



#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1; // n is a prime number
}

// Main function to find and print all pairs of prime numbers whose sum is a given number
int main() {
    int number, noOfWays = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (int i = 2; i <= number / 2; i++) {
        if (isPrime(i) && isPrime(number - i)) {
            printf("%d = %d + %d\n", number, i, number - i);
            noOfWays++;
        }
    }

    printf("Number of Ways: = %d\n", noOfWays);

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 89dae5b3094c4daefc3593ec67e52b257aeaa47c
