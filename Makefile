# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 14:27:24 by prigaudi          #+#    #+#              #
#    Updated: 2024/11/14 15:52:45 by prigaudi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -Wpedantic -g3
SRC = ft_atoi.c					\
      ft_bzero.c				\
      ft_calloc.c				\
      ft_isalnum.c				\
	  ft_isalpha.c				\
	  ft_isascii.c				\
	  ft_isdigit.c				\
	  ft_isprint.c				\
	  ft_itoa.c					\
	  ft_memset.c				\
	  ft_putchar_fd.c			\
	  ft_putstr_fd.c			\
	  ft_putendl_fd.c			\
	  ft_putnbr_fd.c			\
	  ft_split.c				\
	  ft_strchr.c				\
	  ft_striteri.c				\
	  ft_strjoin.c				\
	  ft_strlcat.c				\
	  ft_strlcpy.c				\
	  ft_strlen.c				\
	  ft_strmapi.c				\
	  ft_strncmp.c				\
	  ft_strnstr.c				\
	  ft_strrchr.c				\
	  ft_strtrim.c				\
	  ft_substr.c				\
	  ft_tolower.c				\
	  ft_toupper.c
OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all fclean re