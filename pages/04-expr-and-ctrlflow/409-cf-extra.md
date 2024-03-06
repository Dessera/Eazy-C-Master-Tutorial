---
layout: two-cols
---

::right::

# 特殊的流程控制语句

为了更加灵活的操控上述流程控制语句，C 语言还提供了一些特殊的流程控制语句，包括：

1. `break`语句：跳出（提前结束）循环或`switch`语句。
2. `continue`语句：跳过本次循环的剩余部分，直接进入下一次循环。
3. `goto`语句：无条件跳转到指定的标签处。
4. `return`语句：提前结束**函数**的执行，并返回一个值。

::default::

<div class="pr-10">

```cpp {all|7|16|22}
#include <stdio.h>

int main() {
  int res = 0;
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      break;    // 跳出循环
    }
    res += i;
  }
  printf("%d\n", res);  // 0 + 1 + 2 + 3 + 4 = 10

  res = 0;
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      continue; // 跳过本次循环的剩余部分
    }
    res += i;
  }
  printf("%d\n", res);  // 0 + 1 + 2 + 3 + 4 + 6 + 7 + 8 + 9 = 40

  return 0;             // 结束函数的执行

  printf("This line will not be executed.\n");
}
```

</div>