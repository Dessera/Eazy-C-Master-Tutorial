#include <stdio.h>

int main()
{
    int arr[10];
    int cur_index = 0;
    for (cur_index = 0; cur_index < 10; cur_index++)
        arr[cur_index] = cur_index;
    cur_index = 0; // reset to 0 to prevent visiting the array with an index out of bounds
    printf("[");
    for (cur_index = 0; cur_index < 10; cur_index++)
    {
        printf("%d", arr[cur_index]);
        if (cur_index != 9)
            printf(", ");
    }

    printf("]");
}
