/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 15:46:19 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/16 09:53:08 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINISHELL_H
# define FT_MINISHELL_H

# include "../lib/ft_printf/inc/ft_printf.h"
# include "get_next_line.h"

int		ft_wordcount_white(const char *s);
char	**ft_strsplit_white(const char *s);
void	min_welcome(void);
void	min_cmd_get(char *cmd);
int		min_cmd_builtin(int ac, char **av, char **env);
void	min_cmd_exe(int ac, char **av, char **env);
/*
** Builtin Commands
*/
int		min_echo(int ac, char **av);
int		min_exit();

#endif
