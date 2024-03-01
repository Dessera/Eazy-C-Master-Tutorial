#include<stdio.h>

float fahr2Cels(float fahr)
{
    // 我们这里将本来直接插入到printf的计算部分直接提取出来
    // 事实上，之后review code降低模块耦合度的一个常见手段就是
    // 将一个较大的模块拆成若干小模块的组合
    return 5 * (fahr - 32) / 9;
}


// Possible solutions I
int main()
{
    float fahr = 50;
    float cels = fahr2Cels(fahr);
    printf("%f", cels);
}