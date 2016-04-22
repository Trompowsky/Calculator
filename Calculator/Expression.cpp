#include "Expression.h"
#include <string>
#include <cstring>

Expression::Expression(string Exp){
input = Exp; //string to split up
pos = 0;
n_pos = input.length();
spl = "+-*/"; //the character at which string splits
xpos = 0;
}

Expression::~Expression(){

}

string Expression::printnum(){
    pos = input.find_first_not_of(spl, pos);
    int n = input.find_first_of(spl, pos);
    int len = n-pos;
    string hello = input.substr(pos, len);
    pos=n;
    //if(input.find_first_not_of(spl, pos) == string::npos){
        return hello;
   // }else{
 //   return hello + input.substr(pos, 1);
    //}
}

string Expression::printop(){
    xpos = input.find_first_not_of(spl, xpos);
    int n = input.find_first_of(spl, xpos);
    int len = n-xpos;
    string hello = input.substr(xpos, len);
    xpos=n;
    string op = input.substr(xpos, 1);
    return op;

}

float Expression::eval(){

}

float Expression::Left(){

}

float Expression::Right(){

}

bool Expression::Emp(){

return input.find_first_not_of(spl, pos) == string::npos;

}

