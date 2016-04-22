#ifndef PRINTVECT_H_INCLUDED
#define PRINTVECT_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;

class PrintVect{
public:
    PrintVect(vector<string> random);
    ~PrintVect();
    string Bracketing();
    vector<string> exp;
    string brack_exp;

};

#endif // PRINTVECT_H_INCLUDED
