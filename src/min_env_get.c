/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:19:18 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 13:06:02 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void min_env_get(char ***environ, char **env)
{
	int		i;
	char	**new;

	i = 0;
	new = (char **)ft_memalloc(sizeof(env));
	while (env[i])
	{
		new[i] = ft_strdup(env[i]);
		i++;
	}
	new[i] = NULL;
	environ = &new;
}
