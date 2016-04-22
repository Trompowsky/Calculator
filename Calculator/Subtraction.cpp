#include "Subtraction.h"

Subtraction::Subtraction(){

}

Subtraction::~Subtraction(){


}

double Subtraction::Evaluate(Exp * pLHS, Exp * pRHS){
//a = *pLHS;
return pLHS->Eval()-pRHS->Eval();
}

string Subtraction::to_s(){
return "-";
}
