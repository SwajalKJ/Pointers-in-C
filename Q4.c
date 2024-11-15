/*
Q4. Given
int a[5] = {10, 20, 30, 40, 50 };
int *p=a, *q=*(&a+1) - 1;
evaluate following expressions
*p++, *++p, (*p)++, ++(*p), ++*p, *(p++), *(++p), *q--, *--q, --(*q), --*q, (*q)--, *(q--), *(--q)
*/
#include <stdio.h>
void main()
{
	int a[5] = {10, 20, 30, 40, 50};
	int *p = a, *q = *(&a + 1) - 1;
	printf("*p = %p\n", p); // Printing address of the pointer p
	printf("*q = %p\n", q); // Printing address of the pointer q

	printf("-------------------------\n");
	//*p++;
	printf("*p++ = %d\n", *p++); // Pointer at start of array and then Post-increment the address
	//*q++;
	printf("*q++ = %d\n", *q++); // Pointer at end of array and then Post-increment the address
	//*++p;
	printf("*++p = %d\n", *++p); // Pre-increment of pointer location a[0] to a[1]
	//(*p)++;
	printf("(*p)++ = %d\n", (*p)++); // Increment of pointer location a[1] to a[2] and then Post-increment in value
	//++(*p);
	printf("++(*p) = %d\n", ++(*p)); // Pre-increment of value on the location
	//++*p;
	printf("++*p = %d\n", ++*p); // Pre-increment of value on the location
	//*(p++);
	printf("*(p++) = %d\n", *(p++)); // Post-increment value & Post-increment of pointer location
	//*(++p);
	printf("*(++p) = %d\n", *(++p)); // Pre-increment of pointer location but no change in pointer value
	//*q--;
	printf("*q-- = %d\n", *q--); // It is accessing a[6] which is storing garbage value
	//*--q;
	printf("*--q = %d\n", *--q); // Pre-decrement pointer location resulted in location a[3];
	//--(*q);
	printf("--(*q) = %d\n", --(*q)); // Value is Pre-decremented but location remains same
	//--*q;
	printf("--*q = %d\n", --*q); // Value is Pre-decremented but location remains same
	//(*q)--;
	printf("(*q)-- = %d\n", (*q)--); // Location remains same but value will be Post-decremented
	//*(q--);
	printf("*(q--) = %d\n", *(q--)); // Value will be Post-decremented also the location will be Pre-decremented from a[3] to a[2]
	//*(--q);
	printf("*(--q) = %d\n", *(--q)); // Pre-decrement of location from a[2] to a[1] the value on location a[1] will also Pre-decrement
}
