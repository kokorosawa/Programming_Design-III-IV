#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char input[10000];
    char hash[50] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while (fgets(input, 10000, stdin) != NULL)
    {
        for(int i = 0;i <  strlen(input); i++){
            if(input[i] == ' '){
                printf(" ");
            }else {
                for(int j = 0; j < strlen(hash); j++){
                    if(tolower(input[i]) == hash[j]){
                        printf("%c", hash[j - 2]);
                        break;
                    }
                }
            }
        }
        printf("\n");
    }
}