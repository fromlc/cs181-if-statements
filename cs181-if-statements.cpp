//------------------------------------------------------------------------------
// cs181-if-statements.cpp 
//
// - play with if statements in class
//------------------------------------------------------------------------------
#include <iomanip>
#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    double dval = 3.0;
    int ival = 3;
    cout << "ival=" << ival << "\n";
    cout << "dval=" << dval << "\n";

    if (dval == ival)
    {
        cout << setprecision(1) << fixed
            << ival << " is the same as " 
            << dval << "\n";
    }
}
    