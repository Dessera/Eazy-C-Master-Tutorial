# C++ lambda 函数

`lambda` 函数是 C++11 引入的一个新特性，它允许我们在需要的地方定义一个匿名函数，这样可以减少代码的复杂度。

相比普通函数，`lambda` 函数有额外的捕获列表特性，它允许我们在函数体中使用外部变量（大多数都是其所在的函数/作用域中的变量）。

下面是一个简单的 `lambda` 函数的例子：

```cpp
int main() {
    // 定义一个 lambda 函数，它接受两个 int 类型的参数，返回一个 int 类型的值
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    // 调用 add 函数，传入参数 1 和 2，将返回值赋值给 result
    int result = add(1, 2);
    return 0;
}
```

更详细的内容可以参考 [C++ lambda 函数](https://zh.cppreference.com/w/cpp/language/lambda)。
