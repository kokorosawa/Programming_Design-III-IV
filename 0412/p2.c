#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("output.txt", "w");
    FILE *r = fopen("input.txt", "r");
    char line[100];
    while (fgets(line, 100, r) != NULL)
    {
        int num;
        char temp[100];
        strcpy(temp, line);
        char *s = " ";
        char *token = strtok(temp, s);
        char word[100][100];
        while (token != NULL)
        {
            if (atoi(token) != 0)
            {
                num = atoi(token);
                break;
            }
            token = strtok(NULL, s);
        }
        if (strstr(line, " centimeters") && strstr(line, " meters"))
        {
            char *cm;
            char *m;
            cm = strstr(line, "centi");
            m = strstr(line, "meter");
            if (cm < m)
            {
                fprintf(f,"%.1f\n", num * 100.0);
            }
            else
            {
                fprintf(f,"%.1f\n", num / 100.0);
            }
        }
        else if (strstr(line, "kilograms") && strstr(line, "pounds"))
        {
            char *kg;
            char *p;
            kg = strstr(line, "kilograms");
            p = strstr(line, "pounds");
            if (kg < p)
            {
                fprintf(f,"%.1f\n", num * 0.454);
            }
            else
            {
                fprintf(f,"%.1f\n", num * 2.2);
            }
        }
        else if (strstr(line, " liters") && strstr(line, " milliliters"))
        {
            char *l;
            char *ml;
            l = strstr(line, "liters");
            ml = strstr(line, "milliliters");
            if (l < ml)
            {
                fprintf(f,"%.1f\n", num / 1000.0);
            }
            else
            {
                fprintf(f,"%.1f\n", num * 1000.0);
            }
        }
        else{
            fprintf(f,"ERROR\n");
        }
    }
    fclose(f);
    fclose(r);
}