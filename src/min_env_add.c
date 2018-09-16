/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:40:13 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 13:25:24 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char	**min_env_add(char **env, char *new)
{
	int		i;
	char	**tmp;

	tmp = env;
	i = 0;
	env = (char **)ft_memalloc(sizeof(tmp) + (sizeof(char *)));
	while (tmp[i])
	{
		env[i] = ft_strdup(tmp[i]);
		i++;
	}
	env[i] = ft_strdup(new);
	env[++i] = NULL;
	free(tmp);
	ft_strdel(&new);
	return (env);
}
