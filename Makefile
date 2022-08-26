NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = ./src/ft_printf.h

SRC_DIR = src

OBJ_DIR = obj

SRC = ft_printf.c\
	  ft_puchar.c\
	  ft_putbase.c\
	  ft_putnbr.c\
	  ft_putpointer.c\
	  ft_putstr.c\
	  ft_putunint.c\

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))	

all : $(NAME) 

$(NAME) : $(OBJ) $(HEADER)
		ar cr $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<
		
clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)
		

re : fclean all
