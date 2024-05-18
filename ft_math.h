/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:17:45 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H 202405
/* *************************** [v] CONSTANTS [v] **************************** */
# ifndef M_E
#  define M_E 2.71828182845904523536 // Euler's Number
# endif
# ifndef M_LOG2E
#  define M_LOG2E 1.44269504088896340736 // log2(e)
# endif
# ifndef M_LOG10E
#  define M_LOG10E 0.43429448190325182765 // log10(e)
# endif
# ifndef M_LN2
#  define M_LN2 0.69314718055994528623 // ln(2)
# endif
# ifndef M_LN10
#  define M_LN10 2.30258509299404568402 // ln(10)
# endif
# ifndef M_PIX2
#  define M_PIX2 6.28318530717958647692 // PI * 2
# endif
# ifndef M_PIX2_3
#  define M_PIX2_3 4.71238898038400589261 // PI * 2 / 3
# endif
# ifndef M_PI
#  define M_PI 3.14159265358979323846 // PI
# endif
# ifndef M_PI_2
#  define M_PI_2 1.57079632679489661923 // PI / 2
# endif
# ifndef M_PI_4
#  define M_PI_4 0.78539816339744830961 // PI / 4
# endif
# ifndef M_1_PI
#  define M_1_PI 0.31830988618379067153 // 1 / PI
# endif
# ifndef M_2_PI
#  define M_2_PI 0.63661977236758134307 // 2 / PI
# endif
# ifndef M_SQRT2
#  define M_SQRT2 1.41421356237309504880 // sqrt(2)
# endif
# ifndef M_SQRT1_2
#  define M_SQRT1_2 0.70710678118654752440 // 1 / sqrt(2)
# endif
# ifndef M_SQRTPI
#  define M_SQRTPI 1.77245385090551588191 // sqrt(PI)
# endif
# ifndef M_2_SQRTPI
#  define M_2_SQRTPI 1.12837916709551257390 // 2 / sqrt(PI)
# endif
# ifndef M_INVSQRTPI
#  define M_INVSQRTPI 0.56418958354775627928 // invsqrt(PI)
# endif
# ifndef M_TPI
#  define M_TPI 0.63661977236758138243 // 2 / PI
# endif
/* [v] FLOAT ---------------------------------------------------------------- */
# ifndef M_E_F
#  define M_E_F 2.71828182845904523536F // Euler's Number
# endif
# ifndef M_LOG2E_F
#  define M_LOG2E_F 1.44269504088896340736F // log2(e)
# endif
# ifndef M_LOG10E_F
#  define M_LOG10E_F 0.43429448190325182765F // log10(e)
# endif
# ifndef M_LN2_F
#  define M_LN2_F 0.69314718055994528623F // ln(2)
# endif
# ifndef M_LN10_F
#  define M_LN10_F 2.30258509299404568402F // ln(10)
# endif
# ifndef M_PIX2_F
#  define M_PIX2_F 6.28318530717958647692F // PI * 2
# endif
# ifndef M_PIX2_3_F
#  define M_PIX2_3_F 4.71238898038400589261F // PI * 2 / 3
# endif
# ifndef M_PI_F
#  define M_PI_F 3.14159265358979323846F // PI
# endif
# ifndef M_PI_2_F
#  define M_PI_2_F 1.57079632679489661923F // PI / 2
# endif
# ifndef M_PI_4_F
#  define M_PI_4_F 0.78539816339744830961F // PI / 4
# endif
# ifndef M_1_PI_F
#  define M_1_PI_F 0.31830988618379067153F // 1 / PI
# endif
# ifndef M_2_PI_F
#  define M_2_PI_F 0.63661977236758134307F // 2 / PI
# endif
# ifndef M_SQRT2_F
#  define M_SQRT2_F 1.41421356237309504880F // sqrt(2)
# endif
# ifndef M_SQRT1_2_F
#  define M_SQRT1_2_F 0.70710678118654752440F // 1 / sqrt(2)
# endif
# ifndef M_SQRTPI_F
#  define M_SQRTPI_F 1.77245385090551588191F // sqrt(PI)
# endif
# ifndef M_2_SQRTPI_F
#  define M_2_SQRTPI_F 1.12837916709551257390F // 2 / sqrt(PI)
# endif
# ifndef M_INVSQRTPI_F
#  define M_INVSQRTPI_F 0.56418958354775627928F // invsqrt(PI)
# endif
# ifndef M_TPI_F
#  define M_TPI_F 0.63661977236758138243F // 2 / PI
# endif
/* [^] FLOAT ---------------------------------------------------------------- */
/* *************************** [^] CONSTANTS [^] **************************** */
/* ******************** [v] TRIGONOMETRIC CONSTANTS [v] ********************* */
# ifndef M_0DEG
#  define M_0DEG 0.0000000000001
# endif
# ifndef M_1DEG
#  define M_1DEG 0.0174532925199
# endif
# ifndef M_45DEG
#  define M_45DEG M_PI_4
# endif
# ifndef M_90DEG
#  define M_90DEG M_PI_2
# endif
# ifndef M_180DEG
#  define M_180DEG M_PI
# endif
# ifndef M_270DEG
#  define M_270DEG M_PIX2_3
# endif
# ifndef M_360DEG
#  define M_360DEG M_PIX2
# endif
/* [v] FLOAT ---------------------------------------------------------------- */
# ifndef M_0DEG_F
#  define M_0DEG_F 0.0000000000001F
# endif
# ifndef M_1DEG_F
#  define M_1DEG_F 0.0174532925199F
# endif
# ifndef M_45DEG_F
#  define M_45DEG_F M_PI_4_F
# endif
# ifndef M_90DEG_F
#  define M_90DEG_F M_PI_2_F
# endif
# ifndef M_180DEG_F
#  define M_180DEG_F M_PI_F
# endif
# ifndef M_270DEG_F
#  define M_270DEG_F M_PIX2_3_F
# endif
# ifndef M_360DEG_F
#  define M_360DEG_F M_PIX2_F
# endif
/* [^] FLOAT ---------------------------------------------------------------- */
/* ******************** [^] TRIGONOMETRIC CONSTANTS [^] ********************* */
/* ********************** [v] <float.h> CONSTANTS [v] *********************** */
/* [v] LIMITS OF FLOAT TYPE ------------------------------------------------- */
# ifndef FLT_MAX
#  define FLT_MAX 3.40282347E+38F
# endif
# ifndef FLT_MIN
#  define FLT_MIN 1.17549435E-38F
# endif
# ifndef FLT_EPSILON
#  define FLT_EPSILON 1.19209290E-7F
# endif
/* [^] LIMITS OF FLOAT TYPE ------------------------------------------------- */
/* [v] LIMITS OF DOUBLE TYPE ------------------------------------------------ */
# ifndef DBL_MAX
#  define DBL_MAX 1.7976931348623158E+308
# endif
# ifndef DBL_MIN
#  define DBL_MIN 2.2250738585072014E-308
# endif
# ifndef DBL_EPSILON
#  define DBL_EPSILON 2.2204460492503131E-16
# endif
/* [^] LIMITS OF DOUBLE TYPE ------------------------------------------------ */
/* [v] LIMITS OF LONG DOUBLE TYPE ------------------------------------------- */
# ifndef LDBL_MAX
#  define LDBL_MAX 1.18973149535723176502E+4932L
# endif
# ifndef LDBL_MIN
#  define LDBL_MIN 3.36210314311209350626E-4932L
# endif
# ifndef LDBL_EPSILON
#  define LDBL_EPSILON 1.08420217248550443401E-19L
# endif
/* [^] LIMITS OF LONG DOUBLE TYPE ------------------------------------------- */
/* ********************** [^] <float.h> CONSTANTS [^] *********************** */
/* ******** [v] ENVIRONMENTS THAT USED IN ft_fpclassify FUNCTION [v] ******** */
# ifndef FP_NAN
#  define FP_NAN          0
# endif
# ifndef FP_INFINITE
#  define FP_INFINITE     1
# endif
# ifndef FP_ZERO
#  define FP_ZERO         2
# endif
# ifndef FP_SUBNORMAL
#  define FP_SUBNORMAL    3
# endif
# ifndef FP_NORMAL
#  define FP_NORMAL       4
# endif
/* ******** [^] ENVIRONMENTS THAT USED IN ft_fpclassify FUNCTION [^] ******** */
/* **************************** [v] STRUCTS [v] ***************************** */
union u_double_bits
{
	double	value;
	struct s_double_type {
		unsigned long long	fraction : 52;
		unsigned short		exponent : 11;
		unsigned char		sign : 1;
	}	parts;
}; // USED IN ./Floating-point_Classification/ft_significand.c
/* [v] FLOAT ---------------------------------------------------------------- */
union u_float_bits
{
	float	value;
	struct s_float_type {
		unsigned long long	fraction : 23;
		unsigned short		exponent : 8;
		unsigned char		sign : 1;
	}	parts;
}; // USED IN ./Floating-point_Classification/ft_significandf.c
/* [^] FLOAT ---------------------------------------------------------------- */
/* **************************** [^] STRUCTS [^] ***************************** */
/* ************************ [v] ./Trigonometric [v] ************************* */
extern double	ft_sin(register double x);
extern double	ft_cos(register double x);
extern double	ft_tan(register double x);
extern double	ft_asin(double x);
extern double	ft_acos(register double x);
extern double	ft_atan(register double x);
extern double	ft_atan2(register double y, register double x);
extern void		ft_sincos(register double x, double *sine, double *cosine);
extern double	ft_csc(register double x);
extern double	ft_sec(register double x);
extern double	ft_cot(register double x);
extern double	ft_sinpi(register double x);
extern double	ft_cospi(register double x);
extern double	ft_tanpi(register double x);
/* [v] FLOAT ---------------------------------------------------------------- */
extern float	ft_sinf(register float x);
extern float	ft_cosf(register float x);
extern float	ft_tanf(register float x);
extern float	ft_asinf(register float x);
extern float	ft_acosf(register float x);
extern float	ft_atanf(register float x);
extern float	ft_atan2f(register float y, register float x);
extern void		ft_sincosf(register float x, float *sine, float *cosine);
extern float	ft_cscf(register float x);
extern float	ft_secf(register float x);
extern float	ft_cotf(register float x);
extern float	ft_sinpif(register float x);
extern float	ft_cospif(register float x);
extern float	ft_tanpif(register float x);
/* [^] FLOAT ---------------------------------------------------------------- */
/* ************************ [^] ./Trigonometric [^] ************************* */
/* ************************** [v] ./Hyperbolic [v] ************************** */
extern double	ft_sinh(register double x);
extern double	ft_cosh(register double x);
extern double	ft_tanh(register double x);
extern double	ft_asinh(register double x);
extern double	ft_acosh(register double x);
extern double	ft_atanh(register double x);
/* [v] FLOAT ---------------------------------------------------------------- */
extern float	ft_sinhf(register float x);
extern float	ft_coshf(register float x);
extern float	ft_tanhf(register float x);
extern float	ft_asinhf(register float x);
extern float	ft_acoshf(register float x);
extern float	ft_atanhf(register float x);
/* [^] FLOAT ---------------------------------------------------------------- */
/* ************************** [^] ./Hyperbolic [^] ************************** */
/* ******************* [v] ./Exponential_Logarithmic [v] ******************** */
extern double	ft_exp(register double x);
extern double	ft_exp2(register double x);
extern double	ft_expm1(register double x);
extern double	ft_exp10(register double x);
extern double	ft_frexp(double x, long *exponent);
extern double	ft_ldexp(double x, register int exponent);
extern double	ft_log(register double x);
extern double	ft_log2(register double x);
extern double	ft_log10(register double x);
extern double	ft_log1p(register double x);
extern double	ft_logb(register double x);
extern int		ft_ilogb(register double x);
extern double	ft_scalbn(register double x, register long exponent);
extern double	ft_scalbln(register double x, register long exponent);
/* [v] FLOAT ---------------------------------------------------------------- */
extern float	ft_expf(register float x);
extern float	ft_exp2f(register float x);
extern float	ft_expm1f(register float x);
extern float	ft_exp10f(register float x);
extern float	ft_frexpf(float x, int *exponent);
extern float	ft_ldexpf(float x, register int exponent);
extern float	ft_logf(register float x);
extern float	ft_log2f(register float x);
extern float	ft_log10f(register float x);
extern float	ft_log1pf(register float x);
extern float	ft_logbf(register float x);
extern int		ft_ilogbf(register float x);
extern float	ft_scalbnf(register float x, register int exponent);
extern float	ft_scalblnf(register float x, register int exponent);
/* [^] FLOAT ---------------------------------------------------------------- */
/* ******************* [^] ./Exponential_Logarithmic [^] ******************** */
/* **************************** [v] ./Power [v] ***************************** */
extern double	ft_pow(register double base, register double power);
extern double	ft_pow10(register double x);
extern double	ft_sqrt(register double x);
extern double	ft_cbrt(register double x);
extern double	ft_hypot(double p, double b);
extern double	ft_invsqrt(register double x);
/* [v] FLOAT ---------------------------------------------------------------- */
extern float	ft_powf(register float base, register float power);
extern float	ft_pow10f(register float x);
extern float	ft_sqrtf(register float x);
extern float	ft_cbrtf(register float x);
extern float	ft_hypotf(float p, float b);
extern float	ft_invsqrtf(register float x);
/* [^] FLOAT ---------------------------------------------------------------- */
/* **************************** [^] ./Power [^] ***************************** */
/* ********************** [v] ./Rounding_Remainder [v] ********************** */
extern double	ft_ceil(double x);
extern double	ft_floor(double x);
extern double	ft_trunc(register double x);
extern double	ft_round(register double x);
extern double	ft_fmod(double x, register double y);
extern double	ft_remainder(double x, double y);
extern double	ft_remquo(register double x, register double y, int *quotient);
extern double	ft_copysign(register double x, register double y);
extern double	ft_nan(const char *tag_pointer);
extern double	ft_nextafter(double x, double y);
extern double	ft_nexttoward(register double x, register long double y);
extern long		ft_lround(register double x);
extern double	ft_rint(register double x);
extern long		ft_lrint(double x);
extern double	ft_nearbyint(register double x);
extern double	ft_fdim(double x, double y);
/* [v] FLOAT ---------------------------------------------------------------- */
extern float	ft_ceilf(float x);
extern float	ft_floorf(float x);
extern float	ft_truncf(register float x);
extern float	ft_roundf(register float x);
extern float	ft_fmodf(float x, register float y);
extern float	ft_remainderf(float x, float y);
extern float	ft_remquof(register float x, register float y, int *quotient);
extern float	ft_copysignf(register float x, register float y);
extern float	ft_nanf(const char *tag_pointer);
extern float	ft_nextafterf(float x, float y);
extern float	ft_nexttowardf(register float x, register long double y);
extern long		ft_lroundf(register float x);
extern float	ft_rintf(register float x);
extern long		ft_lrintf(float x);
extern float	ft_nearbyintf(register float x);
extern float	ft_fdimf(float x, float y);
/* [^] FLOAT ---------------------------------------------------------------- */
/* ********************** [^] ./Rounding_Remainder [^] ********************** */
/* **************** [v] ./Floating-point_Classification [v] ***************** */
extern int		ft_fpclassify(register double x);
extern int		ft_isfinite(register double x);
extern int		ft_isnormal(register double x);
extern int		ft_isinf(register double x);
extern int		ft_isnan(register double x);
extern int		ft_signbit(double x);
extern double	ft_significand(register double x);
/* [v] FLOAT ---------------------------------------------------------------- */
extern int		ft_fpclassifyf(register float x);
extern float	ft_significandf(register float x);
/* [^] FLOAT ---------------------------------------------------------------- */
/* **************** [^] ./Floating-point_Classification [^] ***************** */
/* **************************** [v] ./Bessel [v] **************************** */
extern double	ft_j0(register double x);
extern double	ft_j1(register double x);
extern double	ft_jn(register int n, register double x);
extern double	ft_y0(register double x);
extern double	ft_y1(register double x);
extern double	ft_yn(register int n, register double x);
/* [v] FLOAT ---------------------------------------------------------------- */
extern float	ft_j0f(register float x);
extern float	ft_j1f(register float x);
extern float	ft_jnf(register int n, register float x);
extern float	ft_y0f(register float x);
extern float	ft_y1f(register float x);
extern float	ft_ynf(register int n, register float x);
/* [^] FLOAT ---------------------------------------------------------------- */
/* **************************** [^] ./Bessel [^] **************************** */
/* **************************** [v] ./Other [v] ***************************** */
extern double	ft_fabs(double x);
extern double	ft_modf(double x, double *integer);
extern double	ft_fma(register double x, register double y, register double z);
extern double	ft_erf(double x);
extern double	ft_erfc(register double x);
extern double	ft_lgamma(double x);
extern double	ft_tgamma(register double x);
extern double	ft_fmin(register double x, register double y);
extern double	ft_fmax(register double x, register double y);
extern double	ft_lerp(register double x, register double y, \
register double f);
/* [v] FLOAT ---------------------------------------------------------------- */
extern float	ft_fabsf(float x);
extern float	ft_modff(float x, float *integer);
extern float	ft_fmaf(register float x, register float y, register float z);
extern float	ft_erff(float x);
extern float	ft_erfcf(register float x);
extern float	ft_lgammaf(float x);
extern float	ft_tgammaf(register float x);
extern float	ft_fminf(register float x, register float y);
extern float	ft_fmaxf(register float x, register float y);
extern float	ft_lerpf(register float x, register float y, register float f);
/* [^] FLOAT ---------------------------------------------------------------- */
/* **************************** [^] ./Other [^] ***************************** */
/* ************************ [v] ./Neural_Network [v] ************************ */
extern double	ft_sigmoid(register double x);
extern double	ft_swish(register double x);
extern double	ft_relu(register double x);
extern double	ft_leakyrelu(register double x, register double alpha);
extern double	ft_elu(register double x, double alpha);
extern double	ft_prelu(register double x, register double alpha);
extern double	ft_mish(double x);
extern void		ft_softmax(double *x, register int size);
extern double	ft_softmin(double *x, register int size, register double alpha);
extern double	ft_softmedian(double *x, register int size, \
register double alpha);
/* [v] FLOAT ---------------------------------------------------------------- */
extern float	ft_eluf(register float x, float alpha);
extern float	ft_leakyreluf(register float x, register float alpha);
extern float	ft_mishf(float x);
extern float	ft_preluf(register float x, register float alpha);
extern float	ft_reluf(register float x);
extern float	ft_sigmoidf(register float x);
extern void		ft_softmaxf(float *x, register int size);
extern float	ft_softmedianf(float *x, register int size, \
register float alpha);
extern float	ft_softminf(float *x, register int size, register float alpha);
extern float	ft_swishf(register float x);
/* [^] FLOAT ---------------------------------------------------------------- */
/* ************************ [^] ./Neural_Network [^] ************************ */
#endif /* FT_MATH_H */
