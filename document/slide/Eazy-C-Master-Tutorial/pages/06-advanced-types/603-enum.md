# 枚举

枚举是一种用户定义的数据类型，它可以包含一组相关的、有限的、整数类型的值。

下面是一个简单的枚举的例子：

```c
enum Color {
    RED,
    GREEN,
    BLUE
};

```

此时，`RED`、`GREEN` 和 `BLUE` 都是 `Color` 类型的值，它们的值分别是 0、1 和 2。

你也可以手动指定枚举的值和其数值类型：

```c {all|1|2|3|4}
enum Color : unsigned char {  // 指定枚举的整数类型
    RED = 1,                  // 手动指定枚举值
    GREEN = 2,
    BLUE = 3
};

```