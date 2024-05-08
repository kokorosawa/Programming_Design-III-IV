#include <stdio.h>
#include <string.h>
struct Instruction
{
    int id;
    char instruction[100];
    int redirect;
} typedef Instruction;

Instruction instruction[100];

int helper(int index, int call_id)
{
    if (instruction[index].instruction[0] == 'L')
    {
        instruction[call_id].redirect = instruction[index].id;
        return -1;
    }
    else if (instruction[index].instruction[0] == 'R')
    {
        instruction[call_id].redirect = instruction[index].id;
        return 1;
    }
    //  printf("Turning same as %d %s %d\n", instruction[index].id, instruction[instruction[index].id].instruction, instruction[instruction[index].id].id);
    // printf("redirect: %d\n", instruction[instruction[index].id].redirect);
    return helper(instruction[instruction[index].id].redirect, call_id);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int instruction_num;
        scanf("%d", &instruction_num);
        int instruction_index = 1;
        int res = 0;
        for (int j = 0; j < instruction_num; j++, instruction_index++)
        {

            scanf("%s", instruction[instruction_index].instruction);
            instruction[instruction_index].id = instruction_index;
            if (instruction[instruction_index].instruction[0] == 'L')
            {
                // printf("Turning left\n");
                res -= 1;
            }
            else if (instruction[instruction_index].instruction[0] == 'R')
            {
                // printf("Turning right\n");
                res += 1;
            }
            else if (instruction[instruction_index].instruction[0] == 'S')
            {
                int index;
                char temp[100];

                scanf("%s %d", temp, &index);
                // printf("Turning same as %d\n", index);
                helper(index, instruction[instruction_index].id);
                // printf("res: %d\n", helper(index, instruction[instruction_index].id));
                res += helper(index, instruction[instruction_index].id);
            }
            // printf("%s %d\n", instruction[instruction_index].instruction, instruction[instruction_index].id);
        }
        printf("%d\n", res);
    }
}