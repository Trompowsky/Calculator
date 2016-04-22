#ifndef EXP_H_INCLUDED
#define EXP_H_INCLUDED

#include <string>
#include "ArithOp.h"

using namespace std;

//class ArithOp;

class Exp{
public:
    Exp(ArithOp * op, Exp * pLHS, Exp * pRHS);
    Exp(ArithOp* op);
    ~Exp();
    double Eval();
    string Print();
    Exp * pLeft;
    Exp * pRight;
    ArithOp * pOper;
    double val;

};

#endif // EXP_H_INCLUDED
