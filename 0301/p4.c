#include <stdio.h>
#include <stdlib.h>
int main()
{
    int input;
    int *ptr_input = &input;
    scanf("%d", ptr_input);
    for(int i = 0; i < input; i++){
        int num;
        int *ptr_num = &num;
        scanf("%d", ptr_num);
        int temp = 0;
        int *ptr_temp = &temp;
        for(int j = 1; j < *ptr_num; j++){
            if(*ptr_num % j == 0) *ptr_temp = *ptr_temp + j;
        }
        if(*ptr_temp == *ptr_num) printf("perfect\n");
        else if(*ptr_temp > *ptr_num) printf("abundant\n");
        else printf("deficient\n");
    }
}