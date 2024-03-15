#include<stdio.h>
int main(){
    int size;
    int *ptr_size = &size;
    int count = 1;
    int *ptr_count = &count;
    while (1)
    {
        scanf("%d", ptr_size);
        if(*ptr_size == 0){
            break;
        }
        int arr[*ptr_size];
        int *ptr_arr = arr;
        int sum = 0;
        int *ptr_sum = &sum;
        for(int i = 0; i < *ptr_size; i++){
            scanf("%d", ptr_arr + i);
            *ptr_sum += *(ptr_arr + i);
        }
        *ptr_sum /= *ptr_size;
        int res = 0;
        int *ptr_res = &res;
        for(int i = 0; i < *ptr_size; i++){
            if(*(ptr_arr + i) > *ptr_sum){
                *ptr_res += *(ptr_arr + i) - *ptr_sum;
            }
        }
        printf("Set #%d\n", *ptr_count);
        printf("The minimum number of moves is %d.\n", *ptr_res);
        printf("\n");
        count++;
    }
    
}