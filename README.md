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
