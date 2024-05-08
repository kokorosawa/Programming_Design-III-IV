#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        int arr[21];
        int size;
        scanf("%d", &size);
        memset(arr, 0, sizeof(arr));
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[j]);
        }
        int dp[1001];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int j = 0; j < size; j++)
        {
            for (int k = t; k >= 0; k--)
            {
                if (dp[k] == 1 && k + arr[j] <= t)
                {
                    dp[k + arr[j]] = 1;
                }
            }
        }
        dp[t] == 1 ? printf("YES\n") : printf("NO\n");
    }
}