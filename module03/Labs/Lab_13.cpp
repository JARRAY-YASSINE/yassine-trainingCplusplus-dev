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
    

    //Input Iterator
    vector<int>::iterator inputIterator;
    for () {
    }

    //Output Iterator
    vector<int>::iterator outputIterator;
    for () {
    }

    //Forward Iterator
    vector<int>::iterator forwardIterator;
    for () {
    }

    //Bidirectional Iterator
    map<string, int>::iterator bidirectionalIterator;
    for () {
    }

    //Random Access Iterator
    vector<int>::iterator i1 = ;
    vector<int>::iterator i2 = ;
    if()
        cout << "\ni2 < i1" << endl;
    else
        cout << "\ni2 > i1" << endl;

    int count = ;
    cout << "\ncount = " << count;

    return 0;
}