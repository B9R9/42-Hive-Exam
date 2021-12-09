// Passed Moulinette 2019.09.02

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/*
void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
*/
//---------------------------------------------
// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }

int	main(int argc, char **argv)
{
	char	*result;

	result = "0123456789";
	if (argc == 1)
		return (0);
	if (strcmp(argv[1], result) == 0)
	{
		puts("ok");
		exit (EXIT_SUCCESS);
	}
	else
	{
		puts("ko");
		exit (EXIT_SUCCESS);
	}

	return (0);
}

