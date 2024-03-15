#include <stdio.h>
#include <string.h>
int main()
{
    int n, r;
    int *ptr_n = &n, *ptr_r = &r;
    while (scanf("%d %d", ptr_n, ptr_r) != EOF)
    {
        int ret[*ptr_n + 1];
        memset(ret, 0, (*ptr_n + 1) * sizeof(ret[0]));

        for (int i = 0; i < *ptr_r; i++)
        {
            int temp;
            int *ptr_temp = &temp;
            scanf("%d", ptr_temp);
            ret[*ptr_temp] = 1;
        }
        int flag = 0;
        int *ptr_flag = &flag;
        for (int i = 1; i < *ptr_n + 1; i++)
        {
            if (ret[i] == 0)
            {
                printf("%d ", i);
                *ptr_flag = 1;
            }
        }
        if (*ptr_flag == 0)
        {
            printf("*");
        }
        printf("\n");
    }
}