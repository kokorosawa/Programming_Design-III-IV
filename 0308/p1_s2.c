#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr_n = &n;
    scanf("%d", ptr_n);
    for (int i = 0; i < *ptr_n; i++)
    {
        char num1[5];
        char num2[5];
        char num3[5];
        char num4[5];
        char *ptr_num1 = &num1[0];
        char *ptr_num2 = &num2[0];
        char *ptr_num3 = &num3[0];
        char *ptr_num4 = &num4[0];
        scanf("%s %s %s %s", num1, num2, num3, num4);

        int check = 0;
        int *ptr_check = &check;
        *ptr_check += *(ptr_num1 + 1) - '0';
        *ptr_check += *(ptr_num1 + 3) - '0';
        *ptr_check += *(ptr_num2 + 1) - '0';
        *ptr_check += *(ptr_num2 + 3) - '0';
        *ptr_check += *(ptr_num3 + 1) - '0';
        *ptr_check += *(ptr_num3 + 3) - '0';
        *ptr_check += *(ptr_num4 + 1) - '0';
        *ptr_check += *(ptr_num4 + 3) - '0';


        int temp = (*(ptr_num1) - '0') * 2;
        int *ptr_temp = &temp;
        *ptr_check += (*(ptr_num1) - '0') * 2 % 10;
        *ptr_check += *ptr_temp / 10;
        *ptr_temp = (*(ptr_num1 + 2) - '0') * 2;
        *ptr_check += (*(ptr_num1 + 2) - '0') * 2 % 10;
        *ptr_check += *ptr_temp / 10;

        *ptr_temp = (*(ptr_num2) - '0') * 2;
        *ptr_check += (*(ptr_num2) - '0') * 2 % 10;
        *ptr_check += *ptr_temp / 10;
        *ptr_temp = (*(ptr_num2 + 2) - '0') * 2;
        *ptr_check += (*(ptr_num2 + 2) - '0') * 2 % 10;
        *ptr_check += *ptr_temp / 10;

        *ptr_temp = (*(ptr_num3) - '0') * 2;
        *ptr_check += (*(ptr_num3) - '0') * 2 % 10;
        *ptr_check += *ptr_temp / 10;
        *ptr_temp = (*(ptr_num3 + 2) - '0') * 2;
        *ptr_check += (*(ptr_num3 + 2) - '0') * 2 % 10;
        *ptr_check += *ptr_temp / 10;

        *ptr_temp = (*(ptr_num4) - '0') * 2;
        *ptr_check += (*(ptr_num4) - '0') * 2 % 10;
        *ptr_check += *ptr_temp / 10;
        *ptr_temp = (*(ptr_num4 + 2) - '0') * 2;
        *ptr_check += (*(ptr_num4 + 2) - '0') * 2 % 10;
        *ptr_check += *ptr_temp / 10;

        if(*ptr_check % 10 == 0){
            printf("Valid\n");
        }
        else{
            printf("Invalid\n");
        }
    }
}