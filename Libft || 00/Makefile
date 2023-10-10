//Ausgabedatei
NAME = libft.a 

//Hier weden alle .c files aufgelistet mit denen gebaut werden kann
SOURCE = ft_atoi.c
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c

//.PHONY zeigt nur an, dass diese Befehle immer ausgefuehrt werden koennen unabhaenig davon, ob es auch eine Datie mit dem gleichen Namen gibt
.PHONY: all clean fclean re

//Hier wird eine Variable OBJ erstellt inderer alle SOURCE-Dateien werden von .c zu .o umgewandelt fuer die libft.a biblio
OBJ = $(SRC:%.c=%.o)

//Hier wird eine Variable von libft.h erstellt
INCLUDES = libft.h

//Variable fuer	alle flags 
CFLAGS = -Wall -Werror -Wextra

//Hier wird beschrieben wir compiled wird mit den Flags und der Include variable, waehrend compiled wird, aendern sich auch alle .c files zu .o dateien
.c.o:
	cc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

//Erstellung des Ziels NAME und alle Objekt werden folgend mit ar rc in die libft.a biblio gesteckt und mit ranlib indexiert
${NAME}: ${OBJ}
			ar rc ${NAME}
			ranlib ${NAME}

// durch all ruft man den outputfile auf
all: ${NAME}

//clean loescht nur die Objektdateien
clean: rm -f ${OBJ}

//fclean loescht alle Objektdateien und zusaetzlich noch die libft.a bzw den Outputfile
fclean: clean
		rm -f ${NAME}

//Zuerst wird ales clean gemacht und dann wieder alles von vorne hergestellt
re: fclean all