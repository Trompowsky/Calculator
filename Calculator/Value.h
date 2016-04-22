#ifndef VALUE_H_INCLUDED
#define VALUE_H_INCLUDED

#include "Exp.h"

class Value : public Exp{
public:
    Value();
    ~Value();
    double Evaluate(Exp * pLeft, Exp * pRight);
    string Operand::to_s();
};

#endif // VALUE_H_INCLUDED
