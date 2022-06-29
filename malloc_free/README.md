C - malloc, free:

C malloc() method The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially.

Syntax:
ptr = (cast-type*) malloc(byte-size)

Dynamic Memory Allocation in C using malloc(), calloc(), free() and realloc()

Simplyfing the code:

0-create_array.c:
Function that creates an array of chars, and initializes it with a specific char.

1-strdup.c:
Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

2-str_concat.c:	
Function that concatenates two strings.

3-alloc_grid.c:	
Function that returns a pointer to a 2 dimensional array of integers.

4-free_grid.c:	
Function that frees a 2 dimensional grid previously created by alloc_grid function.
