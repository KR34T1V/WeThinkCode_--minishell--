/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_setenv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:06:05 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 10:11:31 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_setenv(int ac, char **av, char **env)
{
	int		i;

	i = 1;
	if (ac <= 1)
		ft_printf("\e[91mUsage VAR=[VAL] or VAR [VAL]\e[96m");
	else if (ac > 1)
}