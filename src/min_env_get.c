/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:19:18 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 11:38:18 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char	**min_env_get(char **env)
{
	int		i;
	int		j;
	char	**new;

	i = 0;
	new = (char **)ft_memalloc(sizeof(env));
	while (env[i])
	{
		j = ft_strlen(env[i]);
		new[i] = ft_strnew(j);
		ft_strcpy(new[i], env[i]);
		i++;
	}
	new[i] = NULL;
	return (new);
}
