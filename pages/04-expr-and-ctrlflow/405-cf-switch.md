# 流程控制 - switch语句

`switch`语句是一种多分支选择语句，它可以根据一个表达式的值从一系列可能的情况中选择一个执行。`switch`语句的语法如下：

```c
switch (expression) {
    case constant1:
        // 如果 expression 的值等于 constant1，则执行这里的语句
        break;
    case constant3:
        // 如果 expression 的值等于 constant3，则执行这里的语句
        break;
    // ...
    default:
        // 如果 expression 的值不等于任何一个 constant，则执行这里的语句
}
```

执行时，`switch`语句会按照顺序检查每个`case`的常量，如果某个常量等于`expression`的值，则开始执行对应位置的代码，直到遇到`break`语句为止。如果没有任何一个`case`的常量等于`expression`的值，则执行`default`的代码块。

> `break`语句用来退出`switch`语句，如果没有`break`语句，则会继续执行下一个`case`的代码，直到遇到`break`语句或者`switch`语句结束。