/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_exe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:00:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/25 17:08:39 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_exe(char **av, char ***env)
{
	pid_t	pid;
	char	*path;

	path = min_sys_scan_dir(av, env);
	if (path == NULL)
		return (1);
	else
	{
		pid = fork();
		if (pid < 0)
		{
			free(path);
			ft_putendl("ERROR: fork failed\n");
			return (-1);
		}
		else if (pid == 0)
			execve(path, av, *env);
		wait(&pid);
		if (path)
			free(path);
		return (0);
	}
}
