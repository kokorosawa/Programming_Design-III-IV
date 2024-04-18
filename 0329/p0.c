#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    FILE *f = fopen("output.txt", "w");
    FILE *r = fopen("input.txt", "r");
    int num;
    while(fscanf(r,"%d", &num) != EOF){
        fprintf(f, "%d ", num * num);
    }
}