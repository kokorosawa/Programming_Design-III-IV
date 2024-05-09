#include <stdio.h>
int judger(int n, int m)
{

    int curr = 0;
    for (int i = n * 2; i > n; i--)
    {
        curr = (curr + m - 1) % i;
        if (curr < n)
        {
            return 0;
        }
    }
    return 1;
}

int helper(int n)
{
    for (int i = n + 1;; i++)
    {
        if (judger(n, i))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int res[15];
    for (int i = 0; i <= 14; i++)
    {
        res[i] = helper(i);
    }
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
        {
            break;
        }
        printf("%d\n", res[n]);
    }
}
