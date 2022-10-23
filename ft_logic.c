#include<stdio.h>
#include<unistd.h>

int		**ft_check_view_1(int map[4][4][4], char p_1, int p_2, int view);
int		**ft_rule_4_col(int man[4][4][4]);
int		**ft_putnumber(int map[4][4][4], int j, int i, int number);
void	ft_print_map(int map[4][4][4]);

int main (int argc, char **argv)
{	
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	// int views[] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1,1, 2, 2, 2};
	// int view_h[] = { {4, 1}, {3, 2}, {2, 2}, {1, 2}};
	// int view_v[] = { {4, 1}, {3, 2}, {2, 2}, {1, 2}};

	int col1up;
	int col2up;
	int col3up;
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
	
	col1up = 4; // map[0][1]
	col2up = 3;
	col3up = 2;
	col4up = 1;
	row1right = 1;
	row2right = 2;
	row3right = 2;
	row4right = 2;
	col1down = 4;
	col2down = 3;
	col3down = 2;
	col4down = 1;
	row1left = 1;
	row2left = 2;
	row3left = 2;
	row4left = 2;

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

/* TODO Write a function, which takes three arugments:
- a three dimensional array 
- a value for  column or row  
- the number of the column or of the row */

ft_putnumber(map, 0, 0, 4);
map = ft_putnumber(map, 0, 0, 4);

}

// int **ft_check_view_1(int map[4][4][4], char p_1, int p_2, int view)
// {
// 	if (p_1 == 'c' && view == 4)
//  	{
// 		// TODO write this function
// 		//ft_rule_4_col(map); 
//  	}
// 	if (p_1 == 'r' && view == 4)
// 	{
// 		// TODO write this function
// 		//fr_rule_4_row(map);
//	}
	
//  	return map;
// }

// int **ft_rule_4_col(int man[4][4][4])
// {
// 	/* Some code here*/
// }

int **ft_putnumber(int map[4][4][4], int j, int i, int number)
{
		int k;
		k = 0;
		while(k < 4)
		{

			map[j][i][k] = 0;
			if(map[j][i][k] == number - 1)
			{
				map[j][i][k] = 1;
			}
			k++;
		}
	}

	// ft_put_number_secondary would be to set multiple numbers in the same array

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