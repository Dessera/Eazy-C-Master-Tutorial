# 流程控制 - 三元运算符

C 语言中还有一种特殊的三元运算符，它的基本结构如下：

```c
condition ? expression1 : expression2

```

它的作用是根据`condition`的值来选择执行`expression1`或`expression2`，如果`condition`为真，则执行`expression1`，否则执行`expression2`。

三元运算符可以作为简易的条件语句使用，例如：

```c
// 假设我们已经定义了变量 x
int f = x < 0 ? 1 : (x == 0 ? 0 : -1);
```

这行代码实现了上文中的分段函数。