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

## Score

Last Updated: Sun Oct 27 22:14:14 CST 2024

- 已提交: 54
- 未提交: 1
- 满分: 52
- 满分学号后两位: ['01', '02', '03', '04', '05', '06', '07', '08', '09', '11', '12', '13', '14', '15', '16', '17', '18', '19', '20', '21', '22', '23', '24', '25', '26', '27', '28', '29', '30', '31', '32', '33', '34', '36', '37', '38', '39', '40', '41', '42', '43', '44', '45', '47', '48', '49', '50', '51', '52', '53', '54', '55']
- 0分: 0
- 0分学号后两位: []

| **StuNum**      | **rectangle** | **bank_account** | **Total** |
| --------------- | ------------- | ---------------- | --------- |
| **24302081001** | 5.0           | 5.0              | 10.0      |
| **24302081002** | 5.0           | 5.0              | 10.0      |
| **24302081003** | 5.0           | 5.0              | 10.0      |
| **24302081004** | 5.0           | 5.0              | 10.0      |
| **24302081005** | 5.0           | 5.0              | 10.0      |
| **24302081006** | 5.0           | 5.0              | 10.0      |
| **24302081007** | 5.0           | 5.0              | 10.0      |
| **24302081008** | 5.0           | 5.0              | 10.0      |
| **24302081009** | 5.0           | 5.0              | 10.0      |
| **24302081010** | 5.0           | 0.0              | 5.0       |
| **24302081011** | 5.0           | 5.0              | 10.0      |
| **24302081012** | 5.0           | 5.0              | 10.0      |
| **24302081013** | 5.0           | 5.0              | 10.0      |
| **24302081014** | 5.0           | 5.0              | 10.0      |
| **24302081015** | 5.0           | 5.0              | 10.0      |
| **24302081016** | 5.0           | 5.0              | 10.0      |
| **24302081017** | 5.0           | 5.0              | 10.0      |
| **24302081018** | 5.0           | 5.0              | 10.0      |
| **24302081019** | 5.0           | 5.0              | 10.0      |
| **24302081020** | 5.0           | 5.0              | 10.0      |
| **24302081021** | 5.0           | 5.0              | 10.0      |
| **24302081022** | 5.0           | 5.0              | 10.0      |
| **24302081023** | 5.0           | 5.0              | 10.0      |
| **24302081024** | 5.0           | 5.0              | 10.0      |
| **24302081025** | 5.0           | 5.0              | 10.0      |
| **24302081026** | 5.0           | 5.0              | 10.0      |
| **24302081027** | 5.0           | 5.0              | 10.0      |
| **24302081028** | 5.0           | 5.0              | 10.0      |
| **24302081029** | 5.0           | 5.0              | 10.0      |
| **24302081030** | 5.0           | 5.0              | 10.0      |
| **24302081031** | 5.0           | 5.0              | 10.0      |
| **24302081032** | 5.0           | 5.0              | 10.0      |
| **24302081033** | 5.0           | 5.0              | 10.0      |
| **24302081034** | 5.0           | 5.0              | 10.0      |
| **24302081035** |               |                  |           |
| **24302081036** | 5.0           | 5.0              | 10.0      |
| **24302081037** | 5.0           | 5.0              | 10.0      |
| **24302081038** | 5.0           | 5.0              | 10.0      |
| **24302081039** | 5.0           | 5.0              | 10.0      |
| **24302081040** | 5.0           | 5.0              | 10.0      |
| **24302081041** | 5.0           | 5.0              | 10.0      |
| **24302081042** | 5.0           | 5.0              | 10.0      |
| **24302081043** | 5.0           | 5.0              | 10.0      |
| **24302081044** | 5.0           | 5.0              | 10.0      |
| **24302081045** | 5.0           | 5.0              | 10.0      |
| **24302081046** | 5.0           | 0.0              | 5.0       |
| **24302081047** | 5.0           | 5.0              | 10.0      |
| **24302081048** | 5.0           | 5.0              | 10.0      |
| **24302081049** | 5.0           | 5.0              | 10.0      |
| **24302081050** | 5.0           | 5.0              | 10.0      |
| **24302081051** | 5.0           | 5.0              | 10.0      |
| **24302081052** | 5.0           | 5.0              | 10.0      |
| **24302081053** | 5.0           | 5.0              | 10.0      |
| **24302081054** | 5.0           | 5.0              | 10.0      |
| **24302081055** | 5.0           | 5.0              | 10.0      |

### LOG

```
Processing: 24302081001 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081002 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081003 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081004 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081005 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081006 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081007 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081008 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081009 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081010 ...
rectangle: 5.0 分
bank_account: Failed case 1
bank_account: 0 分
	Total: 5.0
Processing: 24302081011 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081012 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081013 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081014 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081015 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081016 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081017 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081018 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081019 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081020 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081021 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081022 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081023 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081024 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081025 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081026 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081027 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081028 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081029 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081030 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081031 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081032 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081033 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081034 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081035 ...
Folder missing: 24302081035
Processing: 24302081036 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081037 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081038 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081039 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081040 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081041 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081042 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081043 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081044 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081045 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081046 ...
rectangle: 5.0 分
bank_account: Failed case 1
bank_account: 0 分
	Total: 5.0
Processing: 24302081047 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081048 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081049 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081050 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081051 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081052 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081053 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081054 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0
Processing: 24302081055 ...
rectangle: 5.0 分
bank_account: 5.0 分
	Total: 10.0

Done: grades.csv

2024-10-27 22:13:30.341 Python[49717:3114425] +[IMKClient subclass]: chose IMKClient_Legacy
2024-10-27 22:13:30.341 Python[49717:3114425] +[IMKInputSession subclass]: chose IMKInputSession_Legacy
已提交: 54
未提交: 1
满分: 52
满分学号后两位: ['01', '02', '03', '04', '05', '06', '07', '08', '09', '11', '12', '13', '14', '15', '16', '17', '18', '19', '20', '21', '22', '23', '24', '25', '26', '27', '28', '29', '30', '31', '32', '33', '34', '36', '37', '38', '39', '40', '41', '42', '43', '44', '45', '47', '48', '49', '50', '51', '52', '53', '54', '55']
0分: 0
0分学号后两位: []
```

---

Last Updated: Sun Oct 20 18:31:51 CST 2024






