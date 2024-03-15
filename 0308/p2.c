#include<stdio.h>
int main(){
    int input = 0;
    int *ptr_input = &input;
    while(scanf("%d",ptr_input) != EOF){
        int res = 0;
        int *ptr_res = &res;
        *ptr_res += *ptr_input;
        while(*ptr_input >= 3){
            *ptr_res += *ptr_input / 3;
            *ptr_input = *ptr_input / 3 + *ptr_input % 3;
        }
        if(*ptr_input == 2)
            *ptr_res += 1;
        printf("%d\n",*ptr_res);
    }
}