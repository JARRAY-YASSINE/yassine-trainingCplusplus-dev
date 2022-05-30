#include <iostream>
 
using namespace std;
 
int main()
{
    char* pStr = new char[10];
    pStr[0] = '!';
    cout << "pStr[0] = " << pStr[0] << endl;
    cout << "End of main()" << endl;
    return 0;
}