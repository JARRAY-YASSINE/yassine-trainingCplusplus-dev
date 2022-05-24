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
    auto max = max_element(vNumbers.begin(), vNumbers.end());
    cout << "Max = " << *max << endl;

    cout << "2- Print min value of vNumbers" << endl;
    auto min = min_element(vNumbers.begin(), vNumbers.end());
    cout << "Min = " << *min << endl;

    cout << "3- Create vWords a vector of string containig 3 strings" << endl;
    vector<string> vWords  {"AB", "ABC", "ABCDE"};
    cout << "4- Print the longest string using max_element()" << endl;
    auto sMax = max_element(vWords.begin(), vWords.end(), 
                          [](const std::string s1, const std::string s2) {
                              return s1.size() < s2.size();
                          });
    cout << "Min = " << *sMax << endl;

    return 0;
}