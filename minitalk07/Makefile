SERVER	:= server
CLIENT	:= client
SRC		:= ./client.c ./server.c
CFLAGS	:= -Wall -Wextra -Werror
CC		:= gcc
INCLUDE	:= -I./libs/ft_printf01
LIBS	:= -L./libs/ft_printf01 -lft_printf

.PHONY: all clean fclean server client

all: $(SERVER) $(CLIENT)

%.o: %.c
	@make -C ./libs/ft_printf01
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ && printf "Compiled $<\n"

$(SERVER): server.o
	$(CC) $(CFLAGS) $(INCLUDE) $^ $(LIBS) -o $@

$(CLIENT): client.o
	$(CC) $(CFLAGS) $(INCLUDE) $^ $(LIBS) -o $@

clean:
	@make -C ./libs/ft_printf01 clean
	rm -f *.o && printf "Cleaned\n"

fclean: clean
	@make -C ./libs/ft_printf01 fclean
	rm -f $(SERVER) $(CLIENT) && printf "Cleaned everything\n"

re: fclean all