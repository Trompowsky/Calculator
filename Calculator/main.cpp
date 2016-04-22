#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include "Expression.h"
#include "PrintVect.h"
#include "Exp.h"
#include "Constant.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"

using namespace std;

int main()
{
    string User;
    string prntnum;
    string prntop;
    std::vector<string> strVector;

    cout << "Enter your expression: ";

    cin >> User;
    Expression a(User);

        while (!a.Emp()){
        prntnum = a.printnum();
        strVector.push_back(prntnum);

        if (!a.Emp()){
        prntop = a.printop();
        strVector.push_back(prntop);
        }
    }
        PrintVect b(strVector);
        //cout << b.Bracketing() << endl;

    for (vector<string>::iterator it = strVector.begin(); it != strVector.end(); ++it) {
        //cout << (*it) << endl;
    }
        double value;
        double val;
        istringstream iss(strVector[0]);
        iss >> value;


        istringstream is(strVector[2]);
        is >> val;


        vector <string>::iterator it2 = strVector.begin();

        string num = *it2++;

        Exp * LHS = new Exp(new Constant(num));
        //cout << LHS->Print() << endl;

int i = 0;

   while(2*i+1<strVector.size()){

    string op = *it2++;
    string num1 = *it2++;

    Exp * Number = new Exp(new Constant(num1));

    if (op == "+"){
        Exp * temp = new Exp(new Addition(), LHS, Number);
        //cout << "Calc>  " << LHS->Print() << "=" << LHS->Eval() << endl;
        LHS = temp;
    }
    if (op == "-"){
        Exp * temp = new Exp(new Subtraction(), LHS, Number);
        //cout << "Calc>  " << LHS->Print() << "=" << LHS->Eval() << endl;
        LHS = temp;
    }
    if (op == "/"){
        Exp * temp = new Exp(new Division(), LHS, Number);
        //cout << "Calc>  " << LHS->Print() << "=" << LHS->Eval() << endl;
        LHS = temp;
    }
    if (op == "*"){
        Exp * temp = new Exp(new Multiplication(), LHS, Number);
        //cout << "Calc>  " << LHS->Print() << "=" << LHS->Eval() << endl;
        LHS = temp;
    }
    /*
    if (op!= "*", "-", "+", "/"){
        throw domain_error("Unexpected input - expected an operator");


    }*/
    //cout << i << "\t" << 2*i+1 << "\t" << strVector.size() << endl;
   // Exp * temp = new Exp(op, LHS, Number);
    //LHS = temp;

    i++;

    if (2*i+1==strVector.size()){

            if (op == "+"){
        Exp * temp = new Exp(new Addition(), LHS, Number);
        cout << "Calc> " << LHS->Print() << "=" << LHS->Eval() << endl;
        LHS = temp;
    }
    if (op == "-"){
        Exp * temp = new Exp(new Subtraction(), LHS, Number);
        cout << "Calc> " << LHS->Print() << "=" << LHS->Eval() << endl;
        LHS = temp;
    }
    if (op == "/"){
        Exp * temp = new Exp(new Division(), LHS, Number);
        cout << "Calc> " << LHS->Print() << "=" << LHS->Eval() << endl;
        LHS = temp;
    }
    if (op == "*"){
        Exp * temp = new Exp(new Multiplication(), LHS, Number);
        cout << "Calc> " << LHS->Print() << "=" << LHS->Eval() << endl;
        LHS = temp;
    }

    }


        }
    }




    /*

    while(not the end of the vector){

        op = *it++;
        if it's safe:
            num *it++;

            exp * temp = new Exp(op, LHS, Num)
            LHS = Temp
    }

        Exp * e = new Exp (new Constant ("1"));
        cout << "test e=" << e->Print()  << "=" << e->Eval() << endl;

        Exp * f = new Exp (new Division(), new Exp (new Constant ("1")), new Exp(new Constant ("5")));
        cout << "test f=" << f->Print() << "=" << f->Eval() << endl;

        Exp q(new Subtraction(), e, f);
        cout << "test q=" << q.Print()  << "=" << q.Eval() << endl;



}




/*
        for(unsigned int i=0;i<strVector.size()-1;i+=2){

            istringstream is(strVector[i+2]);
            is >> val;

            if (strVector[i+1] == "+"){

                value = value+val;
            }

        }


        cout << value << endl;
        */
        // now value has the double value or 0.0
