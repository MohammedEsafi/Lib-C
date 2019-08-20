# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mesafi <mesafi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 20:36:14 by mesafi            #+#    #+#              #
#    Updated: 2020/01/22 13:28:40 by mesafi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard variables
NAME		= ft_printf.a

OBJS		= ft_printf.o

LIBFT		= ../ft_atoi.o \
			../ft_memchr.o \
			../ft_memcmp.o \
			../ft_memset.o \
			../ft_putchar_fd.o \
			../ft_strchr.o \
			../ft_strdel.o \
			../ft_strdup.o \
			../ft_strjoin.o \
			../ft_strlen.o \
			../ft_strnew.o \
			../get_int_len.o \
			../ft_strjoin_free.o

SPECIFIERS	= specifiers/ft_specifier_char.o \
			specifiers/ft_specifier_double.o \
			specifiers/ft_specifier_hex.o \
			specifiers/ft_specifier_int.o \
			specifiers/ft_specifier_octal.o \
			specifiers/ft_specifier_pointer.o \
			specifiers/ft_specifier_string.o \
			specifiers/ft_specifier_binary.o \
			specifiers/ft_specifier_uint.o

PARSERS		= parsers/ft_parse_flags.o \
			parsers/ft_parse_format.o \
			parsers/ft_parse_length.o \
			parsers/ft_parse_parameter.o \
			parsers/ft_parse_precision.o \
			parsers/ft_parse_specifier.o \
			parsers/ft_parse_width.o 
			
HELPERS		= helpers/ft_snumtoa.o \
			helpers/ft_unumtoa.o \
			helpers/pad_spaces.o \
			helpers/pad_zeros.o \
			helpers/ft_percent.o \
			helpers/ft_multiplication.o \
			helpers/ft_fast_power.o \
			helpers/ft_addition.o \
			helpers/ft_round.o \
			helpers/print_double.o \
			helpers/ft_fraction.o \
			helpers/ft_whole.o \
			helpers/omit_zero.o \
			helpers/is_flag.o \
			helpers/error_handler.o \
			helpers/separated_number.o

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

# Start rules
all: $(NAME)

$(NAME): $(OBJS) $(SPECIFIERS) $(LIBFT) $(PARSERS) $(HELPERS)
	@ar rc $(NAME) $(OBJS) $(SPECIFIERS) $(LIBFT) $(PARSERS) $(HELPERS)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJS)
	@rm -rf $(SPECIFIERS)
	@rm -rf $(PARSERS)
	@rm -rf $(HELPERS)
	@rm -rf $(LIBFT)

fclean: clean
	@rm -f $(NAME)

re: fclean all
