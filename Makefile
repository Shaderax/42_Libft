# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrouzeva <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 14:25:16 by nrouzeva          #+#    #+#              #
#    Updated: 2017/03/08 17:08:56 by nrouzeva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror


OBJ_PATH = ./obj
SRC_PATH = ./libft
SRC_PRINTF_PATH = ./printf


SRC_LIB =		ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_itoa_base.c \
			ft_itoa_hexa.c \
			ft_itoa_ull.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lst_pushback.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_len_number.c \
			ft_len_number_ull.c \
			ft_wd_count.c \
			ft_split_word.c \
			get_next_line.c \
			ft_strjfri.c

SRCPRINTF = converter_address_p_v.c \
			converter_caractere.c \
			converter_di_sd.c \
			converter_long_d_lsd.c \
			converter_long_o_luo.c \
			converter_long_u_lud.c \
			converter_o_uo.c \
			converter_string.c \
			converter_tools_number.c \
			converter_u_ud.c \
			converter_x_uh.c \
			converter_unicode.c \
			converter_string.c \
			converter_unicode.c \
			option_application_caractere.c \
			option_application_number.c \
			option_application_string.c \
			ft_get_.c \
			ft_printf.c \
			buffer.c \
			ft_putstr2.c \
			option_application_hexa.c \
			option_application_octal.c

OBJ = $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
