/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sys_scan_path.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:10:25 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/20 08:23:33 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char	*min_sys_scan_path(char *av)
{
	int		i;
	char	*tmp;

	i = ft_strlen(av);
	while (i > 0 && av[i] && av[i] != '/')
		i--;
	tmp = ft_strsub(av, 0, i);
	if (ft_isdir(tmp))
		return (tmp);
	else
		return (NULL);
}
