#ifndef CONSTANT_H_INCLUDED
#define CONSTANT_H_INCLUDED

#include "ArithOp.h"
#include "Exp.h"

class Constant: public ArithOp{
public:
    Constant(string num);
    ~Constant();
    double value;
    double Evaluate(Exp * pLHS, Exp * pRHS);
    string to_s();
};

#endif // CONSTANT_H_INCLUDED
