#ifndef interfaccia_h
#define interfaccia_h

typedef struct complex_num *ComplexNumPtr;

//SOlo dichiarazione della funzione
ComplexNumPtr createComplex (double real, double img);
void sumComplex(ComplexNumPtr a, ComplexNumPtr b, ComplexNumPtr res);
ComplexNumPtr sumComplex2(ComplexNumPtr a, ComplexNumPtr b);
void printComplex(ComplexNumPtr p_complex);

#endif //interfaccia_h