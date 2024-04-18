#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    FILE *f = fopen("output.txt", "w");
    FILE *r = fopen("input.txt", "r");
    char str[100];
    int wordindex = 0;
    int count = 0;
    while (fgets(str, 10000, r) != NULL)
    {
        if (strlen(str) == 1)
        {
            fprintf(f, "\n");
            continue;
        }
        if(count != 0)
            fprintf(f, "\n");
        count++;
        char word[100][100];
        int wordindex = 0;
        const char *d = " !";
        char *p;
        p = strtok(str, d);
        int len = 0;
        while (p != NULL)
        {
            strcpy(word[wordindex], p);
            // printf("%s\n", word[wordindex]);
            wordindex++;
            p = strtok(NULL, d);
        }
        int num = 0;
        for (int i = 0; i < wordindex; i++)
        {
            char dec[100];
            int times[100];
            int decIndex = 0;
            int timesIndex = 0;
            char curr;
            // printf("%s %d\n", word[i], strlen(word[i]));
            for (int j = 0; j < strlen(word[i]); j++)
            {
                if (word[i][j] >= 'A' && word[i][j] <= 'Z' || word[i][j] == 'b' || word[i][j] == '*' || word[i][j] == 10)
                {
                    if (j != 0)
                    {
                        times[timesIndex++] = num;
                        num = 0;
                    }
                    if (word[i][j] == 'b')
                        dec[decIndex++] = ' ';
                    else if(word[i][j] == 10){
                        dec[decIndex++] = '\n';
                        times[timesIndex++] = 1;
                    }
                    else
                        dec[decIndex++] = word[i][j];
                }
                else
                {
                    num += word[i][j] - '0';
                }
            }
            // for (int j = 0; j < decIndex; j++)
            // {
            //     printf("%4c ", dec[j]);
            // }
            // printf("\n");
            // for (int j = 0; j < timesIndex; j++)
            // {
            //     printf("%4d ", times[j]);
            // }
            // printf("\n");
            for (int j = 0; j < decIndex; j++)
            {
                for (int k = 0; k < times[j]; k++)
                {
                    fprintf(f, "%c", dec[j]);
                }
            }
            if(i != wordindex - 1)
                fprintf(f, "\n");
            // printf("%d %d\n", i, wordindex);
            // if (strlen(str) == 1)
            //     fprintf(f, "\n\n");
        }
    }
}