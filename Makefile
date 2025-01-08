## File name ##
NAME = libftprintf.a

## Colors ##
COLOR_RESET = \033[0m
COLOR_GREEN = \033[32m
COLOR_BLUE = \033[34m
COLOR_YELLOW = \033[33m
COLOR_RED = \033[31m
COLOR_MAGENTA = \033[35m

INFO = @echo "$(COLOR_BLUE)[INFO]$(COLOR_RESET)"
OK = @echo "$(COLOR_GREEN)[OK]$(COLOR_RESET)"
WARN = @echo "$(COLOR_YELLOW)[WARN]$(COLOR_RESET)"
ERROR = @echo "$(COLOR_RED)[ERROR]$(COLOR_RESET)"

## Define .c and .o files ##
SRC = ft_printf.c ft_printf_utils.c ft_printf_utils_sd.c

OBJ = $(SRC:.c=.o)

## Set the compiler and compilation flags ##
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar 
ARFLAGS = -rcs

## Rule all ##
all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(COLOR_BLUE)***************************************************************$(COLOR_RESET)"
	@echo "$(COLOR_BLUE)***************************FT_PRINTF***************************$(COLOR_RESET)"
	@echo "$(COLOR_BLUE)***************************************************************$(COLOR_RESET)"
	$(INFO) "Creating $(NAME)..."
	$(AR)  $(ARFLAGS) $(NAME) $(OBJ)
	$(OK) "$(NAME) created successfully!"

%.o: %.c
	$(INFO) "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $@

## Clean rule ##
clean:
	$(WARN) "Cleaning $(NAME)..."
	rm -f $(OBJ)
	$(OK) "Object files cleaned."

## Fclean rule ##
fclean: clean
	@echo "Cleaning $(NAME)..."
	rm -f $(NAME)
	$(OK) "$(NAME) cleaned."

## Re rule ##
re: fclean all

## Phone rule ##
.PHONY: all clean fclean re
