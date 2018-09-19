/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:49:01 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 15:18:50 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		ft_isdir(const char *path)
{
	struct stat	st;

	stat(path, &st);
	return (S_ISDIR(st.st_mode));
}
