#include<stdio.h>
#define kuti 10000000
#define lakh 100000
#define hajar 1000
#define shata 100
void helper(long long int n){
    if(n >= kuti){
        helper(n/kuti);
        printf(" kuti");
        n %= kuti;
    }
    if(n >= lakh){
        helper(n/lakh);
        printf(" lakh");
        n %= lakh;
    }
    if(n >= hajar){
        helper(n/hajar);
        printf(" hajar");
        n %= hajar;
    }
    if(n >= shata){
        helper(n/shata);
        printf(" shata");
        n %= shata;
    }
    if(n){
        printf(" %lld", n);
    }
}

int main(){
    long long int n;
    int count = 0;
    while(scanf("%lld", &n) != EOF){
        count++;
        printf("%4d.", count);
        helper(n);
        if(n == 0)
            printf(" 0");
        printf("\n");
    }
}