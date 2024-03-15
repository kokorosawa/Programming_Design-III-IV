#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    int *ptr_a = &a, *ptr_b = &b;
    while (1)
    {
        scanf("%d %d", ptr_a, ptr_b);
        if (a == -1 && b == -1)
        {
            break;
        }
        int diff = *ptr_a - *ptr_b;
        int *ptr_diff = &diff;
        if(*ptr_diff < 0){
            *ptr_diff = *ptr_diff * -1;
        }
        if(*ptr_diff > 50){
            *ptr_diff = 100 - *ptr_diff;
        }
        printf("%d\n", *ptr_diff);
    }
}