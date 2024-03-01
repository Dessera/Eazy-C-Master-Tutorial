#include <stdio.h>

int main() {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("[");  // 为了美观，我们在输出数组的时候，把逗号放在元素之间
  for (int i = 0; i < 10; i++) {
    printf("%d", arr[i]);  // 输出数组元素
    if (i < 9) {
      printf(", ");  // 如果不是最后一个元素，输出逗号
    }
  }
  printf("]\n");  // 输出右括号

  int accu = 0;
  for (int i = 0; i < 10; i++) {
    accu += arr[i];  // 累加数组元素
  }
  printf("%d\n", accu);  // 输出累加结果

  return 0;
}
