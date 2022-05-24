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

    vector<int> vNumbers  {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
    printContainer("vNumbers",vNumbers);

    cout << "1- Build a new vector based on vNumbers from index 3 having 3 elements " << endl;


    cout << "2- Try to print vNumbers.end()-1 and vNumbers.end()" << endl;


    cout << "3- Search element 99 " << endl;


    
    return 0;
}