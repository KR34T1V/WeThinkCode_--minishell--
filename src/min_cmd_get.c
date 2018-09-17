/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:08:17 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 09:46:02 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_cmd_get(char *cmd, char ***environ)
{
	int				ac;
	char			**av;
	int				i;


	ac = ft_wordcount_white(cmd);
	av = ft_strsplit_white(cmd);
	*environ = min_env_get(*environ);
	i = min_cmd_builtin(ac, av, *environ);
	// if (i == 0)
		// min_cmd_exe(ac, av, environ);
	//FREE array av
}