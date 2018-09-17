/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_welcome.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 10:56:38 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 07:15:26 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_welcome(void)
{
	ft_printf("\033[32m\n");
	ft_printf("************************************************************\n");
	ft_printf("*            Welcome To Minishell by:cterblan              *\n");
	ft_printf("************************************************************\n");
	ft_printf("|                                                          |\n");
	ft_printf("|          The Following Commands Work:                    |\n");
	ft_printf("|                                      echo                |\n");
	ft_printf("|                                      env                 |\n");
	ft_printf("|                                      exit/quit           |\n");
	ft_printf("|__________________________________________________________|\n");
	ft_printf("\n\e[0m");
	return (0);
}
