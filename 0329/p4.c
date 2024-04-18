#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    FILE *f = fopen("output.txt", "w");
    FILE *r = fopen("input.txt", "r");
    int str[10000];
    int strindex = 0;
    while (fscanf(r, "%c", &str[strindex]) != EOF)
    {
        strindex++;
    }
    for (int i = 0; i < strindex; i++)
    {
        fprintf(f, "%c", str[i]);
        printf("%c", str[i]);
    }
    fprintf(f, "\n");
    for (int i = 0; i < strindex; i++)
    {
        fprintf(f, "%c", str[i]);
        printf("%c", str[i]);
    }
}