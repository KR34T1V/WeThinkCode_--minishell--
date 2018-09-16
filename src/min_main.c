/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 10:34:38 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 09:24:01 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		main(void)
{
	char	*line;

	min_welcome();
	while (1)
	{
		ft_printf("\e[93m[=> \e[96m");
		get_next_line(1, &line);
		min_cmd_get(line);
	}
	return (0);
}
