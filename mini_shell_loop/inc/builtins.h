/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:03:17 by mtournay          #+#    #+#             */
/*   Updated: 2022/03/29 16:31:47 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTINS_H
# define BUILTINS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include "exec.h"
# include <signal.h>


void     get_cd(char **buf);
int	    ft_pwd(char **cmd, t_pipes p);
int	    ft_cd(char **cmd);
int	    ft_echo(char **cmd, char **env);
int	    ft_unset(char ***env, char **cmd);
int	    ft_export(char ***env, char **cmd);
int	    ft_env(char **env, char **cmd, t_pipes p);

int 	cmp(char *s1, char *s2);
int	    ncmp(char *s1, char *s2, size_t n);
void	nl_convert(char **s);
int	    bin_normalise(char **str);

int	error_mess(char *s, char *mess, char *cmd, int exstat);
int bin_cmd(char ***env, char **cmd);

char	*cat_dup(char *dst, char *src);









void mypwd();


#endif