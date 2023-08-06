# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 02:39:35 by vkuzmin           #+#    #+#              #
#    Updated: 2023/08/03 18:50:42 by vkuzmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= prog

SRC			=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Werror --std=c++98 -g -fsanitize=address

EXE_NAME	=	-o prog

EXEC		= prog

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re