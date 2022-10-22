#include<stdio.h>
#include<unistd.h>

int main(int argc, char **argv)
{
	int my_array[] = {1, 2, 3, 4};
	int my_array_md[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int my_array_nd[3][3] = {1, 2, 3, 4, 5, 6, 6, 7, 9};

	int i;
	int j;
	int size;
	i = 0;
	j = 0;

	size = 0;
	size = sizeof(my_array) / sizeof(int);
	
	printf("size %i\n", size);

	// this loop prints out the first one dimensional array
	while(i < 4)
	{
		printf("my_array[%i]\t", i);
		printf("index: %d\t", i);
		printf("value: %d\n", my_array[i]);
		i++;
	}
	printf("\n");
	
	// this loop prints out the first multi dimensional array
	i = 0;
	while(i <= 2)
	{
		while(j <= 2)
		{
			printf("%d", my_array_md[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	// this loop just to show that the second multi dimenstional array, even if it is declared in another way work just the same
	i = 0;
	while(i <= 2)
	{
		while(j <= 2)
		{
			printf("%d", my_array_nd[i][j]);
			j++;
		}
		j = 0;
		i++;
	}

	return (0);
}