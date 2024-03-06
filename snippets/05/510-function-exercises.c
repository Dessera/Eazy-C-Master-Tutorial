#include <stdio.h>

double fahr2Cels(double fahr) {
  return 5 * (fahr - 32) / 9;  // 计算摄氏温度并返回
}

int main() {
  double cels = fahr2Cels(0); // 调用函数
  printf("%lf", cels);      // 输出结果

  cels = fahr2Cels(50);       // 调用函数
  printf("%lf", cels);      // 输出结果
}