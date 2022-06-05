#include <iostream>
 
using namespace std;
 
int main()
{
    char* pStr = new char[10];
    pStr[0] = '!';
    cout << "pStr[0] = " << pStr[0] << endl;
    //Always delete a pointer to avoid memory leak
    delete[] pStr;
    cout << "End of main()" << endl;
    return 0;
}