/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:24:36 by briffard          #+#    #+#             */
/*   Updated: 2021/12/08 11:47:33 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libexam.h"
int	main()
{
	header();
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
