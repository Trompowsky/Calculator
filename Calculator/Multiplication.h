#ifndef MULTIPLICATION_H_INCLUDED
#define MULTIPLICATION_H_INCLUDED

#include "Exp.h"
#include "ArithOp.h"

class Multiplication : public ArithOp{
    public:
        Multiplication();
        ~Multiplication();
        double Evaluate (Exp * pLHS, Exp * pRHS);
        string to_s();
};

#endif // MULTIPLICATION_H_INCLUDED
