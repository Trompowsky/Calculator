#ifndef ADDITION_H_INCLUDED
#define ADDITION_H_INCLUDED

#include "Exp.h"
#include "ArithOp.h"



class Addition : public ArithOp{
    public:
        Addition();
        ~Addition();
        double Evaluate (Exp * pLHS, Exp * pRHS);
        string to_s();
};

#endif // ADDITION_H_INCLUDED
