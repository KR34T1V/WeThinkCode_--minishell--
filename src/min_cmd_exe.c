/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_exe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:00:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 09:09:06 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_cmd_exe(int const ac, char const **av, char const **env)
{
	pid_t	pid;

	pid = fork();
	if (pid < 0)
	{
		wait(&pid);
	}
	if (pid == 0)
	{
	}