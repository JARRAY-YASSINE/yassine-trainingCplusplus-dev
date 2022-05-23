#include <iostream>
#include <map>

using namespace std;


void printMap(const map<string, int>& m)
{
    for (const auto& n : m) {
        cout << n.first << " = " << n.second << "; ";
    }
}

int main()
{
    cout << "1- Create Map" << endl;
    map<string, int> myMap { {"QUIZ 1", 1}, {"QUIZ 2", 1}, {"QUIZ 3", 3} };
    printMap(myMap);

    cout << "\n2- Update value for key QUIZ 1 with number 5" << endl;
    myMap["QUIZ 1"] = 5;
    printMap(myMap);

    cout << "\n3- Insert a new pair value (QUIZ 4, 2) using [ ] operator" << endl;
    myMap["QUIZ 4"] = 2;
    printMap(myMap);

    cout << "\n4- Remove key QUIZ 2 using method erase()" << endl;
    myMap.erase("QUIZ 2");
    printMap(myMap);

    cout << "\n5- Call method clear()" << endl;
    myMap.clear();
    printMap(myMap);

    
    cout << "\n6- Call method empty()" << endl;
    cout << boolalpha <<"Map is empty: "<< myMap.empty() << endl;

    return 0;
}