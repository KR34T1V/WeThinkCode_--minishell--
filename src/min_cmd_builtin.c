/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 09:09:32 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 09:32:01 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_builtin(int ac, char **av, char **env)
{
	int		i;

	env = NULL;
	i = 0;
	if (av && 0 == ft_strcmp(av[0], "echo"))
	{
		i = 1;
		min_echo(ac, av);
	}
	return (i);
}
