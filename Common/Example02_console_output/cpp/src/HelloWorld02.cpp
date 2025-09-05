// We can use the same .h file for C and C++, but in C++ we use #include <cstdio> instead of #include <stdio.h>
// because the C++ standard library places the C standard library headers in the std namespace and adds a 'c' prefix.
// In some cases, use cstdio improves performance and compatibility with C++ features. Therefore, it's widely used in ACM or IOI programming.
// This is a simple C++ program that prints "Hello World!" to the console using printf

#include<cstdio>

int main(){
    printf("Hello World!\n");
    return 0;
}