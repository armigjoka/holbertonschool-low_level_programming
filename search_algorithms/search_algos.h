#ifndef _SEARCH_ALGORITHMS_H_
#define _SEARCH_ALGORITHMS_H_

#include <stdio.h>
#include <stdlib.h>

#define MIN(A, B) ((A) < (B) ? (A) : (B))

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
