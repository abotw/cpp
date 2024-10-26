---
title: "Lab 0: 配置 C++ 开发环境"
layout: home
parent: Labs
math: katex
---
# Lab 0: 配置 C++ 开发环境

- [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/) (Windows)
	- 介绍 & 教程：[https://oi-wiki.org/tools/editor/devcpp/](https://oi-wiki.org/tools/editor/devcpp/)
	- 环境配置：[http://www.codelearn.club/2022/11/devcpp/](http://www.codelearn.club/2022/11/devcpp/)
- [Visual Studio Code](https://code.visualstudio.com/) (Windows & macOS)
	- 介绍 & 教程：[https://oi-wiki.org/tools/editor/vscode/](https://oi-wiki.org/tools/editor/vscode/)
- [Visual Studio](https://visualstudio.microsoft.com/zh-hans/) (Windows & macOS)

对工具软件感兴趣的同学，更多资料可以参考：[https://oi-wiki.org/tools/](https://oi-wiki.org/tools/)。

---

## Windows

### 第1步：安装 VSCode

- [下载链接](https://code.visualstudio.com/docs/setup/windows)

Go to [this link](https://code.visualstudio.com/docs/setup/windows) and download Visual Studio Code for Windows. Follow the instructions on this webpage under the section **Installation**.

Inside VSCode, head to the extensions tab [![](https://github.com/cs106l/cs106l-assignments/raw/main/docs/vscode-extensions.png)](https://github.com/cs106l/cs106l-assignments/blob/main/docs/vscode-extensions.png) and search for **C/C++**. Click on the **C/C++** extension, and then click **Install**.

**🥳 At this point you should successfully have VSCode on your PC 👏**

### 第2步：安装C++编译器




1. Follow the instructions at [this link](https://code.visualstudio.com/docs/cpp/config-mingw)
    
    - You should be doing the instructions under **Installing the MinGW-w64 toolchain.**
2. After fully following the instructions under **Installing the MinGW-w64 toolchain** you should now be able to verify everything worked by running the following command:
    

```shell
g++ --version
```

---

Last Updated: Sat Oct 26 21:19:12 CST 2024

