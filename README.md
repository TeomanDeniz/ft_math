# ft_math
`ft_math.h` is a remake library from original `<math.h>` library.

Includes `C23`, `C11` and `C99` functions, can compilable and work all versions + compilers.

# Trigonometric functions:
| Function Name                                                                                                       | Function Parameter(s)                          | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------- |
| **[ft_sin](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_sin.c)**                               | `double` x                                     | Returns the sine of `x`                                             |
| **[ft_cos](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_cos.c)**                               | `double` x                                     | Returns the cosine of `x`                                           |
| **[ft_tan](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_tan.c)**                               | `double` x                                     | Returns the tangent of `x`. [sin(`x`) / cos(`x`)]                   |
| **[ft_asin](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_asin.c)**                             | `double` x                                     | Returns the arc sine in radians. (1 ≥ x ≥ -1) [Aka: sin⁻¹(x)]       |
| **[ft_acos](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_acos.c)**                             | `double` x                                     | Returns the arc cosine in radians. (1 ≥ x ≥ -1) [Aka: cos⁻¹(x)]     |
| **[ft_atan](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_atan.c)**                             | `double` x                                     | Returns the arc tangent of `x`                                      |
| **[ft_atan2](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_atan2.c)**                           | `double` x, `double` y                         | Calculates the angle in radians for the quadrant                    |

# Hyperbolic functions:
| Function Name                                                                                                       | Function Parameter(s)                          | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------- |
| **[ft_sinh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_sinh.c)**                                | `double` x                                     | Computes the hyperbolic sine of `x`                                 |
| **[ft_cosh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_sinh.c)**                                | `double` x                                     | Computes the hyperbolic cosine of `x`                               |
| **[ft_tanh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_tanh.c)**                                | `double` x                                     | Computes the hyperbolic tangent of `x`                              |
| **[ft_asinh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_asinh.c)**                              | `double` x                                     | Computes the arc hyperbolic sine of `x`                             |
| **[ft_acosh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_asinh.c)**                              | `double` x                                     | Computes the arc hyperbolic cosine of `x`                           |
| **[ft_atanh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_atanh.c)**                              | `double` x                                     | Computes the arc hyperbolic tangent of `x`                          |

# Exponential and Logarithmic functions:
| Function Name                                                                                                       | Function Parameter(s)                          | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------- |
| **[ft_exp](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_exp.c)**                     | `double` x                                     | Computes e(2.71828) raised to the power of the given `x`            |
| **[ft_exp2](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_exp2.c)**                   | `double` x                                     | Computes `2` raised to the given power `x`                          |
| **[ft_expm1](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_expm1.c)**                 | `double` x                                     | Computes the Euler's number raised to the given `x`, (-1.0 `x`)     |
| **[ft_exp10](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_exp10.c)**                 | `double` x                                     | Calculate the exponent of `10` by `x`                               |
| **[ft_frexp](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_frexp.c)**                 | `double` x, `int *` exponent                   | Returns value of mantissa, and pointed to by `exponent`             |
| **[ft_ldexp](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_ldexp.c)**                 | `double` x, `int` exponent                     | Returns `x` multiplied by `2` raised to the power of `exponent`     |
| **[ft_log](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log.c)**                     | `double` x                                     | Calculation of the logarithm of `x`                                 |
| **[ft_log2](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log2.c)**                   | `double` x                                     | Calculation of the base-2 logarithm of `x`                          |
| **[ft_log10](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log10.c)**                 | `double` x                                     | Calculation of the logarithm of `x` to the base of 10               |
| **[ft_log1p](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log1p.c)**                 | `double` x                                     | Calculates the logarithm of one plus of `x`                         |
| **[ft_logb](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_logb.c)**                   | `double` x                                     | Extracts the unbiased radix-independent exponent from the `x`       |
| **[ft_ilogb](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_ilogb.c)**                 | `double` x                                     | Extracts the value of the unbiased exponent from the  `x` as `int`  |
| **[ft_scalbn](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_scalbn.c)**               | `double` x, `int` exponent                     | Returns `x` multiplied by `2` raised to the power of `exponent`     |

# Power functions:
| Function Name                                                                                                       | Function Parameter(s)                          | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------- |
| **[ft_pow](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_pow.c)**                                       | `double` base, `double` power                  | Calculates the angle in radians for the quadrant                    |
| **[ft_pow10](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_pow10.c)**                                   | `double` x                                     | Calculate the exponent of `10` by `x`                               |
| **[ft_sqrt](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_sqrt.c)**                                     | `double` x                                     | Square root calculation of `x`                                      |
| **[ft_cbrt](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_cbrt.c)**                                     | `double` x                                     | Computes the cube root of `x`                                       |
| **[ft_hypot](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_hypot.c)**                                   | `double` p, `double` b                         | Find hypotenuse of two sides. h = √(p²+b²)                          |
| **[ft_invsqrt](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_invsqrt.c)**                               | `double` x                                     | Fast inverse square root                                            |

# Rounding and Remainder functions:
| Function Name                                                                                                       | Function Parameter(s)                          | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------- |
| **[ft_ceil](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_ceil.c)**                        | `double` x                                     | Computes the nearest integer greater than `x`                       |
| **[ft_floor](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_floor.c)**                      | `double` x                                     | Returns the largest integer that is smaller than or equal to `x`    |
| **[ft_trunc](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_trunc.c)**                      | `double` x                                     | Truncates the `x` by removing the fraction                          |
| **[ft_round](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_round.c)**                      | `double` x                                     | Returns the nearest integer value (rounded value) of the given `x`  |
| **[ft_round](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_round.c)**                      | `double` x                                     | Returns the nearest integer value (rounded value) of the given `x`  |
| **[ft_fmod](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_fmod.c)**                        | `double` x, `double` y                         | Gets the modalities of 2 numbers in "float"                         |
| **[ft_remainder](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_remainder.c)**              | `double` x, `double` y                         | Computes the IEEE remainder of floating point division operation    |
| **[ft_remquo](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_remquo.c)**                    | `double` x, `double` y, `int *` quotient       | Computes the floating-point remainder of the division operation     |
| **[ft_copysign](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_copysign.c)**                | `double` x, `double` y                         | Composes a result with magnitude of `x` and the sign of `y`         |
| **[ft_nan](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nan.c)**                          | `const char *` tag_pointer                     | Just returns NAN (**N**ot **A** **N**umber)                         |
| **[ft_nextafter](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nextafter.c)**              | `double` x, `double` y                         | Returns the next representable value of from in the direction of to |
| **[ft_nexttoward](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nexttoward.c)**            | `double` x, `long double` y                    | (Same with **ft_nextafter**)                                        |

# Floating-point Classification functions:
| Function Name                                                                                                       | Function Parameter(s)                          | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------- |
| **[ft_fpclassify](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_fpclassify.c)** | `double` x                                     | Categorizes floating point value `x` into the following categories  |
| **[ft_isfinite](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_isfinite.c)**     | `double` x                                     | Check if number is not infinity                                     |
| **[ft_isnormal](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_isnormal.c)**     | `double` x                                     | Check if number is normal to in use                                 |
| **[ft_isinf](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_isinf.c)**           | `double` x                                     | Check if float number is inf number (Will also return -1 if "-inf") |
| **[ft_isnan](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_isnan.c)**           | `double` x                                     | Check if float number is non number                                 |
| **[ft_signbit](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_signbit.c)**       | `double` x                                     | Checking if the float number is minus or not                        |

# Bessel functions:
| Function Name                                                                                                       | Function Parameter(s)                          | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------- |
| **[ft_j0](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_j0.c)**                                        | `double` x                                     | Compute the Bessel function of the first kind of order zero (j0)    |
| **[ft_j1](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_j1.c)**                                        | `double` x                                     | Compute the Bessel function of the first kind of order one  (j1)    |
| **[ft_jn](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_jn.c)**                                        | `int` n, `double` x                            | Compute the Bessel function of the first kind of order `n` (jn)     |
| **[ft_y0](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_y0.c)**                                        | `double` x                                     | Compute the Bessel function of the second kind of order zero (y0)   |
| **[ft_y1](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_y1.c)**                                        | `double` x                                     | Compute the Bessel function of the second kind of order one  (y1)   |
| **[ft_yn](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_yn.c)**                                        | `int` n, `double` x                            | Compute the Bessel function of the second kind of order `n` (yn)    |

# Other functions:
| Function Name                                                                                                       | Function Parameter(s)                          | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------- |
| **[ft_fabs](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fabs.c)**                                     | `double` x                                     | Get the absolute value of a `x`                                     |
| **[ft_modf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_modf.c)**                                     | `double` x, `double` \*integer                 | Splits fraction an integer in float number (Returns fraction)       |
| **[ft_fma](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fma.c)**                                       | `double` x, `double` y, `double` z             | `(x * y + z)`                                                       |
| **[ft_erf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_erf.c)**                                       | `double` x                                     | Computes the error function of the given `x`                        |
| **[ft_erfc](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_erfc.c)**                                     | `double` x                                     | Computes the complementary error of `x`                             |
| **[ft_lgamma](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_lgamma.c)**                                 | `double` x                                     | Computes the logarithm of the absolute `x` of the gamma function    |
| **[ft_tgamma](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_tgamma.c)**                                 | `double` x                                     | Compute the gamma function of `x`                                   |
| **[ft_sincos](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_sincos.c)**                                 | `double` x, `double *` sine, `double *` cosine | Split `x` to given variables as sine and cosine                     |

# Neural Network functions:
| Function Name                                                                                                       | Function Parameter(s)                          | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------- |
| **[ft_sigmoid](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_sigmoid.c)**                      | `double` x                                     | Performs the role of an activation function in machine learning     |

# Constants:
| Define Name                                                                                                                             | Value                                                                                            |
| --------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------ |
| **[M_E](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L17)**                                                               | `2.71828182845904523536` (Aka: `Euler's number`)                                                 |
| **[M_LOG2E](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L20)**                                                           | `1.44269504088896340736` (Aka: `log2(e)`)                                                        |
| **[M_LOG10E](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L23)**                                                          | `0.43429448190325182765` (Aka: `log10(e)`)                                                       |
| **[M_LN2](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L26)**                                                             | `0.69314718055994528623` (Aka: `ln(2)`)                                                          |
| **[M_LN10](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L29)**                                                            | `2.30258509299404568402` (Aka: `ln(10)`)                                                         |
| **[M_PI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L32)**                                                              | `3.14159265358979323846` (π)                                                                     |
| **[M_PI_2](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L35)**                                                            | `1.57079632679489661923` (Aka: `M_PI / 2`)                                                       |
| **[M_PI_4](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L38)**                                                            | `0.78539816339744830961` (Aka: `M_PI / 4`)                                                       |
| **[M_1_PI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L41)**                                                            | `0.31830988618379067153` (Aka: `1 / M_PI`)                                                       |
| **[M_2_PI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L44)**                                                            | `0.63661977236758134307` (Aka: `2 / M_PI`)                                                       |
| **[M_SQRT2](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L47)**                                                           | `1.41421356237309504880` (Aka: `sqrt(2)`)                                                        |
| **[M_SQRT1_2](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L50)**                                                         | `0.70710678118654752440` (Aka: `1 / sqrt(2)`)                                                    |
| **[M_SQRTPI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L53)**                                                          | `1.77245385090551588191` (Aka: `sqrt(PI)`)                                                       |
| **[M_2_SQRTPI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L56)**                                                        | `1.12837916709551257390` (Aka: `2 / sqrt(pi)`)                                                   |
| **[M_INVSQRTPI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L59)**                                                       | `0.56418958354775627928` (Aka: `invsqrt(pi)`)                                                    |
| **[M_TPI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L62)**                                                             | `0.63661977236758138243` (Aka: `2 / PI`)                                                         |

# <float.h> Constants:
| Define Name                                                                                                                             | Value                                                                                            |
| --------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------ |
| **[FLT_MAX](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L69)**                                                           | `3.40282347E+38F`                                                                                |
| **[FLT_MIN](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L72)**                                                           | `1.17549435E-38F`                                                                                |
| **[FLT_EPSILON](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L75)**                                                       | `1.19209290E-7F`                                                                                 |
| **[DBL_MAX](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L80)**                                                           | `1.7976931348623158E+308`                                                                        |
| **[DBL_MIN](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L83)**                                                           | `2.2250738585072014E-308`                                                                        |
| **[DBL_EPSILON](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L86)**                                                       | `2.2204460492503131E-16`                                                                         |
| **[LDBL_MAX](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L91)**                                                          | `1.18973149535723176502E+4932L`                                                                  |
| **[LDBL_MIN](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L94)**                                                          | `3.36210314311209350626E-4932L`                                                                  |
| **[LDBL_EPSILON](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L97)**                                                      | `1.08420217248550443401E-19L`                                                                    |

# Environments for **[ft_fpclassify](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_fpclassify.c)** function:
| Define Name                                                                                                                             | Value                                                                                            |
| --------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------ |
| **[FP_NAN](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L102)**                                                           | `0`                                                                                              |
| **[FP_INFINITE](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L105)**                                                      | `1`                                                                                              |
| **[FP_ZERO](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L108)**                                                          | `2`                                                                                              |
| **[FP_SUBNORMAL](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L111)**                                                     | `3`                                                                                              |
| **[FP_NORMAL](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L114)**                                                        | `4`                                                                                              |

# A Few Example(s):
```c
#include	<stdio.h> /*
 * int printf(char *str, ...);
 */

#include	<math.h>

#include	"ft_math.h"

int
	main(void)
{
	double x = 42;
	double y = 5;

	printf("Trigonometric functions:\n");
	printf("[   sin(%d) = %f]\n", x, sin(x));
	printf("[ft_sin(%d) = %f]\n", x, ft_sin(x));
	printf("\n");
	printf("[   cos(%d) = %f]\n", x, cos(x));
	printf("[ft_cos(%d) = %f]\n", x, ft_cos(x));
	printf("\n");
	printf("[   tan(%d) = %f]\n", x, tan(x));
	printf("[ft_tan(%d) = %f]\n", x, ft_tan(x));
	printf("\n");
	printf("[   asin(%d) = %f]\n", x, asin(x));
	printf("[ft_asin(%d) = %f]\n", x, ft_asin(x));
	printf("\n");
	printf("[   acos(%d) = %f]\n", x, acos(x));
	printf("[ft_acos(%d) = %f]\n", x, ft_acos(x));
	printf("\n");
	printf("[   atan(%d) = %f]\n", x, atan(x));
	printf("[ft_atan(%d) = %f]\n", x, ft_atan(x));
	printf("\n");
	printf("[   atan2(%d, %d) = %f]\n", x, y, atan2(x, y));
	printf("[ft_atan2(%d, %d) = %f]\n", x, y, ft_atan2(x, y));
	printf("\n\n");

	printf("[   log(%d) = %f]\n", x, log(x));
	printf("[ft_log(%d) = %f]\n", x, ft_log(x));
	printf("\n");
	printf("[   log1p(%d) = %f]\n", x, log1p(x));
	printf("[ft_log1p(%d) = %f]\n", x, ft_log1p(x));
	printf("\n");
	printf("[   log10(%d) = %f]\n", x, log10(x));
	printf("[ft_log10(%d) = %f]\n", x, ft_log10(x));
	printf("\n\n");

	printf("Power functions:\n");
	printf("[   pow(%d, %d) = %f]\n", x, y, pow(x, y));
	printf("[ft_pow(%d, %d) = %f]\n", x, y, ft_pow(x, y));
	printf("\n");
	printf("[   sqrt(%d) = %f]\n", x, sqrt(x));
	printf("[ft_sqrt(%d) = %f]\n", x, ft_sqrt(x));
	printf("\n\n");

	double nan = (0.0 / 0.0);
	double inf = (1.0 / 0.0);

	printf("[   isnan = %f]\n", isnan(nan));
	printf("[ft_isnan = %f]\n", ft_isnan(nan));
	printf("\n");
	printf("[   isnan = %f]\n", isnan(-nan));
	printf("[ft_isnan = %f]\n", ft_isnan(-nan));
	printf("\n");
	printf("[   ininf = %f]\n", isinf(inf));
	printf("[ft_isinf = %f]\n", ft_isinf(inf));
	printf("\n");
	printf("[   ininf = %f]\n", isinf(-inf));
	printf("[ft_ininf = %f]\n", ft_isinf(-inf));
	printf("\n\n");

	printf("Other functions:\n");
	double pi = 3.1415;
	double temp = 0;
	printf("[   fabs(%d) = %f]\n", -x, fabs(-x));
	printf("[ft_fabs(%d) = %f]\n", -x, ft_fabs(-x));
	printf("\n");
	printf("[   fmod(%d, %d) = %f]\n", x, y, fmod(x, y));
	printf("[ft_fmod(%d, %d) = %f]\n", x, y, ft_fmod(x, y));
	printf("\n");
	printf("[        modf = %f] {modf(pi, &temp)}\n", modf(pi, &temp));
	printf("[   modf temp = %f] {temp}\n", temp);
	printf("[     ft_modf = %f] {ft_modf(pi, &temp)}\n", ft_modf(pi, &temp));
	printf("[ft_modf temp = %f] {temp}\n", temp);

	return (0);
}
```
