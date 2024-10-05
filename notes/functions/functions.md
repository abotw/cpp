---
title: Functions
layout: home
parent: Notes
---

# Functions, 函数



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



