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
    is_sorted(vNumbers.begin(), vNumbers.end())?cout<<"sorted"<< endl:cout<<"unsorted"<< endl;

    cout << "2- Sort vNumbers using algorithm sort()" << endl;
    sort(vNumbers.begin(), vNumbers.end());
    printContainer("vNumbers",vNumbers);

    cout << "3- Create a new vector vNumbers2 with unsorted elements" << endl;
    vector<int> vNumbers2 {8, 7, 5, 2, 8, 4, 2, 9, 1, 3};
    printContainer("vNumbers2", vNumbers2);
    
    cout << "4- Sort vNumbers2" << endl;
    sort(vNumbers2.begin(), vNumbers2.end());
    printContainer("vNumbers2 - sort",vNumbers);

    cout << "5- Merge vNumbers and vNumbers2 using algorithm merge()" << endl;
    std::vector<int> dst;
    merge(vNumbers.begin(), vNumbers.end(),vNumbers2.begin(), vNumbers2.end(),back_inserter(dst));
    printContainer("dst",dst);

    cout << "5- Remove all duplicates in destination vector" << endl;
    auto l = unique(dst.begin(), dst.end());
    dst.erase(l, dst.end());
    printContainer("dst",dst);
    
    return 0;
}