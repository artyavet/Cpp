NAME = phonebook

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address

SRC = phonebook.cpp contact.cpp valid.cpp main.cpp

OBJS = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS} Makefile PhoneBook.hpp Contact.hpp
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

bonus: ${NAME_BONUS}

%.o:%.cpp
	${CC} ${FLAGS} -c  $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}
	
re: fclean all

.PHONY: all clean fclean re