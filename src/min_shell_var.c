/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_shell_var.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 15:19:17 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/18 16:12:17 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_shell_var(char ***av, char ***env)
{
	char	*tmp;
	char	*var;
	int		i;

	i = 0;
	while ((*av)[i])
	{
		if ((*av)[i][0] == '$')
		{
			tmp = ft_strsub((*av)[i], 1, ft_strlen((*av)[i]));
			var = min_env_get_var(tmp);
			ft_strdel(&tmp);
			if (min_env_check_var(*env, var))
			{
				tmp = (*av)[i];
				(*av)[i] = min_env_get_val(env, var);
				ft_strdel(&tmp);
			}
			free(var); //WHAT ?
		}
		i++;
	}
}
