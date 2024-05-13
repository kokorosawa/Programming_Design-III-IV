#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 12
struct node
{
    char data;
    struct node *next;
};

struct node* invert(struct node *head){
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *root = NULL;

    char temp;
    while (scanf("%c", &temp) != EOF)
    {
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            root = head;
            head -> data = temp;
        }
        else
        {
            head->next = (struct node *)malloc(sizeof(struct node));
            head = head->next;
            head -> data = temp;
        }
    }

    root = invert(root);
    while(root != NULL)
    {
        printf("%c", root->data);
        printf(root -> next == NULL ? "\n" : " ");
        root = root->next;
    }
}