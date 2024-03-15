#include<stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int *ptr_n = &n;
    scanf("%d", ptr_n);
    for(int i = 0; i < *ptr_n; i++){
        int num[4];
        scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
        int check = 0;
        int dou[100];
        int nor[100];
        int index_d = 0;
        int index_n = 0;
        for(int j = 0; j < 4 ; j++){
            int temp;
            nor[index_n] += num[j] % 10;
            index_n++;
            num[j] /= 10;
            dou[index_d] = ((num[j] % 10) * 2);
            index_d++;
            num[j] /= 10;

            nor[index_n] += num[j] % 10;
            index_n++;
            num[j] /= 10;
            dou[index_d] = ((num[j] % 10) * 2);
            index_d++;
        }

        int check_sum = 0;
        for(int j = 0;  j < index_d; j++){
            // printf("%d ", dou[j]);
            if(dou[j] > 9){
                check_sum += (dou[j] % 10) + (dou[j] / 10);
            }
            else{
                check_sum += dou[j];
            }
        }
        // printf("\n");
        for(int j = 0; j < index_n; j++){
            check_sum += nor[j];    
            // printf("%d ", nor[j]);
        }
        // printf("\n");
        // printf("%d", check_sum);

        if(check_sum % 10 == 0){
            printf("Valid\n");
        }
        else{
            printf("Invalid\n");
        }
    }
}