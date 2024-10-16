---
title: "Lec 07:"
layout: home
parent: Notes
---

# Lec 07: 

## 1 类的访问控制

### 引用私有成员的 5 种方式

1. 调用共有函数为私有对象赋值
2. 利用指针访问私有数据成员
3. 利用函数返回私有数据成员值
4. 利用引用访问私有数据成员
5. 返回私有数据成员的引用，为私有数据成员赋值
	- 返回一个引用，用返回的引用作为左值，引用本质上就是一个被锁定的指针
	- `int* const 无名指针 = &x`

## 2 成员函数的重载

- 重载：名一样，参数不一样
- 函数重载的好处：不改动原来函数

## 3 类指针

- 类，结构体，是很相似的
- `->` 指针来使用成员变量

## 4 构造函数，析构函数

- 构造：初始化
- 析构：删除时处理后事

- 生成对象的时候，系统默认调用
- 析构函数，负责善后
- 构造函数没有返回值，系统处理
- 析构函数名与类名相同，但在其前面会加上字符 `~`，无返无参
	- 限制条件越多，越简单
	- 就是这样，变不了了

- 构造函数的分类
	- 无参构造
	- 有参构造
		- 括号法（常用） `Person p1(10);`
		- **显式法（本质）**  `person p2 = Person(10);`
		- 隐式转换法（特殊写法，等号）`Person p4 = 10;`
	- 拷贝构造函数
		- 用一个对象给另一个对象初始化
		- 引用才是拷贝函数，而不是指针
		- 构造函数的参数是另一个对象的**引用**，用引用传过去
		- 主要用来为另一个对象初始化

#### 拷贝构造函数调用时机

```cpp
Person newman3;
newman3 = man;
```

#### 构造函数调用规则

- 每个对象必须有相应的构造函数，如果没有，系统会提供默认的构造函数
	- 默认构造函数
	- 默认析构函数
	- 默认拷贝构造函数

#### 重载、默认参数

#### 初始化列表

- 函数定义中不要出现默认参数，默认参数写在函数声明里
- 带默认参数的构造函数，默认参数写在函数声明里

#### 局部对象、静态对象、全局对象初始化顺序

---

Last Updated: Mon Oct 14 13:36:59 CST 2024