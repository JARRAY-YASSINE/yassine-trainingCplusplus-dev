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
    vector<int> vNumbers2;
    copy(vNumbers.begin()+3, vNumbers.begin()+6, back_inserter(vNumbers2));
    printContainer("vNumbers2",vNumbers2);

    cout << "2- Try to print vNumbers.end()-1 and vNumbers.end()" << endl;
    cout << *(vNumbers.end()-1) << endl;
    cout << *(vNumbers.end()) << endl;

    cout << "3- Search element 99 " << endl;
    auto it = find(vNumbers.begin(), vNumbers.end(),99);
    if(it == vNumbers.end())
        cout << "Not found" << endl;
    else
        cout << "Found" << endl;
    
    return 0;
}