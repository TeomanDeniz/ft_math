/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:17:45 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/26 18:17:46 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H

# define FT_MATH_H 0.2 // Version

// Constants:
# ifndef M_E
#  define M_E 2.71828182845904523536 // Euler's Number
# endif
# ifndef M_LOG2E
#  define M_LOG2E 1.44269504088896340736 // log2(e)
# endif
# ifndef M_LOG10E
#  define M_LOG10E 0.434294481903251827651 // log10(e)
# endif
# ifndef M_LN2
#  define M_LN2 0.693147180559945309417 // ln(2)
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
#  define M_SQRT1_2 0.707106781186547524401 // 1 / sqrt(2)
# endif
# ifndef M_2_SQRTPI
#  define M_2_SQRTPI 1.12837916709551257390 // 2 / sqrt(PI)
# endif

// <float.h> Constants:

// Limits of float type
# ifndef FLT_MAX
#  define FLT_MAX 3.40282347E+38F
# endif
# ifndef FLT_MIN
#  define FLT_MIN 1.17549435E-38F
# endif
# ifndef FLT_EPSILON
#  define FLT_EPSILON 1.19209290E-7F
# endif

// Limits of double type
# ifndef DBL_MAX
#  define DBL_MAX 1.7976931348623158E+308
# endif
# ifndef DBL_MIN
#  define DBL_MIN 2.2250738585072014E-308
# endif
# ifndef DBL_EPSILON
#  define DBL_EPSILON 2.2204460492503131E-16
# endif

// Limits of long double type
# ifndef LDBL_MAX
#  define LDBL_MAX 1.18973149535723176502E+4932L
# endif
# ifndef LDBL_MIN
#  define LDBL_MIN 3.36210314311209350626E-4932L
# endif
# ifndef LDBL_EPSILON
#  define LDBL_EPSILON 1.08420217248550443401E-19L
# endif

// Trigonometric functions:
double		ft_sin(register double x);
double		ft_cos(register double x);
double		ft_tan(register double x);
double		ft_asin(register double x);
double		ft_acos(register double x);
double		ft_atan(register double x);
double		ft_atan2(register double y, register double x);

// Hyperbolic functions:
double		ft_sinh(register double x);
double		ft_cosh(register double x);
double		ft_tanh(register double x);
double		ft_asinh(register double x);
double		ft_acosh(register double x);
double		ft_atanh(register double x);

// Exponential and logarithmic functions:
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

// Power functions:
double		ft_pow(register double base, register double power);
double		ft_pow10(register double x);
double		ft_sqrt(register double x);
double		ft_cbrt(register double x);
double		ft_hypot(register double p, register double b);

// Rounding and remainder functions:
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

// Floating-point classification functions:
int			fpclassify(double x);
int			ft_isfinite(register double x);
int			ft_isnormal(register double x);
int			ft_isinf(register double x);
int			ft_isnan(register double x);
int			ft_signbit(double x);

// Other functions:
double		ft_fabs(register double x);
double		ldexp(double x, int exp);
double		frexp(double x, int *exp);
double		ft_modf(register double x, double *integer);
double		fma(double x, double y, double z);
double		erf(double x);
double		erfc(double x);
double		lgamma(double x);
double		tgamma(double x);
double		j0(double x);
double		j1(double x);
double		jn(int n, double x);
double		y0(double x);
double		y1(double x);
double		yn(int n, double x);
double		scalbn(double x, int n);
double		scalbln(double x, long int n);
double		sinpi(double x);
double		cospi(double x);
double		fmin(double x, double y);
double		fmax(double x, double y);

#endif
