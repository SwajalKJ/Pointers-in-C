/*
Q11. Give an expression to print last element of array irrespective of length using pointer notation.
(You shouldn't consider length or size of array)
*/
#include <stdio.h>
#define MAX 100
void main()
{
	int a[MAX], n;
	printf("Enter size of array: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Enter the array element %d: ", i);
		scanf("%d", &a[i]);
	}
	int *p = a, *q = &a[n - 1];
	printf("*p = %p and value on the location is= %d\n", p, *p); // Printing address and value of the pointer p
	printf("*q = %p and value on the location is= %d\n", q, *q); // Printing address and value of the pointer q
	printf("The last element of the array is: %d\n", *q);
}
