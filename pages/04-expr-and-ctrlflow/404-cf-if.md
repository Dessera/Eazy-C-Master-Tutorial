# 流程控制 - if 语句

`if` 语句是最基本的流程控制语句，它用于根据条件判断来执行不同的代码块。

```c
if (condition) {
    // 如果 condition 为真，则执行这里的语句
}
```

`if`可以后缀多个`else if`和一个`else`，用于处理多个条件。

```c
if (condition1) {
    // 如果 condition1 为真，则执行这里的语句
} else if (condition2) {
    // 如果 condition1 为假，condition2 为真，则执行这里的语句
} else {
    // 如果 condition1 和 condition2 都为假，则执行这里的语句
}
```

执行时，`if`语句会按照顺序检查条件，如果某个条件为真，则执行对应的代码块，然后跳过后续的条件，如果所有条件都为假，则执行`else`的代码块。