/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 15:46:19 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/15 15:01:29 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINISHELL_H
# define FT_MINISHELL_H

# include "../lib/ft_printf/inc/ft_printf.h"
# include "get_next_line.h"

void	min_welcome(void);
void	min_cmd_get(char *cmd);
void	min_cmd_exe(int const ac, char const **av/*, char const **env*/);

#endif
