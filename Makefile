## File name ##
NAME = libftprintf.a

## Define .c and .o files ##
SRC = ft_printf.c ft_printf_utils.c main.c 

OBJ = $(SRC:.c=.o)

## Set the compiler and compilation flags ##
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar 
ARFLAGS = -rcs

## Rule all ##
all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating $(NAME)..."
	$(AR)  $(ARFLAGS) $(NAME) $(OBJ)
	@echo "$(NAME) created successfully!"

%.o: %.c
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $@

## Clean rule ##
clean:
	@echo "Cleaning object files..."
	rm -f $(OBJ)

## Fclean rule ##
fclean: clean
	@echo "Cleaning $(NAME)..."
	rm -f $(NAME)

## Re rule ##
re: fclean all

## Phone rule ##
.PHONY: all clean fclean re