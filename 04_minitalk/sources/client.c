/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:07:36 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/15 14:34:35 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_client_error_msg_exit(char *str)
{
}

int		ft_send_null_terminate(int pid, char *str)
{
}

void	ft_send_msg_bit_by_bit(int pid, char *str)
{
}

void	ft_handle_client_signal(int signum)
{
}

int		sigemptyset(sigset_t *set)
{
}

int		sigaction(const struct sigaction *restrict act, struct sigaction *restrict p_act, int sig)
{
}

int		sigaddset(sigset_t *set, int signo)
{
}

pid_t	getpid(void)
{
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
