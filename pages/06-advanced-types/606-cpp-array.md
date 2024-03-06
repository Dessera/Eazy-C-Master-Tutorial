# C++ std::array

C++ 提供了一个更加方便的数组类型——`std::array`。`std::array` 是对上述 C 语言风格数组的封装，它提供了一些方便的方法来操作数组。

要使用 `std::array`，你需要包含头文件 `<array>`，下面是使用 `std::array` 的一个例子：

```cpp
#include <array>

// 声明一个长度为 5 的 int 类型的数组，数组名为 arr，初值为 1, 2, 3, 4, 5
std::array<int, 5> arr = {1, 2, 3, 4, 5};

```

> 尖括号包裹的参数称为模板参数，本教程不会详细介绍

`std::array` 提供了一些方便的方法来操作数组，比如，你可以使用 `arr.size()` 来获取数组的长度，使用 `arr.at(i)` 来访问数组的第 `i` 个元素。

当然，你也可以使用下标运算符 `[]` 来访问数组的元素，这个操作通常比 `arr.at(i)` 更快，但也更加危险。

更多的 `std::array` 的方法请参考[std::array](https://zh.cppreference.com/w/cpp/container/array)。
