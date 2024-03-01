#include <stdbool.h>

int main()
{
    // I
    // 当然可以使用int，但是我相信不太可能有人的寿命超过65535岁，
    // 如果想要追求内存消耗少，还是short比较好
    short age = 24;

    // II
    // 使用float和double都行，一般而言，在涉及科学计算上，如果不苛责内存，
    // double显然更加适合，当然如果需要大量的浮点数计算且精度要求不是特别高下
    // float未尝不可
    const double PI = 3.1415926;

    // III
    // 嗯，无论如何，你的舍友只可能在翘了课和没翘课之间的状态的一种，宏观上
    // 不太可能处于翘课和没翘课的叠加态，所以，使用一个bool变量足矣
    bool isMyRoommateEscapeCClass = true;
}