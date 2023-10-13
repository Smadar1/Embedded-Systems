#include "mbed.h"
#include "Complex_C.hpp"


// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    complexDisplay("p", p);
    complexDisplay("q", q);
    
    //Add complex numbers
    ComplexNumber_C sum = complexAdd(p, q);
    complexDisplay("p+q", sum);

    //Conjugate of complex numbers
    ComplexNumber_C Con_p = complexConjugate(p);
    ComplexNumber_C Con_q = complexConjugate(q);
    complexDisplay("Conjugate of P", Con_p);
    complexDisplay("Conjugate of Q", Con_q);

    //Negative complex numbers
    ComplexNumber_C neg_p = complexNegate(p);
    ComplexNumber_C neg_q = complexNegate(q);
    complexDisplay("Negative of P", neg_p);
    complexDisplay("Negative of Q", neg_q);

    //Subtract complex numbers
    ComplexNumber_C sub = complexSubtract(p, q);
    complexDisplay("p-q", sub);    

    //Magnitude of complex number
    float mag_p = complexMagnitude(p);
    float mag_q = complexMagnitude(q);
    printf("Magnitude of p: %f \nMagnitude of q: %f", mag_p, mag_q);
  
    
    while (true) {
    }
}
