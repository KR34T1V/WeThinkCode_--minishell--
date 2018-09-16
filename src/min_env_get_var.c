/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_get_var.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:41:56 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 14:35:23 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char	*min_env_get_var(char *str)
{
	int		i;
	char	*fre = NULL;
	char	*var;

	var = ft_strdup(str);
	i = (ft_strlen(str) - 1);
	if (var[i] != '=')
	{
		fre = var;
		var = ft_strjoin(var, "=");
		ft_strdel(&fre);
	}
	return (var);
}
