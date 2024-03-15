#include <stdio.h>
int sort(int *arr, int size)
{
    int *ptr_size = &size;
    int *ptr_arr = arr;
    int temp;
    int *ptr_temp = &temp;
    for (int i = 0; i < *ptr_size; i++)
    {
        for (int j = 0; j < *ptr_size - i - 1; j++)
        {
            if (*(ptr_arr + j) > *(ptr_arr + j + 1))
            {
                *ptr_temp = *(ptr_arr + j);
                *(ptr_arr + j) = *(ptr_arr + j + 1);
                *(ptr_arr + j + 1) = *ptr_temp;
            }
        }
    }
}

int main()
{
    int size;
    int *ptr_size = &size;
    scanf("%d", ptr_size);
    for (int i = 0; i < *ptr_size; i++)
    {
        int num;
        int *ptr_num = &num;
        scanf("%d", ptr_num);
        int a[*ptr_num];
        int *ptr_a = a;
        for (int j = 0; j < *ptr_num; j++)
        {
            scanf("%d", ptr_a + j);
        }
        sort(a, *ptr_num);
        printf("%d\n", (a[*ptr_num - 1] - a[0]) * 2);
    }
}