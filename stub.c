#include<stdio.h>
#include<unistd.h>

int main (int argc, char **argv)
{
	// CHECK 1 - LENGTH OF INPUT
	// We need first to parse the string to integers
	// The string will have
	int i;
	int j;
	int k;
	int check_1;

	i = 0;
	check_1 = 1;

	if (argc == 2)
	{
		return (0);
	}

	while(argv[1][i] != '\0')
	{
		i++;
		check_1++;
	}

	if (check_1 != 31)
	{
		return (0);
	}
	
	// CHECK 2 
	// Does the string contains other chars than 1, 2, 3, 4 ans space? If yes exit the program.

	i = 0;
	while(argv[1][i] != '\0')
	{
		// We check for the even chars in the string if they are a space char, if it's not we exit the program
		if (i % 2 == 0)
		{
			if(argv[1][i] != ' ')
			{
				return (0);
			}
		}
		// We check here if the odd chars in the input string are between one and four.
		else
			if((argv[1][i] < '1') || (argv[1][i] > '4'))
			{
				return (0);
			}
		
	// CONVERSION
	// We create an array of integers and we put the values in this array
	// This would be a multidimensional array holding the values of the opposites numbers for every column and row. 
	// The first pair would hold the value of col1up and col1down

	int array_controllers[8][2];
	array_controllers[0][0] = argv[1][0] - 48;
	array_controllers[0][1] = argv[1][2] - 48;
	// Here there is some busy work to do. We can automate it but also to manually.

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


	// LOGIC
	// Here happens the hard work - to solve the rush we don't just need to solve the logic but also to fine a managable programming approach. I don't think if my approach is managable enough. 
	// I show later how it would works for the case that we have 
	// A rule could looks like this. 

		

	// PRINT
	//Print the array - A triple while loop with the logic to print the map with an example map that reproduce the one in the example Annexe 3
	// 1 2 3 4 
	// 2 3 4 1 
	// 3 4 1 2 
	// 4 1 2 3 

	int map_example[4][4][4] = {
		{
			{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, }, {0, 0, 0, 1}
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

	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			while (k < 4)
			{
				if(map_example[i][j][k])
				{
					printf("%d ", k + 1);
				}
				k++;
			}
			
			j++;
		}
		i++;
		printf("/n");
	}
}
