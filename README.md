# stack-c

This is an implementation of the stack data structure in the C programming language. (in usage, don't forget to call `st_free()`)

## What is a stack?

Stacks are a useful data structure with many uses. You can imagine it as a stack of books. When you add a book to the top of the stack, that book has to be the first one to come of in order to access the other books. This is called LIFO, or Last In First Out.

## What can a stack be used for?

There are many things stacks can be used for. For instance, the stack in a computers memory is an instance of this. You can visualize this with recursion:

```
n! = n * (n - 1), where 0! = 1
If you were to call 3!,
you could see it as:
 -------
|   0!  | = 1
 -------
|   1!  | = 1 * 0! = 1 * 1 = 1
 -------
|   2!  | = 2 * 1! = 2 * 1 = 2
 -------
|   3!  | = 3 * 2! = 3 * 2 = 6
 -------
```

## Time-complexity of a stack

One of the best things about a stack is that all of it's operations run in O(1) time.
That being said however, the size of a stack is also constant which can be a drawback.

## Usage

To create a stack, first include `stack.h`.
Then call the `create_stack()` function, which will return a stack on the stack (pun not intended) with a pointer to an int array of size `stack_sz` on the heap.
From here, you can use whichever stack functions you feel are necessary.

## Examples

### Reverse Array

```C
#include "stack.h"

void reverse(int *input, int *output, int n)
{
	stack s = create_stack(n);
	for (int i = 0; i < s.max; ++i)
		push(&s, input[i]);

	int i = 0;
	while (!is_empty(&s))
		output[i++] = pop(&s);

	st_free(&s);
}
```
