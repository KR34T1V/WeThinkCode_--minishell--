/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sys_set_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:47:21 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/25 17:28:40 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char	**min_sys_set_path(char ***env)
{
	int		i;
	char	*tmp;
	char	**bin;

	tmp = min_env_get_val(env, "PATH=");
	if (tmp)
	{
		bin = ft_strsplit(tmp, ':');
		ft_strdel(&tmp);
		i = 0;
		while (bin[i])
		{
			tmp = bin[i];
			bin[i] = ft_strjoin(tmp, "/");
			ft_strdel(&tmp);
			i++;
		}
		return (bin);
	}
	else
		return (NULL);
}
