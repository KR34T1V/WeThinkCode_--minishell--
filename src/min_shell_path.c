/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_shell_path.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 09:10:09 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 10:01:52 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

static void	min_shell_path_set(char *val, char ***av)
{
	int		i;
	char	*tmp;
	char	*tmp2;

	if (val)
	{
		i = ft_strlen(val);
		if (val[i] != '/')
		{
			tmp = val;
			val = ft_strjoin(val, "/");
			ft_strdel(&tmp);
		}
		tmp = (*av)[1];
		tmp2 = ft_strsub((*av)[1], 1, ft_strlen(tmp));
		(*av)[1] = ft_strjoin(val, tmp2);
		ft_strdel(&val);
		ft_strdel(&tmp);
		ft_strdel(&tmp2);
	}
}

void		min_shell_path(char ***av, char ***env)
{
	char	*var;
	char	*val;

	var = NULL;
	val = NULL;
	if (*av && (*av)[1] && ((*av)[1][0] == '-' || (*av)[1][0] == '~'))
	{
		if ((*av)[1][0] == '-')
			var = min_env_get_var("OLDPWD=");
		else if ((*av)[1][0] == '~')
			var = min_env_get_var("HOME=");
		val = min_env_get_val(env, var);
		ft_strdel(&var);
		min_shell_path_set(val, av);
	}
}
