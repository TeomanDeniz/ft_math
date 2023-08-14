/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:17:45 by hdeniz            #+#    #+#             */
/*   Updated: 2023/08/13 22:20:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H 20230813L

/* Constants */
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
/* Constants */

/* <float.h> Constants */

/* Limits of float type */
# ifndef FLT_MAX
#  define FLT_MAX 3.40282347E+38F
# endif
# ifndef FLT_MIN
#  define FLT_MIN 1.17549435E-38F
# endif
# ifndef FLT_EPSILON
#  define FLT_EPSILON 1.19209290E-7F
# endif
/* Limits of float type */

/* Limits of double type */
# ifndef DBL_MAX
#  define DBL_MAX 1.7976931348623158E+308
# endif
# ifndef DBL_MIN
#  define DBL_MIN 2.2250738585072014E-308
# endif
# ifndef DBL_EPSILON
#  define DBL_EPSILON 2.2204460492503131E-16
# endif
/* Limits of double type */

/* Limits of long double type */
# ifndef LDBL_MAX
#  define LDBL_MAX 1.18973149535723176502E+4932L
# endif
# ifndef LDBL_MIN
#  define LDBL_MIN 3.36210314311209350626E-4932L
# endif
# ifndef LDBL_EPSILON
#  define LDBL_EPSILON 1.08420217248550443401E-19L
# endif
/* Limits of long double type */

/* Environments that used in ft_fpclassify function */
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
/* Environments that used in ft_fpclassify function */

/* Constants (Float) */
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
/* Constants (Float) */

/* Trigonometric functions */
double		ft_sin(register double x);
double		ft_cos(register double x);
double		ft_tan(register double x);
double		ft_asin(register double x);
double		ft_acos(register double x);
double		ft_atan(register double x);
double		ft_atan2(register double y, register double x);
void		ft_sincos(register double x, double *sine, double *cosine);
double		ft_csc(register double x);
double		ft_sec(register double x);
double		ft_cot(register double x);
double		ft_sinpi(register double x);
double		ft_cospi(register double x);
double		ft_tanpi(register double x);
/* [Float] */
float		ft_sinf(register float x);
float		ft_cosf(register float x);
float		ft_tanf(register float x);
float		ft_asinf(register float x);
float		ft_acosf(register float x);
float		ft_atanf(register float x);
float		ft_atan2f(register float y, register float x);
void		ft_sincosf(register float x, float *sine, float *cosine);
float		ft_cscf(register float x);
float		ft_secf(register float x);
float		ft_cotf(register float x);
float		ft_sinpif(register float x);
float		ft_cospif(register float x);
float		ft_tanpif(register float x);
/* [Float] */
/* Trigonometric functions */

/* Hyperbolic functions */
double		ft_sinh(register double x);
double		ft_cosh(register double x);
double		ft_tanh(register double x);
double		ft_asinh(register double x);
double		ft_acosh(register double x);
double		ft_atanh(register double x);
/* [Float] */
float		ft_sinhf(register float x);
float		ft_coshf(register float x);
float		ft_tanhf(register float x);
float		ft_asinhf(register float x);
float		ft_acoshf(register float x);
float		ft_atanhf(register float x);
/* [Float] */
/* Hyperbolic functions */

/* Exponential and Logarithmic functions */
double		ft_exp(register double x);
double		ft_exp2(register double x);
double		ft_expm1(register double x);
double		ft_exp10(register double x);
double		ft_frexp(register double x, int *exponent);
double		ft_ldexp(register double x, register int exponent);
double		ft_log(register double x);
double		ft_log2(register double x);
double		ft_log10(register double x);
double		ft_log1p(register double x);
double		ft_logb(register double x);
int			ft_ilogb(register double x);
double		ft_scalbn(register double x, register int exponent);
double		ft_scalbln(register double x, register long int exponent);
/* [Float] */
float		ft_expf(register float x);
float		ft_exp2f(register float x);
float		ft_expm1f(register float x);
float		ft_exp10f(register float x);
float		ft_frexpf(register float x, int *exponent);
float		ft_ldexpf(register float x, register int exponent);
float		ft_logf(register float x);
float		ft_log2f(register float x);
float		ft_log10f(register float x);
float		ft_log1pf(register float x);
float		ft_logbf(register float x);
int			ft_ilogbf(register float x);
float		ft_scalbnf(register float x, register int exponent);
float		ft_scalblnf(register float x, register long int exponent);
/* [Float] */
/* Exponential and Logarithmic functions */

/* Power functions */
double		ft_pow(register double base, register double power);
double		ft_pow10(register double x);
double		ft_sqrt(register double x);
double		ft_cbrt(register double x);
double		ft_hypot(register double p, register double b);
double		ft_invsqrt(register double x);
/* [Float] */
float		ft_powf(register float base, register float power);
float		ft_pow10f(register float x);
float		ft_sqrtf(register float x);
float		ft_cbrtf(register float x);
float		ft_hypotf(register float p, register float b);
float		ft_invsqrtf(register float x);
/* [Float] */
/* Power functions */

/* Rounding and Remainder functions */
double		ft_ceil(register double x);
double		ft_floor(register double x);
double		ft_trunc(register double x);
double		ft_round(register double x);
double		ft_fmod(register double x, register double y);
double		ft_remainder(register double x, register double y);
double		ft_remquo(register double x, register double y, int *quotient);
double		ft_copysign(register double x, register double y);
double		ft_nan(const char *tag_pointer);
double		ft_nextafter(register double x, register double y);
double		ft_nexttoward(register double x, register long double y);
long int	ft_lround(register double x);
double		ft_rint(register double x);
long int	ft_lrint(register double x);
double		ft_nearbyint(register double x);
double		ft_fdim(register double x, register double y);
/* [Float] */
float		ft_ceilf(register float x);
float		ft_floorf(register float x);
float		ft_truncf(register float x);
float		ft_roundf(register float x);
float		ft_fmodf(register float x, register float y);
float		ft_remainderf(register float x, register float y);
float		ft_remquof(register float x, register float y, int *quotient);
float		ft_copysignf(register float x, register float y);
float		ft_nanf(const char *tag_pointer);
float		ft_nextafterf(register float x, register float y);
float		ft_nexttowardf(register float x, register long double y);
long int	ft_lroundf(register float x);
float		ft_rintf(register float x);
long int	ft_lrintf(register float x);
float		ft_nearbyintf(register float x);
float		ft_fdimf(register float x, register float y);
/* [Float] */
/* Rounding and Remainder functions */

/* Floating-point Classification functions */
int			ft_fpclassify(register double x);
int			ft_isfinite(register double x);
int			ft_isnormal(register double x);
int			ft_isinf(register double x);
int			ft_isnan(register double x);
int			ft_signbit(double x);
double		ft_significand(register double x);
/* [Float] */
int			ft_fpclassifyf(register float x);
float		ft_significandf(register float x);
/* Floating-point Classification functions */

/* Bessel functions */
double		ft_j0(register double x);
double		ft_j1(register double x);
double		ft_jn(register int n, register double x);
double		ft_y0(register double x);
double		ft_y1(register double x);
double		ft_yn(register int n, register double x);
/* [Float] */
float		ft_j0f(register float x);
float		ft_j1f(register float x);
float		ft_jnf(register int n, register float x);
float		ft_y0f(register float x);
float		ft_y1f(register float x);
float		ft_ynf(register int n, register float x);
/* [Float] */
/* Bessel functions */

/* Other functions */
double		ft_fabs(register double x);
double		ft_modf(register double x, double *integer);
double		ft_fma(register double x, register double y, register double z);
double		ft_erf(register double x);
double		ft_erfc(register double x);
double		ft_lgamma(register double x);
double		ft_tgamma(register double x);
double		ft_fmin(register double x, register double y);
double		ft_fmax(register double x, register double y);
double		ft_lerp(register double x, register double y, register double f);
/* [Float] */
float		ft_fabsf(register float x);
float		ft_modff(register float x, float *integer);
float		ft_fmaf(register float x, register float y, register float z);
float		ft_erff(register float x);
float		ft_erfcf(register float x);
float		ft_lgammaf(register float x);
float		ft_tgammaf(register float x);
float		ft_fminf(register float x, register float y);
float		ft_fmaxf(register float x, register float y);
float		ft_lerpf(register float x, register float y, register float f);
/* [Float] */
/* Other functions */

/* Neural Network functions */
double		ft_sigmoid(register double x);
double		ft_swish(register double x);
double		ft_relu(register double x);
double		ft_leakyrelu(register double x, register double alpha);
double		ft_elu(register double x, register double alpha);
double		ft_prelu(register double x, register double alpha);
double		ft_mish(register double x);
void		ft_softmax(double *x, register int size);
double		ft_softmin(double *x, register int size, register double alpha);
double		ft_softmedian(double *x, register int size, register double alpha);
/* [Float] */
float		ft_eluf(register float x, register float alpha);
float		ft_leakyreluf(register float x, register float alpha);
float		ft_mishf(register float x);
float		ft_preluf(register float x, register float alpha);
float		ft_reluf(register float x);
float		ft_sigmoidf(register float x);
void		ft_softmaxf(float *x, register int size);
float		ft_softmedianf(float *x, register int size, register float alpha);
float		ft_softminf(float *x, register int size, register float alpha);
float		ft_swishf(register float x);
/* [Float] */
/* Neural Network functions */

#endif /* FT_MATH_H */
