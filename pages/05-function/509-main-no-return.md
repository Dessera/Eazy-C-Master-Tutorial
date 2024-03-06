# 省略 return 语句

如果函数的返回类型是 void，那么可以省略 return 语句。这是因为 void 类型的函数不需要返回值，也可以使用`return;`显示地返回。

`main`函数不同于其他函数，它虽然返回`int`类型的值，但我们可以省略`return`语句，如果没有显式地返回 0，那么编译器会自动在函数的最后插入`return 0;`，例如：

```c
#include <stdio.h>

int main() {
  printf("Hello, world!\n");
}

```

这时编译器会自动在函数的最后插入`return 0;`，使得`main`函数返回 0。

> 请注意，这种性质只适用于`main`函数。
