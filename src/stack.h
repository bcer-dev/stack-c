#include <stdbool.h>
#include <stdlib.h>

#define STACK_MAX 5

typedef struct
{
    int count;
    int *items;
} stack;


stack create_stack();
void push(stack *st, int x);
bool is_empty(stack *st);
int peek(stack *st);
int pop(stack *st);
void st_free(stack *st);