#include <stdio.h>
#include <math.h>
int sieve[2000];

void eratosthenes()
{
    int sqrt_2000 = sqrt(2000);
    sieve[0] = sieve[1] = 1;
    for (int i = 2; i <= sqrt_2000; i++)
        if (!sieve[i])
            for (int k = (2000 - 1) / i, j = i * k; k >= i; k--, j -= i)
                if (!sieve[k])
                    sieve[j] = 1;
}

int main()
{
    eratosthenes();
    char buffer[100];
    int sum = 0;
    while (scanf("%s", buffer) != EOF)
    {
        sum = 0;
        for (int i = 0; buffer[i] != '\0'; i++)
        {
            if(buffer[i] >= 'A' && buffer[i] <= 'Z')
                sum += buffer[i] - 'A' + 27;
            else if(buffer[i] >= 'a' && buffer[i] <= 'z')
                sum += buffer[i] - 'a' + 1;
        }
        
        if(!sieve[sum])
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
}