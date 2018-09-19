/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_unset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 08:39:13 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 14:13:16 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_env_unset(char ***env, char *var)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(var);
	while ((*env)[i])
	{
		if (0 == ft_strncmp((*env)[i], var, len))
		{
			ft_strdel(&((*env)[i]));
			while ((*env)[i + 1])
			{
				(*env)[i] = (*env)[i + 1];
				i++;
			}
			(*env)[i] = NULL;
			break ;
		}
		i++;
	}
}
