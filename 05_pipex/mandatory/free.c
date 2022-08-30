/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:25:25 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/30 10:31:37 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	free_child(t_pipex *pipex)
{
	int	index;

	index = 0;
	while(pipex->cmd_args[index])
	{
		free(pipex->cmd_args[index]);
		index++;
	}
	free(pipex->cmd_args);
	free(pipex->cmd);
}

void	free_parent(t_pipex *pipex)
{
	int	index;

	index = 0;
	close(pipex->infile);
	close(pipex->outfile);
	while(pipex->cmd_paths[index])
	{
		free(pipex->cmd_paths[index]);
		index++;
	}
	free(pipex->cmd_paths);
}
