/*
Q12. What is the significance of following pointer
int (*q)[3][4];
What are the sizes of q, *q, **q, ***q
Write some code to test this with a 2D array.
*/
#include <stdio.h>
void main()
{
	int(*q)[3][4];
	// sizes of q, *q, **q, ***q
	printf("%ld\n", sizeof(q));	   // 8 bytes, size of pointer
	printf("%ld\n", sizeof(*q));   // whole array, (size of array1) * (size of array2) * (size of integer) =  3 x 4 x 4 = 48 bytes
	printf("%ld\n", sizeof(**q));  // element row, (size of integer) * (size of integer) as it is 2d array = 4 x 4 = 16 bytes
	printf("%ld\n", sizeof(***q)); // element, (size of integer) = 4 bytes

	// Write some code to test this with a 2D array.
	int i, j;
	int arr[3][4] = {
		{00, 01, 02, 03},
		{10, 11, 12, 13},
		{20, 21, 22, 23}};
	for (i = 0; i < 3; i++)
	{
		printf("Address of %dth array = %p\n", i, arr[i]);
		for (j = 0; j < 4; j++)
		{
			printf("value=[%d] at address [%d]\n", arr[i][j], *(*arr + i) + j);
		}
		printf("\n");
	}
}
