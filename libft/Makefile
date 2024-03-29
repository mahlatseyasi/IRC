# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 13:48:06 by mkhoza            #+#    #+#              #
#    Updated: 2019/09/12 13:52:15 by mkhoza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
FLAGS += -g -Wall -Wextra -Werror
#FLAGS +=  -fsanitize=address

SRC_DIR = srcs/
LIST	= list/
QUEUE	= queue/
NUMERIC	= numeric/
STRING	= string/
MEMORY	= memory/
IO		= io/
TOOLS	= tools/

HEADERS = ./includes


SRC = $(SRC_DIR)$(IO)ft_putchar_fd.c  \
		$(SRC_DIR)$(IO)ft_putendl_fd.c \
		$(SRC_DIR)$(IO)ft_putnbr_fd.c \
		$(SRC_DIR)$(IO)ft_putstr_fd.c \
		$(SRC_DIR)$(IO)gnl.c \
		$(SRC_DIR)$(LIST)add_list.c \
		$(SRC_DIR)$(LIST)free_list.c \
		$(SRC_DIR)$(LIST)remove_list.c \
		$(SRC_DIR)$(MEMORY)ft_bzero.c \
		$(SRC_DIR)$(MEMORY)ft_memalloc.c \
		$(SRC_DIR)$(MEMORY)ft_memchr.c \
		$(SRC_DIR)$(MEMORY)ft_memcpy.c \
		$(SRC_DIR)$(MEMORY)ft_memdup.c \
		$(SRC_DIR)$(MEMORY)ft_memncmp.c \
		$(SRC_DIR)$(MEMORY)ft_memset.c \
		$(SRC_DIR)$(MEMORY)ft_swap.c \
		$(SRC_DIR)$(NUMERIC)ft_atoi.c \
		$(SRC_DIR)$(NUMERIC)ft_convert_hex.c \
		$(SRC_DIR)$(NUMERIC)ft_convert_octal.c \
		$(SRC_DIR)$(NUMERIC)ft_convert_uni.c \
		$(SRC_DIR)$(NUMERIC)ft_ftoa.c \
		$(SRC_DIR)$(NUMERIC)ft_itoa.c \
		$(SRC_DIR)$(NUMERIC)ft_putnbr.c \
		$(SRC_DIR)$(STRING)ft_are_whitespaces.c \
		$(SRC_DIR)$(STRING)ft_putchar.c \
		$(SRC_DIR)$(STRING)ft_putendl.c \
		$(SRC_DIR)$(STRING)ft_putstr.c \
		$(SRC_DIR)$(STRING)ft_strclr.c \
		$(SRC_DIR)$(STRING)ft_strcat.c \
		$(SRC_DIR)$(STRING)ft_strchr.c \
		$(SRC_DIR)$(STRING)ft_strcmp.c \
		$(SRC_DIR)$(STRING)ft_strcpy.c \
		$(SRC_DIR)$(STRING)ft_strdup_chr.c \
		$(SRC_DIR)$(STRING)ft_strdup.c \
		$(SRC_DIR)$(STRING)ft_strjoin.c \
		$(SRC_DIR)$(STRING)ft_strlen_chr.c \
		$(SRC_DIR)$(STRING)ft_strlen.c \
		$(SRC_DIR)$(STRING)ft_strncat.c \
		$(SRC_DIR)$(STRING)ft_strncmp.c \
		$(SRC_DIR)$(STRING)ft_strncpy.c \
		$(SRC_DIR)$(STRING)ft_strnew.c \
		$(SRC_DIR)$(STRING)ft_strnstr.c \
		$(SRC_DIR)$(STRING)ft_strrev.c \
		$(SRC_DIR)$(STRING)ft_strstr.c \
		$(SRC_DIR)$(STRING)ft_strsub.c \
		$(SRC_DIR)$(STRING)ft_wstrlen.c \
		$(SRC_DIR)$(STRING)ft_strtrim.c \
		$(SRC_DIR)$(QUEUE)free_queue.c \
		$(SRC_DIR)$(QUEUE)init_node.c \
		$(SRC_DIR)$(QUEUE)init_queue.c \
		$(SRC_DIR)$(QUEUE)push_queue.c \
		$(SRC_DIR)$(QUEUE)push_pqueue.c \
		$(SRC_DIR)$(QUEUE)pop_queue.c \
		$(SRC_DIR)$(QUEUE)remove_node.c \
		$(SRC_DIR)$(QUEUE)top_queue.c \
		$(SRC_DIR)$(TOOLS)ft_count_words.c \
		$(SRC_DIR)$(TOOLS)ft_is_sort.c \
		$(SRC_DIR)$(TOOLS)ft_sort_wordtab.c \
		$(SRC_DIR)$(TOOLS)ft_set_max_fd.c



OBJ += $(SRC:.c=.o)

BUILD_PRINT = @echo "Building $<"
DONE = @echo "LIBFT ready to use!"
CLEAN_O = @echo "Object files removed!"
CLEAN_A = @echo "Executable removed!"

all: $(NAME)

$(OBJ): %.o: %.c
	$(BUILD_PRINT)
	@gcc $(FLAGS) -I $(HEADERS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	$(DONE)

clean:
	@/bin/rm -rf $(OBJ)
	$(CLEAN_O)

fclean: clean
	@/bin/rm -rf $(NAME)
	$(CLEAN_A)

re: fclean all

.PHONY: all clean fclean re
