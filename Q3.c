/*
Q3. WAP Conversion of integer from little endian to big endian(network order) and vice versa.
*/
#include <stdio.h>
int little_to_big(int a);
int big_to_little(int b);

void main()
{

	int a = 0x1122, b, c;  // variable declared
	char *cp1, *cp2, *cp3; // character pointer increment by 1 byte and retrieve 1 byte of data
	cp1 = (char *)&a;
	cp2 = (char *)&b;
	cp3 = (char *)&c;

	printf("a = %08x\n", a);		 // printing a
	b = little_to_big(a);			 // swapping bytes using function
	printf("swapped b = %08x\n", b); // printing b
	c = big_to_little(b);
	printf("swapped c = %08x\n", c); // printing c
}

int little_to_big(int a) // swapping bytes function
{
	return (((a & 0xFF) << 24) | ((a & 0xFF00) << 8) | ((a & 0xFF0000) >> 8) | ((a & 0xFF000000) >> 24)); // AND-ing value of a with FF at every 2 bytes also OR-ing left shift & right shift of value 8 and 24
}

int big_to_little(int b)
{
	return (((b & 0xFF) << 24) | ((b & 0xFF00) << 8) | ((b & 0xFF0000) >> 8) | ((b & 0xFF000000) >> 24)); // AND-ing value of b with FF at every 2 bytes also OR-ing left shift & right shift of value 8 and 24
}
