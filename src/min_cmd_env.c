/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 09:56:17 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 10:02:43 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_env(char **env)
{
	int		i;

	i = 0;
	while (env[i] != NULL)
		ft_printf("%s\n", env[i++]);
	return (0);
}