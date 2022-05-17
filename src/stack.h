#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
    int max;
    int count;
    int *items;
} stack;


stack create_stack(int stack_sz);
void push(stack *st, int x);
bool is_empty(stack *st);
int peek(stack *st);
int pop(stack *st);
void st_free(stack *st);