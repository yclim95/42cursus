/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:26:07 by lyao-che          #+#    #+#             */
/*   Updated: 2022/09/06 13:30:28 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_LIST_H
# define STRUCT_LIST_H

# define T_LIST

typedef struct s_stack
{
	int		value;
	long int	cost_a;
	long int	cost_b;
	unsigned int	index;
	unsigned int	pos;
	unsigned int	pos_target;
}			t_stack;

typedef struct s_list
{
	struct s_list	*next;
	t_stack		*content;

}			t_list;

#endif
