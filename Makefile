BONUS ?= 1
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
IFLAGS = -I$(INC_PATH)
AR = ar
ARFLAGS = rc
RM = rm -rf

INC_PATH = .
INC_NAME = libft.h
SRC_PATH = .

SRC_NAME = ft_isalpha.c \
           ft_isdigit.c \
           ft_isalnum.c \
           ft_isascii.c \
           ft_isprint.c \
           ft_toupper.c \
           ft_tolower.c \
           ft_bzero.c \
           ft_memchr.c \
           ft_memcmp.c \
           ft_memcpy.c \
           ft_memmove.c \
           ft_memset.c \
           ft_calloc.c \
           ft_strlen.c \
           ft_strlcpy.c \
           ft_strlcat.c \
           ft_strchr.c \
           ft_strrchr.c \
           ft_strnstr.c \
           ft_strdup.c \
           ft_substr.c \
           ft_strncmp.c \
           ft_strjoin.c \
           ft_strtrim.c \
           ft_split.c \
           ft_itoa.c \
           ft_strmapi.c \
           ft_atoi.c \
           ft_putchar_fd.c \
           ft_putstr_fd.c \
           ft_putendl_fd.c \
           ft_putnbr_fd.c \
           ft_striteri.c


SRC_NAME_BONUS = ft_lstnew.c \
                 ft_lstlast.c \
                 ft_lstmap.c \
                 ft_lstsize.c \
                 ft_lstadd_front.c \
                 ft_lstadd_back.c \
                 ft_lstdelone.c \
                 ft_lstclear.c \
                 ft_lstiter.c

INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
SRC_BONUS = $(addprefix $(SRC_PATH)/, $(SRC_NAME_BONUS))

.SUFFIXES: .c .o .h
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
    $(AR) $(ARFLAGS) $(NAME) $(OBJ)

ifeq ($(BONUS), 1)
bonus: $(OBJ_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ_BONUS)	
else
bonus:
    @echo "Bonus files not included."
endif

%.o: %.c $(INC)
    $(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
    $(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
    $(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re