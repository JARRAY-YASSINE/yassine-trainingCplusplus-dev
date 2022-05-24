#include <iostream>
#include <map>

using namespace std;

template<typename M>
void printMap(const string comment, M const& m)
{
    cout << comment << " = { ";
    for (const auto& n : m) {
        cout << n.first << " = " << n.second << "; ";
    }
    cout << "}; \n";  
}

int main()
{
    cout << "1- Create pcMap" << endl;

    printMap("pcMap", pcMap);

    cout << "2- Create intMultimap " << endl;

    printMap("intMultimap", intMultimap);

    cout << "3- Add pair (DISK, 2000) to pcMap" << endl;

    printMap("pcMap", pcMap);

    cout << "4- Search for key USB in pcMap" << endl;

    if ()
        cout << "key USB not found" << endl;
    else
        cout << "key USB found" << endl;

    cout << "5- Add pair (9, 29) to intMultimap" << endl;


    cout << "6- Use find() to search for key 9 in intMultimap" << endl;

    if ()
        cout << "key 9 not found" << endl;
    else
    {
        cout << "key 9 found" << endl;
        for (auto itr = ; itr != intMultimap.end(); itr++)
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    return 0;
}