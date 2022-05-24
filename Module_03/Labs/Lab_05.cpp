#include <iostream>
#include <map>

using namespace std;


void printMultimap(multimap<int, int> const& m)
{
    for (const auto& n : m) {
        std::cout << n.first << " = " << n.second << "; ";
    }
}

int main()
{
    cout << "1- Create Multimap" << endl;

    printMultimap(myMultimap);

    cout << "\n2- Insert pairs to multimap in random order" << endl;

    printMultimap(myMultimap);

    cout << "\n2- Insert newpairs to multimap in random order" << endl;

    printMultimap(myMultimap);

    cout << "\n3- Remove all elements up to key with value 3" << endl;

    printMultimap(myMultimap);

    cout << "\n3- Remove all elements with value 6" << endl;

    printMultimap(myMultimap);
    return 0;
}