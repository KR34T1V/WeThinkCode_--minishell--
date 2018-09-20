/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_exe_select.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 14:45:49 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/20 08:24:07 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		check_av_path(char **av)
{
	int		i;
	char	*tmp;

	if (av[0])
	{
		i = ft_strlen(av[0]);
		while (i > 0 && av[0] && av[0][i] != '/')
			i--;
		tmp = ft_strsub(av[0], 0, i);
		if (ft_isdir(tmp))
		{
			ft_strdel(&tmp);
			return (1);
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
