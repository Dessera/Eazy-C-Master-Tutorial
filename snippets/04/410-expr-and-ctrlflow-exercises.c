// > I.改进你在上一小结书写的程序，使得程序可以在控制台上打印下面这张表：

#include <stdio.h>
int main() {
  double celcius = 0;

  // 答案不唯一，你也可以用 while 或者 do-while 循环
  for (int fahrer = 0; fahrer <= 200; fahrer += 20) {
    celcius = (5.0 / 9.0) * (fahrer - 32);          // 计算摄氏温度
    printf("%d %6.1f\n", fahrer, celcius); // 打印华氏温度和摄氏温度
  }

  return 0;
}
