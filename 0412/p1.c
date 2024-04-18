#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct tool
{
    int recode;
    char name[20];
    int quantity;
    float price;
} typedef tool;

int main()
{
    FILE *f = fopen("output.txt", "w");
    FILE *r = fopen("input.txt", "r");
    tool t[100];
    t[0].recode = 3;
    strcpy(t[0].name, "Electric sander");
    t[0].quantity = 7;
    t[0].price = 57.98;

    t[1].recode = 17;
    strcpy(t[1].name, "Hammer");
    t[1].quantity = 76;
    t[1].price = 11.99;

    t[2].recode = 24;
    strcpy(t[2].name, "Jig saw");
    t[2].quantity = 21;
    t[2].price = 11.00;

    t[3].recode = 39;
    strcpy(t[3].name, "Lawn mower");
    t[3].quantity = 3;
    t[3].price = 79.50;

    t[4].recode = 56;
    strcpy(t[4].name, "Power saw");
    t[4].quantity = 18;
    t[4].price = 99.99;

    t[5].recode = 68;
    strcpy(t[5].name, "Screwdriver");
    t[5].quantity = 106;
    t[5].price = 6.99;

    t[6].recode = 77;
    strcpy(t[6].name, "Sledge hammer");
    t[6].quantity = 11;
    t[6].price = 21.50;

    t[7].recode = 83;
    strcpy(t[7].name, "Wrench");
    t[7].quantity = 34;
    t[7].price = 7.50;

    int count = 8;

    int mode, recode, num;
    while (fscanf(r, "%d %d %d", &mode, &recode, &num) != EOF)
    {
        for (int i = 0; i < count; i++)
        {
            if (t[i].recode == recode)
            {
                if (mode == 1)
                {
                    t[i].quantity += num;
                    fprintf(f, "%d %s %d %.2f\n", t[i].recode, t[i].name, t[i].quantity, t[i].price);
                }
                else if (mode == 2)
                {
                    if (t[i].quantity - num < 0)
                        fprintf(f, "insufficient quantity\n");
                    else
                    {
                        t[i].quantity -= num;
                        fprintf(f, "%d %s %d %.2f\n", t[i].recode, t[i].name, t[i].quantity, t[i].price);
                    }
                }
            }
        }
    }
}