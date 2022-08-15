/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:56:52 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/15 10:06:34 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*ft_print_msg(char *msg)
{
}

void	ft_show_error_msg_exit(int pid, char *str)
{
}

void	ft_handle_server_client_signal(int sig, siginfo_t *info, void *context)

int main(void)
{
	struct	sigaction	sig;
	sigset_t			sig_set;

	sigemptyset(&sig_set);
	sigaddset(&sig_set, SIGINT);
	sigaddset(&sig_set, SIGQUIT);
	sig.sa_handler = 0;
	sig.sa_flags = SA_SIGINFO;
	sig.sa_mask = sig_set;
	sig.sa_sigaction = ft_handle_server_client_signal;
	sigaction(SIGUSR1, );
	while (1)
		pause();
}
