// C
#include <stdlib.h>
#include <stdio.h>

int main()
{
    double* p_num = (double*)malloc(sizeof(double));
    if (!p_num)
        return -1;
    *p_num = 3.1415926;
    printf("%lf", *p_num);
    free(p_num);
}
