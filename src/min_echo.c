/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_echo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 09:13:58 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 09:53:03 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_echo(int ac, char **av)
{
	int		i;
	int		c;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			c = 0;
			while (av[i][c] != '\0')
			{
				if (av[i][c] == '\'' || av[i][c] == '\"')
					c++;
				else
					ft_putchar(av[i][c++]);
			}
			i++;
			if (i < ac)
				ft_putchar(' ');
		}
	}
	ft_printf("\n");
	return (1);
}
