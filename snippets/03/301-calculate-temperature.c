#include <stdio.h>

int main() {
  double fahrenheit = 50;                      // 华氏温度
  double celsius = (fahrenheit - 32) * 5 / 9;  // 计算摄氏温度

  printf("%lf\n", celsius);  // 输出摄氏温度
}