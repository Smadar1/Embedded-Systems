#ifndef __Complex_C__
#define __Complex_C__

typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

//Function Definitions
extern ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b);
extern void complexDisplay(const char *strName, const ComplexNumber_C u);
extern ComplexNumber_C complexConjugate(ComplexNumber_C u);
extern ComplexNumber_C complexNegate(ComplexNumber_C u);
extern ComplexNumber_C complexSubtract(ComplexNumber_C a, ComplexNumber_C b);
extern float complexMagnitude(const ComplexNumber_C u);


#endif

