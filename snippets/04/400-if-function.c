#include <stdio.h>

int main() {
  int x_val = 0;
  scanf("%d", &x_val);  // 输入一个整数

  int y_val = 0;                // 用于存储结果
  if (x_val > 0) {              // 判断 x_val 的正负
    y_val = -1;
  } else if (x_val < 0) {
    y_val = 1;
  } else {
    y_val = 0;
  }

  printf("%d\n", y_val);

  return 0;
}