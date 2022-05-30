#include <iostream>
 
using namespace std;

void printPointer(void* p)
{
    if(p)
        cout << "Pointer address = 0x"<< std::hex << p << endl;
    else
        cout << "Pointer is Null" << endl;
}

int main()
{
    char* pStr = nullptr;
    //Pointer Must be associated to some valid Dynamic variable
    pStr = new char[20];
    printPointer(pStr);
    pStr[10] = '!';
    delete[] pStr;
    cout << "End of main()" << endl;
    return 0;
}