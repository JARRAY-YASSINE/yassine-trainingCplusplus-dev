#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

template<typename C>
void printContainer(const string comment, C const& container)
{
    cout << comment << " = { ";
    for(auto n: container)
    {
        cout << n << ",";
    }
    cout << "}; \n";    
}

int main()
{
    cout << "Create vector vNumbers " << endl;

    vector<int> vNumbers  {1,2,7,20,11,30,11,70,11,7,7,8};
    printContainer("vNumbers",vNumbers);

    cout << "1- Use algorithm for_each() to increment all integers of the vector" << endl;

    printContainer("vNumbers",vNumbers);

    cout << "2- Use algorithm transform() to increment all integers of the vector" << endl;

    printContainer("vNumbers",vNumbers);

    cout << "3- Use algorithm copy() to copy a range of elements to a new vector vNumbersCopy" << endl;
    vector<int> vNumbersCopy;

    printContainer("vNumbersCopy",vNumbersCopy);
    
    cout << "4- Use algorithm unique() to remove all duplicates in vector vNumbers" << endl;

    printContainer("vNumbers - sort",vNumbers);

    printContainer("vNumbers - unique",vNumbers);
    vNumbers.erase(l, vNumbers.end());
    printContainer("vNumbers - erase",vNumbers);

    cout << "5- Use algorithm swap() to swap elements of vNumbers and vNumbersCopy" << endl;

    printContainer("vNumbers",vNumbers);
    printContainer("vNumbersCopy",vNumbersCopy);

    cout << "6- Use algorithm replace() to replace 9 by 99 in vNumbers" << endl;

    printContainer("vNumbers", vNumbers);
    return 0;
}