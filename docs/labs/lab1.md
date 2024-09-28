---
title: "Lab 1: C++语法基础"
layout: home
parent: Labs
math: katex
---
Last Updated: Sat Sep 28 14:30:38 CST 2024

{: .warning-title }
> 提交时间
> 
> Due by 11:59 PM on Monday, October 7.
> 
> 实验报告的提交截止时间：10.07 11.59 PM。

# Lab 1: C++语法基础
{: .no_toc }

## Table of Contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## 实验内容
### Q1: Prime and Semiprime Numbers, 素数和半素数 (5分)

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

### Q2: Abundant, Perfect and Deficient Numbers, 过剩数、完美数和不足数 (5分)

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

## 实验报告提交

1. QQ 群的群文件内有 Lab 1 的实验报告模版，命名格式为 `学号-姓名-程序设计语言Ⅱ-实验报告-第一次.doc`。如果你的学号是 `24302081100`，姓名是 `龙傲天`，则应该命名为 `24302081100-龙傲天-程序设计语言Ⅱ-实验报告-第一次.doc`，请记得修改。

{: .highlight }
A paragraph

{: .note }
A paragraph


{: .important-title }
> My important title
>
> A paragraph
>
> Another paragraph
>
> The last paragraph
