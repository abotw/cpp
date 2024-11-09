---
title: Operator Overloading, 运算符重载
layout: page
parent: Notes
---

# Operator Overloading, 运算符重载

- 自己可以对运算符进行一些定义和实现
- overloading
	- friend function: `p1 + p2`
	- member function: `p1.operator+(p2)`
- 不允许重载
	- `.`
	- `*`
	- `::`
	- `sizeof`
	- `?:`

## `++`

- `operator ++()`: ++x
- `operator ++(int)`: x++
- `return *this`

- `++++i`
- ` cout << a << b << c;`

## `<<`, `>>` 输入输出运算符重载

- 输出运算符重载

---

Last Updated: Mon Oct 28 14:38:51 CST 2024
