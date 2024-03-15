#include <stdio.h>
int foo(int *num)
{
    if (*num == 0)
        return 0;
    else if (*num % 2 == 1)
        return *num * *num;
    else
        return *num * 2;
}

int main()
{
    int num = 0;
    while (scanf("%d", &num))
    {
        if(num != 0)
            printf("%d\n", foo(&num));
        else
            break;
    }
    return 0;
}
