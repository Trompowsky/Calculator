#ifndef EXPRESSION_H_INCLUDED
#define EXPRESSION_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;

class Expression{
public:
    Expression(string Exp);
    ~Expression();
    float eval();
    string printnum();
    string printop();
    float Left();
    float Right();
    bool Emp();
    int pos;
    int n_pos;
    int xpos;
    string input;
    string spl;
};

#endif // EXPRESSION_H_INCLUDED
