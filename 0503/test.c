#include <stdio.h>
#include <string.h>
int main()
{
    char instruction[100] = "SAME AS 2";
    const char *d = " ";
    char *p;
    p = strtok(instruction, d);
    // printf("%s", instruction);
    while (p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, d);
        // printf("%s\n", p);
    }
}