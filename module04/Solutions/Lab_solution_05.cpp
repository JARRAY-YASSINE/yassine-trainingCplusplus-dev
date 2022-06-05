#include <iostream>
 
using namespace std;
 
int main()
{
    char* pStr = new char[20];
    pStr[10] = '!';
    delete[] pStr;
    cout << "End of main()" << endl;
    return 0;
}