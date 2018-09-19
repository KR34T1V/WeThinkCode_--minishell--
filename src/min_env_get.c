/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:19:18 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 14:10:45 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char	**min_env_get(char **env)
{
	int		i;
	char	**new;

	i = 0;
	new = (char **)ft_memalloc(ft_sizeof2d_char(env) * sizeof(char *));
	while (env[i])
	{
		new[i] = ft_strdup(env[i]);
		i++;
	}
	new[i] = NULL;
	i = 0;
	return (new);
}
