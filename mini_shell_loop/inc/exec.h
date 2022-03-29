/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:48:45 by mtournay          #+#    #+#             */
/*   Updated: 2022/03/28 18:04:00 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXEC_H
# define EXEC_H

#include "minishell.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include <signal.h>



// added struct
typedef struct s_pipes
{
	int		new_end[2];
	int		old_end[2];
	int 	f_in;
	int		f_out;
}				t_pipes;

//	pipes prototypes
char		*cmd_path(char **env, char *cmd);
int			ft_execute(char **cmd, char **envp); 
void		ft_exec_error(char *str);
void		ft_exec_cmd(t_mini *shell);

int			ft_bin(char ***env, char **cmd, t_pipes p); //add p

#endif