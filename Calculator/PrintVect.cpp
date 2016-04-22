#include "PrintVect.h"

PrintVect::PrintVect(vector<string> random){
exp = random;
}

PrintVect::~PrintVect(){

}

string PrintVect::Bracketing(){
/*if (exp[0]!="("){
    exp.insert(exp.begin(), "(");
    exp.push_back(")");
}
*/
    for (vector<string>::iterator it = exp.begin(); it != exp.end(); ++it) {
        brack_exp.append(*it);
    }


return brack_exp;
}
