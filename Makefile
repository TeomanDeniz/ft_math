# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 23:15:03 by hdeniz            #+#    #+#              #
#    Updated: 2023/03/23 15:36:49 by hdeniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
# [COMPILER]

NAME		=	ft_math.a
# [COMPILED LIBRARY FILE'S NAME (STATIC LINK LIBRARY)]

SRC			=	$(eval SRC := $$(shell find . -type f ! -name $$(MAIN) -name "*.c"))$(SRC)
# [FILES TO COMPILE]

MAIN		=	MAIN.c
# [MAIN PRODUCT TO COMPILE]

FLAGS		=	-Wall -Wextra -Werror
# [COMPILER FLAGS]

OBJ			=	$(eval OBJ := $$(SRC:.c=.o))$(OBJ)
N_FILES		:=	0
FILES_N		:=	0

define progress_bar
	$(eval PBAR := $(shell echo $(1)*100/$(2)*100/100 | bc))
	$(eval PDONE := $(shell echo $(PBAR)*4/10 | bc))
	$(eval PLEFT := $(shell echo 40-$(PDONE) | bc))
	$(eval PSEQ := $(shell seq 0 1 $(PLEFT) 2>/dev/null))
	$(eval PEMPTY := $(shell if [ "$(1)" -ne "$(2)" ]; then printf "░%.0s" $(PSEQ); fi))
	$(eval PFILL := $(shell printf "█%.0s" $(shell seq 1 $(PDONE))))
	@printf "\r $(shell tput setaf 11)[$(shell tput setaf 14)$(PFILL)$(PEMPTY)$(shell tput setaf 11)] $(PBAR)%% - $(shell tput setaf 10)[$(1)/$(2)]$(shell tput setaf 11) [$(shell tput setaf 13)$(3)$(shell tput setaf 11)]                                    "
endef

a: all
all: $(NAME)

%.o: %.c
	$(eval FILES_N := $(shell echo $(FILES_N)+1 | bc))
	$(call progress_bar,$(FILES_N),$(N_FILES),$<)
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): files_n_calculator $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo ""
	@echo ""
	@echo " $(shell tput setab 2)$(shell tput setaf 15)$(NAME) Done !$(shell tput sgr0)"
	@echo ""
	@if [ -a $(MAIN) ]; \
	then \
		$(CC) $(FLAGS) $(MAIN) $(NAME) -o $(MAIN:.c=); \
		echo " $(shell tput setab 2)$(shell tput setaf 15)$(MAIN) Done !$(shell tput sgr0)" ; \
		echo "" ; \
	fi;

c: clean
clear: clear
clean:
	@rm -f $(OBJ)
	@echo ""
	@echo " $(shell tput setaf 15)$(shell tput setab 1)Clearing Objective Files$(shell tput sgr0)"
	@echo ""

fc: fclean
fclear: fclean
fclean: clean
	@if [ -a $(NAME) ]; \
	then \
		rm -f $(NAME) ; \
		echo "" ; \
		echo " $(shell tput setab 1)$(shell tput setaf 11)$(NAME)$(shell tput setaf 15) deleted$(shell tput sgr0)" ; \
		echo "" ; \
	fi;
	@if [ -a $(MAIN:.c=) ]; \
	then \
		rm -f $(MAIN:.c=) ; \
		echo "" ; \
		echo " $(shell tput setab 1)$(shell tput setaf 11)$(MAIN:.c=)$(shell tput setaf 15) deleted$(shell tput sgr0)" ; \
		echo "" ; \
	fi;

n: norminette
norm: norminette
norminette:
	@echo ""
	@echo "$(shell tput setab 10)$(shell tput setaf 0) Checking Norminette Rules $(shell tput sgr0)"
	@norminette *.c
	@echo ""
	@echo "$(shell tput setab 11)$(shell tput setaf 0) Checking Header Norminette Rules $(shell tput sgr0)"
	@norminette -R CheckDefine *.h

files_n_calculator:
	@echo "$(shell tput sgr0)"
	@echo ""
	$(eval FILES_N := 0)
	$(eval N_FILES := $(shell echo $(SRC) | wc -w | sed "s/ //g" | bc))

r: fclean all
re: fclean all

.PHONY: all a clean clear c fclean fclear fc re r norminette norm n
