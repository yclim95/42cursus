/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:00:40 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/26 10:58:41 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include "../libft/libft.h"

# define DECIMAL_BASE "0123456789"
# define HEXADECIMAL_U_BASE "0123456789ABCDEF"
# define HEXADECIMAL_L_BASE "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_formats(int i, va_list args);
int	ft_format_char(char c);
int	ft_format_string(char *str);
int	ft_format_pointer(void *ptr);
int	ft_format_decimal(int value);
int	ft_format_unsigned_decimal(unsigned int value);
int	ft_format_hexadecimal(unsigned int value);
int	ft_format_uppercase_hexadecimal(unsigned int value);
int	ft_format_percent(char c);
int	ft_is_argument(int c);

#endif
