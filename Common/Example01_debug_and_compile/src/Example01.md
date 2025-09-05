# 编译源代码文件 Compile source code file

为了方便，此处我们暂时不介绍“包”概念和多文件编译，只介绍简单的手动编译方法。

---

For convenience, we will temporarily postpone the introduction of the "package" concept and multi-file compilation, focusing only on simple manual compilation methods for now.

## Java

确保从 Java 官网（甲骨文）安装了 JDK，并将 `bin` 目录加入系统环境变量 `PATH`。

在给出的实例程序中，你可以用下面的命令进行编译

```bash
cd ./Common/Example01_debug_and_compile/
javac -d ./build ./src/Target.java
java Target
```

在这里，第一行命令是切换终端运行目录使用的，其中 `.` 表示当前目录

运行第二行命令后，将会在 `-d` 参数指定的 `./build` 目录下生成一个Java类文件 `Target.class`。

在有Java运行时环境的情况下，使用第三行指令可以运行 `Target` 类中的主函数。

为了方便，下面的其他例子不再给出每条命令的作用。

---

Ensure that the JDK is installed from Oracle's official Java website and add the `bin` directory to the system environment variable `PATH`.

In the provided example program, you can use the following commands to compile:

```bash
cd ./Common/Example01_debug_and_compile/
javac -d ./build ./src/Target.java
java Target
```

Here, the first command is used to change the terminal's working directory, where `.` represents the current directory.

After running the second command, a Java class file `Target.class` will be generated in the `./build` directory specified by the `-d` parameter.

With a Java runtime environment in place, the third command can be used to run the main function in the `Target` class.

For convenience, the purpose of each command will not be explained in the following examples.

## C/C++

确保你的电脑上装有 C/C++ 的编译器（如gcc），并将其 `include` 目录和 `bin` 目录加入系统环境变量 `PATH`

在给出的实例程序中，你可以用下面的命令进行编译（给出C语言的例子）

```bash
cd ./Common/Example01_debug_and_compile/
gcc ./src/Target.c -o ./build/Target
./build/Target
```

C/C++的编译结果是Windows可执行程序，所以可以直接打开。

---

Ensure that your computer has a C/C++ compiler (such as GCC) installed, and add its `include` directory and `bin` directory to the system environment variable `PATH`.

In the provided example program, you can use the following commands to compile (using a C language example):

```bash
cd ./Common/Example01_debug_and_compile/
gcc ./src/Target.c -o ./build/Target
./build/Target
```

The compilation result of C/C++ is a Windows executable program, so it can be opened directly. On Windows, the executable typically has a `.exe` extension (e.g., `Target.exe`), while on Linux and macOS, it does not.

# 调试 Debug

在我们的例子中，当你在 Visual Studio Code 安装相应语言的 Debug 插件后，你可以通过 `运行 -> 启动调试` 直接编译并运行程序，也可以直接通过 `F5` 快捷键进行调试。

你可以单击代码行数（如这里是第81行）左侧的空白处添加断点（会显示为红色原点），程序运行到此处时会暂停，你可以在 Visual Studio Code 左侧菜单中的 `运行和调试` 菜单浏览运行堆栈和其他控制运行的操作。

---

In our example, after you install the corresponding language's Debug extension in Visual Studio Code, you can directly compile and run the program through `Run -> Start Debugging`, or you can start debugging directly using the `F5` shortcut key.

You can click the blank space to the left of the code line number (such as line 87 here) to add a breakpoint (which will appear as a red circle). The program will pause when it reaches this point, and you can browse the call stack and other runtime control operations in the `Run and Debug` menu on the left side of Visual Studio Code.