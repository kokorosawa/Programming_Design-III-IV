#include <stdio.h>
void foo(int *arr){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int arr[3] = {0, 0, 0};
    while (1){
        scanf("%d %d %d", &num1, &num2, &num3);
        arr[0] = num1;
        arr[1] = num2;
        arr[2] = num3;
        if(num1 == 0 && num2 == 0 && num3 == 0){
            break;
        } else {
            foo(arr);
        }
        printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    }
}