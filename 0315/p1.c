#include<stdio.h>
int sort(int *arr, int size){
    int *ptr_size = &size;
    int *ptr_arr = arr;
    int temp;
    int *ptr_temp = &temp;
    for(int i = 0; i < *ptr_size; i++){
        for(int j = 0; j < *ptr_size - i - 1; j++){
            if(*(ptr_arr + j) > *(ptr_arr + j + 1)){
                *ptr_temp = *(ptr_arr + j);
                *(ptr_arr + j) = *(ptr_arr + j + 1);
                *(ptr_arr + j + 1) = *ptr_temp;
                // printf("%d %d\n", arr[j], j);
            }
        }
    }
}

int main(){
    int size;
    int *ptr_size = &size;
    scanf("%d", ptr_size);
    for(int i = 0; i < *ptr_size; i++){
        int num;
        int *ptr_num = &num;
        scanf("%d", ptr_num);
        int a[*ptr_num];
        for(int j = 0; j < *ptr_num; j++){
            scanf("%d", &a[j]);
            // printf("%d ", a[j]);
        }
        sort(a, *ptr_num);

        int res = a[*ptr_num / 2];
        int *ptr_res = &res;
       printf("Case %d: %d\n",i + 1, *ptr_res);
    }
}