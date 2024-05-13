#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 12
struct node
{
    char data[100];
    int num;
    struct node *next;
};

void sort(struct node *head)
{
    int list_size = 0;
    int list[100];

    struct node *temp = head;

    while (head != NULL)
    {
        list[list_size++] = head->num;
        head = head->next;
    }
    for (int i = 0; i < list_size; i++)
    {
        for (int j = i + 1; j < list_size; j++)
        {
            if (list[i] > list[j])
            {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    for (int i = 0; i < list_size; i++)
    {
        temp->num = list[i];
        temp = temp->next;
    }


}

int main()
{
    struct node *head = NULL;
    struct node *root = NULL;

    int temp;
    int count = 0;

    while (scanf("%d", &temp) != EOF)
    {
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            root = head;
            head->num = temp;
        }
        else
        {
            head->next = (struct node *)malloc(sizeof(struct node));
            head = head->next;
            head->num = temp;
        }
        count++;

        if(count % 3 == 0){
            struct node *temp = root;
            sort(temp);
            while(temp != NULL){
                printf("%d", temp->num);
                printf(temp->next == NULL ? "\n" : " ");
                temp = temp->next;
            }
        }
    }
    
    struct node *s = root;
    int sum = 0;
    while(s != NULL){
        sum += s->num;
        s = s->next;
    }
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / count);
}