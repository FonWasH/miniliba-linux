OBJ_DIR		= ./obj/

SRCS		= $(wildcard *.c)
OBJS		= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

CC			= cc
CFLAGS		= -O3 -w -latomic -ldl -lpthread -lm
AR			= ar rc
ID			= ranlib
RM			= rm -rf

NAME		= libmla.a


all:			$(NAME)

$(OBJ_DIR)%.o:	%.c
				@mkdir -p $(dir $@)
				@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				@$(AR) $(NAME) $(OBJS)
				@$(ID) $(NAME)

clean: 
				@$(RM) $(OBJ_DIR) $(NAME)

re:				clean all

.PHONY:			all clean re