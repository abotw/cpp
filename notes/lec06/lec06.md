---
title: "Lec 06:"
layout: home
parent: Notes
---

# Lec 06:

## 1. `new` operator

| C        | C++      |
| -------- | -------- |
| `malloc` | `new`    |
| `free`   | `delete` |
- heap, 堆

```c
void* malloc();
```

- `()` 初始化

```cpp
int* p = new int(10);

delete p;
```

- `[]` 开辟数组

```cpp
int* arr = new int[10]; // 10 elements

delete[] arr;
```

## 2. 成员函数

- 在结构体外写函数定义
- 在结构体内写函数声明

```cpp
void Student::study() {
	// statemens
}
```

- `::` 域作用符

## 3. Linked List, 链表

```cpp

```

## 4. `union`, 共用体

- 因为内存很便宜，现在基本不用了

## 5. 内存空间

- 全局：全局变量，静态变量，共同的家
- 栈：编译器，参数，局部变量，随着函数的波动而波动
- 堆：程序员决定，比如 new 的时候

```cpp
#include <iostream>
using namespace std;

int* func() {
    int a = 10; // stack
    return &a;
}

int main()
{
    int* p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}
```

output

```
warning: address of stack memory associated with local variable 'a' returned [-Wreturn-stack-address]
    6 |     return &a;
      |             ^
1 warning generated.
10
1
1
```

```cpp
#include <iostream>
using namespace std;

int* func() {
    int* a = new int(10); // heap，只要不手动释放（delete），就会一直存在
    return a;
}

int main()
{
    int* p = func();
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}
```

```
10
10
```

- 引用就是被锁定的指针，也是由 stack 控制的

- 函数作为左值
- 无名的指针

```cpp
#include <iostream>
using namespace std;

int& func() {
    static int a = 20;
    return a;
}

int main()
{
    int& ref = func();
    func() = 1000;
    cout << ref << endl;
    cout << ref << endl;
    return 0;
}
```

```cpp
tmp.cpp:11:10: error: non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
   11 |     int& ref = func();
      |          ^     ~~~~~~
tmp.cpp:12:12: error: expression is not assignable
   12 |     func() = 1000;
      |     ~~~~~~ ^
2 errors generated.
```

## 6. 面向对象

- 主函数的负担太重
- wps
	- [求伯君](https://zh.wikipedia.org/wiki/%E6%B1%82%E4%BC%AF%E5%90%9B)
- 软件工程
- 超过一个人的项目如何管理、进行
- 面向对象，超级函数
- 弱化主函数的功能，用来解决更加复杂的问题
- 对复杂问题进行高级抽象

- 类：提取关心的特征，抽象的，像是数据结构，设计图
	- 静态属性 —— 变量
	- 动态函数 —— 方法
- 对象：类所对应的实体

- 封装
	- 接口：遥控器
		- 通过函数来控制接口的可见范围（控制流）：一些人可以看见，一些人不可以看见
	- 封装：电视机（看不到里面的机械细节）
	- 封装等级
		- `public`
		- `protected`
		- `private`

## 7. class, 类

- 类外实现函数
- 创建对象，本质就是声明变量，即在内存中开辟出来一些空间来存东西
- 标准类：加入一些控制
	- 把所有属性都设置成私有的
	- 每个属性都对应 2 个函数
	- 一个用来读，一个用来写，可以在里面加入一些控制
	- getter 和 setter
	- 属性私有化，每个私有属性对应2函数，一个用来读，一个用来写，写的那个可以加入一些控制，防止写入不合适的数据
	- 函数 public，而属性 private，防止随便的改变值
- 成员函数，成员变量（学名）
	- 定义不分先后
- 结构体 vs. 类
	- 类：成员默认私有
	- 结构体：成员默认共有
- 成员变量不能赋初始值
- 实例化后才真正的开辟空间，注意类的抽象性质
- 类的全局对象，函数内部的局部对象
- 同类型的对象可以整体赋值，相当于成员变量之间相互赋值

## 8. 内联函数（了解）

- `inline`
- 直接替换，提高效率，不需要在函数之间来来回回
- 速度非常快
- 但是内联函数不能太复杂

## 9. 嵌套类（了解）

---

Last Updated: Sat Oct 12 13:55:55 CST 2024
