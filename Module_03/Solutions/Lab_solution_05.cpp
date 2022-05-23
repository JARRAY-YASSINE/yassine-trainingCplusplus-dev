#include <iostream>
#include <map>

using namespace std;


void printMultimap(const multimap<int, int>& m)
{
    for (const auto& n : m) {
        std::cout << n.first << " = " << n.second << "; ";
    }
}

int main()
{
    cout << "1- Create Multimap" << endl;
    multimap<int, int> myMultimap;
    printMultimap(myMultimap);

    cout << "\n2- Insert pairs to multimap in random order" << endl;
    myMultimap.insert(pair<int, int>(6, 40));
    myMultimap.insert(pair<int, int>(3, 30));
    myMultimap.insert(pair<int, int>(2, 60));
    myMultimap.insert(pair<int, int>(1, 50));
    myMultimap.insert(pair<int, int>(6, 10));
    printMultimap(myMultimap);

    cout << "\n2- Insert newpairs to multimap in random order" << endl;
    myMultimap.insert(pair<int, int>(6, 60));
    myMultimap.insert(pair<int, int>(4, 40));
    printMultimap(myMultimap);

    cout << "\n3- Remove all elements up to key with value 3" << endl;
    myMultimap.erase(myMultimap.begin(), myMultimap.find(3));
    printMultimap(myMultimap);

    cout << "\n3- Remove all elements with value 6" << endl;
    myMultimap.erase(6);
    printMultimap(myMultimap);
    return 0;
}