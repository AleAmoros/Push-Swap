NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

SOURCES := checks.c \
           errors.c \
           init.c \
           push_swap.c \
           push.c \
           reverse.c \
           rotate.c \
           sort_big.c \
           sort_simple.c \
           splitt.c \
           swap.c \
           utils_list.c \
           utils_min_max.c

OBJECTS := $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re