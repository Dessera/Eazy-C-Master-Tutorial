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



#include<stdio.h>
// Possible solutions II
// 不用回答第二问的写法
int main()
{
    float fahr = 50;
    float cels = 5*(fahr - 32)/9;
    printf("%f", cels);
}



// >II. 再次使用你书写的程序计算0华氏度下对应的摄氏度，跟你手动计算出的结果有不一样的地方吗？
// 如果有，可能的原因是为什么？


// 原因很简单，手工计算的结果是：-17.777779
// 而我们却使用一个整形值来接受它！自然得到的结果就是将后面的小数部分全部扔掉的结果。所以：
// 将float替换成int可以得到正确的结果
#include<stdio.h>

int main()
{
    float fahr = 50;
    float cels = 5*(fahr - 32)/9;
    printf("%f", cels);
}

