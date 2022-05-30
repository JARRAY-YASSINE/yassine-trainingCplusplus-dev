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
    printPointer(pStr);
    pStr[10] = '!';
    cout << "End of main()" << endl;
    return 0;
}