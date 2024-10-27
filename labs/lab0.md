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

### 第 0 步：安装 Python (测试环境需要)

- [Python 下载链接](https://www.python.org/downloads/release/python-3130/)

1. 点击上方下载链接。在页面的最下方选择对应的版本进行下载，一般是 `Windows installer (64-bit)`。

![](attachments/Pasted%20image%2020241027093718.png)

2. 下载完成后，双击如下安装向导：
![](attachments/pyexe.png)

3. 首先勾选 “Use admin privileges when installing py.exe”（可选）和 “Add python.exe to PATH”（必选）。然后单击“Install Now”，安装到默认位置。也可以根据自己的情况，自定义安装的位置以及其他选项。
![](attachments/pyins-1.png)

4. 安装过程：
![](attachments/pyins-2.png)

5. 成功安装后回显示如下界面：
![](attachments/pyins-3.png)

6. 打开 cmd，输入 `python` 命令，如果出现 `>>>` 则表示 Python 已经成功安装。直接关闭 cmd 即可。
![](attachments/pyfin.png)

### 第 1 步：安装 VSCode (方便执行编译命令)

- VSCode 下载链接

![](attachments/vscexe.png)

![](attachments/vscins-1.png)

![](attachments/vscins-2.png)

![](attachments/vscins-3.png)

![](attachments/vscins-4.png)

![](attachments/vscins-5.png)

![](attachments/vscconfig-1.png)

![](attachments/vscconfig-2.png)

![](attachments/vscconfig-3.png)

### 第 2 步：使用 MSYS2 安装 MinGW-w64 工具链 (编译需要)

- [MSYS2 下载链接](https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe)

1. 点击上方下载链接，下载完成后得到如下安装程序：
![](attachments/msys2exe.png)

2. 运行安装程序并按照安装向导的步骤进行操作。（注意，MSYS2 仅支持 64 位的 Windows 8.1 或更高版本。）
![](attachments/msys2ins-1.png)

3. 在向导中，选择想要安装的文件夹位置，并记录该目录以备后用。大多数情况下，推荐的安装目录是合适的。
![](attachments/msys2ins-2.png)

4. 当进入设置开始菜单快捷方式的步骤时，同样使用默认选项。
![](attachments/msys2ins-3.png)

5. 安装进行中：
![](attachments/msys2ins-4.png)

6. 安装完成后，确保“运行 MSYS2”选项已选中，然后点击“完成”。此操作将会打开一个 MSYS2 终端窗口。
![](attachments/msys2ins-5.png)

7. 打开的 MSYS2 终端窗口：
   
![](attachments/msys2.png)

8. 在该终端窗口中，运行以下命令以安装 MinGW-w64 工具链：

   ```bash
   pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
   ```

   按下 Enter 键，接受工具链组中默认的包数量。

![](attachments/mysys2config1.png)

![](attachments/mysys2config2.png)

当提示是否继续安装时，输入 `Y` 并按下 Enter 键。

![](attachments/mysys2config3.png)

![](attachments/mysys2config4.png)

![](attachments/mysys2config5.png)

6. 将 MinGW-w64 的 `bin` 文件夹路径添加到 Windows 的 PATH 环境变量中，步骤如下：

   - 在 Windows 搜索栏中，输入“设置”以打开 Windows 设置。
   - 搜索“为您的帐户编辑环境变量”。
   - 在“用户变量”中，选择 Path 变量，然后点击“编辑”。
   - 点击“新建”，并将安装过程记录的 MinGW-w64 路径添加到列表中。如果您使用了默认设置，路径为：`C:\msys64\ucrt64\bin`。
   - 点击“确定”，然后再次点击“确定”以更新 PATH 环境变量。请重新打开所有控制台窗口，使更新后的 PATH 环境变量生效。

![](attachments/msys2-path-1.png)

![](attachments/msys2-path-2.png)

![](attachments/msys2-path-3.png)

![](attachments/msys2-path-4.png)

![](attachments/msys2-path-5.png)

### 检查 MinGW 安装是否成功

要检查 MinGW-w64 工具是否正确安装并可用，可以打开一个新的命令提示符窗口并输入以下命令：

```bash
gcc --version
g++ --version
gdb --version
```

您应看到显示 GCC、g++ 和 GDB 的版本信息的输出。如果没有显示相应的输出，请检查以下问题：

- 确保 PATH 变量的路径条目与 MinGW-w64 工具链的安装位置一致。如果该路径下不存在编译器，请确认您已按上述步骤正确安装。
- 如果 `gcc` 有正确的输出但 `gdb` 没有，则您需要安装缺失的 MinGW-w64 工具包。
- 如果在编译时出现“miDebuggerPath 的值无效”的消息，可能是您缺少 `mingw-w64-gdb` 包。

---

Last Updated: Sat Oct 26 21:19:12 CST 2024

