# 流程控制 - while 语句

## while 语句

`while`语句是一种用来重复执行一系列操作的语句，它的基本结构如下：

```c
while (condition) {
    // 只要 condition 为真，则重复执行这里的语句
}

```

## do-while 语句

`do-while`语句是一种用来重复执行一系列操作的语句，它的基本结构如下：

```c

do {
    // 无论如何，先执行这里的语句
} while (condition);

```

> `do-while`语句和`while`语句的区别在于，`do-while`语句会先执行一次循环体，然后再判断条件是否为真，而`while`语句则是先判断条件是否为真，然后再执行循环体。