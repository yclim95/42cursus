/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:34:46 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/30 10:41:48 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	display_err_msg(char *err)
{
	perror(err);
	exit (1);
}

int	display_msg(char *msg)
{
	write(2, msg, ft_strlen(msg));
	return (1);
}
