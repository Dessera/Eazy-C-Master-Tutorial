# C++ std::vector

变长数组是 C++ 标准库自带的类型，它可以动态地改变数组的长度。

要使用变长数组，你需要包含头文件 `<vector>`，下面是使用变长数组的一个例子：

```cpp
#include <vector>

// 声明一个长度为 5 的 int 类型的数组，数组名为 arr，初值为 1, 2, 3, 4, 5
std::vector<int> arr = {1, 2, 3, 4, 5};

```

访问变长数组的元素和访问 `std::array` 的元素一样，你可以使用 `arr.size()` 来获取数组的长度，使用 `arr.at(i)` 来访问数组的第 `i` 个元素。

除此之外，你可以使用 `arr.push_back(x)` 来在数组的末尾添加一个元素，使用 `arr.pop_back()` 来删除数组的最后一个元素，数组的长度会相应地改变。

更多的 `std::vector` 的方法请参考[std::vector](https://zh.cppreference.com/w/cpp/container/vector)。