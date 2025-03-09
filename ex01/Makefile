NAME = phonebook
CFLAGS = -std=c++98 -Wall -Wextra -Werror
CC = c++
SRC = Contact.cpp \
		main.cpp \
		PhoneBook.cpp
OBJ_DIR = obj/
OBJ = $(SRC:.cpp=.o)
OBJ_PRE = $(addprefix $(OBJ_DIR), $(OBJ))
RM = rm -rf

RED = \x1b[31;01m
GREEN = \x1b[32;01m
BLUE = \033[34;1m
RESET = \x1b[0m

all: $(NAME)

$(NAME): $(OBJ_PRE)
	@$(CC) $(CFLAGS) $(OBJ_PRE) -o $(NAME)
	@printf "$(GREEN) Executable named phonebook created$(RESET)\n"

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@printf "$(BLUE) deleting object files$(RESET)\n"

fclean:
	@$(RM) $(NAME) $(OBJ_DIR)
	@printf "$(RED) deleting executable filename and object file$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re