NAME = push_swap

LIBFT_DIR = ./libft
LIBFT = ./libft/libft.a

SRCS_DIR = ./srcs
OPERATIONS_DIR = $(SRCS_DIR)/operations

SRCS = ./push_swap.c \
	$(OPERATIONS_DIR)/op_utils.c \
	$(OPERATIONS_DIR)/push.c \
	$(OPERATIONS_DIR)/reverse.c \
	$(OPERATIONS_DIR)/rotate.c \
	$(OPERATIONS_DIR)/swap.c \
	./del.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -g

RM = rm -rf

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJS) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBFT)
	$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean
	$(MAKE) all