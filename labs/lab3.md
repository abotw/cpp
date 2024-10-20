---
title: "Lab 3: C++类的构建"
layout: home
parent: Labs
---
{: .warning-title }
> 截止时间
> 
> Due by 11:59 p.m. on Sunday, October 20.
> 
> Lab 3 的实验报告、程序代码的提交截止时间是：10.20 11:59 p.m. (周日)。
> 
> (请在指定截止时间前提交，过期提交链接会失效！)

# Lab 3: C++类的构建 ([报告模板下载](https://znas.cn/AppH5/share/?nid=KEYDEMJQGA2DCRKHGJBTS&code=6lX86Ttcl3LxvVEw0FgZfQfFtDTUcn3qWBcc7uL6wLHtF17sm1dSDo6m1Hm3vCejim3m1&mode=file&display=list))
{: .no_toc }

## Table of Contents
{: .no_toc .text-delta }

1. TOC
{:toc}

## 实验内容

### Q1: Student Class, 学生类 (5分)

{: .note-title }
> 程序文件命名规范
>
> 程序取名：`student_class.cpp`

{: .note-title }
> 成员函数命名规范
>
> `Student::calculateTotalScore()` - 计算总成绩
> 
> `Student::calculateAverageScore()` - 计算平均成绩

构建一个学生类，属性有学生的姓名、年龄、学号、数学成绩、语文成绩、物理成绩。利用成员函数求出学生总成绩，平均分并输出，构建主函数对学生类进行测试。

#### 测试用例

```cpp
int main() {
    // Test case 1
    Student student1("Alice", 20, "20240101", 88.5, 92.0, 79.0);
    student1.displayInfo();

    // Test case 2
    Student student2("Bob", 21, "20240202", 76.0, 85.5, 90.0);
    student2.displayInfo();

    return 0;
}
```

1. **测试用例1**:
    - Name: Alice
    - Age: 20
    - Student ID: 20240101
    - Math: 88.5, Chinese: 92.0, Physics: 79.0
    - **预期输出**: 
      ```
      Name: Alice, Age: 20, Student ID: 20240101
      Total score: 259.5, Average score: 86.5
      ```

2. **测试用例2**:
    - Name: Bob
    - Age: 21
    - Student ID: 20240202
    - Math: 76.0, Chinese: 85.5, Physics: 90.0
    - **预期输出**: 
      ```
      Name: Bob, Age: 21, Student ID: 20240202
      Total score: 251.5, Average score: 83.8333
      ```

### Q2: Triangle Class, 三角形类 (5分)

{: .note-title }
> 程序文件命名规范
>
> 程序取名：`triangle_class.cpp`

{: .note-title }
> 成员函数命名规范
>
> `Triangle::calculatePerimeter()` - 计算周长
> 
> `Triangle::calculateArea()` - 计算面积

构建一个三角形类，属性有三角形三边长，利用成员函数求出三角形的周长，面积并输出，构建主函数对三角形类进行测试。

#### 测试用例

```cpp
int main() {
    // Test case 1
    Triangle triangle1(3.0, 4.0, 5.0);
    triangle1.displayInfo();

    // Test case 2
    Triangle triangle2(7.0, 8.0, 9.0);
    triangle2.displayInfo();

    return 0;
}
```

1. **测试用例1**:
    - Sides: 3.0, 4.0, 5.0
    - **预期输出**:
      ```
      Sides: 3, 4, 5
      Perimeter: 12, Area: 6
      ```

2. **测试用例2**:
    - Sides: 7.0, 8.0, 9.0
    - **预期输出**:
      ```
      Sides: 7, 8, 9
      Perimeter: 24, Area: 26.8328
      ```

## 提交链接

1. [【实验报告】提交链接](https://znas.cn/AppH5/share/collection?code=6lX86Ttcl3LxvVEw0FgZfcxRGwzJm1tEEXBv0c8A4Z6sxM7dtyc96tIfgrrGy6U3W&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)
2. [【程序代码】提交链接](https://znas.cn/AppH5/share/collection?code=6lX86Ttcl3LxvVEw0FgZfb7G7PWWuxsvsI9m33xhm2A2wUHdoVC4J2rm38bOkwDE9r0&nid=KEYDEMJQGA2DCRKHGJBTS&mode=file&display=list&type=3)

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
		- 不写: -0.5分
		- 写了但是空洞无物: -0.5分
		- 使用AI生成: -0.5分

## Score

{: .warning-title }
> 更新时间
> 
> Sun Oct 20 22:33:23 CST 2024

- 已提交: 55
- 未提交: 0
- 满分: 45
- 满分学号后两位: ['01', '02', '03', '04', '05', '06', '07', '08', '09', '10', '11', '12', '13', '14', '15', '16', '17', '18', '19', '20', '21', '22', '23', '25', '26', '27', '28', '29', '30', '31', '32', '33', '34', '36', '38', '39', '40', '41', '43', '44', '48', '52', '53', '54', '55']
- 0分: 8
- 0分学号后两位: ['24', '35', '37', '45', '46', '47', '50', '51']

| **StuNum**      | **student_class** | **triangle_class** | **Total** |
| --------------- | ----------------- | ------------------ | --------- |
| **24302081001** | 5.0               | 5.0                | 10.0      |
| **24302081002** | 5.0               | 5.0                | 10.0      |
| **24302081003** | 5.0               | 5.0                | 10.0      |
| **24302081004** | 5.0               | 5.0                | 10.0      |
| **24302081005** | 5.0               | 5.0                | 10.0      |
| **24302081006** | 5.0               | 5.0                | 10.0      |
| **24302081007** | 5.0               | 5.0                | 10.0      |
| **24302081008** | 5.0               | 5.0                | 10.0      |
| **24302081009** | 5.0               | 5.0                | 10.0      |
| **24302081010** | 5.0               | 5.0                | 10.0      |
| **24302081011** | 5.0               | 5.0                | 10.0      |
| **24302081012** | 5.0               | 5.0                | 10.0      |
| **24302081013** | 5.0               | 5.0                | 10.0      |
| **24302081014** | 5.0               | 5.0                | 10.0      |
| **24302081015** | 5.0               | 5.0                | 10.0      |
| **24302081016** | 5.0               | 5.0                | 10.0      |
| **24302081017** | 5.0               | 5.0                | 10.0      |
| **24302081018** | 5.0               | 5.0                | 10.0      |
| **24302081019** | 5.0               | 5.0                | 10.0      |
| **24302081020** | 5.0               | 5.0                | 10.0      |
| **24302081021** | 5.0               | 5.0                | 10.0      |
| **24302081022** | 5.0               | 5.0                | 10.0      |
| **24302081023** | 5.0               | 5.0                | 10.0      |
| **24302081024** | 0.0               | 0.0                | 0.0       |
| **24302081025** | 5.0               | 5.0                | 10.0      |
| **24302081026** | 5.0               | 5.0                | 10.0      |
| **24302081027** | 5.0               | 5.0                | 10.0      |
| **24302081028** | 5.0               | 5.0                | 10.0      |
| **24302081029** | 5.0               | 5.0                | 10.0      |
| **24302081030** | 5.0               | 5.0                | 10.0      |
| **24302081031** | 5.0               | 5.0                | 10.0      |
| **24302081032** | 5.0               | 5.0                | 10.0      |
| **24302081033** | 5.0               | 5.0                | 10.0      |
| **24302081034** | 5.0               | 5.0                | 10.0      |
| **24302081035** | 0.0               | 0.0                | 0.0       |
| **24302081036** | 5.0               | 5.0                | 10.0      |
| **24302081037** | 0.0               | 0.0                | 0.0       |
| **24302081038** | 5.0               | 5.0                | 10.0      |
| **24302081039** | 5.0               | 5.0                | 10.0      |
| **24302081040** | 5.0               | 5.0                | 10.0      |
| **24302081041** | 5.0               | 5.0                | 10.0      |
| **24302081042** | 0.0               | 5.0                | 5.0       |
| **24302081043** | 5.0               | 5.0                | 10.0      |
| **24302081044** | 5.0               | 5.0                | 10.0      |
| **24302081045** | 0.0               | 0.0                | 0.0       |
| **24302081046** | 0.0               | 0.0                | 0.0       |
| **24302081047** | 0.0               | 0.0                | 0.0       |
| **24302081048** | 5.0               | 5.0                | 10.0      |
| **24302081049** | 0.0               | 5.0                | 5.0       |
| **24302081050** | 0.0               | 0.0                | 0.0       |
| **24302081051** | 0.0               | 0.0                | 0.0       |
| **24302081052** | 5.0               | 5.0                | 10.0      |
| **24302081053** | 5.0               | 5.0                | 10.0      |
| **24302081054** | 5.0               | 5.0                | 10.0      |
| **24302081055** | 5.0               | 5.0                | 10.0      |

### LOG

```
Processing: 24302081001 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081002 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081003 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081004 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081005 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081006 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081007 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081008 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081009 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081010 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081011 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081012 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081013 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081014 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081015 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081016 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081017 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081018 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081019 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081020 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081021 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081022 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081023 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081024 ...
student_class: Failed case 1
student_class: 0 分
triangle_class: Failed case 1
triangle_class: 0 分
	Total: 0.0
Processing: 24302081025 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081026 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081027 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081028 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081029 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081030 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081031 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081032 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081033 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081034 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081035 ...
student_class: Failed case 1
student_class: 0 分
运行过程中发生异常: 'utf-8' codec can't decode byte 0xc8 in position 0: invalid continuation byte
triangle_class: 运行失败: Case 1
triangle_class: 0 分
	Total: 0.0
Processing: 24302081036 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081037 ...
student_class: Failed case 1
student_class: 0 分
triangle_class: Failed case 1
triangle_class: 0 分
	Total: 0.0
Processing: 24302081038 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081039 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081040 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081041 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081042 ...
student_class: Failed case 1
student_class: 0 分
triangle_class: 5.0 分
	Total: 5.0
Processing: 24302081043 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081044 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081045 ...
运行过程中发生异常: 'utf-8' codec can't decode byte 0xc9 in position 2: invalid continuation byte
student_class: 运行失败: Case 1
student_class: 0 分
triangle_class: Failed case 1
triangle_class: 0 分
	Total: 0.0
Processing: 24302081046 ...
student_class: Failed case 1
student_class: 0 分
triangle_class: Failed case 1
triangle_class: 0 分
	Total: 0.0
Processing: 24302081047 ...
student_class: 未找到文件
triangle_class: 未找到文件
	Total: 0.0
Processing: 24302081048 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081049 ...
student_class: Failed case 1
student_class: 0 分
triangle_class: 5.0 分
	Total: 5.0
Processing: 24302081050 ...
student_class: 未找到文件
triangle_class: 未找到文件
	Total: 0.0
Processing: 24302081051 ...
student_class: Failed case 1
student_class: 0 分
triangle_class: Failed case 1
triangle_class: 0 分
	Total: 0.0
Processing: 24302081052 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081053 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081054 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
Processing: 24302081055 ...
student_class: 5.0 分
triangle_class: 5.0 分
	Total: 10.0
```

---

Last Updated: Sun Oct 20 22:34:34 CST 2024









