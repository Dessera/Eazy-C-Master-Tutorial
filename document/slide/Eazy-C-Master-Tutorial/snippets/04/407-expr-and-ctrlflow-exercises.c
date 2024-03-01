// > I.改进你在上一小结书写的程序，使得程序可以在控制台上打印下面这张表：

#include <stdio.h>
int main()
{
    // announced two vars to store the temparory values 
    float fahr, celsius;
    // announced the bounding vars to control the step, 
    // this is a programming skills: avoid using magic number directly
    int lower, upper, step;
    lower = 0;
    upper = 200;
    step = 20;

    // init the fahr
    fahr = lower;
    while (fahr <= upper)
    {
        // calculate the result
        celsius = (5.0 / 9.0) * (fahr - 32);
        // print the result
        printf("%3.0f %6.1f\n", fahr, celsius);
        // add to print the next
        fahr += step;
    }

    return 0;
}


