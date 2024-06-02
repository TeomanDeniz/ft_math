# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 10:48:13 by hdeniz            #+#    #+#              #
#    Updated: 2024/06/02 16:31:01 by hdeniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *************************** [v] MAIN SOURCES [v] *************************** #
MAIN_SRC	=	./Bessel/ft_j0.c \
				./Bessel/ft_j0f.c \
				./Bessel/ft_j1.c \
				./Bessel/ft_j1f.c \
				./Bessel/ft_jn.c \
				./Bessel/ft_jnf.c \
				./Bessel/ft_y0.c \
				./Bessel/ft_y0f.c \
				./Bessel/ft_y1.c \
				./Bessel/ft_y1f.c \
				./Bessel/ft_yn.c \
				./Bessel/ft_ynf.c \
				./Exponential_Logarithmic/ft_exp.c \
				./Exponential_Logarithmic/ft_exp10.c \
				./Exponential_Logarithmic/ft_exp10f.c \
				./Exponential_Logarithmic/ft_exp2.c \
				./Exponential_Logarithmic/ft_exp2f.c \
				./Exponential_Logarithmic/ft_expf.c \
				./Exponential_Logarithmic/ft_expm1.c \
				./Exponential_Logarithmic/ft_expm1f.c \
				./Exponential_Logarithmic/ft_frexp.c \
				./Exponential_Logarithmic/ft_frexpf.c \
				./Exponential_Logarithmic/ft_ilogb.c \
				./Exponential_Logarithmic/ft_ilogbf.c \
				./Exponential_Logarithmic/ft_ldexp.c \
				./Exponential_Logarithmic/ft_ldexpf.c \
				./Exponential_Logarithmic/ft_log.c \
				./Exponential_Logarithmic/ft_log10.c \
				./Exponential_Logarithmic/ft_log10f.c \
				./Exponential_Logarithmic/ft_log1p.c \
				./Exponential_Logarithmic/ft_log1pf.c \
				./Exponential_Logarithmic/ft_log2.c \
				./Exponential_Logarithmic/ft_log2f.c \
				./Exponential_Logarithmic/ft_logb.c \
				./Exponential_Logarithmic/ft_logbf.c \
				./Exponential_Logarithmic/ft_logf.c \
				./Exponential_Logarithmic/ft_scalbln.c \
				./Exponential_Logarithmic/ft_scalblnf.c \
				./Exponential_Logarithmic/ft_scalbn.c \
				./Exponential_Logarithmic/ft_scalbnf.c \
				./Floating-point_Classification/ft_fpclassify.c \
				./Floating-point_Classification/ft_fpclassifyf.c \
				./Floating-point_Classification/ft_isfinite.c \
				./Floating-point_Classification/ft_isinf.c \
				./Floating-point_Classification/ft_isnan.c \
				./Floating-point_Classification/ft_isnormal.c \
				./Floating-point_Classification/ft_signbit.c \
				./Floating-point_Classification/ft_significand.c \
				./Floating-point_Classification/ft_significandf.c \
				./Hyperbolic/ft_acosh.c \
				./Hyperbolic/ft_acoshf.c \
				./Hyperbolic/ft_asinh.c \
				./Hyperbolic/ft_asinhf.c \
				./Hyperbolic/ft_atanh.c \
				./Hyperbolic/ft_atanhf.c \
				./Hyperbolic/ft_cosh.c \
				./Hyperbolic/ft_coshf.c \
				./Hyperbolic/ft_sinh.c \
				./Hyperbolic/ft_sinhf.c \
				./Hyperbolic/ft_tanh.c \
				./Hyperbolic/ft_tanhf.c \
				./Neural_Network/ft_elu.c \
				./Neural_Network/ft_eluf.c \
				./Neural_Network/ft_leakyrelu.c \
				./Neural_Network/ft_leakyreluf.c \
				./Neural_Network/ft_mish.c \
				./Neural_Network/ft_mishf.c \
				./Neural_Network/ft_prelu.c \
				./Neural_Network/ft_preluf.c \
				./Neural_Network/ft_relu.c \
				./Neural_Network/ft_reluf.c \
				./Neural_Network/ft_sigmoid.c \
				./Neural_Network/ft_sigmoidf.c \
				./Neural_Network/ft_softmax.c \
				./Neural_Network/ft_softmaxf.c \
				./Neural_Network/ft_softmedian.c \
				./Neural_Network/ft_softmedianf.c \
				./Neural_Network/ft_softmin.c \
				./Neural_Network/ft_softminf.c \
				./Neural_Network/ft_swish.c \
				./Neural_Network/ft_swishf.c \
				./Other/ft_erf.c \
				./Other/ft_erfc.c \
				./Other/ft_erfcf.c \
				./Other/ft_erff.c \
				./Other/ft_fabs.c \
				./Other/ft_fabsf.c \
				./Other/ft_fibonacci.c \
				./Other/ft_fma.c \
				./Other/ft_fmaf.c \
				./Other/ft_fmax.c \
				./Other/ft_fmaxf.c \
				./Other/ft_fmin.c \
				./Other/ft_fminf.c \
				./Other/ft_lerp.c \
				./Other/ft_lerpf.c \
				./Other/ft_lgamma.c \
				./Other/ft_lgammaf.c \
				./Other/ft_modf.c \
				./Other/ft_modff.c \
				./Other/ft_tgamma.c \
				./Other/ft_tgammaf.c \
				./Power/ft_cbrt.c \
				./Power/ft_cbrtf.c \
				./Power/ft_hypot.c \
				./Power/ft_hypotf.c \
				./Power/ft_invsqrt.c \
				./Power/ft_invsqrtf.c \
				./Power/ft_pow.c \
				./Power/ft_pow10.c \
				./Power/ft_pow10f.c \
				./Power/ft_powf.c \
				./Power/ft_sqrt.c \
				./Power/ft_sqrtf.c \
				./Rounding_Remainder/ft_ceil.c \
				./Rounding_Remainder/ft_ceilf.c \
				./Rounding_Remainder/ft_copysign.c \
				./Rounding_Remainder/ft_copysignf.c \
				./Rounding_Remainder/ft_fdim.c \
				./Rounding_Remainder/ft_fdimf.c \
				./Rounding_Remainder/ft_floor.c \
				./Rounding_Remainder/ft_floorf.c \
				./Rounding_Remainder/ft_fmod.c \
				./Rounding_Remainder/ft_fmodf.c \
				./Rounding_Remainder/ft_lrint.c \
				./Rounding_Remainder/ft_lrintf.c \
				./Rounding_Remainder/ft_lround.c \
				./Rounding_Remainder/ft_lroundf.c \
				./Rounding_Remainder/ft_nan.c \
				./Rounding_Remainder/ft_nanf.c \
				./Rounding_Remainder/ft_nearbyint.c \
				./Rounding_Remainder/ft_nearbyintf.c \
				./Rounding_Remainder/ft_nextafter.c \
				./Rounding_Remainder/ft_nextafterf.c \
				./Rounding_Remainder/ft_nexttoward.c \
				./Rounding_Remainder/ft_nexttowardf.c \
				./Rounding_Remainder/ft_remainder.c \
				./Rounding_Remainder/ft_remainderf.c \
				./Rounding_Remainder/ft_remquo.c \
				./Rounding_Remainder/ft_remquof.c \
				./Rounding_Remainder/ft_rint.c \
				./Rounding_Remainder/ft_rintf.c \
				./Rounding_Remainder/ft_round.c \
				./Rounding_Remainder/ft_roundf.c \
				./Rounding_Remainder/ft_trunc.c \
				./Rounding_Remainder/ft_truncf.c \
				./Trigonometric/ft_acos.c \
				./Trigonometric/ft_acosf.c \
				./Trigonometric/ft_asin.c \
				./Trigonometric/ft_asinf.c \
				./Trigonometric/ft_atan.c \
				./Trigonometric/ft_atan2.c \
				./Trigonometric/ft_atan2f.c \
				./Trigonometric/ft_atanf.c \
				./Trigonometric/ft_cos.c \
				./Trigonometric/ft_cosf.c \
				./Trigonometric/ft_cospi.c \
				./Trigonometric/ft_cospif.c \
				./Trigonometric/ft_cot.c \
				./Trigonometric/ft_cotf.c \
				./Trigonometric/ft_csc.c \
				./Trigonometric/ft_cscf.c \
				./Trigonometric/ft_sec.c \
				./Trigonometric/ft_secf.c \
				./Trigonometric/ft_sin.c \
				./Trigonometric/ft_sincos.c \
				./Trigonometric/ft_sincosf.c \
				./Trigonometric/ft_sinf.c \
				./Trigonometric/ft_sinpi.c \
				./Trigonometric/ft_sinpif.c \
				./Trigonometric/ft_tan.c \
				./Trigonometric/ft_tanf.c \
				./Trigonometric/ft_tanpi.c \
				./Trigonometric/ft_tanpif.c
# *************************** [^] MAIN SOURCES [^] *************************** #

# **************************** [v] VARIABLES [v] ***************************** #
	# [COMPILER]
		CC			=	gcc
	# [COMPILER]
	# [PRODUCT]
		NAME		=	mathft.a
	# [PRODUCT]
	# [COMPILER FLAGS]
		CFLAGS		=	-Wall -Wextra -Werror -O3
	# [COMPILER FLAGS]
	# [.c STRINGS TO .o]
		MAIN_OBJ	=	$(MAIN_SRC:.c=.o)
	# [.c STRINGS TO .o]
	# ANIMATION VARIABLES
		TERMINAL_LEN	:=	\
			$(eval TERMINAL_LEN := $(shell tput cols))$(TERMINAL_LEN)
		NUMBER_OF_FILES	:=	0
		FILE_COUNTER	:=	0
		N_OBJ			:=	$(eval N_OBJ := $$(shell find "." \
		-name '*.o' -type f | wc -w | sed "s/ //g" | bc))$(N_OBJ)
	# ANIMATION VARIABLES
# **************************** [^] VARIABLES [^] ***************************** #

# ****************************** [v] COLORS [v] ****************************** #
	C_RESET	= \033[0m
	C_BLINK	= \033[5m
	F15		= \033[38;5;15m
	B1F11	= \033[48;5;1m\033[38;5;11m
	B12F15	= \033[48;5;12m\033[38;5;15m
	B1F15	= \033[48;5;1m\033[38;5;15m
	B2F15	= \033[48;5;2m\033[38;5;15m
	F11		= \033[38;5;11m
	F13		= \033[38;5;13m
	F14		= \033[38;5;14m
	F10		= \033[38;5;10m
# ****************************** [^] COLORS [^] ****************************** #

# ***************************** [v] FUNCIONS [v] ***************************** #
define progress_bar
	$(eval PBAR := $(shell echo $(1)*100/$(2)*100/100 | bc))
	$(eval PDONE := $(shell echo $(PBAR)*3/10 | bc))
	$(eval PLEFT := $(shell echo 30-$(PDONE) | bc))
	$(eval PSEQ := $(shell seq 0 1 $(PLEFT) 2>/dev/null))
	$(eval PEMPTY := $(shell if [ "$(1)" -ne "$(2)" ]; \
		then printf ".%.0s" $(PSEQ); fi))
	$(eval PFILL := $(shell printf "\#%.0s" $(shell seq 1 $(PDONE))))
	@printf "\r%*s\r $(F11)[$(F14)$(PFILL)$(PEMPTY)$(F11)] $(PBAR)%% - \
		$(F10)[$(1)/$(2)]$(F11) [$(F13)$(3)$(F11)$(C_RESET)]" \
		$(TERMINAL_LEN) " "
endef
# ***************************** [^] FUNCIONS [^] ***************************** #

%.o: %.c
	$(eval NUMBER_OF_FILES := $(shell echo $(MAIN_SRC) \
		| wc -w | sed "s/ //g" | bc))
	$(eval NUMBER_OF_FILES := $(shell echo $(NUMBER_OF_FILES) - $(N_OBJ) | bc))
	$(if $(filter 0,$(NUMBER_OF_FILES)), $(eval NUMBER_OF_FILES := 1))
	$(eval FILE_COUNTER := $(shell echo $(FILE_COUNTER) + 1 | bc))
	$(call progress_bar,$(FILE_COUNTER),$(NUMBER_OF_FILES),$<)
	@rm -f $(NAME) 2>/dev/null
	@$(CC) $(CFLAGS) -c $< -o $@ 2>/dev/null || (\
		echo "\n\n $(B1F15) Failed to compile [$(F11)$<$(F15)] $(C_RESET)\n" &&\
		$(CC) $(CFLAGS) -c $< -o $@)

all: $(NAME)

$(NAME): $(MAIN_OBJ)
	@ar -rcs $(NAME) $(MAIN_OBJ) && \
		echo "\n\n $(C_BLINK)$(B2F15) $(NAME) is ready! $(C_RESET)\n"

c: clean
clear: clean
clean:
	@rm $(MAIN_OBJ) $(BONUS_OBJ) 2>/dev/null && \
		echo "\n $(B1F15) Objects are cleared! $(C_RESET)\n" || \
		echo "\n $(B12F15) Nothing to clear! $(C_RESET)\n"
	$(eval N_OBJ := "0")

fc: fclean
fclean: clean
	@rm $(NAME) $(BONUS_EXE) 2>/dev/null && \
		echo "\n $(B1F11) $(NAME) $(F15)deleted! $(C_RESET)\n" || \
		echo "\n $(B12F15) $(NAME) is not exist already! $(C_RESET)\n"

re: fc all

.PHONY: all fclean fc clean clear c
