#The Target Binary Program
NAME	:= libft.a

#The Directories, Source, Includes, Objects, Binary and Resources
SRCDIR	:= ./
BUILD_DIR	:= build

#Flags, Libraries and Includes
CC		:= cc
FLAGS	:= -Wall -Wextra -Werror
INC		:= -c -I .h

SRC		:=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c	\
			ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c	\
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c	\
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c	\
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c	\
			get_next_line_utils.c get_next_line.c ft_print_digit.c ft_print_hex.c ft_print_percentage.c	\
			ft_print_pointer.c ft_print_unsigned_num.c ft_printf_tools.c ft_printf.c ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_isspace.c ft_atoll.c ft_abs.c

OBJS = $(SRC:%.c=$(BUILD_DIR)/%.o)



all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS): $(BUILD_DIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I $(INCS_DIR) -I $(LIBFT_DIR) -c $< -o $@
re: fclean all

clean:
	/bin/rm -f $(OBJS)
	/bin/rm -f $(BONUS_OBJ)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(BONUS_OBJ)
