// digit_sum.cpp
#include <iostream>

// Function to calculate the sum of digits of a given number 'n'
int calculateDigitSum(int n) {
    int sum = 0;
    
    // Loop to extract each digit and add to the sum
    while (n > 0) {
        sum += n % 10; // Add the last digit to the sum
        n /= 10;       // Remove the last digit
    }
    
    return sum;
}

int main() {
    int n;
    
    // Input the number from the user
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    // Call the function and display the result
    std::cout << "The sum of the digits is: " << calculateDigitSum(n) << std::endl;
    
    return 0;
}