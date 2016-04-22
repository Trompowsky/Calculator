#ifndef SUBTRACTION_H_INCLUDED
#define SUBTRACTION_H_INCLUDED

#include "Exp.h"
#include "ArithOp.h"

class Subtraction : public ArithOp{
    public:
        Subtraction();
        ~Subtraction();
        double Evaluate (Exp * pLHS, Exp * pRHS);
        string to_s();
};

#endif // SUBTRACTION_H_INCLUDED
