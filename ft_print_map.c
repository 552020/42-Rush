#include<stdio.h>
#include<unistd.h>

// void ft_print_map(int ***map);
void ft_print_map(int map[4][4][4]);

int main (int argc, char **argv)
{
	int DUMMY_MAP[4][4][4] = {
		{
			{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0 }, {0, 0, 0, 1}
		},
		{
			{0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}, {1, 0, 0, 0},
		},
		{
			{0, 0, 1, 0}, {0, 0, 0, 1}, {1, 0, 0, 0}, {0, 1, 0, 0}
		},
		{
			{0, 0, 0, 1}, {1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}
		}
	};
	ft_print_map(DUMMY_MAP);
	return (0);
}
void ft_print_map(int map[4][4][4])
// void ft_print_map(int ***map)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	while (i < 4)
	{
		// printf("i index: %d \n", i);
		while (j < 4)
		{
			// printf("j index: %d \n", j);
			while (k < 4)
			{
				if(map[i][j][k])
				{
					printf("%d ", k + 1);
				}
				k++;
			}
			k = 0;
			j++;

		}
		i++;
		j = 0;
		printf("\n");
	}
}