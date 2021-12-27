/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:39:54 by briffard          #+#    #+#             */
/*   Updated: 2021/12/27 13:50:00 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./include/libexam.h"
//#include "./libft/includes/libft.h"

static char	*file_name(char *fn)
{
	fn[ft_strlen(fn)] = '\0';
	return (fn);
}

int	main()
{

	int		fd, lvl, ret;
	int	secondchoice;

	char	*test;


	system("clear");
	sandbox_header();

/*----------------------- INTRODUCTION TEXTE --------------------------------*/
	fd = open("./text/sandbox.welcome.txt", O_RDONLY);
	if (!fd)
		ft_putstrcolor("ERROR WELCOME MESSAGE", "red");
	ft_display_file(fd);
	close(fd);

/*--------------------------- CHOICE OF LEVEL -------------------------------*/

	printf("At witch level do you want start ? \n");
	ret = scanf("%d", &lvl);
	if (!ret) //in case of problem
		printf("ERROR");;
 /*
  *  we should also handle if the user choice is n > 0 ou n < 5
 */
/*---------------------GENERATOR FUNCTION -----------------------------------*/

	do
	{	
	test = function_generator(lvl);

/*--------------------DISPLAY INSTRUCTION------------------------------------*/

	/*CREATION OF THE SUMISSION FOLDER*/
	system("clear");
	system("bash create_submissionfolder.sh");

	//test = file_name(test); //Try to remove '\n' at the end of test
	//-> not sure about it
	/*BETTER SOLUTION----------
	 * use ft_get_next_line in function generator  to get the line without \n
	 * we can try also to copy test in a new str chr by chr and stop before the
	 * \n
	 * */
	sandbox_header();
	printf("CURRENT  LVL : %d\n", lvl);//find a nicer place 
	openinstruction(file_name(test), lvl);

/*------------------------------ FILE CHECKER -------------------------------------*/

/*Differents ideas to check file
-> check forbiden function (bash script take a look at the libfttester
-> Check normi : thhis can be activate or desactivate)! if norminette is not present we should install it 
-> check compilation : we are looking for compilation problem
-> check memory leaks : maybe more for a hard core mode
-> check the output : still think about it : some checker use strcmp 
-> 
*/

/*correction*/
/* We should offer the possibility in case of failure to explain what is expected and how to get the output
we can do some functions who will explain line by line with the evolution of the variable 
It can take differents form . Something to read, or it can also in an interactive way like:
EX:
write(1,_____,1);

What should be there instead of _______
your answer:

It can take multiple answer like
EX:

void ft_putstr(1._______  str)
{
    if(!2.___)
        3.____ (NULL);
    4.____
        while(5.______)
            ft_putchar(6.____);
}
Please Write the answers 
1.
2.
3.
...

we can can create function HELP who give you acces to definition of function of diiferent 

We can maybe also create some multiple choice answer test.
*/

/*------------------------- MENU END -------------------------------------------*/
    ft_putchar('\n');
    printf("-----------------------------------------------------------------\n");                
    ft_putstrcolor("1 - NEXT FUNCTION ","green");
    ft_putstrcolor(" 2 - LVL DOWN ", "blue");
    ft_putstrcolor(" 3 - LVL UP ", "red");
    ft_putstrcolor(" 4 - SUBMIT ", "yellow");
    ft_putstrcolor(" 5 - EXIT \n","white");
    printf("-----------------------------------------------------------------\n");
    scanf("%d", &secondchoice);

	switch(secondchoice)
	{
		case 1:
			test = function_generator(lvl);
			break ;
		case 2:
			if (lvl > 0)
				lvl -= 1;
			test = function_generator(lvl);
			break ;
		case 3:
			if (lvl < 5)
				lvl += 1;
			test = function_generator(lvl);
			break ;
		case 4:
			/*NEED CHECKER CODE */
		//	if(correctorfunction(test, lvl) == 1)
		//		succeescounter += 1;
		//		if (successcounter == 3)
		//			life(lvl, success);
		//			sucesscount = 0;
		//	else 
		//		failedcounter -=1;
		//		if (falied counter == 3)
		//			life(lvl,failed)
		//			faliedcounter = 0;
	
		//	lvl = life(1, lvl);
			break ;
	}
	}while (secondchoice != 5);
}
