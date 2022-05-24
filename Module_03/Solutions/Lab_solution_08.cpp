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

void fnUpperCase(string &str)
{
    for(int i=0;i<str.length();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){ 
            str[i] = (char)(str[i]-'a' + 'A'); 
        }
    }
}

int main()
{
    cout << "Create vector vString" << endl;

    vector<string> vString {"World","Of","Hello","Programmers","Hello"};
    printContainer("vector1",vString);

    cout << "1- Use algorithm find() to find the first occurrence of Hello" << endl;
    auto found = find(begin(vString), end(vString), "Hello");
    if (found == end(vString))
        cout << "key Hello not found" << endl;
    else
        cout << "key Hello found" << endl;

    cout << "2- Use algorithm count() to count occurrences of Hello" << endl;
    int count_hello = count(begin(vString), end(vString), "Hello");
    cout << "Hello is repeated "<< count_hello << " times" << endl;

    
    cout << "3- Use algorithm for_each() to convert every string in the vector to uppercase" << endl;
    for_each(vString.begin(), vString.end(), fnUpperCase);
    printContainer("vector1",vString);

    return 0;
}