# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 14:53:31 by mmata-al          #+#    #+#              #
#    Updated: 2023/11/09 19:42:51 by mmata-al         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = *.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(MAKE) -C ./libft
	cp ./libft/libft.a ./$(NAME)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)
	rm -f **/*.o

fclean: clean
	rm -f $(NAME)
	rm -f **/libft.a

re: fclean all

.PHONY: all clean fclean re