/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_add_var.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:52:33 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 12:58:35 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char	**min_env_add_var(char **env, char *var)
{
	int		i;
	int		j;
	char	**new;

	i = 0;
	new = (char **)ft_memalloc(sizeof(env) + sizeof(char *));
	while (env[i])
	{
		j = ft_strlen(env[i]);
		new[i] = ft_strnew(j);
		ft_strcpy(new[i], env[i]);
		i++;
	}
	new[i] = ft_strdup(var);
	new[++i] = NULL;
	return (new);
}
