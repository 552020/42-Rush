#include<stdio.h>
#include<unistd.h>

int main (int argc, char** argv)
{	
	// argc is the numner of the arguments passed in in the command line plus the name of file
	// The value of argv for command $./a.out '12345' would be 2. 
	printf("argc:\t%d\n", argc);

	if (argc != 1)
	{
		return 0;
	}

	// argv could be an array or an array of arrays, depending on how argv is declared in the main function. If we write 'char* argv[]' we get a simple array, if we write 'char** argv' we get an array of array
	// argc and argv are usally chose by convention, but they are not special name. We can call them the way we want. 
	printf("argv:\t%c\n", argv[1][0]);

	int i;
	i = 0;

	while(argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);

	return (0);

}