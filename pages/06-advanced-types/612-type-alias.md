---
layout: two-cols
---

# 类型别名


类型别名是一个已存在的类型的别名，它可以让你使用一个更加简洁的名字来表示一个类型。

以上文中的结构体 `Point` 为例，你可以使用 `typedef` 来定义一个类型别名。

## C++ 风格的类型别名

C++ 提供了一个更加方便的类型别名语法——`using`：

但实际上，即便你不使用别名，C++中也可以直接除去 `struct` 关键字。

在 C++ 中， `using` 有更多更灵活的语法，并不局限于类型别名。

::right::

<div class="pl-10">

```cpp
struct Point {
    int x;
    int y;
};

typedef struct Point Point;      // 定义 Point 为 struct Point 的别名

using PointInCPP = struct Point; // C++ 中的别名定义方式

int main() {
    Point p = {1, 2};            // 使用别名
    PointInCPP pcpp = {4, 5};    // 使用别名

    return 0;
}

```

</div>