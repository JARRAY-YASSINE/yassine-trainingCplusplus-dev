#include <iostream>
#include <vector>
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

int main()
{
    cout << "Create vector vector1" << endl;

    vector<int> vector1 {101,92,63,54,22,34};
    printContainer("vector1",vector1);

    cout << "1- Use assign() to create a vector vector2 initialized with 5 'z' characters " << endl;

    printContainer("vector2",vector2);

    cout << "2- Create a new vector based on vector1 using assign()" << endl;

    printContainer("vector3",vector3);

    cout << "3- Compare vector1 and vector3" << endl;


    cout << "4- Using assign() replace all elements of vector vector3" << endl;

    printContainer("vector3",vector3);

    cout << "5- Swap vector3 and vector1" << endl;

    printContainer("vector1",vector1);
    printContainer("vector3",vector3);


    return 0;
}