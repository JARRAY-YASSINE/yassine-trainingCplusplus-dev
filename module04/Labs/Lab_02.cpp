#include <iostream>
 
using namespace std;
 
int main()
{
    char* pStr = new char[10];
    pStr[0] = '!';
    cout << "Before delete: pStr[0] = " << pStr[0] << endl;
    delete[] pStr;
    cout << "After delete: pStr[0] = " << pStr[0] << endl;
    cout << "End of main()" << endl;
    return 0;
}
