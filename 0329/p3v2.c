#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
   FILE *f = fopen("output.txt", "w");
    FILE *r = fopen("input.txt", "r");
    char str[100];
    while (fgets(str, 10000, r) != NULL)
    {
        int count = 0;
        for(int i = 0; str[i]; i++){
            if(str[i] == '!')
                fprintf(f, "\n");
            else if(isdigit(str[i]))
                count += str[i] - '0';
            else {
                for(int j = 0; j < count; j++)
                    fprintf(f, "%c", str[i] == 'b' ? ' ' : str[i]);
                count = 0;
            }
        }
        fprintf(f, "\n");
    }
}