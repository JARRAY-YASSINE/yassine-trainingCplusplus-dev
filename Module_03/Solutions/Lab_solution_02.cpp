#include <iostream>
#include <array>
#include <vector>

using namespace std;
 
int main()
{
    cout << "--- Create a C-Style Array ---" << endl;
    int cStyleArr[4] = {1, 2, 3, 4};
    int i;
    for(i=0; i<4; i++)
    {
        cout << "cStyleArr[" << i << "] = " << cStyleArr[i] << endl;
    }

    cout << "--- Create an std::array ---" << endl;
    array<int,4> array1 {1,2,3,4};
    cout << "array1 = { ";
    for(int n: array1)
    {
        cout << n << ",";
    }
    cout << "}; \n";

    cout << "--- Create an std::vector ---" << endl;
    vector<int> vector1 {1,2,3,4};
    cout << "vector1 = { ";
    for(int n: vector1)
    {
        cout << n << ",";
    }
    cout << "}; \n";

    cout << "Add element at the end : 9" << endl;
    vector1.push_back(9);

    cout << "vector1 = { ";
    for(int n: vector1)
    {
        cout << n << ",";
    }
    cout << "}; \n";

    return 0;
}