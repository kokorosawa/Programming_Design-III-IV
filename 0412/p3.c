#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("output.txt", "w");
    FILE *r = fopen("input.txt", "r");
    char line[100];
    int num;
    while(fscanf(r,"%d %s", &num, line) != EOF){
        // printf("%d %s\n", strlen(line), line);
        if(num == 0){
            continue;
        }
        int re_num = strlen(line)/num;
        // printf("%d %d %d\n", re_num, num, strlen(line));
        for(int i = 0; i < num; i++){
            // printf("%d %d\n", (i + 1) * num - 1,i  * num);
            for(int j = (i + 1) * re_num - 1; j >= i  * re_num; j--){
                fprintf(f,"%c", line[j]);
            }
        }
        fprintf(f,"\n");
    }
}