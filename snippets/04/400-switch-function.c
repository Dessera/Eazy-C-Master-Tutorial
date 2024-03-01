#include <stdio.h>

int main() {
  int y_val = -1;
  scanf("%d", &y_val);  // 输入一个整数

  switch (y_val) {
    case 1:
      printf("x 的范围是(-INF, 0)\n");
      break;
    case 0:
      printf("x = 0\n");
      break;
    case -1:
      printf("x 的范围是(0, INF)\n");
      break;
    default:
      printf("y 的值不在范围内\n");
  }

  return 0;
}