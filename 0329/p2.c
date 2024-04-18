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
    while (fgets(str, 10000, r) != NULL)
    {
        int valid[100];
        char word[100][100];
        int wordindex = 0;
        const char *d = " '";
        char *p;
        p = strtok(str, d);
        int len = 0;
        while (p != NULL)
        {
            printf("%s\n", p);
            strcpy(word[wordindex], p);
            wordindex++;
            p = strtok(NULL, d);
        }
        for(int i = 0; i < wordindex; i++)
        {
            for(int j = 0; j < strlen(word[i]); j++)
            {
                if(strcmp(word[i], "...") == 0 || isdigit(word[i][j]) != 0 || strcmp(word[i], "--") == 0 || strcmp(word[i], "...\n") == 0)
                {
                    valid[i] = 0;
                    break;
                }
                else
                {
                    valid[i] = 1;
                }
            }
        }
        for(int i = 0; i < wordindex; i++)
        {
            if(valid[i] == 1)
            {
                printf("%s ", word[i]);
                len++;
            }
        }
        fprintf(f, "%d\n", len);
    }
}