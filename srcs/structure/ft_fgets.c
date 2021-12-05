#include "libft.h"
#include "testlibft.h"

void	clearBuffer()
{
	int	c = 0;
	while(c != '\n' && c != EOF)
	{
		c = getchar();
	}
}
int		ft_read(char *str, int lenght)
{
	char *start = NULL;

	if(fgets(str, lenght, stdin) != NULL)
	{
		start = strchr(str, '\n');
		if(start != NULL)
		{
			*str = '\0';
		}
		else
		{
			clearBuffer();
		}
		return 1;
	}
	else
	{
		clearBuffer();
		return 0;
	}
}
