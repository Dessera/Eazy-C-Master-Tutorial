# 类型工具

## 类型转换

我们可以使用前缀`()`符号来进行类型转换，前提是两个类型之间是兼容的。

```c
int a = 42;
double b = (double)a; // 把 a 转换为 double 类型
```

## C++ 类型转换

C++ 提供了相比 C 语言更加丰富的类型转换方式，这里只介绍最常用的`static_cast`：

```c++
int a = 42;
double b = static_cast<double>(a); // 把 a 转换为 double 类型
```

上述操作被称为显示类型转换，更多的类型转换方式请参考 [C++ 类型转换](https://zh.cppreference.com/w/cpp/language/expressions#.E8.BD.AC.E6.8D.A2)。