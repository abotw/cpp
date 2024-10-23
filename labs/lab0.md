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

## VSCode Setup Instructions

### Windows

#### Step One: Installing VSCode

Go to [this link](https://code.visualstudio.com/docs/setup/windows) and download Visual Studio Code for Windows. Follow the instructions on this webpage under the section **Installation**.

Inside VSCode, head to the extensions tab [![](https://github.com/cs106l/cs106l-assignments/raw/main/docs/vscode-extensions.png)](https://github.com/cs106l/cs106l-assignments/blob/main/docs/vscode-extensions.png) and search for **C/C++**. Click on the **C/C++** extension, and then click **Install**.

**🥳 At this point you should successfully have VSCode on your PC 👏**

#### Step Two: Installing a C++ Compiler

1. Follow the instructions at [this link](https://code.visualstudio.com/docs/cpp/config-mingw)
    - You should be doing the instructions under **Installing the MinGW-w64 toolchain.**
2. After fully following the instructions under **Installing the MinGW-w64 toolchain** you should now be able to verify everything worked by running the following command: `g++ --version`

### Mac

#### Step One: Installing VSCode

Go to [this link](https://code.visualstudio.com/docs/setup/mac) and download Visual Studio Code for Mac. Follow the instructions on this webpage under the section **Installation**.

Inside VSCode, head to the extensions tab  [![](https://github.com/cs106l/cs106l-assignments/raw/main/docs/vscode-extensions.png)](https://github.com/cs106l/cs106l-assignments/blob/main/docs/vscode-extensions.png)and search for **C/C++**. Click on the **C/C++** extension, and then click **Install**.

<b> 🥳 At this point you should successfully have VSCode on your Mac 👏 </b>

#### Step Two: Installing a C++ Compiler

<ol>
  <li>
    Check if you have Homebrew by running 
    <pre lang="sh">brew --version</pre>
    If you get something like
    <pre lang="sh">
brew --version
Homebrew 4.2.21</pre>
    then <b>skip step 2 and go to step 3.</b> If you get anything else that looks sus then proceed to step 2!
  </li>
  <li>
    Run this command:
    <pre lang="sh">/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"</pre>
    which is going to download Homebrew🍺 which is a package manager. Woot woot.
  </li>
  <li>
    Run the following command:
    <pre lang="sh">brew install gcc</pre>
    which is going to install the compiler (GCC).
  </li>
  <li>
    Make note of which GCC version Homebrew installs. In most cases, this will be <code>g++-14</code>. 
    By default, the <code>g++</code> command on Mac is an alias to the built-in <code>clang</code> compiler. We can fix this by running <pre lang="sh">echo 'alias g++="g++-14"' >> ~/.zshrc</pre> to make <code>g++</code> point to the version of GCC we just installed. Change <code>g++-14</code> in the above command to whichever version of GCC you installed.
  <li>
    Restart your terminal and verify that everything worked by running the following command:
    <pre lang="sh">g++ --version</pre>
  </li>
</ol>

---

Last Updated: Wed Oct 23 16:07:23 CST 2024
