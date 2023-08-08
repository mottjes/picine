NAME=rush-02

${NAME}:
	cc -Wall -Werror -Wextra -o ${NAME} *.c

clean:
	rm rush-02

fclean: clean

rebuild: clean ${NAME}

leak: ${NAME}
	CK_FORK=no valgrind --vgdb=no --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./rush-02 42