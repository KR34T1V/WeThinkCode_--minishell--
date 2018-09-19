/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_exe_select.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 14:45:49 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 10:47:20 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		check_av_path(char **av)
{
	int		i;

	if (av[0])
	{
		i = ft_strlen(av[0]);
		while (i >= 0 && av[0])
		{
			if (av[0][i] == '/')
				return (1);
			i--;
		}
	}
	return (0);
}

int		min_cmd_exe_select(char **av, char ***env)
{
	int	i;

	if (check_av_path(av))
		i = min_cmd_path_exe(av, env);
	else
		i = min_cmd_exe(av, env);
	return (i);
}