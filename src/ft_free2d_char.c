/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2d_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:04:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 11:04:35 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	ft_free2d_char(char **array)
{
	int		i;

	i = 0;
	if (array)
	{
		while (array[i])
			ft_strdel(&array[i++]);
		free(array);
	}
	array = NULL;
}