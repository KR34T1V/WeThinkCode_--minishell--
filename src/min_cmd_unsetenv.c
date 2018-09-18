/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_unsetenv.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 08:30:44 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/18 09:14:43 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_unsetenv(int ac, char **av, char ***env)
{
	int		i;

	i = 1;
	if (ac == 1)
		ft_printf("Usage:\n\tunsetenv [Var]");
	else if (ac > 1)
	{
		while (av[i])
		{
			if (min_env_check_var(*env, av[i]))
				min_env_unset(env, av[i]);
			i++;
		}
	}
	return (0);
}
