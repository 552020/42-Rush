#include<stdio.h>
#include<unistd.h>

void ft_print_map(int map[4][4][4]);

int main (int argc, char **argv)
{	
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	int DUMMY_INPUT[] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	int view_h[] = { {4, 1}, {3, 2}, {2, 2}, {1, 2}};
	int view_v[] = { {4, 1}, {3, 2}, {2, 2}, {1, 2}};

	int col1up;
	int col2up;
	int col3up ;
	int col4up;
	int row1right;
	int row2right;
	int row3right;
	int row4right;
	int col1down;
	int col2down;
	int col3down;
	int col4down;
	int row1left;
	int row2left;
	int row3left;
	int row4left;
	
	col1up = 4;
	col2up = 3;
	col3up = 2;
	col4up = 1;
	row1right = 1;
	row2right = 2;

	int one[4] = {1, 0, 0, 0};
	int two[4] = {0, 1, 0, 0};
	int three[4] = {0, 0, 1, 0};
	int four[4] = {0, 0, 0, 1};


	int map[4][4][4] = {
		{
			{1, 1, 1, 1,}, {1, 1, 1, 1,}, {1, 1, 1, 1,}, {1, 1, 1, 1,}
		},
		{
			{1, 1, 1, 1,}, {1, 1, 1, 1,}, {1, 1, 1, 1,}, {1, 1, 1, 1,},
		},
		{
			{1, 1, 1, 1,}, {1, 1, 1, 1,}, {1, 1, 1, 1,}, {1, 1, 1, 1,}
		},
		{
			{1, 1, 1, 1,}, {1, 1, 1, 1,}, {1, 1, 1, 1,}, {1, 1, 1, 1,}
		}
	};

/* Write a function, which takes a three dimensional array as argument and another argument which represent the column or a row */

}

int **ft_rules_four(int man[4][4][4])
{
	/* some code here*/
	/* take a certain column or row and change all the values from one to four*/
}

void ft_print_map(int map[4][4][4])
// void ft_print_map(int ***map)
{
	int i;
	int j;
	int k;
	char c;

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
					c = '0' + k + 1;
					write(1, &c,1);
					write(1, " ", 1);
					// printf("%d ", k + 1);
				}
				k++;
			}
			k = 0;
			j++;

		}
		i++;
		j = 0;
		write(1, "\n", 1);
	}
}