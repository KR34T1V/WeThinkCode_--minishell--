/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_add_var.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:52:33 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 15:39:50 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_env_add_var(char ***env, char *var)
{
	int		i;
	int		j;
	char	**tmp;
	char	**new;

	i = 0;
	j = 0;
	tmp = *env;
	while (tmp[j])
		j++;
	new = (char **)ft_memalloc((ft_sizeof2d_char(*env) + 1)
		* (sizeof(char *)));
	while (tmp[i])
	{
		new[i] = ft_strdup(tmp[i]);
		i++;
	}
	new[i] = ft_strdup(var);
	new[++i] = NULL;
	*env = new;
	ft_free2d_char(tmp);
}
