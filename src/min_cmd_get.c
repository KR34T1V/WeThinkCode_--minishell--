/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:08:17 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 11:08:44 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_cmd_get(char *cmd, char ***environ)
{
	int				i;
	int				ac;
	static int		toggle;
	char			**av;

	ac = ft_wordcount_white(cmd);
	av = ft_strsplit_white(cmd);
	if (toggle == 0)
	{
		*environ = min_env_get(*environ);
		toggle = 1;
	}
	else if (toggle != 1)
		toggle = 0;
	i = min_cmd_builtin(ac, av, *environ);
	// if (i == 0)
		// min_cmd_exe(ac, av, environ);
	ft_free2d_char(av);
}