/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_add_var.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:52:33 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 14:45:26 by cterblan         ###   ########.fr       */
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
	new = (char **)ft_memalloc((sizeof(char *) * (j + 1)));
	while (tmp[i])
	{
		new[i] = ft_strdup(tmp[i]);
		i++;
	}
	tmp[i] = ft_strdup(var);
	tmp[++i] = NULL;
	env = &new;
}