#include<stdio.h>

struct Student
{
    char* name;
    int     gender;
    int     stNumber;
};

int main()
{
    // II
    struct Student stu;
    // init
    stu.name = "XiaoMing";
    stu.gender = 0;
    stu.stNumber = 19231145;
    // III
    printf("%s\t%d\t%d\n", stu.name, stu.gender, stu.stNumber);
}
