/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 10:34:38 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/15 12:45:34 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		main(/*int ac, char const **av*/)
{
	char	*line;

	min_welcome();
	while (1)
	{
		get_next_line(1, &line);
	}
	return (0);
}
