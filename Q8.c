/*
Q8. Usage of assert macro before dereferencing any pointer.
*/
#include <stdio.h>
#include <assert.h>
void main()
{
	int a = 32;
	int *ptr = &a;
	printf("Before assert value of ptr is %p\n", ptr);
	assert(ptr != NULL);
	printf("After assert value of ptr is %p\n", ptr);
	int value = *ptr;
	printf("value is %d \n", value);
	// assert is used to check whether the pointer is dagling pointer/NULL pointer or pointed to the invalid location
}
