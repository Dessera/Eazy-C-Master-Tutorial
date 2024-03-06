# #ifdef、#ifndef、#endif

`#ifdef`、`#ifndef`、`#endif` 是预处理指令，它们用来进行条件编译。

`#ifdef` 是 `#if defined` 的缩写，它用来判断一个宏是否被定义，如果被定义，那么它后面的代码将会被编译，比如：

```c
#ifdef PI
    printf("PI is defined!\n");
#endif

```

`#ifndef` 是 `#if !defined` 的缩写，它用来判断一个宏是否没有被定义，如果没有被定义，那么它后面的代码将会被编译，比如：

```c
#ifndef PI
    printf("PI is not defined!\n");
#endif

```

`#endif` 用来结束 `#ifdef`、`#ifndef` 的条件编译，它没有参数，只是一个结束标记。