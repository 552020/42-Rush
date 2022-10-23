#include<stdio.h>

int main(void)
{
	int j;
	int k;
	int *ptr;

	if(j == 0)
	{
		printf("j is equal to 0");
	}
	if (j != 0)
	{
		printf("j is NOT equal to 0\n");
	}

	if(ptr == NULL)
	{
		printf("ptr is equal to NULL");
	}

	if(ptr != NULL)
	{
		printf("ptr is NOT equal to NULL");
	}
	return (0);
}