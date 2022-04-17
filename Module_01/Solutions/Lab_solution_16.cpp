#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T>
bool compare(T a, T b)
{
    return a == b;
}

template <>
bool compare<const char*> (const char* a, const char* b)
{
    return strcmp(a,b);
}

int main()
{
    cout << "1=1 =>" << (compare(1,1)?"TRUE":"FALSE") << endl;
    cout << "1=6 =>" << (compare(1,6)?"TRUE":"FALSE") << endl;
    cout << "Hello=Hello =>" << (compare("Hello","Hello")?"FALSE":"TRUE") << endl;
    cout << "Hello=Hallo =>" << (compare("Hello","Hallo")?"FALSE":"TRUE") << endl;
    return 0;
}