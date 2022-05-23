#include <iostream>
#include <array>
#include <vector>

using namespace std;

void printIntVector(vector<int>& v)
{
    cout << "vector = { ";
    for(int n: v)
    {
        cout << n << ",";
    }
    cout << "}; \n";    
}

int main()
{

    return 0;
}