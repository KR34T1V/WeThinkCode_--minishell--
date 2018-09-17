/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizeof2d_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 09:52:16 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 10:18:39 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

size_t	ft_sizeof2d_char(char **array)
{
	size_t i;

	if (array)
	{
		i = 0;
		while (array[i])
			i++;
		return (i + 1);
	}
	else
		return (0);
}