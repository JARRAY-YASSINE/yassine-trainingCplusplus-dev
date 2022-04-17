#include <iostream>
#include <string>
#include <cstring>
using namespace std;



int main()
{
    cout << "1=1 =>" << (compare(1,1)?"TRUE":"FALSE") << endl;
    cout << "1=6 =>" << (compare(1,6)?"TRUE":"FALSE") << endl;
    cout << "Hello=Hello =>" << (compare("Hello","Hello")?"FALSE":"TRUE") << endl;
    cout << "Hello=Hallo =>" << (compare("Hello","Hallo")?"FALSE":"TRUE") << endl;
    return 0;
}