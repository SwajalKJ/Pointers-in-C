/*
Q10. Access 2D array using pointers
int arr[3][4]; int (*p)[4]; p=arr;
sizeof(p), sizeof(*p), sizeof(**p) , values of p, p+1
Check equivalence of arr[i][j], (*(p+i))[j], *(*(p+i)+j)
*/
#include <stdio.h>
void main()
{
	int arr[3][4];
	int(*p)[4];
	p = arr;

	printf("%ld\n", sizeof(p));
	printf("%ld\n", sizeof(*p));
	printf("%ld\n", sizeof(**p));
	printf("%u\n", p);
	printf("%u\n", (p + 1));

	printf("value of matrix using arr[i][j]\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%10d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// for (*(p+i))[j]
	printf("value of matrix using (*(p+i))[j]\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%10d\t", (*(p + i))[j]);
		}
		printf("\n");
	}
	printf("\n");

	// for *(*(p+i)+j)
	printf("value of matrix using *(*(p+i)+j))\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%10d\t", *(*(p + i) + j));
		}
		printf("\n");
	}
	printf("\n");
}
