//#include "libft.h"
//#include "testlibft.h"
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdio.h>

void	ft_display_file(int		fd)
{
	char	*buffer;
	while(read(fd,&buffer,1))
		write(1, &buffer,1);
}

void		ft_checkfd()
{
	FILE	*fd;
	char	buffer[1000];

	fd = fopen("ft_putchar.c", "r");
	if(!fd)
		printf("Can not open the file ft_putchar.c\n");
	else
	{
		while(fgets(buffer, 1000, fd) != NULL)
		{
			if(strstr(buffer, "write") != NULL)
				printf("%s", buffer);
		}
		fclose(fd);
	}

}

int main()
{
	ft_checkfd();
open}
