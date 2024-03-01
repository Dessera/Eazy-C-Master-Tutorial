---
layout: two-cols
---

# C++ 类

某种程度上来说，C++ 的类是结构体的升级版。类是一种用户定义的数据类型，它可以包含成员变量和成员函数。

相比于结构体，类的成员变量和成员函数都有访问权限，你可以使用 `public`、`protected` 和 `private` 关键字来指定成员的访问权限。

此外，类不仅可以包含成员变量，还可以包含成员函数，这些函数被称为类的方法。

访问类的成员函数和成员变量的方法和结构体一样，你需要使用成员访问运算符 `.`。

类有太多的特性，本教程不会详细介绍，在这里提及类的目的是为了让你知道类是什么，以及类成员的访问方法，详细了解类请参考[类特性](https://zh.cppreference.com/w/cpp/language/class)。

::right::

<div class="pl-10">

```cpp {all|3|8|9-13|18}
class Point {
  // 私有成员，外部不可访问
  private:
    int x;
    int y;

  // 公有成员，外部可访问
  public:
    void set(int x, int y) {
        // 暂时忽略这个关键字
        this->x = x;
        this->y = y;
    }
};

int main() {
    Point p;
    p.set(1, 2);  // 调用类的方法
}

```

</div>