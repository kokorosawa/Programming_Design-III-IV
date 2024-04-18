#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int size;
    int *ptr_size = &size;
    scanf("%d", ptr_size);
    for (int i = 0; i < size; i++)
    {
        int n;
        int *ptr_n = &n;
        scanf("%d", ptr_n);
        int arr[n][n];
        int *ptr_arr = &arr[0][0];
        char buffer[100];
        char *ptr_buffer = &buffer[0];
        for (int j = 0; j < n; j++)
        {
            scanf("%s", ptr_buffer);
            for (int k = 0; k < n; k++)
            {
                *(ptr_arr + (j * n) + k) = *(ptr_buffer + k) - '0';
            }
        }
        int operation_num = 0;
        int *ptr_operation_num = &operation_num;
        scanf("%d", ptr_operation_num);
        char operations[100];
        char *ptr_operations = &operations[0];
        for (int j = 0; j < *ptr_operation_num; j++)
        {
            scanf("%s", ptr_operations);
            if (strcmp("row", ptr_operations) == 0)
            {
                int a, b;
                int *ptr_a = &a;
                int *ptr_b = &b;
                scanf("%d %d", ptr_a, ptr_b);
                *ptr_a -= 1;
                *ptr_b -= 1;
                for (int k = 0; k < n; k++)
                {
                    int temp;
                    int *ptr_temp = &temp;
                    *ptr_temp = *(ptr_arr + (*ptr_a * n) + k);
                    *(ptr_arr + (*ptr_a * n) + k) = *(ptr_arr + (*ptr_b * n) + k);
                    *(ptr_arr + (*ptr_b * n) + k) = *ptr_temp;
                }
            }
            else if (strcmp("col", ptr_operations) == 0)
            {
                int a, b;
                int *ptr_a = &a;
                int *ptr_b = &b;
                scanf("%d %d", ptr_a, ptr_b);
                *ptr_a -= 1;
                *ptr_b -= 1;
                for (int k = 0; k < n; k++)
                {
                    int temp;
                    int *ptr_temp = &temp;
                    *ptr_temp = *(ptr_arr + (k * n) + *ptr_a);
                    *(ptr_arr + (k * n) + *ptr_a) = *(ptr_arr + (k * n) + *ptr_b);
                    *(ptr_arr + (k * n) + *ptr_b) = *ptr_temp;
                }
            }
            else if (strcmp("inc", ptr_operations) == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        *(ptr_arr + (k * n) + l) = (*(ptr_arr + (k * n) + l) + 1) % 10;
                    }
                }
            }
            else if (strcmp("dec", ptr_operations) == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        *(ptr_arr + (k * n) + l) = (*(ptr_arr + (k * n) + l) + 9) % 10;
                    }
                }
            }
            else if (strcmp("transpose", ptr_operations) == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = k; l < n; l++)
                    {
                        int temp;
                        int *ptr_temp = &temp;
                        *ptr_temp = *(ptr_arr + (k * n) + l);
                        *(ptr_arr + (k * n) + l) = *(ptr_arr + (l * n) + k);
                        *(ptr_arr + (l * n) + k) = *ptr_temp;
                    }
                }
            }
        }

        printf("Case #%d\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                printf("%d", arr[j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}