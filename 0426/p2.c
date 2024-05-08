#include <stdio.h>
#include <string.h>
int main()
{
    // int amount = 0;
    // while (scanf("%d", &amount) != EOF)
    // {
    //     int coins[] = {1, 5, 10, 25, 50};
    //     int dp[++amount];
    //     memset(dp, 0, sizeof(dp));
    //     dp[0] = 1;
    //     for(int i = 0; i < 5; i++)
    //         for(int j = coins[i]; j <= amount; j++){
    //             dp[j] += dp[j - coins[i]];
    //             printf("dp[%d] = %d\n", j, dp[j]);
    //         }

    //     printf("%d\n", dp[amount]);
    // }

    int amount = 0;
    int coins[] = {1, 5, 10, 25, 50};
    int dp[10000];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < 5; i++){
        for (int j = coins[i]; j <= 10; j++)
        {
            dp[j] += dp[j - coins[i]];
            printf("dp[%d] = %d\n", j, dp[j]);
        }
        printf("\n");
    }

    while (scanf("%d", &amount) != EOF)
    {
       printf("%d\n", dp[amount]);
    }   
}