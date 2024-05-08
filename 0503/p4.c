#include <stdio.h>
#include <string.h>
#define CREATION 1
#define INSERTION 2
#define DELETION 3
#define SEARCHING 4
int list[1000];

void sort(int list_size)
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

int main()
{

    int op;
    int list_size = 0;
    memset(list, 0, sizeof(list));
    while (scanf("%d", &op) != EOF)
    {
        if (op == 0)
        {
            break;
        }
        int num;
        scanf("%d", &num);
        if (op == CREATION)
        {
            list[0] = num;
            list_size = 1;
            printf("%d\n", list[0]);
        }
        else if (op == INSERTION)
        {
            int flag = 0;
            for (int i = 0; i < list_size; i++)
            {
                if (list[i] == num)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                for (int i = list_size; i > 0; i--)
                {
                    list[i] = list[i - 1];
                }
                list[0] = num;
                list_size++;
                sort(list_size);
            }
            for (int i = 0; i < list_size; i++)
            {
                printf("%d ", list[i]);
            }
            printf("\b\n");
        }
        else if (op == DELETION)
        {
            for (int i = 0; i < list_size; i++)
            {
                if (list[i] == num)
                {
                    for (int j = i; j < list_size - 1; j++)
                    {
                        list[j] = list[j + 1];
                    }
                    list_size--;
                    break;
                }
            }
            for (int i = 0; i < list_size; i++)
            {
                printf("%d ", list[i]);
            }
            printf("\b\n");
        }
        else if (op == SEARCHING)
        {
            int flag = 0;
            for (int i = 0; i < list_size; i++)
            {
                if (list[i] == num)
                {
                    flag = 1;
                    break;
                }
            }
            flag == 1 ? printf("Yes \n") : printf("No \n");
        }
    }
}