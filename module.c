#include <stdio.h>
#include <stdlib.h>
#include "interfaccia.h"

//Definisco la mia struttura
typedef struct complex_num {
    double real;
    double img;
} ComplexNum;

//Funzione che crea numero complesso
ComplexNumPtr createComplex (double real, double img) {
    ComplexNumPtr complex_p;
    complex_p = malloc(sizeof(*complex_p)); //allocazione memoria sizeof (ComplexNum) se cambio ComplexNum non va con (complex_p) va sempre
    complex_p -> real = real;
    complex_p -> img = img;

    return complex_p;
}

//Funzione somma void
void sumComplex(ComplexNumPtr a, ComplexNumPtr b, ComplexNumPtr res) {
    res -> real = a -> real + b -> real;
    res -> img = a -> img + b -> img;
}

//Funzione somma non void
ComplexNumPtr sumComplex2(ComplexNumPtr a, ComplexNumPtr b) {
    ComplexNumPtr z3 = malloc(sizeof(*z3));
    z3 -> real = a -> real + b -> real;
    z3 -> img = a -> img + b -> img;

    return z3;
}

void printComplex(ComplexNumPtr p_complex) {
    printf("%.2f + %.2fi\n", p_complex -> real, p_complex -> img);
}