/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:39:22 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/15 09:54:03 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <signal.h>
# include "../libft/libft.h"

char	*ft_print_msg(char *msg);
void	ft_show_error_msg_exit(int pid, char *str);
void	ft_handle_server_client_signal(int sig, siginfo_t *info, void *context)

void	ft_client_error_msg_exit(char *str);
int		ft_send_null_terminate(int pid, char *str);
int		ft_send_msg_bit_by_bit(int pid, char *str);
void	ft_handle_client_signal(int signum);
int		sigemptyset(sigset_t *set);
int		sigaction(const struct sigaction *restrict act, struct sigaction *restrict p_act, int sig);
int		sigaddset(sigset_t *set, int signo);
int		kill(pid_t pid, int sig);
pid_t	getpid(void);

#endif
