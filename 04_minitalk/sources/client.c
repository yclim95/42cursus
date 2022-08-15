/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:07:36 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/15 18:06:09 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_client_error_msg_exit(char *str)
{
	if (str)
		free(str);
	ft_putstr("An unexpected error occured in client execution.\n");
	exit(EXIT_FAILURE);
}

int		ft_send_null_terminate(int pid, char *str)
{
	static int	c;

	c = 0;
	if (c++ != 8)
	{
		if(kill(pid, SIGUSR1) == -1)
			ft_client_error_msg_exit(str);
		return (0);
	}
	return (1);
}

void	ft_send_msg_bit_by_bit(int pid, char *str)
{
	static int	pid_temp;
	static int	bit_c;
	static char	*msg;

	pid_temp = 0;
	bit_c = 0;
	msg = NULL;

	if (str)
		msg = ft_strdup(str)
	if (!msg)
		ft_client_error_msg_exit(0);
	if (pid)
		pid_temp = pid;
	if (msg[++bit_c / 8])
	{
		if (msg[bit_c / 8] & (0b10000000 >> (bit_c % 8)))
		{
			if (kill(pid_temp, SIGUSR2) == -1)
				ft_client_error_msg_exit(msg);
		}
		else if (kill(pid, SIGUSR2) == -1)
			ft_client_error_msg_exit(msg);
		return (0);
	}
	if (!ft_send_null_terminate(pid_temp, msg))
		return (0);
	free(msg);
	return (1);
}

void	ft_handle_client_signal(int signum)
{
	int	signal;

	signal = 0;
	if (signum == SIGUSR1)
		signal = ft_send_msg_bit_by_bit(0, 0);
	else if (signum == SIGUSR2)
	{
		ft_putstr("An error caused server to end unexpectedly.\n");
		exit(EXIT_FAILURE);
	}
	if (signal)
	{
		ft_putstr("Message is successfully delivered to the server!\n");
		exit(EXIT_SUCCESS);
	}
}

int main(int argc, char **argv)
{
	if (ft_str_isdigit(argv[1]) || argc != 3)
	{
		ft_putstr("Invalid arguments.\n"
		ft_putstr("Try: ./client + server PID number + message.\n"
		exit(EXIT_FAILURE);
	}
	else
	{
		signal(SIGUSR1, ft_handle_client_signal);
		signal(SIGUSR2, ft_handle_client_signal);
		ft_send_msg_bit_by_bit(atoi(argv[1]),argv[2]);
	}
	while(1)
		pause();
}
