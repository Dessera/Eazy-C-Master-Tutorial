---
layout: two-cols
---

# 使用指针数据

我们可以使用取值运算符 `*` 来访问指针所指向的值。

> `*`在修饰类型时表示指针类型，而在修饰变量时表示取值运算符。

如果用指针指向了一个结构体，可以使用 `->` 来访问结构体的成员。

::right::

<div class="pl-10">

```c {all|14|16|18}
#include <stdio.h>

struct Point {
    int x;
    int y;
};

void do_something(struct Point p) {
  // do something
}

int main() {
    struct Point p = {1, 2};
    struct Point* pp = &p;  // 声明一个指向结构体的指针

    do_something(*pp);      // 传递结构体的值

    printf("%d\n", pp->x);  // 使用结构体指针访问结构体的成员

    return 0;
}

```

</div>