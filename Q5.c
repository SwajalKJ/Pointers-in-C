/*
Q5. WAP to Convert from one type of pointer/address to other using void*
*/
#include <stdio.h>
void main()
{
	int a = 5;
	float b = 4.5, *fp = &b;
	char c = 'A', *cp = &c;
	void *vptr;
	vptr = &a;

	// void pointer can point to any data type
	printf("value of a= %d\n", *(int *)vptr);

	vptr = fp;
	printf("value of b= %f\n", *(float *)vptr);

	vptr = cp;
	printf("value of c= %d\n", *(char *)vptr);
	return 0;
}
