---
title: "Note 1: C++基础 & 顺序语句"
layout: home
parent: Notes
---

# Note 1: C++基础 & 顺序语句

## Hello World

```cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World" << endl;
    return 0;
}
```

## Variables, 变量

```cpp
#include <iostream>

using namespace std;

int main()
{
    int a = 5; // 先定义
    int b, c = a, d = 10 / 2; // 再使用

    return 0;
}
```

## Input & Output, 输入输出

```cpp
// int

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    return 0;
}
```

```cpp
// string

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << str;
    return 0;
}
```

```cpp
// multiple types

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    string str;

    cin >> a;
    cin >> b >> str;

    cout << str << " !!! " << a + b << endl;

    return 0;
}
```

## Arithmetic Expression, 算术表达式

```cpp
// 整数的加减乘除四则运算

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 6 + 3 * 4 / 2 - 2;

    cout << a << endl;

    int b = a * 10 + 5 / 2;

    cout << b << endl;

    cout << 23 * 56 - 78 / 3 << endl;

    return 0;
}
```

```cpp
// 浮点数（小数）的运算

#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x = 1.5, y = 3.2;

    cout << x * y << ' ' << x + y << endl;

    cout << x - y << ' ' << x / y << endl;

    return 0;
}
```

## Increment & Decrement Operators, 自增自减运算符

```cpp
// 整型变量的自增、自减

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 1;
    int b = a ++ ;

    cout << a << ' ' << b << endl;

    int c = ++ a;

    cout << a << ' ' << c << endl;

    return 0;
}
```

## Type Conversions, 类型转换

```cpp
// 变量的类型转换

#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x = 123.12;

    int y = (int)x;

    cout << x << ' ' << y << endl;

    return 0;
}
```

## Statements & Blocks, 顺序语句

```cpp
// 输出第二个整数

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << b << endl;
    return 0;
}
```

```cpp
// 计算 (a + b) * c的值

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    cout << (a + b) * c << endl;

    return 0;
}
```

```cpp
// 带余除法

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int c = a / b, d = a % b;

    cout << c << ' ' << d << endl;

    return 0;
}
```

```cpp
// 求反三位数

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = n % 10;
    n = n / 10;
    int b = n % 10;
    n = n / 10;
    int c = n;

    cout << a << b << c << endl;

    return 0;
}
```

```cpp
// 交换两个整数

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 3, b = 4;

    int t = a;
    a = b;
    b = t;

    cout << a << ' ' << b << endl;

    return 0;
}
```

```cpp
// 输出菱形

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char c;

    cin >> c;

    cout << "  " << c << endl;
    cout << " " << c << c << c << endl;
    cout << c << c << c << c << c << endl;
    cout << " " << c << c << c << endl;
    cout << "  " << c << endl;

    return 0;
}
```

---

Last Updated: Fri Oct  4 11:02:53 CST 2024



