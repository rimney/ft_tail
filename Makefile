NAME = "ft_tail"
SRCS = srcs/*.c
MAIN = main.c

all:
	gcc -c -Wall -Wextra -Werror $(SRCS) $(MAIN)
	gcc -o $(NAME) *.o
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
