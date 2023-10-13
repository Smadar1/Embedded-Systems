#include "stdio.h"
#include "Complex_C.hpp"
#include "math.h"

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) 
{
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

ComplexNumber_C complexConjugate(const ComplexNumber_C u)
{
    ComplexNumber_C y = u;
    y.imag = -y.imag;
    return y;
}

ComplexNumber_C complexNegate(const ComplexNumber_C u)
{
    ComplexNumber_C y = u;
    y.imag = -y.imag;
    y.real = -y.real;
    return y;
}

ComplexNumber_C complexSubtract(const ComplexNumber_C a, const ComplexNumber_C b)
{
    ComplexNumber_C y;
    ComplexNumber_C u = complexNegate(b);
    y = complexAdd(a, u);
    return y;
}

float complexMagnitude(const ComplexNumber_C u)
{
    ComplexNumber_C y = u;
    float m;
    y.imag = y.imag*y.imag;
    y.real = y.real*y.real;
    m = sqrt((y.real + y.imag));
    return abs(m);
}

void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + j%f\n", strName, u.real, u.imag);
}