/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_help.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 07:21:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 07:24:36 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_help(void)
{
	ft_printf(" __________________________________________________________\n");
	ft_printf("|              The Following Commands Work:                |\n");
	ft_printf("|                                                          |\n");
	ft_printf("|   echo,    help,    env,    !setenv,    !unsetenv,       |\n");
	ft_printf("|                                                          |\n");
	ft_printf("|   exit/quit,                                             |\n");
	ft_printf("|__________________________________________________________|\n");
	return (1);
}