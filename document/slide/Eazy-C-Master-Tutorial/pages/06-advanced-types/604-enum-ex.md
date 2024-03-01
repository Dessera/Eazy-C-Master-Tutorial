# 枚举

要声明一个枚举变量，你需要使用枚举名和枚举值：

```c
enum Color c = RED;

```

<br />

## C++ 风格的枚举类

C++ 提供了一个更加方便的枚举类型——`enum class`。`enum class` 是上述 C 语言风格枚举的升级版：

```cpp
enum class Color {
    RED,
    GREEN,
    BLUE
};

```

如果你想要使用枚举类的值，你需要使用枚举名和作用域解析运算符 `::`：

```cpp
Color c = Color::RED;

```