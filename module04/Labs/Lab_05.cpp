#include <iostream>
 
using namespace std;
 
int main()
{
    char* pStr = new char[10];
    pStr[10] = '!';
    delete[] pStr;
    delete[] pStr;
    cout << "End of main()" << endl;
    return 0;
}