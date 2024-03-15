#include <stdio.h>
int main()
{
    int input = 0;
    scanf("%d\n", &input);
    int i;
    for (i = 0; i < input; i++)
    {
        int arrsize = 0;
        scanf("%d\n", &arrsize);
        int j;
        int arr[arrsize];
        for (j = 0; j < arrsize; j++)
        {
            scanf("%d", &arr[j]);
        }
        int curr = arr[0];
        int up = 0;
        int down = 0;
        for (j = 0; j < arrsize; j++)
        {
            if (arr[j] > curr)
            {
                up++;
            }
            else if (arr[j] < curr)
            {
                down++;
            }
            curr = arr[j];
        }
        printf("Case %d:%d %d\n", i + 1, up, down);
    }
}