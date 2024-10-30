---
title: "Lab 1: C++语法基础"
layout: page
parent: Labs
math: katex
---
{: .warning-title }
> 截止时间
> 
> Due by 11:59 p.m. on Monday, October 7.
> 
> Lab 1 的实验报告、程序代码的提交截止时间是：10.07 11:59 p.m. (周一)。
> 
> (请在指定截止时间前提交，过期提交链接会失效！)

{: .highlight-title}
> 📝 备注
> 
> 国庆假期导致学号编号 01-30 的同学缺了一次 10.02 (周三) 的上机课，故 Lab 1 比较特殊，全体同学的实验报告提交截止时间均一致。而剩下 5 个 Lab 的截止时间则根据上机时间确定，每次都有 7 天时间来完成并提交。


# Lab 1: C++语法基础 ([实验报告模版下载](https://znas.cn/AppH5/share/?nid=KEYDEMJQGA2DCRKHGJBTS&code=dXSEbu4VuyyAHjGMBTKPCeksCbTCm3bm3Jki4SC3jSXvQOBiht9hHyGXvZ2y0a9xLi&mode=file&display=list))
{: .no_toc }

## Table of Contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## 实验内容
### Q1: Prime and Semiprime Numbers, 素数和半素数 (4分)

{: .note-title }
> 命名规范
>
> 程序取名：`prime_semiprime.cpp`

半素数是指可以表达成两个素数乘积的正整数，例如：$$4=2\times2$$，$$6=2\times3$$，$$35=5\times7$$ 等等。

请写一个程序求出从 $$2$$ 到 $$N$$ 的所有素数以及半素数。

#### Input

一个整数 $$N$$。

#### Output

输出从 $$2$$ 到 $$N$$ 的所有素数以及半素数，每输出一个换一行。输出最后一个后也换行。

例子：若 $$N=15$$，则输出如下：

```
2
3
4
5
6
7
9
10
11
13
14
15
```

#### Q1 Solution

```cpp
/*
 * File: prime_semiprime.cpp
 * -------------------------
 * This program identifies all prime and semiprime numbers up to a user-specified number N.
 * Prime numbers are only divisible by 1 and themselves.
 * Semiprime numbers are the product of exactly two prime numbers.
 *
 * 本程序用于查找所有不超过给定数字 N 的素数和半素数。
 * 素数是只能被 1 和自身整除的数。
 * 半素数是由恰好两个素数相乘得到的数。
 */

#include <iostream>
using namespace std;

/* Function prototypes 函数原型 */
bool isPrime(int n);       // Checks if a number is prime 检查一个数是否为素数
bool isSemiprime(int n);   // Checks if a number is semiprime 检查一个数是否为半素数

/* Main program 主程序 */
int main()
{
    // Input N 输入一个正整数 N
    int N;
    cin >> N;
    
    // Loop through numbers from 2 to N and check if they are prime or semiprime
    // 遍历从 2 到 N 的所有数，并检查它们是否为素数或半素数
    for (int i = 2; i <= N; i++) {
        if (isPrime(i) || isSemiprime(i)) {
            cout << i << endl;
        }
    }
    
    return 0;
}

/*
 * Function: isPrime
 * --------------------------------
 * Returns true if the given number n is a prime number, otherwise returns false.
 *
 * 如果给定的数字 n 是素数，则返回 true，否则返回 false。
 */
bool isPrime(int n) {
    if (n < 2) return false;  // Numbers less than 2 are not prime 小于 2 的数不是素数
    for (int i = 2; i * i <= n; i++) { // Check divisibility up to sqrt(n) 检查从 2 到 sqrt(n) 的可整除性
        if (n % i == 0) return false;  // If divisible, it's not a prime 如果可整除，则不是素数
    }
    return true;  // Otherwise, it's a prime 否则为素数
}

/*
 * Function: isSemiprime
 * ------------------------------------
 * Returns true if the given number n is a semiprime number, otherwise returns false.
 * A semiprime number is the product of two prime numbers.
 *
 * 如果给定的数字 n 是半素数，则返回 true，否则返回 false。
 * 半素数是由两个素数相乘得到的数。
 */
bool isSemiprime(int n) {
    for (int i = 2; i * i <= n; i++) { // Check factors up to sqrt(n) 检查从 2 到 sqrt(n) 的因数
        if (n % i == 0) {              // If divisible, check if both factors are prime 如果可整除，检查两个因数是否为素数
            int otherFactor = n / i;
            if (isPrime(i) && isPrime(otherFactor)) {
                return true;  // If both factors are prime, it's a semiprime 如果两个因数都是素数，则为半素数
            }
        }
    }
    return false;  // If no valid prime factors found, it's not a semiprime 如果未找到有效的素数因数，则不是半素数
}
```

### Q2: Abundant, Perfect and Deficient Numbers, 过剩数、完美数和不足数 (4分)

{: .note-title }
> 命名规范
>
> 程序取名：`number_classification.cpp`


写一个程序计算在区间 $$[a,b]$$ 里（包括 $$a$$，$$b$$）有多少个 abundant 数、完美（perfect）数及 deficient 数。对于整数 $$n$$，先计算所有 $$n$$ 的因子的和。若这个和比 $$2n$$ 大，则 $$n$$ 为 abundant 数；等于的话称为完美数；小于则为 deficient 数。例如：
- $$7$$ 是 deficient 数，因为 $$7+1=8<14$$；
- $$6$$ 是完美数，因为 $$1+2+3+6=12$$；
- 而 $$24$$ 则是 abundant 数，因为 $$1+2+3+4+6+8+12+24 > 48$$。

#### Input

每行两个整数，指定一个区间 $$[a,b]$$。若行中第一个数字大于第二个，则代表输入完成。

例子：

```
1 100
101 200
200 1
```

`200 1` 代表输入完成。

另外，`a`、`b` 的数值均为 $$1$$ 到 $$5000$$ 之内（包括 $$1$$ 与 $$5000$$ ）。

#### Output

对于每组输入，请输出如下：

```
Abundant:（区间里Abundant数的个数）
Perfect:（区间里的完美数个数）
Deficient:（区间里Deficient数的个数）
```

如上例的输入，输出应如下：

```
Abundant: 22
Perfect: 2
Deficient: 76
Abundant: 24
Perfect: 0
Deficient: 76
```

完整结果如下：

```
1 100
Abundant: 22
Perfect: 2
Deficient: 76
101 200
Abundant: 24
Perfect: 0
Deficient: 76
200 1
```

#### Q2 Solution

```cpp
/*
 * File: number_classification.cpp
 * -------------------------------
 * This program allows the user to input a range of numbers [a, b] and classifies 
 * the numbers in that range as Abundant, Perfect, or Deficient.
 * 
 * 用户可以输入一个范围 [a, b]，程序会将该范围内的数分类为过剩数、完全数或不足数。
 */

#include <iostream>
using namespace std;

/* Function prototypes 函数原型 */
int sumOfDivisors(int n);
void classifyNumber(int a, int b);

/* Main program 主程序 */
int main()
{
    int a, b;

    // Input a range of numbers 输入数字范围
    while (cin >> a >> b) {
        if (a > b) {  // If the range is invalid (a > b), exit 如果范围无效 (a > b)，则退出
            break;
        }
        classifyNumber(a, b);  // Classify numbers in the range 分类范围内的数字
    }

    return 0;
}

/*
 * Function: sumOfDivisors
 * -----------------------------------
 * This function calculates the sum of all divisors of a given number n, 
 * including n itself.
 *
 * 该函数计算给定数字 n 的所有因数之和，包括 n 自身。
 */
int sumOfDivisors(int n) {
    int sum = 0;

    // Loop through all numbers from 1 to n and sum divisors
    // 遍历 1 到 n 的所有数，并累加因数
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {  // If i is a divisor of n, add it to the sum 如果 i 是 n 的因数，则加到总和中
            sum += i;
        }
    }

    return sum;  // Return the total sum of divisors 返回因数的总和
}

/*
 * Function: classifyNumber
 * ----------------------------
 * This function classifies all numbers in the range [a, b] as Abundant, Perfect, or Deficient.
 * It prints the count of each type of number.
 *
 * 该函数将范围 [a, b] 内的所有数分类为过剩数、完全数或不足数，并输出每种类型的计数。
 */
void classifyNumber(int a, int b) {
    int sum = 0;  // Stores the sum of divisors for each number 存储每个数的因数之和
    int abundantCount = 0, perfectCount = 0, deficientCount = 0;  // Counters for each number type 各种数类型的计数器

    // Loop through each number in the range 遍历范围内的每个数
    for (int i = a; i <= b; i++) {
        sum = sumOfDivisors(i);  // Get the sum of divisors 获取因数之和
        if (sum < i * 2) {  // Deficient number: sum of divisors is less than twice the number
            deficientCount++;
        } else if (sum == i * 2) {  // Perfect number: sum of divisors equals twice the number
            perfectCount++;
        } else {  // Abundant number: sum of divisors is greater than twice the number
            abundantCount++;
        }
    }

    // Output the count of each number type 输出每种数的计数
    cout << "Abundant: " << abundantCount << endl;  // 输出过剩数的数量
    cout << "Perfect: " << perfectCount << endl;    // 输出完全数的数量
    cout << "Deficient: " << deficientCount << endl;  // 输出不足数的数量
}
```

## 提交说明

### 第 1 步：提交实验报告

1. 请打开[实验报告提交链接](https://znas.cn/AppH5/share/collection?code=dXSEbu4VuyyAHjGMBTKPCXm1m1iwKSNcVw84EjDExqUbLdyTx5bSjudfZgc5KP5czF&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)，点击“选择电脑中的文件”；
2. 选择好后，请点击“上传”，若显示“已完成”，则表示提交成功。

{: .highlight-title }
> 实验报告命名规范
> 
> 群文件 `lab1_cpp.zip` 里有 Lab 1 的实验报告模版，你也可以从这个页面的标题处直接下载。
> 
> 命名格式为 `学号-姓名-程序设计语言Ⅱ-实验报告-第一次.doc`。举个栗子，如果你的学号是 `24302081100`，姓名是 `龙傲天`，则应该命名为 `24302081100-龙傲天-程序设计语言Ⅱ-实验报告-第一次.doc`，请记得修改，实验报告的命名本次占 0.5 分。

### 第 2 步：提交程序代码

1. 请打开[程序代码提交链接](https://znas.cn/AppH5/share/collection?code=6lX86Ttcl3LxvVEw0FgZfe1DwPMjzs9Dm1UsQOVBfGXNUhkwqOzYAGMzV0THpjGcM&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)，输入学号后，点击“选择电脑中的文件”；
2. 请选择 `prime_semiprime.cpp` 和 `number_classification.cpp` 这 2 个文件（注意命名规范，错误的命名可能会导致无法通过测试用例！）；
3. 选择好后，请点击“上传”，若显示“已完成”，则表示提交成功。

## 评分标准 (暂行)

- Lab 1 共 10 分：
	- Q1: 4 分
	- Q2: 4 分
	- 实验报告的命名: 0.5 分
	- 实验报告的格式: 0.5 分
		- 注意：请在报告中准确填写你的姓名、学号，并注意排版，否则可能会影响你的分数。
	- 实验报告的内容: 1 分
		- 注意：实验报告中的图片，请用电脑截图而非手机拍照，拍照可能会影响你的分数。
- Q1、Q2 均会设置 3 个测试用例，每个测试用例占该题目分值的 30% (在 Lab 1 中，即 1.2 分)，剩下 10% (0.4 分) 主要根据代码风格以及命名规范进行给分。

---

Last Updated: Wed Oct  9 16:17:33 CST 2024
