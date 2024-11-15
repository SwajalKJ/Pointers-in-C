/*
Q6. WAP to Test arithmetic operation on void pointers
*/
#include <stdio.h>
void main()
{
	int a[4] = {12, 13, 14, 15};
	void *v_ptr;
	v_ptr = &a;

	for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
	{
		printf("%d\n", *(int *)v_ptr + i);
	}
}
