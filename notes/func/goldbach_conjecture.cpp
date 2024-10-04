// goldbach_conjecture.cpp
#include <iostream>

// Function to check if a number 'n' is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to verify Goldbach's conjecture for an even number 'n'
bool verifyGoldbach(int n) {
    // Goldbach's conjecture is only applicable for even numbers greater than 2
    if (n <= 2 || n % 2 != 0) {
        return false;
    }

    // Try to express 'n' as the sum of two prime numbers
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            // If such a pair of prime numbers is found, the conjecture holds
            std::cout << n << " = " << i << " + " << (n - i) << std::endl;
            return true;
        }
    }

    // If no such pair is found, the conjecture does not hold (though this won't happen for valid inputs)
    return false;
}

int main() {
    int n;

    // Input an even number from the user
    std::cout << "Enter an even number greater than 2: ";
    std::cin >> n;

    // Verify Goldbach's conjecture for the input number
    if (!verifyGoldbach(n)) {
        std::cout << "Goldbach's conjecture does not hold for " << n << " (invalid input)." << std::endl;
    }

    return 0;
}
