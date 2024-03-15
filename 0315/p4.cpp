#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int x ,int y){
    return x > y;
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
        sort(a, a+*ptr_num,cmp);
        int res = 0;
        int *ptr_res = &res;
        for (int j = 0; j < *ptr_num; j++)
        {
            if ((j + 1) % 3 == 0)
            {
                *ptr_res += a[j];
            }
        }
        printf("%d\n", *ptr_res);
    }
}