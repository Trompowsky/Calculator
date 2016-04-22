#include "Multiplication.h"

Multiplication::Multiplication(){

}

Multiplication::~Multiplication(){


}

double Multiplication::Evaluate(Exp * pLHS, Exp * pRHS){
//a = *pLHS;
return (pLHS->Eval())*(pRHS->Eval());
}

string Multiplication::to_s(){
return "*";
}
