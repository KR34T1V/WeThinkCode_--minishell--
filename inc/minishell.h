/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 15:46:19 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 10:32:07 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINISHELL_H
# define FT_MINISHELL_H

# include "../lib/ft_printf/inc/ft_printf.h"
# include "get_next_line.h"

int		ft_wordcount_white(const char *s);
char	**ft_strsplit_white(const char *s);
size_t	ft_sizeof2d_char(char **t);
void	ft_free2d_char(char **array);
int		min_welcome(void);
int		min_cmd_help(void);
void	min_cmd_get(char *cmd, char ***environ);
char **	min_env_get(char **env);
int		min_cmd_builtin(int ac, char **av, char **env);
void	min_cmd_exe(int ac, char **av, char **env);
/*
** Builtin Commands
*/
int		min_cmd_echo(int ac, char **av);
int		min_cmd_env(char **env);
int		min_cmd_setenv(int ac, char **av, char **env);
int		min_cmd_exit(void);
/*
** ENV FUNCTIONS
*/
void	min_env_add_var(char ***env, char *var);
int		min_env_check_var(char **env, char *var);
char	*min_env_get_var(char *str);
void	min_env_set_val(char **env, char *var, char *val);

#endif
