#include <stdio.h>
#include "interfaccia.h"

//per dimostrarebasta che ho l'incapsulamento completo scrivere nel main
//questo da errore
//z1->real;

int main()
{
    //z1 = -3.5 + j4
    ComplexNumPtr z1 = createComplex(-3.5, 4.0);
    ComplexNumPtr z2 = createComplex(-5.5, 2.5);
    //ComplexNumPtr z3 = createComplex(0.0, 0.0);
    ComplexNumPtr z3;

    //Somma Void
    sumComplex(z1, z2, z3);
    printComplex(z3);

    //Somma non Void
    ComplexNumPtr z4 = sumComplex2(z1, z2);
    //SBAGLIATO:
    //z1 = sumComplex2(z1, z2);
    printComplex(z4);

    return 0;
}
