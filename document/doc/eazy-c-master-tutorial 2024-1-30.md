# Eazy C Master Tutorial

---

## 前言

本课程属于C语言的速成课程，主要目的是为接下来的单片机培训打下基础，因此不会涉及C语言的进阶特性。

对于基础内容，我们希望以概念为主，以递进的方式展开，因此不会涉及过多细节，但我们会为大多数知识点提供参考和习题。

经过商讨，本课程暂定内容如下：

- ⛵ 基础语法
  - 基础数据类型与变量声明
  - 基本运算符
  - 复合数据类型 （数组、结构体、联合体）
  - 控制流 （if、switch、while、for）

- 🧬 函数
  - 函数声明与调用
  - `main` 函数

- ⚡ 预处理器
  - `#include` 文件包含
  - `#define` 宏定义
  - 条件编译
  - *宏函数 (Optional)*
- 🔍 *指针 (Optional)*

## 课程内容

> 注意，在函数章节前，所有的示例代码都是不完整的，因为我们还没有学习函数的知识，因此无法编译和运行这些代码。

### 环境配置

我们使用在线编辑器来简化环境配置过程，访问 [https://godbolt.org/](https://godbolt.org/)，在任意窗口中单击 `+` 号，选择`Executor From This`或`Execute Only`以唤出程序执行器。

事实上，我们跳过了环境配置的过程，因为该部分需要和本篇相当的篇幅，而且对于初学者来说，环境配置是一个非常繁琐的过程，如果您有本地的C语言工作环境，则不必使用在线编辑器。

### 工具

本节介绍输入和输出函数，现阶段可以将其视为黑盒，不必深究其原理。由于没有介绍函数的知识，因此本节的内容也不会涉及函数的声明和调用。

#### printf 输出函数

`printf`函数用于向终端（标准输出）输出字符串，以如下方式调用：

```c
printf(<格式化字符串>, <参数1>, <参数2>, ...);
```

格式化字符串与普通的字符串相比，多了一些特殊的占位符，用于指定参数的输出格式，例如：

```c
printf("Hello, World!\n"); // 输出字符串
printf("Hello, %s!\n", "World"); // 输出字符串，其中 %s 会被替换为 "World"
printf("Hello, %d!\n", 1); // 输出字符串，其中 %d 会被替换为 1
```

#### scanf 输入函数

`scanf`函数用于从终端（标准输入）读取字符串，以如下方式调用：

```c
scanf(<格式化字符串>, <参数1>, <参数2>, ...);
```

格式化字符串与普通的字符串相比，多了一些特殊的占位符，用于指定参数的输入格式，例如：

```c
int a;
scanf("%d", &a); // 从终端读取一个整数，存入变量 a 中
```

`&`符号用于获取变量的地址，现在您可以将其视为一个特殊的占位符，用于指定变量的存储位置。

### 一，基础语法

#### 1.1 基础数据类型与变量声明

> 本节并不会完整介绍C语言中的所有数据类型，只会介绍最常用的几种类型，更多类型的介绍可以参考 [CppReference](https://zh.cppreference.com/w/c/language/types)。

在C语言中，声明变量的语法可以简单地归纳为：

```c
<类型> <变量名>;
<类型> <变量名> = <初始值>;
<类型> <变量名> = <初始值>, <变量名> = <初始值> ...;
```

所谓类型，实际上是编译器区分不同数据类型的方式，它决定了变量在内存中的存储方式和占用空间，以及变量能够进行的操作。

下面是一些常见的**内置**数据类型：

| 类型 | 描述 | 占用空间 |
| --- | --- | --- |
| `char` | 字符 | 1 字节 |
| `short` | 短整型 | 2 字节 |
| `int` | 整型 | 4 字节 |
| `long` | 长整型 | 4 字节 |
| `float` | 单精度浮点数 | 4 字节 |
| `double` | 双精度浮点数 | 8 字节 |
| `void` | 空类型 | 无 | 无 |

大部分情况下，整形可以被修饰为`unsigned`或`signed`，分别表示无符号和有符号，无符号的整形只能表示非负数，相应的，其表示范围也会扩大一倍。

> C语言中的整形类型非常丰富，但为了更明显的表达类型的含义，建议使用`stdint.h`头文件中的类型定义，具体可以参考 [CppReference](https://zh.cppreference.com/w/c/types/integer)。

以下是定义变量的示例：

```c

int a; // 定义一个整型变量 a，不初始化
int b = 1; // 定义一个整型变量 b，初始值为 1
int c = 1, d = 2; // 定义两个整型变量 c 和 d，分别初始化为 1 和 2
```

如果不初始化变量，那么变量的值是由编译器决定的（不确定的），因此在使用变量之前，应该对其进行初始化。

#### 1.2 基本运算符

C语言支持数学中的基本算术运算，但它们的行为与数学中的运算并不完全相同，因此需要特别注意。

一般来说，运算符会接受若干个操作数，并返回一个结果，例如：

```c
int a = 1 + 2; // 1 + 2 是一个表达式，它的值为 3，因此 a 的值为 3
```

运算符之间有优先级的区别，高优先级的运算符会先于低优先级的运算符进行计算，可以使用括号来改变运算符的优先级，例如：

```c
int a = 1 + 2 * 3; // 2 * 3 的优先级高于 1 + 2，因此 a 的值为 7
int b = (1 + 2) * 3; // (1 + 2) 的优先级高于 *，因此 b 的值为 9
```

以下是一些常见的算术运算符：

| 运算符 | 描述 | 示例 |
| --- | --- | --- |
| `+` | 加法 | `1 + 2` |
| `-` | 减法 | `1 - 2` |
| `*` | 乘法 | `1 * 2` |
| `/` | 除法 | `1 / 2` |
| `%` | 取模 | `1 % 2` |

算术运算符的返回值类型与操作数的类型有关，一般来说，其返回类型是操作数类型中范围最大的那个，也就是说，即便数学运算中整数除法的结果是浮点数，但在C语言中，整数除法的结果仍然是整数，除非其中一个操作数是浮点数。

`=`也是一个运算符，它的作用是将右侧的值赋给左侧的变量，其返回值是左侧变量的值，例如：

```c
int a = 1; // a 的值为 1
int b = a = 2; // a 的值为 2，b 的值为 2
```

赋值运算符有多种变体，例如`+=`、`-=`、`*=`、`/=`、`%=`，它们的作用是将右侧的值与左侧的变量进行运算，并将结果赋给左侧的变量，例如：

```c
int a = 1; // a 的值为 1
a += 2; // 等同于 a = a + 2，因此 a 的值为 3
```

还有一些特殊的运算符，例如`++`、`--`，它们的作用是将变量的值加一或减一，例如：

```c
int a = 1; // a 的值为 1
a++; // 等同于 a = a + 1，因此 a 的值为 2，该操作返回 a 的旧值
++a; // 等同于 a = a + 1，因此 a 的值为 3，该操作返回 a 的新值
```

`++`和`--`有两种用法，一种是前缀形式，一种是后缀形式，它们的区别在于，前缀形式会先对变量进行加一或减一，然后返回新值，而后缀形式会先返回旧值，然后再对变量进行加一或减一。

还有一部分运算符被称为**逻辑运算符**，它们的作用是对布尔值进行运算：

| 运算符 | 描述 | 示例 |
| --- | --- | --- |
| `&&` | 逻辑与 | `a && b` |
| `\|\|` | 逻辑或 | `a \|\| b` |
| `!` | 逻辑非 | `!a` |

非零的变量会被视为`true`，零会被视为`false`，逻辑运算符的返回值是整数表示的布尔值，其中非零表示`true`，零表示`false`。

> C23中引入了真正的bool类型和关键字`true`和`false`，当然，旧的C标准中也有`stdbool.h`头文件，其中定义了`bool`、`true`和`false`，但它们只是宏定义。

还有一类运算符被称为**位运算符**，它们的作用是对整数的二进制表示进行运算：

| 运算符 | 描述 | 示例 |
| --- | --- | --- |
| `&` | 按位与 | `a & b` |
| `\|` | 按位或 | `a \| b` |
| `^` | 按位异或 | `a ^ b` |
| `~` | 按位取反 | `~a` |
| `<<` | 左移 | `a << b` |
| `>>` | 右移 | `a >> b` |

位运算符的操作数和返回值都是整数，他们直接对整数的二进制表示进行操作。

#### 1.3 复合数据类型

##### 1.3.1 数组

数组是一种复合数据类型，它可以存储若干个相同类型的值，数组的大小在声明时就已经确定（C99之后可以使用变量来指定数组的大小），数组的元素可以通过下标来访问，下标从0开始，例如：

```c
int a[3] = {1, 2, 3}; // 定义一个包含三个整数的数组，初始值为 1、2、3
int b[3]; // 定义一个包含三个整数的数组，不初始化
int c[3] = {1, 2}; // 定义一个包含三个整数的数组，初始值为 1、2、0
int d[3] = {0}; // 定义一个包含三个整数的数组，初始值为 0、0、0
int e[] = {1, 2, 3}; // 定义一个包含三个整数的数组，初始值为 1、2、3
// int f[3] = {1, 2, 3, 4}; // 错误，数组的大小为 3，但初始值的个数为 4
```

我们可以使用下标来访问数组的元素，例如：

```c
int a[3] = {1, 2, 3}; // 定义一个包含三个整数的数组，初始值为 1、2、3

int b = a[0]; // b 的值为 1
int c = a[1]; // c 的值为 2
int d = a[2]; // d 的值为 3
```

C语言中的数组没有边界检查，因此如果访问了不存在的元素，程序会产生未定义的行为。

##### 1.3.2 结构体

结构体是一种复合数据类型，它可以存储若干个不同类型的值，结构体的大小在声明时就已经确定，结构体的成员可以通过`.`运算符来访问，例如：

```c
struct Point {
    int x;
    int y;
};

struct Point a = {1, 2}; // 定义一个结构体变量 a，初始值为 {1, 2}

int b = a.x; // b 的值为 1
int c = a.y; // c 的值为 2
```

##### 1.3.3 联合体

联合体是一种复合数据类型，不同于结构体，联合体的所有成员共享一块内存，因此联合体的大小等于最大成员的大小，联合体的成员可以通过`.`运算符来访问，例如：

```c
union Number {
    int i;
    float f;
};

union Number a = {1}; // 定义一个联合体变量 a，初始值为 {1}

int b = a.i; // b 的值为 1

a.f = 2.0; // a 的值变为 {2.0}

float c = a.f; // c 的值为 2.0
```

#### 1.4 控制流

控制流用于控制程序的执行流程，例如：

```c

int a = 0;
scanf("%d", &a); // 从终端读取一个整数，存入变量 a 中

if (a == 1) {
    // 如果 a 的值为 1，那么执行这里的代码
} else {
    // 否则执行这里的代码
}
```

##### 1.4.1 if 语句

if语句用于根据条件来选择执行的代码，其一般形式如下：

```c
if (<条件>) {
    // 如果条件为true，执行这里的代码，并结束if语句
} else if (<条件>) {
    // 如果条件为true，执行这里的代码，并结束if语句
} else {
    // 如果条件都不为true，执行这里的代码
}
```

if语句的条件可以是任意的表达式，该表达式必须返回void以外的值，如果该值为0，那么条件为false，否则条件为true。

else语句和else if语句都是可选的，else语句用于处理条件都不为true的情况，else if语句用于处理多个条件的情况。

##### 1.4.2 switch 语句

switch语句用于根据条件来选择执行的代码，其一般形式如下：

```c
switch (<表达式>) {
    case <常量表达式>:
        // 如果表达式的值等于常量表达式的值，执行这里的代码，并结束switch语句
        break;
    case <常量表达式>:
        // 如果表达式的值等于常量表达式的值，执行这里的代码，并结束switch语句
        break;
    default:
        // 如果表达式的值都不等于常量表达式的值，执行这里的代码
        break;
}
```

switch语句的表达式必须返回整数类型的值，case语句的常量表达式必须是整数常量表达式，如果表达式的值等于某个case语句的常量表达式的值，那么执行该case语句，并结束switch语句，否则执行default语句。

实际上， `break`的作用是在执行某个case语句后，结束switch语句，如果没有`break`，那么会继续执行下一个case语句，直到遇到`break`或switch语句结束。

##### 1.5 while 语句

while语句用于重复执行某段代码，其一般形式如下：

```c
while (<条件>) {
    // 如果条件为true，执行这里的代码，并继续执行while语句
}
```

while语句的条件可以是任意的表达式，该表达式必须返回void以外的值，如果该值为0，那么条件为false，否则条件为true。

##### 1.6 for 语句

for语句用于重复执行某段代码，其一般形式如下：

```c
for (<初始化语句>; <条件>; <更新语句>) {
    // 如果条件为true，执行这里的代码，并继续执行for语句
}
```

for语句的初始化语句用于初始化循环变量，条件用于判断是否继续执行循环，更新语句用于更新循环变量，示例：

```c
for (int i = 0; i < 10; i++) {
    // 执行这里的代码 10 次
}
```

### 二，函数

函数是一种程序模块，接受若干个输入参数，执行一系列操作，然后返回一个输出结果。

> C语言中的函数实际上是一种子程序，它们的行为与数学中的函数并不完全相同，因此需要特别注意。

#### 2.1 函数声明与调用

函数声明用于告诉编译器函数的名称、输入参数的类型和输出结果的类型，函数声明的一般形式如下：

```c
<返回类型> <函数名>(<参数1类型> <参数1名>, <参数2类型> <参数2名>, ...) {
    // 函数体
}
```

函数调用用于执行函数，函数调用的一般形式如下：

```c
<函数名>(<参数1>, <参数2>, ...);
```

以下是一个函数声明和调用的示例：

```c
// 声明一个名为 add 的函数，接受两个整数，返回一个整数
int add(int a, int b) {
    return a + b;
}

// main 函数是程序的入口，程序从这里开始执行，详见下一节
int main() {
    // 调用 add 函数，传入 1 和 2 作为参数，返回 3
    int a = add(1, 2);
    printf("%d\n", a); // 输出 3
}
```

#### 2.2 main 函数

main函数是程序的入口，程序从这里开始执行，任何C语言程序都只能有一个main函数，main函数的一般形式如下：

```c
int main() {
    // 函数体
    return 0;
}
```

> 在新的标准中，可以不显式的写出`return 0;`，编译器会自动补全。

main函数的返回值表示程序的退出状态，0表示正常退出，非零表示异常退出，例如：

```c
int main() {
    return 0; // 正常退出
}
```

```c
int main() {
    return 1; // 异常退出
}
```

main函数的输入参数是可选的，如果需要接受输入参数，可以使用以下形式：

```c
int main(int argc, char *argv[]) {
    // 函数体
    return 0;
}
```

其中`argc`表示程序的输入参数个数，`argv`表示程序的输入参数列表，它实际上是一个字符串数组。

> 在某些旧的教材中，main函数会被声明为`void main()`，这是旧的C标准中的写法，但是在新的C标准中，main函数必须返回一个整数，因此`void main()`是不合法的。

### 三，预处理器

预处理器是C语言的一部分，它用于在编译之前对源代码进行预处理，一般的预处理器以`#`开头。

#### 3.1 #include 文件包含

`#include`用于包含头文件，头文件中通常包含函数声明和宏定义，例如：

```c
#include <stdio.h> // 包含标准输入输出头文件
```

该语句会将`stdio.h`中的内容复制到当前文件中，因此在当前文件中就可以使用`stdio.h`中的内容了。

#### 3.2 #define 宏定义

`#define`用于定义宏，宏是一种预处理器指令，它会在编译之前被替换为指定的内容，例如：

```c
#define PI 3.14 // 定义一个名为 PI 的宏，它的值为 3.14

int main() {
    printf("%f\n", PI); // 输出 3.14
}
```

因为宏是在编译之前被替换的，因此宏的值可以是任意的表达式，例如：

```c
#define PI 3.14 // 定义一个名为 PI 的宏，它的值为 3.14
#define PI_2 PI + PI // 定义一个名为 PI2 的宏，它的值为 PI * PI

int main() {
    printf("%f\n", PI_2); // 输出 6.28
    printf("%f\n", 2 * PI_2); // 输出 9.42 // 为什么不是 6.28 * 2？
}
```

#### 3.3 条件编译

条件编译用于根据条件来选择编译的代码，它的一般形式如下：

```c
#if <条件>
    // 如果条件为true，编译这里的代码
#endif

#ifdef <宏名>
    // 如果宏被定义，编译这里的代码
#endif

#ifndef <宏名>
    // 如果宏没有被定义，编译这里的代码
#endif
```

#### 3.4 宏函数

拥有参数的宏被称为宏函数，它的一般形式如下：

```c
#define <宏名>(<参数1>, <参数2>, ...) <表达式>
```

以下是一个宏函数的示例：

```c
#define ADD(a, b) a + b

int main() {
    int a = ADD(1, 2); // a 的值为 3
    int b = 2 * ADD(1, 2); // b 的值为 8 // 为什么不是 6？
}
```

宏函数的参数可以是任意的内容，例如：

```c
#define STR(a) #a   // 将 a 转换为字符串

int main() {
    printf("%s\n", STR(Hello, World!)); // 输出 Hello, World!
}
```

### 四，指针

> 未完成