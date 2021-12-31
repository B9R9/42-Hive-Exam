/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openinstruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:17:15 by briffard          #+#    #+#             */
/*   Updated: 2021/12/31 11:00:05 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libexam.h"
#include "./libft/libft.h"

void	openinstruction(char *fn, int lvl)
{
	/*---------------------------DANGER ------------------------
	 * The result of  ft_strcmp is not  reliable
	 * it can generate mistake when you will have a difference of 10 between
	 * two string
	 */
	if (lvl == 0)
	{
		int	fd = 0;

		if(ft_strcmp(fn, "hello") == 10)
		{
			fd = open("./text/instruction/lvl0/hello.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "aff_a")== 10)
		{
			fd = open("./text/instruction/lvl0/aff_a.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
			else if(ft_strcmp(fn, "aff_first_param") == 10)
		{
			fd = open("./text/instruction/lvl0/aff_first_param.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "aff_last_param") == 10)
		{
			fd = open("./text/instruction/lvl0/aff_last_param.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "aff_z") == 10)
		{
			fd = open("./text/instruction/lvl0/aff_z.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_countdown") == 10)
		{
			fd = open("./text/instruction/lvl0/ft_countdown.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_print_numbers") == 10)
		{
			fd = open("./text/instruction/lvl0/ft_print_numbers.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "maff_alpha") == 10)
		{
			fd = open("./text/instruction/lvl0/maff_alpha.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "maff_revalpha") == 10)
		{
			fd = open("./text/instruction/lvl0/maff_revalpha.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "only_a") == 10)
		{
			fd = open("./text/instruction/lvl0/only_a.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "only_z") == 10)
		{
			fd = open("./text/instruction/lvl0/only_z.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else
			ft_putstrcolor("erreur dans open instruction!", "red");
		ft_display_file(fd);
		close(fd);
	}
/*--------------------------------- LEVEL 1 ---------------------------------*/

	else if (lvl == 1)
	{
		int	fd = 0;

		if(ft_strcmp(fn, "ft_strcpy") == 10)
		{
			fd = open("./text/instruction/lvl1/ft_strcpy.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_strlen")== 10)
		{
			fd = open("./text/instruction/lvl1/ft_strlen.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "repeat_alpha") == 10)
		{
			fd = open("./text/instruction/lvl1/repeat_alpha.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "search_and_replace") == 10)
		{
			fd = open("./text/instruction/lvl1/search_and_replace.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ulstr") == 10)
		{
			fd = open("./text/instruction/lvl1/ulstr.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "rot_13") == 10)
		{
			fd = open("./text/instruction/lvl1/rot_13.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "rotone") == 10)
		{
			fd = open("./text/instruction/lvl1/rotone.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "first_word") == 10)
		{
			fd = open("./text/instruction/lvl1/first_word.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_putstr") == 10)
		{
			fd = open("./text/instruction/lvl1/ft_putstr.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_swap") == 10)
		{
			fd = open("./text/instruction/lvl1/ft_swap.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "rev_print") == 10)
		{
			fd = open("./text/instruction/lvl1/rev_print.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else
		{
			printf("%s\n",fn);
			ft_putstrcolor("erreur dans open instruction!", "red");
		}
		ft_display_file(fd);
		close(fd);
	}
/*--------------------------- LEVEL 2 ---------------------------------------*/

	else if (lvl == 2)
	{
		int	fd = 0;

		if(ft_strcmp(fn, "alpha_mirror") == 10)
		{
			fd = open("./text/instruction/lvl2/alpha_mirror.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "do_op")== 10)
		{
			fd = open("./text/instruction/lvl2/do-op.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_atoi") == 10)
		{
			fd = open("./text/instruction/lvl2/ft_atoi.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_strcmp") == 10)
		{
			fd = open("./text/instruction/lvl2/ft_strcmp.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_strdup") == 10)
		{
			fd = open("./text/instruction/lvl2/ft_strdup.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_strrev") == 10)
		{
			fd = open("./text/instruction/lvl2/ft_strrev.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "inter") == 10)
		{
			fd = open("./text/instruction/lvl2/inter.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "is_power_of_2") == 10)
		{
			fd = open("./text/instruction/lvl2/is_power_of_2.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "last_word") == 10)
		{
			fd = open("./text/instruction/lvl2/last_word.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "max") == 10)
		{
			fd = open("./text/instruction/lvl2/max.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "print_bits") == 10)
		{
			fd = open("./text/instruction/lvl2/print_bits.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "reverse_bits") == 10)
		{
			fd = open("./text/instruction/lvl2/reverse_bits.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "swap_bits") == 10)
		{
			fd = open("./text/instruction/lvl2/swap_bits.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "union") == 10)
		{
			fd = open("./text/instruction/lvl2/union.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "wdmatch") == 10)
		{
			fd = open("./text/instruction/lvl2/wdmatch.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else
		{
			printf("ERROR WITH : %s\n",fn);
			ft_putstrcolor("erreur dans open instruction!", "red");
		}
		ft_display_file(fd);
		close(fd);
	}

/*--------------------------- LEVEL 3 ---------------------------------------*/

	else if (lvl == 3)
	{
		int	fd = 0;

		if(ft_strcmp(fn, "add_prime_sum") == 10)
		{
			fd = open("./text/instruction/lvl3/add_prime_sum.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "epur_str")== 10)
		{
			fd = open("./text/instruction/lvl3/epur_str.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "expand_str") == 10)
		{
			fd = open("./text/instruction/lvl3/expand_str.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_atoi_base") == 10)
		{
			fd = open("./text/instruction/lvl3/ft_atoi_base.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_list_size") == 10)
		{
			fd = open("./text/instruction/lvl3/ft_list_size.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_range") == 10)
		{
			fd = open("./text/instruction/lvl3/ft_range.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_rrange") == 10)
		{
			fd = open("./text/instruction/lvl3/ft_rrange.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "hidenp") == 10)
		{
			fd = open("./text/instruction/lvl3/hidenp.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "lcm") == 10)
		{
			fd = open("./text/instruction/lvl3/lcm.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "paramsum") == 10)
		{
			fd = open("./text/instruction/lvl3/paramsum.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "pgcd") == 10)
		{
			fd = open("./text/instruction/lvl3/pgcd.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "print_hex") == 10)
		{
			fd = open("./text/instruction/lvl3/print_hex.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "rstr_capitalizer") == 10)
		{
			fd = open("./text/instruction/lvl3/rstr_capitalizer.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "str_capitalizer") == 10)
		{
			fd = open("./text/instruction/lvl3/str_capitalizer.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "tab_mult") == 10)
		{
			fd = open("./text/instruction/lvl3/tab_mult.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else
		{
			printf("ERROR WITH = %s\n", fn);
			ft_putstrcolor("erreur dans open instruction!", "red");
		}
			ft_display_file(fd);
		close(fd);
	}
/*--------------------------- LEVEL 4 ---------------------------------------*/

	else if (lvl == 4)
	{
		int	fd = 0;

		if(ft_strcmp(fn, "brainfuck") == 10)
		{
			fd = open("./text/instruction/lvl4/brainfuck.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "check_mate")== 10)
		{
			fd = open("./text/instruction/lvl4/check_mate.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "flood_fill") == 10)
		{
			fd = open("./text/instruction/lvl4/flood_fill.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "fprime") == 10)
		{
			fd = open("./text/instruction/lvl4/fprime.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_itoa_base") == 10)
		{
			fd = open("./text/instruction/lvl4/ft_itoa_base.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_itoa") == 10)
		{
			fd = open("./text/instruction/lvl4/ft_itoa.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_list_foreach") == 10)
		{
			fd = open("./text/instruction/lvl4/ft_list_foreach.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_list_remove") == 10)
		{
			fd = open("./text/instruction/lvl4/ft_list_remove.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "ft_split") == 10)
		{
			fd = open("./text/instruction/lvl4/ft_split.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "rev_wstr") == 10)
		{
			fd = open("./text/instruction/lvl4/rev_wstr.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "rostring") == 10)
		{
			fd = open("./text/instruction/lvl4/rostring.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "sort_in_tab") == 10)
		{
			fd = open("./text/instruction/lvl4/sort_int_tab.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "sort_list") == 10)
		{
			fd = open("./text/instruction/lvl4/sort_list.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}

		else
		{
			printf("error  with %s\n", fn);
			ft_putstrcolor("erreur dans open instruction!", "red");
		}
		ft_display_file(fd);
		close(fd);
	}
/*--------------------------- LEVEL 5 ---------------------------------------*/

	else if (lvl == 5)
	{
		int	fd = 0;

		if(ft_strcmp(fn, "print_memory") == 10)
		{
			fd = open("./text/instruction/lvl5/print_memory.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "brackets")== 10)
		{
			fd = open("./text/instruction/lvl5/brackets.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "rpn_calc") == 10)
		{
			fd = open("./text/instruction/lvl5/rpn_calc.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "options") == 10)
		{
			fd = open("./text/instruction/lvl5/options.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "biggest_pal") == 10)
		{
			fd = open("./text/instruction/lvl5/biggest_pal.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "cycle_detector") == 10)
		{
			fd = open("./text/instruction/lvl5/cycle_detector.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
/*		else if(ft_strcmp(fn, "ft_print_numbers") == 10)
		{
			fd = open("./text/ft_print_numbers.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "maff_alpha") == 10)
		{
			fd = open("./text/maff_alpha.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "maff_revalpha") == 10)
		{
			fd = open("./text/maff_revalpha.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "only_a") == 10)
		{
			fd = open("./text/only_a.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}
		else if(ft_strcmp(fn, "only_z") == 10)
		{
			fd = open("./text/only_z.txt", O_RDONLY);
			if (!fd)
				ft_putstrcolor("ERROR", "red");
		}*/
		else
			ft_putstrcolor("erreur dans open instruction!", "red");
		ft_display_file(fd);
		close(fd);
	}
}

