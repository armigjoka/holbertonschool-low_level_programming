Automatic and dynamic allocation, malloc and free:

The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

The list of some function that are used on more malloc and free:

0-malloc_checked.c - Is the function which is using to allocate the memory.

1-string_nconcat.c - It is a function that involves appending one string to the end of another string.

2-calloc.c - The calloc() function in C is used to allocate a specified amount of memory and then initialize it to zero. The function returns a void pointer to this memory location, which can then be cast to the desired type

3-array_range.c -
The range of an array is the difference between the maximum element of the array and the minimum element. You want to find the minimum range of the array by doing any number of operations on the array. You can do multiple operations on a single element as well.
