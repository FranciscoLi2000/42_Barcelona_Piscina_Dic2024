CC		= cc
CFLAGS		= -Wall -Wextra -Werror

OBJ	= main.o utils.o
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean fclean re
