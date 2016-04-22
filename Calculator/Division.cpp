#include "Division.h"

Division::Division(){

}

Division::~Division(){


}

double Division::Evaluate(Exp * pLHS, Exp * pRHS){
//a = *pLHS;
return (pLHS->Eval())/(pRHS->Eval());
}

string Division::to_s(){
return "/";
}
