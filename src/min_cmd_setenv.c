/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_setenv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:06:05 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 10:41:12 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_setenv(int ac, char **av, char ***env)
{
	int		i;
	char	*tmp;
	char	*var;

	i = 1;
	if (ac <= 2)
		ft_printf("\e[91mUsage:\n\tsetenv [VARIABLE] [VALUE]\e[96m\n");
	else if (ac > 2)
	{
		var = min_env_get_var(av[1]);
		tmp = var;
		if (min_env_check_var(*env, var))
			min_env_set_val(env, var, av[2]);
		else
		{
			min_env_add_var(env, var);
			min_env_set_val(env, var, av[2]);
		}
		free(tmp);
	}
	return (0);
}
