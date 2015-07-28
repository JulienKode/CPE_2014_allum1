##
## Makefile for  in /home/karst_j/Epitech/2014-2015/ProgElem/allum1
## 
## Made by Julien Karst
## Login   <karst_j@epitech.net>
## 
## Started on  Wed Feb 11 14:04:52 2015 Julien Karst
## Last update Fri Feb 20 11:25:18 2015 Julien Karst
##

CC	= gcc

CFLAGS	= -I./include  -g

LDFLAGS	= -L./lib -lmy

SRC	= src/main.c \
	  src/allum1.c \
	  src/ia.c \
	  src/fct_ia.c \
	  src/my_demand.c \
	  src/my_order.c \
	  src/play.c

OBJ	= $(SRC:.c=.o)

NAME	= allum1

all	: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) $(CFLAGS) -lSDL -lSDL_mixer

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY	: all clean flcean re
