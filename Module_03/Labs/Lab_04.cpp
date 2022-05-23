#include <iostream>
#include <map>

using namespace std;


void printMap(const map<string, int>& m)
{

}

int main()
{
    cout << "1- Create Map" << endl;

    printMap(myMap);

    cout << "\n2- Update value for key QUIZ 1 with number 5" << endl;

    printMap(myMap);

    cout << "\n3- Insert a new pair value (QUIZ 4, 2) using [ ] operator" << endl;

    printMap(myMap);

    cout << "\n4- Remove key QUIZ 2 using method erase()" << endl;

    printMap(myMap);

    cout << "\n5- Call method clear()" << endl;
   
    printMap(myMap);

    
    cout << "\n6- Call method empty()" << endl;
    cout << std::boolalpha <<"Map is empty: "<< myMap. << endl;

    return 0;
}