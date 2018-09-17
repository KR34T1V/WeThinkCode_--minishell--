/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 09:56:17 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 15:22:19 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_env(char ***env)
{
	int		i;

	i = 0;
	while ((*env)[i])
		ft_printf("%s\n", (*env)[i++]);
	return (0);
}