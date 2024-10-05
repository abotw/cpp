---
title: Functions
layout: 
parent:
---

# Functions
{: .no_toc }

## Table of Contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## 术语表

| 英文  | 中文  |
| --- | --- |
|     | 函数  |
|     | 形参  |
|     | 实参  |
|     | 主函数 |
|     | 子函数 |
|     | 作用域 |
|     | 值传递 |
|     | 址传递 |

## 话题 1：函数基础

- Much like in Python, Java, Javascript, etc., C++ has functions that you can call (e.g., from a library), and that you can create yourself.
- Functions can also return *a single value*, however we will see how we can utilize *reference* parameters to share data between functions.

### 函数定义

- In C++, functions must be declared before they are used.
- **函数定义**包括以下部分：**返回类型**、**函数名字**、由 0 个或多个**形参**组成的列表以及**函数体**。
  
```cpp
returnType functionName(varType parameter1, varType parameter2, ...);
```

举例来说：

```cpp
// Factorial, 阶乘

int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val -- ;
    return ret;
}
```

- 函数名字： `fact`
	- 作用于一个 `int` 参数，返回一个 `int` 值。
- `return` 语句：负责结束 `fact` 并返回 `ret` 的值。

### 函数调用

```cpp
int main()
{
    int j = fact(5);
    cout << "5! is " << j << endl;

    return 0;
}
```

- 函数调用完成两项工作：
	1. 用实参初始化函数对应的形参；
	2. 将控制权转移给被调用函数。此时，主调函数的执行被暂时中断，被调函数开始执行。

### 形参 & 实参

- 实参是形参的初始值。
- 第 1 个实参初始化第 1 个形参，第 2 个实参初始化第 2个形参，以此类推。
- 形参和实参的类型、个数必须匹配。

```cpp
fact("hello");      // 错误：实参类型不正确
fact();             // 错误：实参数量不足
fact(42, 10, 0);    // 错误：实参数量过多
fact(3.14);         // 正确：该实参能转换成`int`类型，等价于`fact(3)`;
```

### 默认参数

- 形参可以设置默认值，但所有默认值必须是最后几个（从右往左）。
- If 传入的实参个数 < 传入的形参个数，没有被传入值的形参会使用默认值。

Q: 在 C++ 中，函数参数默认值为什么必须从右向左定义？
A: 可以简单理解为，在进行函数调用时，是从左向右传入参数，而缺失的参数都在右边。

### 形参列表

函数的形参列表可以为空，但是不能省略。

```cpp
void f1() {/* …. */}            // 隐式地定义空形参列表
void f2(void) {/* … */}         // 显式地定义空形参列表
```

形参列表中的形参通常用逗号隔开，其中每个形参都是含有一个声明符的声明。即使两个形参的类型一样，也必须把两个类型都写出来：

```
int f3(int v1, v2) {/* … */}        // 错误
int f4(int v1, int v2) {/* … */}    // 正确
```

### 局部变量，全局变量，静态变量

- 局部变量：只在函数内部使用
- 全局变量：在所有函数内使用
- 就近原则：当局部变量与全局变量重名时，会优先使用局部变量。

## 话题 2：参数传递

- 函数样式
	1.   无参无返
	2.   有参无返
	3.   无参有返
	4.   有参有返

### 传值参数

当初始化一个非引用类型的变量时，初始值被拷贝给变量。此时，对变量的改动不会影响初始值。

```cpp
#include <iostream>

using namespace std;

int f(int x)
{
    x = 5;
}

int main()
{
    int x = 10;

    f(x);
    cout << x << endl;

    return 0;
}
```

### 传引用参数

当函数的形参为引用类型时，对形参的修改会影响实参的值。使用引用的作用：避免拷贝、让函数返回额外信息。

```cpp
#include <iostream>

using namespace std;

int f(int &x)
{
    x = 5;
}

int main()
{
    int x = 10;

    f(x);
    cout << x << endl;

    return 0;
}
```

### 数组形参

在函数中对数组中的值的修改，会影响函数外面的数组。

一维数组形参的写法：

```cpp
// 尽管形式不同，但这三个print函数是等价的
void print(int *a) {/* … */}
void print(int a[]) {/* … */}
void print(int a[10]) {/* … */}
```

```cpp
#include <iostream>

using namespace std;

void print(int a[])
{
    for (int i = 0; i < 10; i ++ )
        cout << a[i] << endl;
}

int main()
{
    int a[10];

    for (int i = 0; i < 10; i ++ )
        a[i] = i;

    print(a);

    return 0;
}
```

多维数组形参的写法：

```cpp
// 多维数组中，除了第一维之外，其余维度的大小必须指定
void print(int (*a)[10]) {/* … */}
void print(int a[][10]) {/* … */}
```

```cpp
#include <iostream>

using namespace std;

void print(int a[][10])
{
    for (int i = 0; i < 10; i ++ )
    {
        for (int j = 0; j < 10; j ++ )
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

int main()
{
    int a[10][10];

    for (int i = 0; i < 10; i ++ )
        for (int j = 0; j < 10; j ++ )
            a[i][j] = j;

    print(a);

    return 0;
}
```

## 话题 3：Return Types & `return` Statement, 函数返回类型 & `return` 语句

- **Return Types, 函数返回类型**
	- 大多数类型都能用作函数的返回类型
	- 一种特殊的返回类型是 `void`，它表示函数不返回任何值
	- 函数的返回类型不能是数组类型或函数类型，但可以是指向数组或者函数的指针
- **`return` Statement, `return` 语句**
	- `return` 语句终止当前正在执行的函数并将控制权返回到调用该函数的地方。
	- `return` 语句有两种形式：
		- `return;`
		- `return expression;`

### 无返回值函数

没有返回值的 `return` 语句只能用在返回类型是 `void` 的函数中。返回 `void` 的函数不要求非得有`return` 语句，因为在这类函数的最后一句后面会隐式地执行 `return`。

通常情况下，`void` 函数如果想在它的中间位置提前退出，可以使用 `return` 语句。`return` 的这种用法有点类似于我们用 `break` 语句退出循环。

```cpp
void swap(int &v1, int &v2)
{
    // 如果两个值相等，则不需要交换，直接退出
    if (v1 == v2)
        return;
    // 如果程序执行到了这里，说明还需要继续完成某些功能

    int tmp = v2;
    v2 = v1;
    v1 = tmp;
    // 此处无须显示的return语句
}
```

### 有返回值的函数

只要函数的返回类型不是 `void`，则该函数内的每条 `return` 语句必须返回一个值。`return` 语句返回值的类型必须与函数的返回类型相同，或者能隐式地转换函数的返回类型。

```cpp
#include <iostream>

using namespace std;

int max(int x, int y)
{
    if (x > y) return x;

    return y;
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << max(x, y) << endl;

    return 0;
}
```

## 话题 4：Recursion, 递归

在一个函数内部，也可以调用自己。

```cpp
#include <iostream>

using namespace std;

int fact(int n)
{
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}
```

## 话题 5：编程练习

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

## Readings

- <https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1252/lectures/02-cpp/slides>

---

Last Updated: Sat Oct  5 11:16:49 CST 2024