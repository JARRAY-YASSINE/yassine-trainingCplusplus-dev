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

void printSize(string &str)
{
    cout << "size of "<< str << "=" << str.size()<<endl;
}

int main()
{
    cout << "Create vector vString" << endl;

    vector<string> vString {"World","Of","Hello","Programmers","Hello"};
    printContainer("vString",vString);

    cout << "1- Use algorithm find() to find the first occurrence of Hello" << endl;
    auto found = find(begin(vString), end(vString), "Hello");
    if (found == end(vString))
        cout << "key Hello not found" << endl;
    else
        cout << "key Hello found" << endl;

    cout << "2- Use algorithm count() to count occurrences of Hello" << endl;
    int count_hello = count(begin(vString), end(vString), "Hello");
    cout << "Hello is repeated "<< count_hello << " times" << endl;

    
    cout << "3- Use algorithm for_each() to print size of every string" << endl;
    //for_each(vString.begin(), vString.end(), printSize);
    for_each(vString.begin(), vString.end(), [](string s) -> int { return s.size(); });
    printContainer("vString",vString);

    return 0;
}