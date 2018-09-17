/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_pwd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:45:06 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 16:02:45 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_pwd(char ***env)
{
	int		i;
	int		j;

	i = 0;
	while ((*env)[i] && 0 != ft_strncmp((*env)[i], "PWD=", 3))
		i++;
	if ((*env)[i] && 0 == ft_strncmp((*env)[i], "PWD=", 3))
	{
		j = 4;
		while ((*env)[i][j])
			ft_putchar((*env)[i][j++]);
		ft_putchar('\n');
	}
	else if (!(*env)[i] || 0 != ft_strncmp((*env)[i], "PWD=", 3))
	{
		ft_printf("ERROR: PWD not found\n");
	}
	return (0);
}
