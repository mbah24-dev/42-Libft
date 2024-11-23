# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 14:29:41 by mbah              #+#    #+#              #
#    Updated: 2024/11/20 15:51:54 by mbah             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FLAGS = -Wall -Werror -Wextra -I ./
CC = cc

NAME = libft.a

C_SRC = ft_strlen.c ft_atoi.c ft_bzero.c ft_calloc.c ft_strlcpy.c ft_strlcat.c \
	ft_substr.c ft_itoa.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_strdup.c \
	ft_memmove.c ft_memchr.c ft_toupper.c ft_tolower.c ft_isdigit.c ft_isalpha.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_strnstr.c ft_strjoin.c ft_split.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

C_OBJ = $(C_SRC:.c=.o)

B_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

B_OBJ = $(B_SRC:.c=.o)

%.o: %.c libft.h
	$(CC) $(C_FLAGS) -c $< -o $@

$(NAME): $(C_OBJ)
	@echo "Création de $(NAME)..."
	ar rcs $(NAME) $(C_OBJ)
	@ranlib $(NAME)
	@echo "$(NAME) créé avec succès !"

bonus: .bonus
	
.bonus: $(C_OBJ) $(B_OBJ)
	@echo "Ajout des bonus..."
	ar rcs $(NAME) $(C_OBJ) $(B_OBJ)
	@ranlib $(NAME)
	@echo "Bonus ajoutés avec succès !"
	touch .bonus

all: $(NAME)
	
clean:
	@echo "Nettoyage des fichiers objets..."
	rm -f $(C_OBJ) $(B_OBJ)
	@echo "Nettoyage terminé !"

fclean: clean
	@echo "Suppression de $(NAME)..."
	rm -f $(NAME)
	@echo "$(NAME) supprimé !"

re: fclean all

.PHONY: all bonus fclean clean re