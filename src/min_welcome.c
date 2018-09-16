/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_welcome.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 10:56:38 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 09:43:49 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_welcome(void)
{
	ft_printf("\033[32m\n");
	ft_printf("************************************************************\n");
	ft_printf("*            Welcome To Minishell by:cterblan              *\n");
	ft_printf("************************************************************\n");
	ft_printf("|                                                          |\n");
	ft_printf("|          The Following Commands Work:                    |\n");
	ft_printf("|                                      echo                |\n");
	ft_printf("|__________________________________________________________|\n");
	ft_printf("\n\e[0m");
}