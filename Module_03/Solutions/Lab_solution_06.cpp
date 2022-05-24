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

    cout << "1- Use assign() to create a vector vactor2 initialized with 5 'z' characters " << endl;
    vector<char> vector2;
    vector2.assign(5, 'z');
    printContainer("vector2",vector2);

    cout << "2- Create a new vector based on vector1 using assign()" << endl;
    vector<int> vector3;
    vector3.assign(vector1.begin(), vector1.end());
    printContainer("vector3",vector3);

    cout << "3- Compare vector1 and vector3" << endl;
    if(vector1 == vector3)
        cout << "vector1 and vector3 are equal" << endl;
    else
        cout << "vector1 and vector3 are not equal" << endl;

    cout << "4- Using assign() replace all elements of vector vector3" << endl;
    vector3.assign({1,55,44,7,99,3});
    printContainer("vector3",vector3);

    cout << "5- swap vector3 adn vector1" << endl;
    vector3.swap(vector1);
    printContainer("vector1",vector1);
    printContainer("vector3",vector3);


    return 0;
}