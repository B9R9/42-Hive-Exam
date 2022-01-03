
#include "./include/libexam.h"
#include "./libft/libft.h"

int main(int argc, char **argv)
{
	if(argc == 0)
		printf("ERROR LINE 9\n");
	else
	{
		if ((ft_strcmp(argv[1],"aff_a")) == 0 && ft_atoi(argv[2]) == 5)
			return (1);
		else 
			return (0);
	}
	return (0);
}
