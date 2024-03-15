#include <stdio.h>
int main()
{
    int arr[10000];
    int i = 0;
    while (scanf("%d", &arr[i]) != EOF)
    {
        int j;
        int k;
        int temp = 0;

        for (j = 0; j < i; j++)
        {
            for (k = 0; k < i - j; k++)
            {
                if (arr[k] > arr[k + 1])
                {
                    temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
            }
        }
        int size = i + 1;
        if (size % 2 == 0)
        {
            long long int temp = arr[size / 2 - 1];
            temp = temp + arr[size / 2];
            printf("%lld\n", temp / 2);
        }
        else
        {
            printf("%lld\n", arr[size / 2]);
        }

        i++;
    }
}