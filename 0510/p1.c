#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 12
struct node
{
    char data[100];
    struct node *next;
};

int main()
{
    FILE *r = fopen("input.txt", "r");
    FILE *w = fopen("output.txt", "w");

    struct node *head = NULL;
    struct node *root = NULL;

    char temp[100];
    while (fscanf(r, "%s", temp) != EOF)
    {
        printf("%s\n", temp);
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            root = head;
            strcpy(head->data, temp);
        }
        else
        {
            head->next = (struct node *)malloc(sizeof(struct node));
            head = head->next;
            strcpy(head->data, temp);
        }
    }

    while(root != NULL)
    {
        fprintf(w, "%s\n", root->data);
        root = root->next;
    }
}