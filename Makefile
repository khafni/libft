# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khafni <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 02:19:49 by khafni            #+#    #+#              #
#    Updated: 2019/11/01 07:10:51 by khafni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean all re fclean
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS =  ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strcmp.c ft_atoi.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c\
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_onealc.c
OBJS = $(SRCS:.c=.o)
SRCBS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
ft_lstdelone_bonus.c ft_lstclear_bonus.c	ft_lstiter_bonus.c
OBBS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstadd_back_bonus.o ft_lstsize_bonus.o ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o\
ft_lstclear_bonus.o ft_lstiter_bonus.o
all:$(NAME)
$(NAME):
	gcc $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
bonus:
	gcc $(CFLAGS) -c $(SRCBS)
	ar rc $(NAME) $(OBBS)
	ranlib $(NAME)
clean:
	rm -f $(OBJS)
	rm -f $(OBBS)
fclean: clean
	rm -f $(NAME)
re: fclean all
