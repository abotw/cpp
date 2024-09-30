---
title: "Lab 1: C++语法基础"
layout: home
parent: 课程实验
math: katex
---
Last Updated: Sat Sep 28 20:08:21 CST 2024

{: .warning-title }
> 截止时间
> 
> Due by 11:59 PM on Monday, October 7.
> 
> 实验报告的提交截止时间是：10.07 11:59 PM (周一)。
> 
> 📝 备注：国庆假期导致学号编号 01-30 的同学缺了一次 10.02 (周三) 的上机课，故 Lab 1 比较特殊，全体同学的实验报告提交截止时间均一致。而剩下 5 个 Lab 的截止时间则根据上机时间确定，每次都有 7 天时间来完成并提交。

# Lab 1: C++语法基础 ([实验报告模版下载](https://znas.cn/AppH5/share/?nid=KEYDEMJQGA2DCRKHGJBTS&code=dXSEbu4VuyyAHjGMBTKPCeksCbTCm3bm3Jki4SC3jSXvQOBiht9hHyGXvZ2y0a9xLi&mode=file&display=list))
{: .no_toc }

## Table of Contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## 实验内容
### Q1: Prime and Semiprime Numbers, 素数和半素数 (4分)

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

### Q2: Abundant, Perfect and Deficient Numbers, 过剩数、完美数和不足数 (4分)

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

## 提交说明

{: .warning }
> 请在指定截止时间前提交，过期链接会失效！

### 1. 实验报告

1. 请打开[实验报告提交链接](https://znas.cn/AppH5/share/collection?code=dXSEbu4VuyyAHjGMBTKPCXm1m1iwKSNcVw84EjDExqUbLdyTx5bSjudfZgc5KP5czF&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)，点击“选择电脑中的文件”
2. 选择好后，请点击“上传”，若显示“已完成”，则表示提交成功

{: .warning }
> QQ 群的群文件内有 Lab 1 的实验报告模版，命名格式为 `学号-姓名-程序设计语言Ⅱ-实验报告-第一次.doc`。如果你的学号是 `24302081100`，姓名是 `龙傲天`，则应该命名为 `24302081100-龙傲天-程序设计语言Ⅱ-实验报告-第一次.doc`，请记得修改，实验报告的命名本次占 0.5 分。

### 2. 程序代码

1. 请打开[程序代码提交链接](https://znas.cn/AppH5/share/collection?code=dXSEbu4VuyyAHjGMBTKPCbvoQPJSDm1vVaSitgz2OiUg0nYQ5Frw6E27Hm3CfhtQo9&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)，输入学号后，点击“选择电脑中的文件”
2. 请选择 `prime_semiprime.cpp` 和 `number_classification.cpp` 这 2 个文件（注意命名规范，错误的命名可能会导致无法通过测试用例！）
3. 选择好后，请点击“上传”，若显示“已完成”，则表示提交成功

## 评分标准 (暂行)

- Lab 1 共 10 分：
	- Q1: 4 分
	- Q2: 4 分
	- 实验报告的命名: 0.5 分
	- 实验报告的格式: 0.5 分
		- 注意：请在报告中准确填写你的姓名、学号，并注意排版，否则可能会影响你的分数。
	- 实验报告的内容: 1 分
		- 注意：实验报告中的图片，请用电脑截图而非手机拍照，拍照可能会影响你的分数。
- Q1、Q2 均会设置 3 个测试用例，每个测试用例占该题目分值的 30% (在 Lab 1 中，即 1.2 分)，剩下 10% (0.4 分) 主要根据代码风格以及命名规范进行给分。