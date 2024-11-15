/*
Q2. WAP to Conversion of short integer from little endian to big endian(network order) and vice versa.
*/
#include <stdio.h>
unsigned short little_to_big(unsigned short a);
unsigned short big_to_little(unsigned short b);

void main()
{

	unsigned short a = 0x1122; // variable declared
	char *cp1, *cp2, *cp3;	   // character pointer increment by 1 byte and retrieve 1 byte of data
	cp1 = (char *)&a;
	unsigned short b; // empty variable to store swapped
	cp2 = (char *)&b;
	unsigned short c; // empty variable to store swapped
	cp3 = (char *)&c;

	printf("a = %04x\n", a);		 // printing a
	b = little_to_big(a);			 // swapping bytes using function
	printf("swapped b = %04x\n", b); // printing b
	c = big_to_little(b);
	printf("swapped c = %04x\n", c); // printing c
}

unsigned short little_to_big(unsigned short a) // swapping bytes function
{
	return ((a << 8) | (a >> 8)); // either left shift or right shift
}

unsigned short big_to_little(unsigned short b) // swapping bytes function
{
	return ((b << 8) | (b >> 8)); // either left shift or right shift
}
