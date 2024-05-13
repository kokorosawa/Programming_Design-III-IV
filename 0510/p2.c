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

void sort(int list_size, int list[])
{
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
}

struct node* merge(struct node *head1, struct node *head2){
    int temp[100];
    int index = 0;
    while(head1 != NULL){
        temp[index++] = head1->num;
        head1 = head1->next;
    }

    while(head2 != NULL){
        temp[index++] = head2->num;
        head2 = head2->next;
    }

    sort(index, temp);

    struct node *sorted_head = NULL;
    struct node *sorted_root = NULL;

    for(int i = 0; i < index; i++){
       if (sorted_head == NULL)
        {
            sorted_head = (struct node *)malloc(sizeof(struct node));
            sorted_root = sorted_head;
            sorted_head->num = temp[i];
        }
        else
        {
            sorted_head->next = (struct node *)malloc(sizeof(struct node));
            sorted_head = sorted_head->next;
            sorted_head->num = temp[i];
        }
    }

    return sorted_root;

}

int main()
{
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    struct node *root1 = NULL;
    struct node *root2 = NULL;

    int temp;
    
    while(scanf("%d", &temp) != EOF){
        char endl = getchar();
        if(head1 == NULL)
        {
            head1 = (struct node *)malloc(sizeof(struct node));
            root1 = head1;
            head1->num = temp;
        }
        else
        {
            head1->next = (struct node *)malloc(sizeof(struct node));
            head1 = head1->next;
            head1->num = temp;
        }
        if(endl == '\n'){
            break;
        } 
    }

    while(scanf("%d", &temp) != EOF){
        char endl = getchar();
        if(head2 == NULL)
        {
            head2 = (struct node *)malloc(sizeof(struct node));
            root2 = head2;
            head2->num = temp;
        }
        else
        {
            head2->next = (struct node *)malloc(sizeof(struct node));
            head2 = head2->next;
            head2->num = temp;
        }
    }

    struct node *sorted_root = merge(root1, root2);
    while(sorted_root != NULL)
    {
        printf("%d ", sorted_root->num);
        sorted_root = sorted_root->next;
    }
}