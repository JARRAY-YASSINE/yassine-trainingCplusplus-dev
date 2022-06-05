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
    map<string, int> pcMap { {"CPU", 400}, {"RAM", 16}, {"DISK", 1000} };
    printMap("pcMap", pcMap);

    cout << "2- Create intMultimap " << endl;
    multimap<int, int> intMultimap  { {1,19}, {9,17}, {7,30} };
    printMap("intMultimap", intMultimap);

    cout << "3- Add pair (DISK, 2000) to pcMap" << endl;
    pcMap.insert(pair<string, int>("DISK", 2000));
    printMap("pcMap", pcMap);

    cout << "4- Search for key USB in pcMap" << endl;
    auto search = pcMap.find("USB");
    if (search == pcMap.end())
        cout << "key USB not found" << endl;
    else
        cout << "key USB found" << endl;

    cout << "5- Add pair (9, 29) to intMultimap" << endl;
    intMultimap.insert(pair<int, int>(9, 29));

    cout << "6- Use find() to search for key 9 in intMultimap" << endl;
    auto msearch = intMultimap.find(9);
    if (msearch == intMultimap.end())
        cout << "key 9 not found" << endl;
    else
    {
        cout << "key 9 found" << endl;
        for (auto itr = msearch; itr != intMultimap.end(); itr++)
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    return 0;
}