/*
Q9. Differentiate between
const int * p;
int const * p
int * const p = &x;
const int * const p = &x;
Try *p=20, p++, (*p)++, p=&y in each case
*/
#include <stdio.h>
void main()
{
	int x;
	const int *p; // int is constant to the pointer location
	int const *q; // pointer is constant to the integer
	int *const r = &x;
	// const int * const p = &x; //as p is already constant and value cannot be constant again
	//*p = 20; //pointer p cannot be changed, content can change
	//*q = 21; //pointer q cannot be changed, content can change
	*r = 22; // pointer  r can be changed, content can change
	p++;
	q++;
	// r++; //increment of read-only variable ‘r’
	//(*p)++; //increment of read-only location ‘*p’
	//(*q)++; //increment of read-only location ‘*q’
	(*r)++;
}
