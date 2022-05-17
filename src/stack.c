#include "stack.h"

stack create_stack()
{
    stack s;
    s.count = 0;
    s.items = malloc(sizeof(int) * 5);
    return s;
}

void push(stack *st, int x)
{
    if (st->count == STACK_MAX)
        return;
    st->items[st->count++] = x;
}

bool is_empty(stack *st)
{
    return st->count == 0;
}

int peek(stack *st)
{
    if (is_empty(st))
        return -1e5;
    return st->items[st->count - 1];
}

int pop(stack *st)
{
    if (is_empty(st))
        return -1e5;
    return st->items[--st->count];
}

void st_free(stack *st)
{
    free(st->items);
}