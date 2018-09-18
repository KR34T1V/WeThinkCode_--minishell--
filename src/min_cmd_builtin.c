/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 09:09:32 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/18 09:27:31 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_builtin(int ac, char **av, char ***env)
{
	int		i;

	i = 1;
	if (av[0] && 0 == ft_strcmp(av[0], "help"))
		i = min_cmd_help();
	else if (av[0] && 0 == ft_strcmp(av[0], "echo"))
		i = min_cmd_echo(ac, av);
	else if (av[0] && 0 == ft_strcmp(av[0], "pwd"))
		i = min_cmd_pwd(env);
	else if (av[0] && 0 == ft_strcmp(av[0], "env"))
		i = min_cmd_env(env);
	else if (av[0] && 0 == ft_strcmp(av[0], "setenv"))
		i = min_cmd_setenv(ac, av, env);
	else if (av[0] && 0 == ft_strcmp(av[0], "unsetenv"))
		i = min_cmd_unsetenv(ac, av, env);
	else if (av[0] && (0 == ft_strcmp(av[0], "exit") ||
		0 == ft_strcmp(av[0], "quit")))
		i = min_cmd_exit();
	return (i);
}
