#ifndef ARITHOP_H_INCLUDED
#define ARITHOP_H_INCLUDED

//#include "Exp.h"
#include <string>

class Exp;

using namespace std;

class ArithOp{
public:
    virtual ~ArithOp();
    virtual double Evaluate(Exp * pLHS, Exp * pRHS) = 0;
    virtual string to_s() = 0;
};

#endif // ARITHOP_H_INCLUDED
