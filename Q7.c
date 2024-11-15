/*
Q7. int arr[5];
	int (*parr)[5];
	parr=&arr;
	sizeof(parr), sizeof(*parr), sizeof(**parr)
access array elements with suitable dereferencing of parr
*/
#include <stdio.h>
void main()
{
	int arr[5];
	int(*parr)[5];
	parr = &arr;
	printf("%ld\n", sizeof(parr));	 // 8 bytes, size of pointer
	printf("%ld\n", sizeof(*parr));	 // (array size) * (integer size)  = 5 x 4 = 20 bytes
	printf("%ld\n", sizeof(**parr)); // 4 bytes, size of integer
}
