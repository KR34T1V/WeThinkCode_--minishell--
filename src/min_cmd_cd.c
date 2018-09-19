/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_cd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 09:23:00 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 11:43:26 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

static void	min_cmd_cd_av(char *av, char ***env)
{
	int		i;
	char	*tmp;

	if (av && 0 == chdir(av))
	{
		i = 0;
		tmp = min_env_get_val(env, "PWD=");
		min_env_set_path(env, "OLDPWD=", tmp);
		free(tmp);
		tmp = (char *)ft_memalloc(4098 * sizeof(char *));
		getcwd(tmp, 4098);
		min_env_set_path(env, "PWD=", tmp);
		ft_strdel(&tmp);
	}
	else
		ft_printf("\e[91mERROR: Invalid Path/Permissions\e[96m\n");
}

int		min_cmd_cd(int ac, char **av, char ***env)
{
	char	*tmp;

	if (ac <= 1)
	{
		tmp = min_env_get_val(env, "HOME=");
		if (tmp)
		{
			min_cmd_cd_av(tmp, env);
			ft_strdel(&tmp);
		}
		else
			ft_printf("\e[91mERROR: Home variable not found!\e[96m\n");
	}
	else if (ac > 1)
	{
		min_shell_path(&av, env);
		min_cmd_cd_av(av[1], env);
	}
	return (0);
}