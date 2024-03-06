---
layout: two-cols
---

::right::

# if 语句 - 练习

使用`if`语句模拟模拟以下分段函数：

$$
f(x) = \begin{cases}
1, & x < 0 \\
0, & x = 0 \\
-1, & x > 0
\end{cases}
$$

## 注意
1. 使用`scanf("%d", &x);`从控制台输入整数`x`的值，`x`应当为你想输入的任何变量名。
2. 使用上述函数，控制台会等待用户输入整数，按回车结束输入。
3. 使用`printf("%d\n", x);`输出`x`的值，`x`应当为你想输出的任何变量名。

::default::

<div class="pr-10" v-click>

<<< @/snippets/04/400-if-function.c

</div>