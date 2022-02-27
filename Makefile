# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drobert- <drobert-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 16:12:27 by drobert-          #+#    #+#              #
#    Updated: 2022/02/27 21:11:19 by drobert-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Variables
# Colors

# This is a minimal set of ANSI/VT100 color codes
_END		=	\x1b[0m
_BOLD		=	\x1b[1m
_UNDER		=	\x1b[4m
_REV		=	\x1b[7m

# Colors
_GREY		=	\x1b[30m
_RED		=	\x1b[31m
_GREEN		=	\x1b[32m
_YELLOW		=	\x1b[33m
_BLUE		=	\x1b[34m
_PURPLE		=	\x1b[35m
_CYAN		=	\x1b[36m
_WHITE		=	\x1b[37m

# Inverted, i.e. colored backgrounds
_IGREY		=	\x1b[40m
_IRED		=	\x1b[41m
_IGREEN		=	\x1b[42m
_IYELLOW	=	\x1b[43m
_IBLUE		=	\x1b[44m
_IPURPLE	=	\x1b[45m
_ICYAN		=	\x1b[46m
_IWHITE		=	\x1b[47m

# Files
SRCS = $(wildcard srcs/*.c)

HDRS = includes/

OBJS = $(SRCS:.c=.o)

LIBFT = libft/

# Programs
CC = cc

RM = rm -f

AR = ar

CFLAGS = -Wall -Werror -Wextra -g -I $(LIBFT) -I $(HDRS)

# Other
NAME = libftprintf.a

## Functions

.c.o:
	$(CC) -c $< $(CFLAGS) -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(libft)
	@cp $(LIBFT)/libft.a $(NAME)
	@$(AR) -rc $(NAME) $(OBJS)

clean:
	make clean -C $(LIBFT)
	@$(RM) $(OBJS)

fclean: clean
	make fclean -C $(LIBFT)
	@$(RM) $(NAME)

re: fclean all
