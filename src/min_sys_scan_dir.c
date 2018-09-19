/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sys_scan_dir.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 12:09:58 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 08:05:26 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char	*min_sys_scan_dir(char **av, char ***env)
{
	int				i;
	char			*path;
	char			**bins;
	DIR				*dir;
	struct dirent	*ent;

	i = 0;
	bins = min_sys_set_path(env);
	if (bins)
	{
		while (bins[i])
		{
			dir = opendir(bins[i]);
			while ((ent = readdir(dir)) != NULL)
			{
				if (av[0] && 0 == ft_strcmp(av[0], ent->d_name))
				{
					path = ft_strjoin(bins[i], av[0]);
					ft_free2d_char(bins);
					return (path);
				}
			}
			i++;
		}
	}
	return (NULL);
}
