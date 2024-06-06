#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a = 0;
    int b = 0;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        // printf("a = %d, b = %d\n", a, b);
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if((int)sqrt(i) * (int)sqrt(i) == i)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}