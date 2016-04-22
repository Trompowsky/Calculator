#include "Constant.h"
#include <sstream>
#include <string>
#include "Exp.h"

using namespace std;

Constant::Constant(string num){
     istringstream iss(num);
     iss >> value;

}

Constant::~Constant(){

}

double Constant::Evaluate(Exp * pLHS, Exp * pRHS){
return value;
}

string Constant::to_s(){
    ostringstream converter;
    converter << value;
    return converter.str();
}
