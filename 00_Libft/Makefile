# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 18:09:24 by lyao-che          #+#    #+#              #
#    Updated: 2022/06/10 14:31:26 by lyao-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

INCLUDES = ./libft.h

SRC_PART1 = ./ft_isalpha.c	\
			./ft_isdigit.c	\
			./ft_isalnum.c	\
			./ft_isascii.c	\
			./ft_isprint.c	\
			./ft_strlen.c	\
			./ft_memset.c	\
			./ft_bzero.c	\
			./ft_memcpy.c	\
			./ft_memmove.c	\
			./ft_strlcpy.c	\
			./ft_strlcat.c	\
			./ft_toupper.c	\
			./ft_tolower.c	\
			./ft_strchr.c	\
			./ft_strrchr.c	\
			./ft_strncmp.c	\
			./ft_memchr.c	\
			./ft_memcmp.c	\
			./ft_strnstr.c	\
			./ft_atoi.c		\
			./ft_calloc.c	\
			./ft_strdup.c

SRC_PART2 = ./ft_substr.c	\
			./ft_strjoin.c	\
			./ft_strtrim.c	\
			./ft_split.c	\
			./ft_itoa.c		\
			./ft_strmapi.c	\
			./ft_striteri.c	\
			./ft_putchar_fd.c	\
			./ft_putstr_fd.c	\
			./ft_putendl_fd.c	\
			./ft_putnbr_fd.c

SRCS = $(SRC_PART1)  $(SRC_PART2)

OBJS = $(SRCS:.c=.o)

all : $(NAME)

clean :
	$(RM) $(RMFLAG) $(OBJS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

.c.o : $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.PHONY: all clean fclean re
