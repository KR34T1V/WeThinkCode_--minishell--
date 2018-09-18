/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_unsetenv.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 08:30:44 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/18 16:30:13 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_unsetenv(int ac, char **av, char ***env)
{
	int		i;
	int		toggle;

	i = 1;
	toggle = 0;
	if (ac == 1)
		ft_printf("\e[91mUsage:\n\tunsetenv [VAR]\n\e[96m");
	else if (ac > 1)
	{
		while (av[i])
		{
			if (min_env_check_var(*env, av[i]))
			{
				min_env_unset(env, av[i]);
				toggle = 1;
			}
			i++;
		}
	
	if (toggle == 0)
		ft_printf("\e[91mVARIABLE not found!\e[96m\n");
	}
	return (0);
}
