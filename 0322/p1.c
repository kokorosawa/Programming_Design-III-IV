#include <stdio.h>
struct Customer
{
    char lastName[15];
    char firstName[15];
    double payment;
    unsigned int customerNumber;
};

int main() {
    struct Customer customer;
    struct Customer highestPayment;
    while(scanf("%s %s %lf %u", customer.lastName, customer.firstName, &customer.payment, &customer.customerNumber) != EOF){
        if(customer.payment > highestPayment.payment){
            highestPayment = customer;
        }
    }
    printf("%s %s %u\n", highestPayment.lastName, highestPayment.firstName, highestPayment.customerNumber);
}