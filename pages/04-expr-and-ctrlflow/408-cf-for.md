# 流程控制 - for 语句

`for`语句是一种用来重复执行一系列操作的语句，它的基本结构如下：

```c
// initialization 用来初始化循环变量，可以是一个声明，也可以是一个赋值表达式
// update 用来更新循环变量，是一个表达式
for (initialization; condition; update) {
    // 只要 condition 为真，则重复执行这里的语句
}
```

`for`语句接受三个表达式，它们分别完成不同的任务：

- `initialization`：用来初始化循环变量，可以是一个声明，也可以是一个赋值表达式，例如`int idx = 0`。
- `condition`：用来判断循环是否继续执行，是一个逻辑表达式，例如`idx < 10`。
- `update`：用来更新循环变量，是一个表达式，例如`idx++`。