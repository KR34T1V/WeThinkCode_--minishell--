/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_set_val.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:59:41 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 12:26:08 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_env_set_val(char **env, char *var, char *val)
{
	int		i;
	int		len;
	char	*tmp;

	len = ft_strlen(var);
	i = 0;
	while (env[i])
	{
		if (0 == ft_strncmp(env[i], var, len))
		{
			tmp = env[i];
			env[i] = ft_strjoin(var, val);
			free(tmp);
			break ;
		}
		i++;
	}
}
