---
title: "Lab 4: C++类的构建 2"
layout: home
parent: Labs
---

{: .warning-title }
> 截止时间
> 
> Due by 11:59 p.m. on Sunday, October 27.
> 
> Lab 4 的实验报告、程序代码的提交截止时间是：10.27 11:59 p.m. (周日)。
> 
> (请在指定截止时间前提交，过期提交链接会失效！)

# Lab 4: C++类的构建 2 \[[实验报告模版](https://znas.cn/AppH5/share/?nid=KEYDEMJQGA2DCRKHGJBTS&code=q1UQP6vKHKwLn1f0m16ksqIEvQKchSxGwMnWsUo4x4f9m1tkBszRHSKgJubtF88ZDD&mode=file&display=list)\]
{: .no_toc }

## Table of Contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## 实验内容 

### Q1: Rectangle Class, 矩形类

{: .note-title }
> 程序文件命名规范
>
> 程序取名：`rectangle.cpp`

{: .note-title }
> 成员函数命名参考
>
> `Rectangle::calculatePerimeter()` - 计算周长
> 
> `Rectangle::calculateArea()` - 计算面积

定义一个矩形类（Rectangle），包含长（length）和宽（width）属性，并实现计算面积和周长的方法。

#### 测试用例

请直接使用如下主函数作为你的主函数：

```cpp
int main() {
	// Create a Rectangle object with length 5 and width 3
    Rectangle rect(5, 3);
    // Display rectangle details
    rect.displayDetails();
    return 0;
}
```

#### 预期输出

```
Length: 5, Width: 3
Perimeter: 16
Area: 15
```

### Q2: BankAccount Class, 银行账户类

{: .note-title }
> 程序文件命名规范
>
> 程序取名：`bank_account.cpp`

{: .note-title }
> 成员函数命名参考
>
> `BankAccount::deposit()` - 存款
> 
> `BankAccount::withdraw()` - 取款

定义一个银行账户类（BankAccount），包含账户余额（balance）属性，实现存款（deposit）和取款（withdraw）方法。

#### 测试用例

请直接使用如下主函数作为你的主函数：

```cpp
int main() {
    // Create a BankAccount object with an initial balance of 1000
    BankAccount account(1000);
    // Perform some transactions
    account.displayBalance();
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500);  // This will fail due to insufficient funds
    return 0;
}
```
#### 预期输出

```
Current balance: 1000
Deposited: 500, New balance: 1500
Withdrew: 300, New balance: 1200
Insufficient funds. Withdrawal failed.
```

## 提交链接

1. [【实验报告】提交链接](https://znas.cn/AppH5/share/collection?code=6lX86Ttcl3LxvVEw0FgZfSES8ULL4r6veVm3rJvooIB2tNkcOm3m2xMy0g5Im1OsZm3iY&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)
2. [【程序代码】提交链接](https://znas.cn/AppH5/share/collection?code=6lX86Ttcl3LxvVEw0FgZfW4RrSIQ9vb7138Cnyb2XGv8pEv2m3kO22gd9swcEdrm3m2&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)

## 评分标准

- Q1: 5分
	- 代码文件命名错误: -0.5分
- Q2: 5分
	- 代码文件命名错误: -0.5分
- 实验报告
	- 命名错误: -0.5分
		- 如文件名错误、文档格式错误
		- 如文档里面漏写学号、姓名
		- 如文档里面学号、姓名写反
	- 格式糟糕: -0.5分
		- 如拍照而非截图
		- 如没有调整截图大小
		- 如截图内容和题目无法对应
	- 总结问题: -0.5分
		- 如不写
		- 如写了但是空洞无物
		- 如使用AI生成

---

Last Updated: Sun Oct 20 18:31:51 CST 2024






