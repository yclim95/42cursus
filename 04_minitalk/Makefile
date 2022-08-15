CC = clang
CFLAGS = -Wall -Wextra -Werror -g

MINITALK_H = ./sources/minitalk.h
INC = -Ilibft/ \
LIBS = -Llibft -lft

SERVER = server
SERVER_SRCS = ./sources/server.c
SERVER_OBJS = $(SERVER_SCRS:.c=.o)

CLIENT = client
CLIENT_SRCS = ./sources/client.c
CLIENT_OBJS = $(CLIENT_OBJS:.c=.o)

all: $(CLIENT) $(SERVER)
	$echo "Minitalk is ready to run"

.c.o:
	$(CC) $(CFLAGS) $(INC) $(MINITALK_H) -c $< -o $@

$(CLIENT): $(CLIENT_OBJS)
	@echo "Compiling libft..."
	@$(MAKE) -sC libft
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)
	@echo "Client is ready!"

$(SERVER): $(SERVER_OBJS)
	@echo "Compiling libft..."
	@$(MAKE) -sC libft
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)
	@echo "Server is ready!"

clean:
	@$(MAKE) -sC libft clean
	@rm -f $(CLIENT_OBJS)

fclean:
	@$(MAKE) -sC libft fclean
	@rm -f $(CLIENT_OBJS) $(SERVER_OBJS)
	@rm -f $(CLIENT) $(SERVER)

re: fclean all

.PHONY: all clean fclean re
