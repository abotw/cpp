// prime_check.cpp
#include <iostream>

// Function to check if a number 'n' is prime
bool isPrime(int n) {
    // Prime numbers must be greater than 1
    if (n <= 1) {
        return false;
    }

    // Check for factors from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        // If 'n' is divisible by 'i', it is not prime
        if (n % i == 0) {
            return false;
        }
    }

    // If no factors were found, 'n' is prime
    return true;
}

int main() {
    int n;
    
    // Input the number from the user
    std::cout << "Enter a number: ";
    std::cin >> n;

    // Check if the number is prime and display the result
    if (isPrime(n)) {
        std::cout << n << " is a prime number." << std::endl;
    } else {
        std::cout << n << " is not a prime number." << std::endl;
    }
    
    return 0;
}