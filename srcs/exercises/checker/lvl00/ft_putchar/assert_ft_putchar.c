
#include<string.h>
#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>

void	ft_putchar(char c);

int		main()
{
	//char	buf[100];

	/*CHECK NORMINETTE*/
	//printf("Norminette: ");
	//system("bash checknormi.sh"); //Looking for OK! or ERROR!
	/* open checknorminette.txt read only
	 * while fgets(fgets(buffer,100, fd) != NULL)
	 *	{
	 *		if(ft_strstr(buffer, "OK!") != NULL)
	 *			printf NOrminette OK
	 *		else 
	 *			printf (error dans la norme Consultez addresse du file 
	 *			cpy du fichier report dans un dossier report a la racine du ficher creer)
	 */
    char    c;
    c = 0;
    while(c < 127)
    {
        ft_putchar(c);
        c++;
    }
    ft_putchar('\n');
}	
