// C++
#include <iostream>
int main()
{
    double* p_num = new double;
    *p_num = 3.1415926;
    std::cout << *p_num << std::endl;
    delete p_num;
}
