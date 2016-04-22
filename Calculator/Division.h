#ifndef DIVISION_H_INCLUDED
#define DIVISION_H_INCLUDED

#include "Exp.h"
#include "ArithOp.h"

class Division : public ArithOp{
    public:
        Division();
        ~Division();
        double Evaluate (Exp * pLHS, Exp * pRHS);
        string to_s();
};


#endif // DIVISION_H_INCLUDED
