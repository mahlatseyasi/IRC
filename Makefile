# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 13:44:25 by mkhoza            #+#    #+#              #
#    Updated: 2019/09/16 10:24:16 by mkhoza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CLIENT = client
NAME_SERVER = server
FLAGS = -g -Wall -Wextra -Werror

HEADERS		= includes/
SRCS_DIR	= srcs/
CLIENT		= client/
SERVER		= server/
REQUEST		= requests/

SRCS_CLIENT = $(SRCS_DIR)$(CLIENT)client_main.c \
		$(SRCS_DIR)$(CLIENT)client_message.c \
		$(SRCS_DIR)parse.c \
		$(SRCS_DIR)tools.c \
	
SRCS_SERVER = $(SRCS_DIR)$(SERVER)client.c \
		$(SRCS_DIR)$(SERVER)free.c \
		$(SRCS_DIR)$(SERVER)init.c \
		$(SRCS_DIR)$(SERVER)notify.c \
		$(SRCS_DIR)$(SERVER)server_main.c \
		$(SRCS_DIR)$(SERVER)server_process.c \
		$(SRCS_DIR)$(SERVER)server_send_message.c \
		$(SRCS_DIR)$(SERVER)$(REQUEST)request_channel.c \
		$(SRCS_DIR)$(SERVER)$(REQUEST)request_clear.c \
		$(SRCS_DIR)$(SERVER)$(REQUEST)request_color.c \
		$(SRCS_DIR)$(SERVER)$(REQUEST)request_fd.c \
		$(SRCS_DIR)$(SERVER)$(REQUEST)request_msg.c \
		$(SRCS_DIR)$(SERVER)$(REQUEST)request_nick.c \
		$(SRCS_DIR)$(SERVER)$(REQUEST)request_tools.c \
		$(SRCS_DIR)parse.c \
		$(SRCS_DIR)tools.c

OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
OBJS_SERVER = $(SRCS_SERVER:.c=.o)

LIBFT = libft/libft.a

BUILD_PRINT = @echo "Building $<"
DONE_CLIENT = @echo "Client ready to use!"
DONE_SERVER = @echo "Server ready to use!"
CLEAN_O = @echo "Object files removed!"
CLEAN_A = @echo "Executable removed!"
 
all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT) : $(LIBFT) $(OBJS_CLIENT) $(HEADERS)
		@gcc $(FLAGS) -I $(HEADERS) $(OBJS_CLIENT) $(LIBFT) -lncurses -o $(NAME_CLIENT)
		$(DONE_CLIENT)

$(NAME_SERVER) : $(LIBFT) $(OBJS_SERVER) $(HEADERS)
		@gcc $(FLAGS) -I $(HEADERS) $(OBJS_SERVER) $(LIBFT) -lncurses -o $(NAME_SERVER)
		$(DONE_SERVER)

$(LIBFT):
	@make -C libft
	@echo ""

%.o: %.c
	$(BUILD_PRINT)
	@gcc $(CFLAGS) -I $(HEADERS) -c $< -o $@

clean:
	@$(MAKE) -C libft/ clean
	@rm -f $(OBJS_SERVER) $(OBJS_CLIENT)
	$(CLEAN_O)

fclean: clean
	@$(MAKE) -C libft/ fclean
	@rm -f $(NAME_CLIENT) $(NAME_SERVER)
	$(CLEAN_A)

re: fclean all
