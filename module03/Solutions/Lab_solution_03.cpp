#include <iostream>
#include <vector>
#include <deque>

using namespace std;

template<typename C>
void printContainer(C const& container)
{
    cout << "container = { ";
    for(auto n: container)
    {
        cout << n << ",";
    }
    cout << "}; \n";    
}

int main()
{
    cout << "Create vector" << endl;

    vector<int> vector0;
    vector0.push_back(1);
    vector0.push_back(4);
    vector0.push_back(8);
    printContainer(vector0);

    vector<int> vector1(5);
    vector1[0]=15;
    vector1[1]=17;
    vector1[2]=12;
    vector1[3]=19;
    vector1[4]=11;
    printContainer(vector1);
    
    vector<int> vector2 {1,2,3,4,22,34};
    printContainer(vector2);

    vector<int> vector3(vector1);
    printContainer(vector3);

    vector<int> vector4(vector3.begin()+2, vector3.end()-1);
    printContainer(vector4); 

    cout << "Create deque" << endl;

    deque<int> deque0;
    deque0.push_back(1);
    deque0.push_front(4);
    deque0.push_back(8);
    printContainer(deque0);

    deque<int> deque1(5);
    deque1[0]=15;
    deque1[1]=17;
    deque1[2]=12;
    deque1[3]=19;
    deque1[4]=11;
    printContainer(deque1);
    
    deque<int> deque2 {1,2,3,4,22,34};
    printContainer(deque2);

    deque<int> deque3(deque1);
    printContainer(deque3);

    deque<int> deque4(deque3.begin()+2, deque3.end()-1);
    printContainer(deque4); 

    return 0;
}