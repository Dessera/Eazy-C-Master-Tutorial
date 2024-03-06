# 流程控制

学会上述内容，你已经可以编写一些简单的程序了，但实际上，我们仍然无法解决一些复杂的问题，下面是一个数学中常见的分段函数：

$$
f(x) = \begin{cases}
1, & x < 0 \\
0, & x = 0 \\
-1, & x > 0
\end{cases}
$$

思考一下，如何用 C 语言模拟这个函数？

显然，以单纯的表达式和语句是无法解决这个问题的，因此，我们需要引入流程控制。

流程控制是一种用来控制程序执行流程的机制，它包括了**条件语句**和**循环语句**:

- 条件语句：根据条件的真假，执行不同的语句。
- 循环语句：重复执行某些语句。