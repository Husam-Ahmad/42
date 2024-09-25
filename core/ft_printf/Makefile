NAME = libftprintf.a
SOURCES = ft_printf.c \
		  ft_printf_supporter.c \
		  ft_printf_converter.c

COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror
OBJECTS = $(SOURCES:.c=.o)

EXECUTABLE = smn

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS) 

$(EXECUTABLE): $(OBJECTS)
	$(COMPILER) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.c
	$(COMPILER)  $(CFLAGS) -c $< -o $@ 

all: $(NAME) $(EXECUTABLE)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) $(EXECUTABLE)

re: fclean all

.PHONY: all clean fclean re




