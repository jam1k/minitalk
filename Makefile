# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 10:18:43 by jshestov          #+#    #+#              #
#    Updated: 2023/04/25 15:14:07 by jshestov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
SERVER		= server
CLIENT		= client
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
RM 			= /bin/rm -f

INCS_DIR	= ./
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

BUILD_DIR	= build
SRC_DIR		= ./
SRCS_SERVER		= 	server.c
OBJS_SERVER = $(SRCS_SERVER:%.c=$(BUILD_DIR)/%.o)

SRCS_CLIENT		= 	client.c
OBJS_CLIENT = $(SRCS_SERVER:%.c=$(BUILD_DIR)/%.o)



all: $(SERVER) $(CLIENT)

$(SERVER): $(OBJS_SERVER) $(LIBFT)
	@echo "Linking $@"
	@$(CC) -o $(SERVER) $(OBJS_SERVER) $(LIBFT)
	@echo "Server Done!"

$(CLIENT): $(OBJS_CLIENT)
	@echo "Linking $@"
	@$(CC) -o $(CLIENT) $(OBJS_CLIENT)
	@echo "Client Done!"


$(OBJS_SERVER): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -I $(INCS_DIR) -I $(LIBFT_DIR) -c $< -o $@

$(OBJS_CLIENT): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -I $(INCS_DIR) -I $(LIBFT_DIR) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) -r $(BUILD_DIR)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re
