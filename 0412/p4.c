#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("output.txt", "w");
    FILE *r = fopen("input.txt", "r");

    int num;
    fscanf(r, "%d", &num);
    for(int i = 0; i < num; i++){
        int n;
        fscanf(r, "%d", &n);
        int a[100], b[100];
        for(int j = 0; j < n; j++){
            fscanf(r, "%d", &a[j]);
        }


        int res = 0;
        for(int j = 1; j < n; j++){
            int temp = 0;
            for(int k = 0; k < j; k++){
                if(a[j] >= a[k]){
                    temp++;
                }
            }

            b[j] = temp;
            res += temp;
        }

        fprintf(f, "%d\n", res);
    }
}