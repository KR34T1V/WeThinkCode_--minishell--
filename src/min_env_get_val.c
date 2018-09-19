/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_get_val.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:22:06 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 07:56:29 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char	*min_env_get_val(char ***env, char *var)
{
	int		i;
	int		j;
	int		len;
	char	*val;
	
	i = 0;
	j = 0;
	val = NULL;
	len = ft_strlen(var);
	while ((*env)[i] && 0 != ft_strncmp((*env)[i], var, len))
		i++;
	if ((*env)[i] && 0 == ft_strncmp((*env)[i], var, len))
	{
		val = ft_strnew(ft_strlen((*env)[i]));
		while ((*env)[i][j + len])
		{
			val[j] = (*env)[i][j + len];
			j++;
		}
	}
	return (val);
}
