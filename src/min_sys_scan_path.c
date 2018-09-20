/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sys_scan_path.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:10:25 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/20 09:00:44 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

static void	min_sys_scan_get_dir(char *av, char **path, char **name)
{
	int		i;

	i = ft_strlen(av);
	while (i > 0 && av[i] != '/')
		i--;
	*path = ft_strsub(av, 0, i);
	*name = ft_strsub(av, i + 1, ft_strlen(av));
	if (ft_isdir(*path))
		return ;
	else
	{
		ft_strdel(path);
		ft_strdel(name);
	}
}

char		*min_sys_scan_path(char *av)
{
	int				i;
	char			*path;
	char			*name;
	DIR				*dir;
	struct dirent	*ent;

	i = -1;
	min_sys_scan_get_dir(av, &path, &name);
	if (path)
	{
		dir = opendir(path);
		while ((ent = readdir(dir)) != NULL)
			if (av[0] && name && 0 == ft_strcmp(name, ent->d_name))
			{
				ft_strdel(&path);
				ft_strdel(&name);
				closedir(dir);
				return (av);
			}
		closedir(dir);
	}
	ft_strdel(&path);
	ft_strdel(&name);
	return (NULL);
}
