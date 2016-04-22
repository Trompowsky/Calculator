#include "Addition.h"

Addition::Addition(){

}

Addition::~Addition(){


}

double Addition::Evaluate(Exp * pLHS, Exp * pRHS){
//a = *pLHS;
return pLHS->Eval()+pRHS->Eval();
}

string Addition::to_s(){
return "+";
}
