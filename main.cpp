#include <iostream>
#include <string>
#include "error.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    string s="1002";
    Error::gen_Error(s);
    return 0;
}
