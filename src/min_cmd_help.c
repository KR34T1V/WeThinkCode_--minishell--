/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_help.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 07:21:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/18 11:44:28 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_help(void)
{
	ft_printf(" __________________________________________________________\n");
	ft_printf("|              The Following Commands Work:                |\n");
	ft_printf("|                                                          |\n");
	ft_printf("|   echo,    help,    env,    setenv,    unsetenv,    cd   |\n");
	ft_printf("|                                                          |\n");
	ft_printf("|   exit,    quit,    pwd,    !(any sys call)              |\n");
	ft_printf("|__________________________________________________________|\n");
	return (0);
}