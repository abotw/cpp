---
title: Functions: 函数
layout: home
parent: Notes
---

# Functions, 函数

-   Much like in Python, Java, Javascript, etc., C++ has functions that you can call (e.g., from a library), and that you can create yourself.
-   Functions can also return *a single value*, however we will see how we can utilize *reference* parameters to share data between functions.

## 1. 术语

-   函数
-   形参 / 实参
-   主函数 / 子函数
-   作用域
-   值传递 / 址传递

## 2. 话题

### 话题 1: 函数基础

1.   函数定义
2.   函数调用



-   In C++, functions must be declared before they are used. Functions are declared as follows:

    ```cpp
    returnType functionName(varType parameter1, varType parameter2, ...);
    ```

### 话题 2: 函数样式

1.   无参无返
2.   有参无返
3.   无参有返
4.   有参有返

### 话题 3: 默认参数

Q: 在 C++ 中，函数参数默认值为什么必须从右向左定义？

A: 可以简单理解为，在进行函数调用时，是从左向右传入参数，而缺失的参数都在右边。

## 3. 问题

### 1. 数位之和

The function iteratively extracts the last digit of `n` and adds it to `sum`, then removes the last digit from `n` by dividing by 10 until no digits remain.

The C++ implementation for the function that calculates the sum of the digits of an integer `n`:

```cpp
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
```

-   Summary
    -   Get the last digit: `n % 10`
    -   Remove the last digit: `n /= 10`

### 2. 素/质数

The function checks for factors of `n` up to its square root. If a factor is found, `n` is not prime; otherwise, it is prime.

The C++ implementation for the function that checks if an integer `n` is a prime number:

```cpp
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
```

-   扩展阅读
    -   [基本数论类算法 - 辗转相除和素数筛](https://writings.sh/post/algorithm-number-theory) from [春水煎茶 (王超的个人博客)](https://writings.sh/)

### 3. 哥德巴赫猜想

Goldbach's conjecture states that every even number greater than 2 can be expressed as the sum of two prime numbers. Below is a C++ implementation that verifies this conjecture for a given even number `n`.

The function checks if an even number `n` can be written as the sum of two prime numbers by iterating through all possible pairs of primes. It uses the helper function `isPrime` to identify prime numbers. If such a pair is found, the function outputs the pair of primes.

```cpp
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
```

## 阅读材料

### from CS106B

https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1252/lectures/02-cpp/slides

-   Much like in Python, Java, Javascript, etc., C++ has functions that you can call (e.g., from a library), and that you can create yourself.

-   Functions can also return *a single value*, however we will see how we can utilize *reference* parameters to share data between functions.

-   In C++, functions must be declared before they are used. Functions are declared as follows:

    ```
    returnType functionName(varType parameter1, varType parameter2, ...);
    ```

-   A function can be declared and defined (i.e., have the code, as well) at the same time, but again, only if done before use in another function later in the program.

-   The first function that runs in any program is the `main` function, declared as follows:

    ```
    int main() {
      statement
      statement
      ...
    }
    ```

-   Before we start declaring other functions besides `main`, let's use one. The C++ `<cmath>` library has many mathematical functions. E.g., the square root function, `sqrt`:
    ```cpp
    // C++:
    #include <cmath>
    #include <iostream>
    
    using namespace std;
    
    int main() {
        double fpNum = 1234; // a floating point number 
        double result = sqrt(fpNum); // set result to be equal to the return value of the sqrt function
    
        cout << "fpNum: " << fpNum << endl;
        cout << "square root of fpNum: " << result << endl;
        return 0; // the return value for main must be an integer.
                  // In main(), a return value of 0 means "everything worked out"
    }
    ```

    Output: 
    ```
    fpNum: 1234
    square root of fpNum: 35.1283
    ```

-   Let's write a function of our own, that computes and returns the *factorial* of a number:
    ```cpp
    int factorial(int number) {
        int result = 1;
        for (int n = number; n > 1; n--) {
            result *= n;
        }
        return result; 
    }
    ```

-   The function above requires that we pass it an integer, and it guarantees that it will return an integer.

-   You might ask, *What if I don't want to return anything from my function?* and C++ answers that with the `void` keyword, which means, *the function does not return a type*. E.g.,
    ```cpp
    void printTenTimes(char c) {
      for (int i = 0; i < 10; i++) {
          cout << c;
      }
      cout << endl;
    }
    ```

    This function can be called, but won't return a value:
    ```
    printTenTimes('c');
    ```

    Output:
    ```
    cccccccccc
    ```

-   If we try to get a return value from a `void` function, the compiler produces an error:
    ```cpp
      int someResult = printTenTimes('c');
    ```

    Compiler output:
    ```
    my-file.cc:32:9: error: cannot initialize a variable of type 'int' with an rvalue of
        type 'void'
      int someResult = printTenTimes('c');
          ^             ~~~~~~~~~~~~~~~~~~
    1 error generated.
    ```

-   One thing you may have to get used to is arcane C++ error messages! The above error message means that we tried to give an integer a value with a type of `void`, and the compiler won't let us do that.



