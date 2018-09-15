/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_exe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:00:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/15 15:10:18 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_cmd_exe(int const ac, char const **av/*, char const **env*/)
{
	pid_t	pid;

	pid = fork();
	if (pid < 0)
	{
		ft_printf("\e[5mBlink[=>");
	}
	if (pid == 0)
	{
	}