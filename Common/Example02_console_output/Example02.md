# 控制台输出

本节目标是使用程序在控制台输出 "Hello World!" 文字，作为系列的第一次实践。

通过这个例子，可以了解到不同语言的一个最简单程序内容如何组成、以及最基础的输出操作如何使用。

# 代码解析

## C

```c
#include<stdio.h>

int main(){
    printf("Hello World!\n");
    return 0;
}
```

- `#include <stdio.h>`： 引入标准输入输出库，printf 函数就在这里
- `printf("Hello World!\n");`：printf 函数用于格式化输出，\n 表示换行，输出格式会在以后讲到
- `return 0;`: 返回0表示正常退出

## C++

```cpp
#include<iostream>

int main(){
    std::cout << "Hello World!" << std::endl;
    return 0;
}
```

- `#include <iostream>`：引入输入输出流库，std::cout 就在这里
- `std::cout << "Hello World!" << std::endl;`：std::cout 是标准输出流对象，<< 是流插入运算符，std::endl 用于换行并刷新输出缓冲区

## Java

```Java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello World!");
    }
}
```

- `public class HelloWorld`：定义一个公共类，类名必须和文件名 (HelloWorld.java) 一致。如果没有声明为public公共类则不需要一致。

- `System.out.println("Hello World!");`：System.out 是标准输出对象，println 方法会输出内容并换行。

## Golang(Go)

```go
package main

import "fmt"

func main() {
    fmt.Println("Hello World!")
}
```

- `package main`：声明包名为 main。Go 语言中，名为 main 的包表示这是一个可执行程序。

- `import "fmt"`：导入标准库中的 fmt 包，它提供了格式化输入输出的函数，如 Println。

- `func main()`：程序执行的入口函数。Go 的 main 函数没有参数也没有返回值。

## Python

```python
print("Hello World!")
```

Python 是解释型语言，无需编译，直接由解释器执行。

Python程序不是必须需要主函数，但是你依然可以为程序添加入口。

```python
if __name__ == '__main__':
    print("Hello World!")
```

这个 if 语句判断的是该py程序是否被作为主程序运行。

## MCF(???)

```mcfunction
say Hello World!
```

本系列讲解的mcfunction内容纯属私货，仅供娱乐。

Minecraft的输出只有say能反馈给服务端，因此我选择将say作为控制台输出的例子。