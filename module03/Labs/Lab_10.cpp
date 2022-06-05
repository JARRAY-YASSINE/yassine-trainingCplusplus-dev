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

    cout << "1- Check if vNumbers is sorted using algorithm is_sorted()" << endl;


    cout << "2- Sort vNumbers using algorithm sort()" << endl;



    cout << "3- Create a new vector vNumbers2 with unsorted elements" << endl;


    
    cout << "4- Sort vNumbers2" << endl;



    cout << "5- Merge vNumbers and vNumbers2 using algorithm merge()" << endl;



    cout << "5- Remove all duplicates in destination vector" << endl;


    
    return 0;
}