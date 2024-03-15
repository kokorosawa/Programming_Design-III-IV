#include <stdio.h>
#include <string.h>
int main()
{
    int size;
    int *ptr_size = &size;
    int count = 1;
    int *ptr_count = &count;
    while (scanf("%d", ptr_size) != EOF)
    {
        long long sum = 0;
        long long *ptr_sum = &sum;
        int num;
        int *ptr_num = &num;
        int index = 0;
        int *ptr_index = &index;
        int arr[*ptr_size];
        int *ptr_arr = arr;
        long long flag = 1;
        long long *ptr_flag = &flag;
        memset(arr, 0, *ptr_size * sizeof(arr[0]));
        for (int i = 0; i < *ptr_size; i++)
        {
            scanf("%d", ptr_num);
            arr[*ptr_index] = *ptr_num;
            *ptr_index += 1;
        }

        for (int i = 0; i < *ptr_index; i++)
        {
            *ptr_flag = 1;
            for(int j = i; j < *ptr_index; j++){
                *ptr_flag *= arr[j];
                if(*ptr_flag > *ptr_sum){
                    *ptr_sum = *ptr_flag;
                }
            }
        }


        printf("Case #%d: The maximum product is %lld.\n", *ptr_count, *ptr_sum);
        printf("\n");
        *ptr_count += 1;
    }
}