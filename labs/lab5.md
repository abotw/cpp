---
title: "Lab 5: SimpleEnroll"
layout: page
parent: Labs
---

{: .warning-title }
> 截止时间
> 
> 11.10 12:00 a.m. (本周周日中午之前)

{: .highlight-title}
> 改编说明
> 
> Lab 5 改编自 [Stanford CS107L Standard C++ Programming Assignment 1](https://github.com/cs106l/cs106l-assignments/blob/main/assign1/README.md)，英文好的同学也可以直接阅读原作业文档。

# Lab 5: SimpleEnroll \[[初始代码](https://znas.cn/AppH5/share/?nid=KEYDEMJQGA2DCRKHGJBTS&code=q1UQP6vKHKwLn1f0m16ksqBonDVQrYKuWGPDyu750e01c8ESezenhm2m2wv94FFOk75&mode=file&display=list)\] \[[实验报告](https://znas.cn/AppH5/share/?nid=KEYDEMJQGA2DCRKHGJBTS&code=uEK1yAOuBcP3YSJpSsAgIDm3QlzvxUEk3OJm3m1ixekIym1ndjm3JgS1Wv3Ler8LpYN5X&mode=file&display=list)\]
{: .no_toc }

## Table of Contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## 概览

又到了学期初使用SimpleEnroll的时候 🤗 ！在大家的学习生涯中，每个人都会意识到，最终都要毕业——所以选课变成了一项战略性任务，既要尽量多修学分，也要确保每天睡眠不少于4小时！

在这个希望不会太长的作业中，我们将利用ExploreCourses API的数据，找出今年在ExploreCourses上开设的CS课程，以及哪些未开设的课程！我们将使用流操作，同时练习C++中的初始化和引用。让我们开始吧 ʕ•́ᴥ•̀ʔっ

你只需关注两个文件：

* `main.cpp`：所有代码都写在这里 😀！
* `utils.cpp`：包含一些实用函数。你需要使用此文件中的函数，但不需要修改它。

**请在标题处下载初始代码。**

本次实验提供了本地的自动打分程序，但是需要配置一下环境。如果你想要在本地测试自己的代码是否符合要求，请参考[这个文档](https://abotw.github.io/cpp/labs/lab0.html#lab-5-%E6%9C%AC%E5%9C%B0%E6%89%93%E5%88%86%E7%8E%AF%E5%A2%83%E9%85%8D%E7%BD%AE%E6%95%99%E7%A8%8B-windows)里的内容。

## 运行代码

要运行代码，首先需要编译它。打开终端（如果使用VSCode，可以按 `Ctrl+Shift+\` 或点击顶部的 **Terminal > New Terminal**，或者是**终端 > 新终端**）。然后确保在 `lab5/` 目录下，执行以下命令：

```sh
g++ -static-libstdc++ -std=c++20 main.cpp -o main
```

假设代码没有编译错误，现在可以执行以下命令：

```sh
./main.exe
```

这将运行 `main.cpp` 中的 `main` 函数，执行代码并启动自动评分程序检查代码是否正确。

在完成以下步骤时，建议不时地编译和使用自动评分程序，以确保进展顺利！

1. 打开Lab 5的实验文件夹：
   ![](attachments/lab5-1.png)
   ![](attachments/lab5-2.png)
2. 打开终端窗口：
   ![](attachments/lab5-3.png)
3. 输入相关命令，执行代码并启动自动评分程序检查代码是否正确：
   ![](attachments/lab5-4.png)

## Part 0: 阅读代码并完善 `Course` 结构体

1. 在本次作业中，我们将使用 `Course` 结构体表示从 ExploreCourses 提取的数据记录。查看 `main.cpp` 中 `Course` 结构体的定义并补充字段的数据类型。最终我们将使用流生成 `Course` —— 还记得流处理哪些数据类型吗？
2. 查看 `main.cpp` 中的 `main` 函数，注意 `courses` 如何传递到 `parse_csv`、`write_courses_offered` 和 `write_courses_not_offered` 中。思考这些函数的功能。是否需要更改函数定义？提示一下，确实需要。

## Part 1: `parse_csv`

查看 `courses.csv` 文件，它是一个包含三列的CSV文件：Title、Number of Units和Quarter。实现 `parse_csv` 函数，使得对于CSV文件中的每一行，创建一个包含Title、Number of Units和Quarter的 `Course` 结构体。

几个需要思考的问题：
1. 如何读取 `courses.csv` 文件？或许用流操作 😏？
2. 如何逐行读取文件？

### 提示

1. 查看 `utils.cpp` 中提供的 `split` 函数，可能会派上用场！
    * 欢迎查看 `split` 的实现，它使用的是 `stringstream`，应该是可以理解的。
2. 每**行**是一个记录！*这一点很重要，所以我们再次强调 :>)*
3. 在CSV文件中（特别是 `courses.csv` 文件），第一行通常是列名定义行（表头行，或者说标题行）。这行实际上并不对应一个 `Course`，所以你需要跳过它！

## Part 2: `write_courses_offered`

OK，现在你已经有了一个 `courses` vector，里面存放了 `courses.csv` 文件中的所有记录，每条记录都存储在一个 `Course` 结构体中！假定你只对开设了的课程感兴趣。**如果某课程的 `quarter` 字段不等于字符串 `"null"`，则该课程已开设。** 在这个函数中，将所有 `quarter` 字段不为 `"null"` 的课程写入 `“student_output/courses_offered.csv”` 文件。

{: .highlight-title}
> [!重要]  
> 
> 在写入CSV文件时，请遵循以下格式：
> 
> `<Title>,<Number of Units>,<Quarter>`
> 
> 请注意，逗号之间**没有空格**！如果不符合该格式，自动评分程序将不认可。
> 此外，**确保在输出文件的第一行写入标题行**。这与上一步中在 `courses.csv` 文件中需要跳过标题行相同！

`write_courses_offered` 函数执行完毕后，我们希望所有开设的课程（也就是写入到输出文件中的课程）将从 `all_courses` vector 中移除。**这意味着该函数执行后，`all_courses` 中应该仅包含未开设的课程！**

一种实现方法是使用另一个 vector 记录已开设课程，并从 `all_courses` 中删除它们。与Python和许多其他语言一样，在遍历时删除元素并不是个好主意，所以可能需要在把所有开设课程写入文件后执行删除操作。

## Part 3: `write_courses_not_offered`

什么，你对未开设的课程更感兴趣？

在 `write_courses_not_offered` 这个函数中，将 `unlisted_courses` 中的课程写入 `“student_output/courses_not_offered.csv”` 文件。因为在上一步中已删除了开设的课程，`unlisted_courses` 里面自然只包含未开设的课程——真是省心呢。

Part 3 与 Part 2 类似，但更简单些。

## 🚀 提交说明

编译并运行代码后，如果自动评分程序的输出如下所示：

![](attachments/Pasted%20image%2020241026104906.png)

那么恭喜你完成了作业！

## 提交链接

1. [【实验报告】提交链接](https://znas.cn/AppH5/share/collection?code=T3ZGdm1D9Ga7GGgFTwAkDZ3Z3FqJm3m38RAD7VfTj5tedLm2CpJVm3pXRgXaUsdiPDm3eT&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)
	1. 由于本次实验考查知识的综合应用，具有一定的难度，因此作为一个探究型的实验，请大家在实验报告中详细记录自己的思路，以及解决问题的方式，并以此作为打分的主要依据。
		1. 比如你碰到了什么困难，是和谁讨论的？
		2. 如果没有和人讨论，自己是如何解决的？
	2. 实验报告中请贴出 `parse_csv`、`write_courses_offered` 和 `write_courses_not_offered` 这3个函数的代码。
2. [【程序代码】提交链接](https://znas.cn/AppH5/share/collection?code=T3ZGdm1D9Ga7GGgFTwAkDZ1Wkk7eja49VgyanHSvvn5AAm2J3CyVRxux4IQ1ocum2Ni&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)
	1. 请将初始代码的文件夹名称 `lab5` 更改为你的学号，并压缩为 .zip 文件提交。
	2. 举例来说，如果你的学号是“24302081100”，则你需要提交的 .zip 文件的目录结构如下：

```
24302081100.zip
├── README.md
├── autograder
├── courses.csv
├── docs
├── main.exe
├── main.cpp
├── student_output
└── utils.cpp
```

## 参考资料

### New Features in C++11, C++11 的新特性

![](attachments/r2-02.png)

![](attachments/r2-03.png)

### C++ I/O Streams, C++ 输入输出流

![](attachments/r2-04.png)

### Member Functions, I/O 成员函数

![](attachments/r2-06.png)

### File Access, 文件访问

![](attachments/r2-07.png)

### C++ String Class, C++ 字符串类

![](attachments/r2-08.png)

![](attachments/r2-09.png)

### String stream Input and Output, 字符串输入输出流

![](attachments/r2-11.png)

### STL Vector Container, STL Vector 容器


![](attachments/r3-02.png)

---

Last updated: Tue Nov  5 22:49:15 CST 2024













