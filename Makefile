
CC = cc
NAME = libftprintf.a
SRC = ft_atoi.c

OBJ = $(SRC:.c=.o)

INCLUDES = ./ft_printf.h
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	
# $(EXEC): $(OBJ)
# 	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o # a revoir pas le droit de mettre *

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)
	
#.PHONY
