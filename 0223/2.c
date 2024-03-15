#include <stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    while (scanf("%d %d", &num1, &num2))
    {
        if(num1 == 0 && num2 == 0){
            break;
        } else {
            swap(&num1, &num2);
            printf("%d %d\n", num1, num2);
        }
            
    }
    return 0;
}