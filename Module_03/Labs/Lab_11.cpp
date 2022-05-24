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

    cout << "1- Print max value of vNumbers" << endl;



    cout << "2- Print min value of vNumbers" << endl;



    cout << "3- Create vWords a vector of string containig 3 strings" << endl;

    cout << "4- Print the longest string using max_element()" << endl;



    return 0;
}