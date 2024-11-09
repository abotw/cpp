
## if 语句

1. 基本if-else语句
当条件成立时，执行某些语句；否则执行另一些语句。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a > 5)
    {
        printf("%d is big!\n", a);
        printf("%d + 1 = %d\n", a, a + 1);
    }
    else
    {
        printf("%d is small!\n", a);
        printf("%d - 1 = %d\n", a, a - 1);
    }

    return 0;
}
```

else 语句可以省略：

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a > 5)
    {
        printf("%d is big!\n", a);
        printf("%d + 1 = %d\n", a, a + 1);
    }

    return 0;
}
```

当只有一条语句时，大括号可以省略：

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a > 5)
        printf("%d is big!\n", a);
    else
        printf("%d is small!\n", a);

    return 0;
}
```

练习：输入一个整数，输出这个数的绝对值。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x;

    cin >> x;

    if (x > 0) cout << x << endl;
    else cout << -x << endl;

    return 0;
}
```

练习：输入两个整数，输出两个数中较大的那个。

```cpp

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << a << endl;
    else
        cout << b << endl;

    return 0;
}
```

if-else语句内部也可以是if-else语句。

练习：输入三个整数，输出三个数中最大的那个。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c) cout << a << endl;
        else cout << c << endl;
    }
    else
    {
        if (b > c) cout << b << endl;
        else cout << c << endl;
    }

    return 0;
}
```

2. 常用比较运算符
(1) 大于 >
(2) 小于 <
(3) 大于等于 >=
(4) 小于等于 <=
(5) 等于 ==
(6) 不等于 !=

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b) printf("%d > %d\n", a, b);
    if (a >= b) printf("%d >= %d\n", a, b);
    if (a < b) printf("%d < %d\n", a, b);
    if (a <= b) printf("%d <= %d\n", a, b);
    if (a == b) printf("%d == %d\n", a, b);
    if (a != b) printf("%d != %d\n", a, b);

    return 0;
}
```

3. if-else连写：
输入一个0到100之间的分数，
如果大于等于85，输出A；
如果大于等于70并且小于85，输出B；
如果大于等于60并且小于70，输出C；
如果小于60，输出 D；

```cpp

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int s;
    cin >> s;

    if (s >= 85)
    {
        printf("A");
    }
    else if (s >= 70)
    {
        printf("B");
    }
    else if (s >= 60)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }

    return 0;
}
```

练习：

1.简单计算器输入两个数，以及一个运算符+, -, *, /，输出这两个数运算后的结果。
当运算符是/，且除数是0时，输出Divided by zero!; 当输入的字符不是+, -, *, /时，输出Invalid operator!。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    char c;
    cin >> a >> b >> c;

    if (c == '+') cout << a + b << endl;
    else if (c == '-') cout << a - b << endl;
    else if (c == '*') cout << a * b << endl;
    else if (c == '/')
    {
        if (b != 0)
        {
            cout << a / b << endl;
        }
        else
        {
            cout << "Divided by zero!" << endl;
        }
    }
    else
    {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
```

2.判断闰年。闰年有两种情况：
(1) 能被100整除时，必须能被400整除；
(2) 不能被100整除时，被4整除即可。
输入一个年份，如果是闰年输出yes，否则输出no。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 100 == 0)
    {
        if (year % 400 == 0) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    else
    {
        if (year % 4 == 0) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
```

## 条件表达式

(1) 与 &&
(2) 或 ||
(3) 非 !

例题：输入三个数，输出三个数中的最大值。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c) cout << a << endl;
    else if (b >= a && b >= c) cout << b << endl;
    else cout << c << endl;

    return 0;
}
```

练习：用一条if语句，判断闰年。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int year;

    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
```