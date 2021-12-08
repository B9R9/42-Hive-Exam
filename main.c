/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:24:36 by briffard          #+#    #+#             */
/*   Updated: 2021/12/01 16:11:01 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libexam.h"

int     main()
{
    system("clear");

    /*HEADER*/
    printf("/***************************************************************************/\n");
    printf("/*                                                                         */\n");
    printf("/*        :::    ::::::::                                                  */\n");
    printf("/*      :+:    :+:    :+:                                                  */\n");
    printf("/*     +:+ +:+       +:+    =====                                          */\n");
    printf("/*  +#+  +:+       +#+     ||     \\  /  =======  ||\\  /||                  */\n");
    printf("/* +#+#+#+#+#+    +#+       ====   \\/   ||   ||  || \\/ ||       _          */\n");
    printf("/*       #+#    +#+        ||      /\\   ||===||  ||    ||  _  _|_|_  _     */\n");
    printf("/*      ###    ########     ====  /  \\  ||   ||  ||    ||   \\_('_')_/      */\n");
    printf("/*                                                                         */\n");
    printf("/***************************************************************************/\n");

    /*Welcome Message
	 * This is place where you can pratice your coding skill in the same way that the exam Alone in the dark
	 *
	 *
	 *
	 * MENU
	 * MODE SANDBOX ---> pratice without any restriction no time limit/ no point / only fun
	 * MODE EXAM    ---> 3h and points // same enviroment than Alone in the dark
	 * MODE TIME    ---> define a time line per exercisie 
	 * MODE RUSSIAN ---> exercise until you fail
 	 *
	 *
	 * exercises are choosen ramdomly
	 * exercises are class by level of difficulties
	 *
	 *
	 *
*/
	printf("%d\n", ft_randomnbr());
	
}
