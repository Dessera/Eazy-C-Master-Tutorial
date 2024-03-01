#include <iostream>
#include <array>
int main()
{
    std::array<int, 10> arr;
    for (int i = 0; i < 10; i++)
        arr[i] = i;
    std::cout << "[";
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            std::cout << arr[i] << ", ";
        else
            std::cout << arr[i] << "]";
    }
}