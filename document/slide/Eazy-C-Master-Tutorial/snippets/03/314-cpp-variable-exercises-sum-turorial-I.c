// I. 使用公式℃$=\frac{5}{9}($℉$-32)$，计算出50华氏度下对应的摄氏度

#include<stdio.h>
// 如上的写法将要回答第二题。
// Possible solutions I

int main()
{
    int fahr = 50;
    int cels = 5*(fahr - 32)/9;
    printf("%d", cels);
}

