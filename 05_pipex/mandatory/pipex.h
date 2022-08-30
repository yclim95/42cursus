/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:54:06 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/30 11:19:55 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <string.h>
# include <stdio.h>

# define ERR_INFILE "Error: Input file"
# define ERR_OUTFILE "Error: Output file"
# define ERR_INPUT "Invalid number of arguments.\n"
# define ERR_PIPE "Error: Pipe"
# define ERR_CMD "Command not found:\n"

typedef struct s_pipex
{
	char	**cmd
	char	**paths;
	char	**cmd_paths;
	char	**cmd_args;
	int		infile;
	int		outfile;
	int		tube[2];
	pid_t	pid1;
	pid_t	pid2;
}t_pipex;

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *src);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	**ft_split(char const *s, char c);

void	execute_1st_child(t_pipex pipex, char *argv[], char *envp[]);
void	execute_2nd_child(t_pipex pipex, char *argv[], char *envp[]);

void	free_parent(t_pipex *pipex);
void	free_child(t_pipex *pipex);

void	display_err_msg(char *err);
int	display_msg(char *err);

#endif
