---
title: Lec 08
layout: home
parent: Notes
---

# Lec 08

## heap 建立对象

- `new` constructor
	- variables
	- objects
- `delete` destructor

```cpp
A *pa1, *pa2;
```

## `delete`

- 主动（提前）调用 destructor

---

- 全局
	- 常量（常量存储区，字符串常量）
	- 全局
	- 静态

---

- string
	- `strcpy_s();`
	- <http://www.sis.pitt.edu/jjoshi/courses/is2620/spring07/lecture3.pdf>

---

### 浅拷贝

- 只拷贝指针，没拷贝空间
- 同一个空间释放两次，造成运行错误

### 深拷贝

- 默认的拷贝构造函数只是赋值，只提供浅拷贝
- 重写默认拷贝构造函数，在拷贝构造函数中，开辟新的空间用来存放数据
- 而不仅仅是拷贝地址

---

- 临时对象
- 构造几次函数，就要析构几次函数
- 将值赋给对象时，有一个隐式的对象构造，构造完之后就会立马析构（闪现的现象，突然的出现，突然的消失）
- 分清楚构造、赋值的不同
	- 构造时，声明类
	- 赋值时，注意左值右值的类型，涉及到类型转换的问题

----

Last Updated: Thu Oct 17 08:18:31 CST 2024
