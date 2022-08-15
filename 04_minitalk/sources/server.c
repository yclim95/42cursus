/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:56:52 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/15 17:49:21 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*ft_print_msg(char *msg)
{
	ft_putstr(msg);
	ft_putchar('\n');
	free(msg);
	return (NULL);
}

void	ft_show_error_msg_exit(int pid, char *str)
{
	if(str)
		free(str);
	ft_putstr("An unexcepected error occured during server execution\n");
	kill(pid, SIGUSR2);
	exit(EXIT_FAILURE);
}

void	ft_handle_server_client_signal(int sig, siginfo_t *info, void *context)
{
	static int	bit_c;
	static int	pid;
	static char	sig_c;
	static char	*msg;

	bit_c = 0;
	pid = 0;
	sig_c = 0b11111111;
	msg = NULL;
	(void)context;
	if (info->si_pid)
		pid = info->si_pid;
	if (sig == SIGUSR1)
		sig_c ^= 0b10000000 >> bit_c;
	else if (sig == SIGUSR2)
		sig_c |= 0b10000000 >> bit_c;
	if (++bit_c == 8)
	{
		if (sig_c != '\0')
			msg = ft_add_char_to_str(msg, c);
		else
			msg = ft_print_msg(msg);
		bit_c = 0;
		sig_c = 0b11111111;
	}
	if (kill(pid, SIGSR1) == -1)
		ft_show_error_msg_exit(pid, msg);
}

int main(void)
{
	struct	sigaction	sig;
	sigset_t		sig_set;

	sigemptyset(&sig_set);
	sigaddset(&sig_set, SIGINT);
	sigaddset(&sig_set, SIGQUIT);
	sig.sa_handler = 0;
	sig.sa_flags = SA_SIGINFO;
	sig.sa_mask = sig_set;
	sig.sa_sigaction = ft_handle_server_client_signal;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	ft_putstr("Use this PID no. to send your message: ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	while (1)
		pause();
}
