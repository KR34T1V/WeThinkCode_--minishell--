/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:08:17 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 14:08:01 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_cmd_get(char *cmd, char ***env)
{
	int				i;
	int				ac;
	static int		toggle;
	char			**av;

	i = 1;
	ac = ft_wordcount_white(cmd);
	av = ft_strsplit_white(cmd);
	if (toggle == 0)
	{
		*env = min_env_get(*env);
		toggle = 1;
	}
	else if (toggle != 1)
		toggle = 0;
	min_shell_var(&av, env);
	i = min_cmd_builtin(ac, av, env);
	if (i != 0)
		i = min_cmd_exe_select(av, env);
	if (i != 0)
		ft_printf("\e[31mUnkown Command!\n\e[96m");
	ft_free2d_char(av);
}
