/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sys_scan_dir.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 12:09:58 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/19 14:14:38 by cterblan         ###   ########.fr       */
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

	i = -1;
	bins = min_sys_set_path(env);
	while (bins[++i])
	{
		dir = opendir(bins[i]);
		while ((ent = readdir(dir)) != NULL)
		{
			if (av[0] && 0 == ft_strcmp(av[0], ent->d_name))
			{
				path = ft_strjoin(bins[i], av[0]);
				ft_free2d_char(bins);
				closedir(dir);
				return (path);
			}
		}
		closedir(dir);
	}
	ft_free2d_char(bins);
	return (NULL);
}
