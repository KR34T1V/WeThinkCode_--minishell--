/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_set_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:31:51 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/18 10:39:47 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	min_env_set_path(char ***env,char *name, char *path)
{
	char *var;
	char *tmp;

	var = min_env_get_var(name);
	tmp = var;
	if (min_env_check_var(*env, var))
		min_env_set_val(env, var, path);
	else
	{
		min_env_add_var(env, var);
		min_env_set_val(env, var, path);
	}
	free(tmp);
}