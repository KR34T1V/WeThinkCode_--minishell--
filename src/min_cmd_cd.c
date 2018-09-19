/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_cd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 09:23:00 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 09:45:03 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_cd(int ac, char **av, char ***env)
{
	int		i;
	char	*tmp;

	i = 0;
	min_shell_path(&av, env);
	if (ac <= 1)
		ft_printf("\e[91mUsage:\n\tcd [PATH]\e[96m\n");
	else if (av[1] && 0 == chdir(av[1]))
	{
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
	return (0);
}