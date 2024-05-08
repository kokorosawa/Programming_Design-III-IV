#include <stdio.h>
int main()
{
    int step;
    while (1)
    {
        scanf("%d", &step);
        if (step == 0)
        {
            break;
        }
        int north = 2, south = 5, east = 4, west = 3;
        int top = 1, bottom = 6;
        char command[10];
        for (int i = 0; i < step; i++)
        {
            scanf("%s", command);
            if (command[0] == 'n')
            {
                int temp = north;
                north = top;
                top = south;
                south = bottom;
                bottom = temp;
            }
            else if (command[0] == 's')
            {
                int temp = south;
                south = top;
                top = north;
                north = bottom;
                bottom = temp;
            }
            else if (command[0] == 'e')
            {
                int temp = east;
                east = top;
                top = west;
                west = bottom;
                bottom = temp;
            }
            else if (command[0] == 'w')
            {
                int temp = west;
                west = top;
                top = east;
                east = bottom;
                bottom = temp;
            }
        }
        printf("%d\n", top);
    }
}