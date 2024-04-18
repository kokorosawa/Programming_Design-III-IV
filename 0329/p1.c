#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    FILE *f = fopen("output.txt", "w");
    FILE *r = fopen("input.txt", "r");
    int size;
    fscanf(r,"%d\n", &size);
    // printf("%d\n", size);
    for (int i = 0; i < size; i++)
    {
        char str[100];
        fscanf(r,"%s\n", str);
        // printf("%s\n", str);
        int len = strlen(str);
        char curr;
        int num = 0;
        char dec[100];
        int times[100];
        int decIndex = 0;
        int timesIndex = 0;
        for (int j = 0; j < len; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                if (j != 0)
                {
                    times[timesIndex++] = num;
                    num = 0;
                }
                curr = str[j];
                dec[decIndex++] = curr;
            }
            else
            {
                num = num * 10 + (str[j] - '0');
            }
        }
        times[timesIndex++] = num;
        num = 0;
        for(int j = 0; j < decIndex; j++){
            printf("%c ", dec[j]);
        }
        printf("\n");
        for(int j = 0; j < timesIndex; j++){
            printf("%d ", times[j]);
        }

        // printf("Case %d: ", i + 1);
        // for (int j = 0; j < decIndex; j++)
        // {
        //     for(int k = 0; k < times[j]; k++){
        //        printf("%c", dec[j]);
        //     }
        // }
        // printf("\n");
        fprintf(f, "Case %d: ", i + 1);
        for (int j = 0; j < decIndex; j++)
        {
            for(int k = 0; k < times[j]; k++){
                fprintf(f, "%c", dec[j]);
            }
        }
        fprintf(f, "\n");
    }
}