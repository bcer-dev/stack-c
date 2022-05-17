#include <stdio.h>
#include "stack.h"

int main()
{
	stack s = create_stack(5);
	if (s.items == NULL)
	{
		return 1;
	}

	push(&s, 5);
	push(&s, 6);
	push(&s, 7);

	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));

	st_free(&s);
	return 0;
}