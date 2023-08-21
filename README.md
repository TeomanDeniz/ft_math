# ft_math
`ft_math.h` is a remake library from original `<math.h>` library.

Includes `C23`, `C11` and `C99` functions + their `float` types, can compilable and work all versions + compilers.

# Setup:

> **Windows:**
>
> You can double click `MAKE.bat` file and directly install it.
> 
> Or in console, write `make` to compile the stup.

> **Linux, macOS:**
> 
> In console, write `make` to compile the setup.

## PHONYS

Here's the arguments `MAKE.bat` and `Makefile` using:

> `fc`, `fclean`, `fclear` -> Clear both object and created products.

> `c`, `clean`, `clear` -> Clear only object files

> `re` -> Remake everything

Then, in console: you need to include your binary compiler library (.a file) via parameter while compiling your file.

```
GCC main.c ft_math.a
```

# Trigonometric functions:
| Function Name                                                                                                                                                                             | Function Parameter(s)                          | Description                                                     |
| ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | --------------------------------------------------------------- |
| **[ft_sin](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_sin.c)** **[ft_sinf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_sinf.c)**             | `double` x                                     | Returns the sine of `x`                                         |
| **[ft_cos](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_cos.c)** **[ft_cosf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_cosf.c)**             | `double` x                                     | Returns the cosine of `x`                                       |
| **[ft_tan](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_tan.c)**  **[ft_tanf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_tanf.c)**            | `double` x                                     | Returns the tangent of `x`. [sin(`x`) / cos(`x`)]               |
| **[ft_asin](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_asin.c)**  **[ft_asinf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_asinf.c)**        | `double` x                                     | Returns the arc sine in radians. (1 ≥ x ≥ -1) [Aka: sin⁻¹(x)]   |
| **[ft_acos](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_acos.c)**  **[ft_acosf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_acosf.c)**        | `double` x                                     | Returns the arc cosine in radians. (1 ≥ x ≥ -1) [Aka: cos⁻¹(x)] |
| **[ft_atan](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_atan.c)**  **[ft_atanf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_atanf.c)**        | `double` x                                     | Returns the arc tangent of `x`                                  |
| **[ft_atan2](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_atan2.c)**  **[ft_atan2f](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_atan2f.c)**    | `double` x, `double` y                         | Calculates the angle in radians for the quadrant                |
| **[ft_csc](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_csc.c)**  **[ft_cscf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_cscf.c)**            | `double` x                                     | Returns the cosecant of `x`                                     |
| **[ft_sec](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_sec.c)**  **[ft_secf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_secf.c)**            | `double` x                                     | Returns the secant of `x`                                       |
| **[ft_cot](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_cot.c)**  **[ft_cotf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_cotf.c)**            | `double` x                                     | Returns the cotangent of `x`                                    |
| **[ft_sincos](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_sincos.c)** **[ft_sincosf](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_sincosf.c)** | `double` x, `double *` sine, `double *` cosine | Split `x` to given variables as sine and cosine                 |
| **[ft_sinpi](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_sinpi.c)**  **[ft_sinpif](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_sinpif.c)**    | `double` x                                     | sin(`x` * M_PI)                                                 |
| **[ft_cospi](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_cospi.c)**  **[ft_cospif](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_cospif.c)**    | `double` x                                     | cos(`x` * M_PI)                                                 |
| **[ft_tanpi](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_tabpi.c)**  **[ft_tanpif](https://github.com/TeomanDeniz/ft_math/blob/main/Trigonometric/ft_tabpif.c)**    | `double` x                                     | tan(`x` * M_PI)                                                 |

# Hyperbolic functions:
| Function Name                                                                                                                                                                   | Function Parameter(s) | Description                                |
| ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------- | ------------------------------------------ |
| **[ft_sinh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_sinh.c)** **[ft_sinhf](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_sinhf.c)**     | `double` x            | Computes the hyperbolic sine of `x`        |
| **[ft_cosh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_sinh.c)** **[ft_coshf](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_sinhf.c)**     | `double` x            | Computes the hyperbolic cosine of `x`      |
| **[ft_tanh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_tanh.c)** **[ft_tanhf](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_tanhf.c)**     | `double` x            | Computes the hyperbolic tangent of `x`     |
| **[ft_asinh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_asinh.c)** **[ft_asinhf](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_asinhf.c)** | `double` x            | Computes the arc hyperbolic sine of `x`    |
| **[ft_acosh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_asinh.c)** **[ft_acoshf](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_asinhf.c)** | `double` x            | Computes the arc hyperbolic cosine of `x`  |
| **[ft_atanh](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_atanh.c)** **[ft_atanhf](https://github.com/TeomanDeniz/ft_math/blob/main/Hyperbolic/ft_atanhf.c)** | `double` x            | Computes the arc hyperbolic tangent of `x` |

# Exponential and Logarithmic functions:
| Function Name                                                                                                                                                                                                     | Function Parameter(s)                          | Description                                         |
| ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | --------------------------------------------------- |
| **[ft_exp](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_exp.c)** **[ft_expf](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_expf.c)**                 | `double` x                      | Computes e(2.71828) raised to the power of the given `x`           |
| **[ft_exp2](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_exp2.c)** **[ft_exp2f](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_exp2f.c)**             | `double` x                      | Computes `2` raised to the given power `x`                         |
| **[ft_exp10](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_exp10.c)** **[ft_exp10f](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_exp10f.c)**         | `double` x                      | Calculate the exponent of `10` by `x`                              |
| **[ft_expm1](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_expm1.c)** **[ft_expm1f](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_expm1f.c)**         | `double` x                      | Computes the Euler's number raised to the given `x`, (-1.0 `x`)    |
| **[ft_frexp](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_frexp.c)** **[ft_frexpf](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_frexpf.c)**         | `double` x, `int *` exponent    | Returns value of mantissa, and pointed to by `exponent`            |
| **[ft_ilogb](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_ilogb.c)** **[ft_ilogbf](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_ilogbf.c)**         | `double` x                      | Extracts the value of the unbiased exponent from the  `x` as `int` |
| **[ft_ldexp](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_ldexp.c)** **[ft_ldexpf](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_ldexpf.c)**         | `double` x, `int` exponent      | Returns `x` multiplied by `2` raised to the power of `exponent`    |
| **[ft_log](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log.c)** **[ft_logf](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_logf.c)**                 | `double` x                      | Calculation of the logarithm of `x`                                |
| **[ft_log2](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log2.c)** **[ft_log2f](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log2f.c)**             | `double` x                      | Calculation of the base-2 logarithm of `x`                         |
| **[ft_log10](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log10.c)** **[ft_log10f](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log10f.c)**         | `double` x                      | Calculation of the logarithm of `x` to the base of 10              |
| **[ft_log1p](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log1p.c)** **[ft_log1pf](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_log1pf.c)**         | `double` x                      | Calculates the logarithm of one plus of `x`                        |
| **[ft_logb](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_logb.c)** **[ft_logbf](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_logbf.c)**             | `double` x                      | Extracts the unbiased radix-independent exponent from the `x`      |
| **[ft_scalbln](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_scalbln.c)** **[ft_scalblnf](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_scalblnf.c)** | `double` x, `long int` exponent | Returns `x` multiplied by `2` raised to the power of `exponent`    |
| **[ft_scalbn](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_scalbn.c)** **[ft_scalbnf](https://github.com/TeomanDeniz/ft_math/blob/main/Exponential_Logarithmic/ft_scalbnf.c)**     | `double` x, `int` exponent      | Returns `x` multiplied by `2` raised to the power of `exponent`    |

# Power functions:
| Function Name                                                                                                                                                                 | Function Parameter(s)         | Description                                      |
| ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------- | ------------------------------------------------ |
| **[ft_cbrt](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_cbrt.c)** **[ft_cbrtf](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_cbrtf.c)**             | `double` x                    | Computes the cube root of `x`                    |
| **[ft_hypot](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_hypot.c)** **[ft_hypotf](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_hypotf.c)**         | `double` p, `double` b        | Find hypotenuse of two sides. h = √(p²+b²)       |
| **[ft_invsqrt](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_invsqrt.c)** **[ft_invsqrtf](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_invsqrtf.c)** | `double` x                    | Fast inverse square root                         |
| **[ft_pow](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_pow.c)** **[ft_powf](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_powf.c)**                 | `double` base, `double` power | Calculates the angle in radians for the quadrant |
| **[ft_pow10](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_pow10.c)** **[ft_pow10f](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_pow10f.c)**         | `double` x                    | Calculate the exponent of `10` by `x`            |
| **[ft_sqrt](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_sqrt.c)** **[ft_sqrtf](https://github.com/TeomanDeniz/ft_math/blob/main/Power/ft_sqrtf.c)**             | `double` x                    | Square root calculation of `x`                   |

# Rounding and Remainder functions:
| Function Name                                                                                                                                                                                                       | Function Parameter(s)                    | Description                                                         |
| ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------- | ------------------------------------------------------------------- |
| **[ft_ceil](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_ceil.c)** **[ft_ceilf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_ceilf.c)**                         | `double` x                               | Computes the nearest integer greater than `x`                       |
| **[ft_copysign](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_copysign.c)** **[ft_copysignf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_copysignf.c)**         | `double` x, `double` y                   | Composes a result with magnitude of `x` and the sign of `y`         |
| **[ft_fdim](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_fdim.c)** **[ft_fdimf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_fdimf.c)**                         | `double` x, `double` y                   | Returns the positive difference between `x` and `y`                 |
| **[ft_floor](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_floor.c)** **[ft_floorf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_floorf.c)**                     | `double` x                               | Returns the largest integer that is smaller than or equal to `x`    |
| **[ft_fmod](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_fmod.c)** **[ft_fmodf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_fmodf.c)**                         | `double` x, `double` y                   | Gets the modalities of 2 numbers in "float"                         |
| **[ft_lrint](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_lrint.c)** **[ft_lrintf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_lrintf.c)**                     | `double` x                               | Roundoff the floating-point `x` to a long                           |
| **[ft_lround](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_lround.c)** **[ft_lroundf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_lroundf.c)**                 | `double` x                               | Computes the nearest integer value to `x`                           |
| **[ft_nan](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nan.c)** **[ft_nanf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nanf.c)**                             | `const char *` tag_pointer               | Just returns NAN (**N**ot **A** **N**umber)                         |
| **[ft_nearbyint](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nearbyint.c)** **[ft_nearbyintf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nearbyintf.c)**     | `double` x                               | Rounds the floating-point `x` to an integer value                   |
| **[ft_nextafter](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nextafter.c)** **[ft_nextafterf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nextafterf.c)**     | `double` x, `double` y                   | Returns the next representable value of from in the direction of to |
| **[ft_nexttoward](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nexttoward.c)** **[ft_nexttowardf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_nexttowardf.c)** | `double` x, `long double` y              | (Same with **ft_nextafter**)                                        |
| **[ft_remainder](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_remainder.c)** **[ft_remainderf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_remainderf.c)**     | `double` x, `double` y                   | Computes the IEEE remainder of floating point division operation    |
| **[ft_remquo](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_remquo.c)** **[ft_remquof](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_remquof.c)**                 | `double` x, `double` y, `int *` quotient | Computes the floating-point remainder of the division operation     |
| **[ft_rint](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_rint.c)** **[ft_rintf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_rintf.c)**                         | `double` x                               | Roundoff the floating-point `x` to an integer                       |
| **[ft_round](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_round.c)** **[ft_roundf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_roundf.c)**                     | `double` x                               | Returns the nearest integer value (rounded value) of the given `x`  |
| **[ft_trunc](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_trunc.c)** **[ft_truncf](https://github.com/TeomanDeniz/ft_math/blob/main/Rounding_Remainder/ft_truncf.c)**                     | `double` x                               | Truncates the `x` by removing the fraction                          |

# Floating-point Classification functions:
| Function Name                                                                                                                                                                                                                                 | Function Parameter(s) | Description                                                               |
| --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------- | ------------------------------------------------------------------------- |
| **[ft_fpclassify](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_fpclassify.c)** **[ft_fpclassifyf](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_fpclassifyf.c)**     | `double` x            | Categorizes floating point value `x` into the following categories        |
| **[ft_isfinite](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_isfinite.c)**                                                                                                                               | `double` x            | Check if number is not infinity                                           |
| **[ft_isinf](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_isinf.c)**                                                                                                                                     | `double` x            | Check if float number is inf number (Will also return -1 if "-inf")       |
| **[ft_isnan](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_isnan.c)**                                                                                                                                     | `double` x            | Check if float number is non number                                       |
| **[ft_isnormal](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_isnormal.c)**                                                                                                                               | `double` x            | Check if number is normal to in use                                       |
| **[ft_signbit](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_signbit.c)**                                                                                                                                 | `double` x            | Checking if the float number is minus or not                              |
| **[ft_significand](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_significand.c)** **[ft_significandf](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_significandf.c)** | `double` x            | Retrieves the fractional part of a double-precision floating-point number |

# Bessel functions:
| Function Name                                                                                                                                               | Function Parameter(s) | Description                                                       |
| ----------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------- | ----------------------------------------------------------------- |
| **[ft_j0](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_j0.c)** **[ft_j0f](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_j0f.c)** | `double` x            | Compute the Bessel function of the first kind of order zero (j0)  |
| **[ft_j1](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_j1.c)** **[ft_j1f](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_j1f.c)** | `double` x            | Compute the Bessel function of the first kind of order one  (j1)  |
| **[ft_jn](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_jn.c)** **[ft_jnf](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_jnf.c)** | `int` n, `double` x   | Compute the Bessel function of the first kind of order `n` (jn)   |
| **[ft_y0](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_y0.c)** **[ft_y0f](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_y0f.c)** | `double` x            | Compute the Bessel function of the second kind of order zero (y0) |
| **[ft_y1](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_y1.c)** **[ft_y1f](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_y1f.c)** | `double` x            | Compute the Bessel function of the second kind of order one  (y1) |
| **[ft_yn](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_yn.c)** **[ft_ynf](https://github.com/TeomanDeniz/ft_math/blob/main/Bessel/ft_ynf.c)** | `int` n, `double` x   | Compute the Bessel function of the second kind of order `n` (yn)  |

# Other functions:
| Function Name                                                                                                                                                             | Function Parameter(s)              | Description                                                                         |
| ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------- | ----------------------------------------------------------------------------------- |
| **[ft_erf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_erf.c)** **[ft_erff](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_erff.c)**             | `double` x                         | Computes the error function of the given `x`                                        |
| **[ft_erfc](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_erfc.c)** **[ft_erfcf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_erfcf.c)**         | `double` x                         | Computes the complementary error of `x`                                             |
| **[ft_fibonacci](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fibonacci.c)**                                                                                 | `unsigned long long` number        | Every number in the sequence is the sum of two numbers preceding it in the sequence |
| **[ft_fma](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fma.c)** **[ft_fmaf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fmaf.c)**             | `double` x, `double` y, `double` z | `(x * y + z)`                                                                       |
| **[ft_fabs](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fabs.c)** **[ft_fabsf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fabsf.c)**         | `double` x                         | Get the absolute value of a `x`                                                     |
| **[ft_fmax](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fmax.c)** **[ft_fmaxf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fmaxf.c)**         | `double` x                         | If (`x` > `y`) return `x`, else return `y`                                          |
| **[ft_fmin](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fmin.c)** **[ft_fminf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_fminf.c)**         | `double` x                         | If (`x` < `y`) return `x`, else return `y`                                          |
| **[ft_lerp](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_lerp.c)** **[ft_lerpf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_lerpf.c)**         | `double` x, `double` y, `double` f | Linear interpolation.                                                               |
| **[ft_lgamma](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_lgamma.c)** **[ft_lgammaf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_lgammaf.c)** | `double` x                         | Computes the logarithm of the absolute `x` of the gamma function                    |
| **[ft_modf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_modf.c)** **[ft_modff](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_modff.c)**         | `double` x, `double *` integer     | Splits fraction an integer in float number (Returns fraction)                       |
| **[ft_tgamma](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_tgamma.c)** **[ft_tgammaf](https://github.com/TeomanDeniz/ft_math/blob/main/Other/ft_tgammaf.c)** | `double` x                         | Compute the gamma function of `x`                                                   |

# Neural Network functions:
| Function Name                                                                                                                                                                                               | Function Parameter(s)                    | Description                                                             |
| ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------- | ----------------------------------------------------------------------- |
| **[ft_elu](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_elu.c)** **[ft_eluf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_eluf.c)**                             | `double` x, `double` aplha               | "Exponential Linear Unit" Determines the slope for negative input       |
| **[ft_leakyrelu](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_leakyrelu.c)** **[ft_leakyreluf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_leakyreluf.c)**     | `double` x, `double` aplha               | ReLU, But has a small slope for negative values instead of a flat slope |
| **[ft_mish](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_mish.c)** **[ft_mishf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_mishf.c)**                         | `double` x                               | Hyperbolic tangent function, and `softplus` is the smooth approximation |
| **[ft_prelu](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_prelu.c)** **[ft_preluf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_preluf.c)**                     | `double` x, `double` aplha               | ReLU, But has a small slope for negative values instead of a flat slope |
| **[ft_relu](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_relu.c)** **[ft_reluf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_reluf.c)**                         | `double` x                               | "The Rectified Linear Unit" Returns `0` if `x` is negative              |
| **[ft_sigmoid](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_sigmoid.c)** **[ft_sigmoidf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_sigmoidf.c)**             | `double` x                               | Performs the role of an activation function in machine learning         |
| **[ft_softmax](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_softmax.c)** **[ft_softmaxf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_softmaxf.c)**             | `double *` x, `int` size                 | Normalizes the input array `x` by exponentiating each element           |
| **[ft_softmedian](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_softmedian.c)** **[ft_softmedianf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_softmedianf.c)** | `double *` x, `int` size, `double` alpha | Defined as the weighted average of the elements in a vector `x`         |
| **[ft_softmin](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_softmin.c)** **[ft_softminf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_softminf.c)**             | `double *` x, `int` size, `double` alpha | Aka: softmax(-`x`)                                                      |
| **[ft_swish](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_swish.c)** **[ft_swishf](https://github.com/TeomanDeniz/ft_math/blob/main/Neural_Network/ft_swishf.c)**                     | `double` x                               | Allows for a more flexible range of `x`                                 |

# Constants:
| Define Name                                                                                                                                                            | Value                                            |
| ---------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------ |
| **[M_E](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L17)** **[M_E_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L119)**                 | `2.71828182845904523536` (Aka: `Euler's number`) |
| **[M_LOG2E](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L20)** **[M_LOG2E_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L122)**         | `1.44269504088896340736` (Aka: `log2(e)`)        |
| **[M_LOG10E](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L23)** **[M_LOG10E_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L125)**       | `0.43429448190325182765` (Aka: `log10(e)`)       |
| **[M_LN2](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L26)** **[M_LN2_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L128)**             | `0.69314718055994528623` (Aka: `ln(2)`)          |
| **[M_LN10](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L29)** **[M_LN10_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L131)**           | `2.30258509299404568402` (Aka: `ln(10)`)         |
| **[M_PI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L32)** **[M_PI_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L134)**               | `3.14159265358979323846` (π)                     |
| **[M_PI_2](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L35)** **[M_PI_2_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L137)**           | `1.57079632679489661923` (Aka: `M_PI / 2`)       |
| **[M_PI_4](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L38)** **[M_PI_4_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L140)**           | `0.78539816339744830961` (Aka: `M_PI / 4`)       |
| **[M_1_PI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L41)** **[M_1_PI_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L143)**           | `0.31830988618379067153` (Aka: `1 / M_PI`)       |
| **[M_2_PI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L44)** **[M_2_PI_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L146)**           | `0.63661977236758134307` (Aka: `2 / M_PI`)       |
| **[M_SQRT2](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L47)** **[M_SQRT2_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L149)**         | `1.41421356237309504880` (Aka: `sqrt(2)`)        |
| **[M_SQRT1_2](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L50)** **[M_SQRT1_2_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L152)**     | `0.70710678118654752440` (Aka: `1 / sqrt(2)`)    |
| **[M_SQRTPI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L53)** **[M_SQRTPI_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L155)**       | `1.77245385090551588191` (Aka: `sqrt(PI)`)       |
| **[M_2_SQRTPI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L56)** **[M_2_SQRTPI_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L158)**   | `1.12837916709551257390` (Aka: `2 / sqrt(pi)`)   |
| **[M_INVSQRTPI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L59)** **[M_INVSQRTPI_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L161)** | `0.56418958354775627928` (Aka: `invsqrt(pi)`)    |
| **[M_TPI](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L62)** **[M_TPI_F](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L164)**             | `0.63661977236758138243` (Aka: `2 / PI`)         |

# <float.h> Constants:
| Define Name                                                                        | Value                           |
| ---------------------------------------------------------------------------------- | ------------------------------- |
| **[FLT_MAX](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L69)**      | `3.40282347E+38F`               |
| **[FLT_MIN](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L72)**      | `1.17549435E-38F`               |
| **[FLT_EPSILON](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L75)**  | `1.19209290E-7F`                |
| **[DBL_MAX](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L80)**      | `1.7976931348623158E+308`       |
| **[DBL_MIN](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L83)**      | `2.2250738585072014E-308`       |
| **[DBL_EPSILON](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L86)**  | `2.2204460492503131E-16`        |
| **[LDBL_MAX](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L91)**     | `1.18973149535723176502E+4932L` |
| **[LDBL_MIN](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L94)**     | `3.36210314311209350626E-4932L` |
| **[LDBL_EPSILON](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L97)** | `1.08420217248550443401E-19L`   |

# Environments for **[ft_fpclassify](https://github.com/TeomanDeniz/ft_math/blob/main/Floating-point_Classification/ft_fpclassify.c)** function:
| Define Name                                                                         | Value |
| ----------------------------------------------------------------------------------- | ----- |
| **[FP_NAN](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L102)**       |  `0`  |
| **[FP_INFINITE](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L105)**  |  `1`  |
| **[FP_ZERO](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L108)**      |  `2`  |
| **[FP_SUBNORMAL](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L111)** |  `3`  |
| **[FP_NORMAL](https://github.com/TeomanDeniz/ft_math/blob/main/ft_math.h#L114)**    |  `4`  |

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
