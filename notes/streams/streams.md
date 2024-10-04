---
title: Streams
layout: home
parent: Notes
---

# Streams

![](stream.png)

## `printf`

```cpp
#include <iostream>
#include <cstdio> // 使用`printf`时最好添加头文件 `#include <cstdio>`

using namespace std;

int main()
{
    printf("Hello World!");

    return 0;
}
```

| 类型       | 输出格式  |                    |
| -------- | ----- | ------------------ |
| `int`    | `%d`  |                    |
| `float`  | `%f`  | 默认保留 6 位小数         |
| `double` | `%lf` | 默认保留 6 位小数         |
| `char`   | `%c`  | 回车也是一个字符，用 `\n` 表示 |

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a = 3;
    float b = 3.12345678;
    double c = 3.12345678;
    char d = 'y';

    printf("%d\n", a);
    printf("%f\n", b);
    printf("%lf\n", c);
    printf("%c\n", d);

    return 0;
}
```

所有输出的变量均可包含在一个字符串中：

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a = 3;
    float b = 3.12345678;
    double c = 3.12345678;
    char d = 'y';

    printf("int a = %d, float b = %f\ndouble c = %lf, char d = %c\n", a, b, c, d);

    return 0;
}
```

练习：输入一个字符，用这个字符输出一个菱形。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char c;
    cin >> c;

    printf("  %c\n", c);
    printf(" %c%c%c\n", c, c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf(" %c%c%c\n", c, c, c);
    printf("  %c\n", c);

    return 0;
}
```

练习：输入一个整数，表示时间，单位是秒。输出一个字符串，用”时:分:秒”的形式表示这个时间。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;

    cin >> t;

    int hours = t / 3600;
    int minutes = t % 3600 / 60;
    int seconds = t % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
```

`float`, `double` 等输出保留若干位小数时用：`%.4f`, `%.3lf`

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float b = 3.12345678;
    double c = 3.12345678;

    printf("%.4f\n", b);
    printf("%.3lf\n", c);

    return 0;
}
```

最小数字宽度

`%8.3f`, 表示这个浮点数的最小宽度为 8，保留 3 位小数，当宽度不足时在前面补空格。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a = 3;
    float b = 3.12345678;
    double c = 3.12345678;

    printf("%5d\n", a);
    printf("%8.4f\n", b);
    printf("%7.3lf\n", c);

    return 0;
}
```

`%-8.3f`，表示最小宽度为 8，保留 3 位小数，当宽度不足时在后面补上空格。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a = 3;
    float b = 3.12345678;
    double c = 3.12345678;

    printf("%-5d!\n", a);
    printf("%-8.4f!\n", b);
    printf("%-7.3lf!\n", c);

    return 0;
}
```


`%08.3f` , 表示最小宽度为 8，保留 3 位小数，当宽度不足时在前面补上 0。

```cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a = 3;
    float b = 3.12345678;
    double c = 3.12345678;

    printf("%05d\n", a);
    printf("%08.4f\n", b);
    printf("%07.3lf\n", c);

    return 0;
}
```

## Readings

- <https://www.acwing.com/file_system/file/content/whole/index/content/3587423/>
- <https://web.stanford.edu/class/cs106l/lectures/04_Streams.pdf>

---

Last Updated: Fri Oct  4 18:30:51 CST 2024
