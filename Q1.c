/*
Q1. WAP to Check the endianness (little or big) of your current system.
*/
#include <stdio.h>

void main()
{
	int n = 12345, *i_ptr, x;
	char *c_ptr; // character pointer increment by 1 byte and retrieve 1 byte of data

	i_ptr = &n;
	c_ptr = (char *)i_ptr;

	printf("n = %08x in hex\n", n);
	for (x = 0; x < sizeof(n); x++)
	{
		printf("%08x\n", (int)(*c_ptr));
		c_ptr++;
	}
	x = *(c_ptr + 3);

	if (x == (n & 255))
	{
		printf("Big Endian\n");
	}
	else
	{
		printf("Little Endian\n");
	}
}
