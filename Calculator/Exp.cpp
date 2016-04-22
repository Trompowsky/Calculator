#include "Exp.h"
#include "Expression.h"
#include <iostream>
#include <string>

using namespace std;

    Exp::Exp(ArithOp * op, Exp * pLHS, Exp * pRHS){
    pLeft = pLHS;
    pRight = pRHS;
    pOper = op;

    //cout << "hello";
    }


    Exp::Exp(ArithOp* op){
    pLeft = 0;
    pRight = 0;
    pOper = op;

    }

    Exp::~Exp(){
    //cout << "GOODBYE!" << endl;
    //cout << pLeft << endl;
    delete pLeft;
    //cout << "   " << pRight << endl;
    delete pRight;
    delete pOper;
    }


    double Exp::Eval(){
    return pOper->Evaluate(pLeft, pRight);
    }

    string Exp::Print(){

string pr;

    if (pLeft != 0){
        pr.append("(");
        string Left = pLeft->Print();
        pr.append(Left);
    }

    string oper = pOper->to_s();
    pr.append(oper);

   if (pRight != 0){
    string Right = pRight->Print();
    pr.append(Right);
    pr.append (")");
   }

    return pr;
    }
