/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:08:17 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/25 17:32:52 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_cmd_get(char *cmd, char ***env)
{
	int				i;
	int				ac;
	static int		toggle;
	char			**av;

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
	if (av[0] && 0 != ft_strcmp(av[0], "\n") && i != 0)
		ft_printf("\e[31mUnknown Command!\n\e[96m");
	ft_free2d_char(av);
}
