#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <map>
#include <deque>

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

void printMap(map<string, int> const& m)
{
    for (const auto& n : m) {
        cout << n.first << " = " << n.second << "; ";
    }
}

int main()
{
    cout << "Create vector vNumbers " << endl;

    vector<int> vNumbers  {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
    deque<int> deque {1,2,3,4,22,34};
    map<string, int> pcMap { {"CPU", 400}, {"RAM", 16}, {"DISK", 1000} };
    
    cout << "vector[3]="<< vNumbers[3] << endl;
    cout << "vNumbers[3] = 100 " << endl;
    vNumbers[3] = 100;
    cout << "vector[3]="<< vNumbers[3] << endl;
    //Input Iterator
    vector<int>::iterator inputIterator;
    for (inputIterator = vNumbers.begin(); inputIterator != vNumbers.end(); ++inputIterator) {
        cout << (*inputIterator) << " ";
    }
    printContainer("vNumbers", vNumbers);
    //Output Iterator
    vector<int>::iterator outputIterator;
    for (outputIterator = vNumbers.begin(); outputIterator != vNumbers.end(); ++outputIterator) {
        *outputIterator = 1;
    }
    printContainer("vNumbers", vNumbers);
    //Forward Iterator
    vector<int>::iterator forwardIterator;
    for (forwardIterator = vNumbers.begin(); forwardIterator != vNumbers.end(); ++forwardIterator) {
        *forwardIterator = 2;
        cout << (*forwardIterator) << " ";
    }
    printContainer("vNumbers", vNumbers);
    //Bidirectional Iterator
    map<string, int>::iterator bidirectionalIterator;
    for (bidirectionalIterator = pcMap.begin(); bidirectionalIterator != pcMap.end(); ++bidirectionalIterator) {
        cout << (*bidirectionalIterator).first << " ";
    }

    //Random Access Iterator
    vector<int>::iterator i1 = vNumbers.begin();
    vector<int>::iterator i2 = vNumbers.end();
    if(i1 < i2)
        cout << "\ni2 < i1" << endl;
    else
        cout << "\ni2 > i1" << endl;

    int count = i2 - i1;
    cout << "\ncount = " << count;

    return 0;
}