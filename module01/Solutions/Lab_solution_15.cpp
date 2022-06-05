#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T, typename U>
class MathOperation
{
    public:
        MathOperation(T a, T b, U memoryPlus)
        {
            m_a = a;
            m_b = b;
            m_memoryPlus = memoryPlus;
        }

        T getA()
        {
            return m_a;
        }

        T getB()
        {
            return m_b;
        }

        U getMemoryPlus()
        {
            return m_memoryPlus;
        }


    private:    
        T m_a = 0;
        T m_b = 0;
        U m_memoryPlus = 0;
};

template <typename T>
T getSmallest(T a, T b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    MathOperation<int, float> intFloatOp(1, 3, 5.7f);


    cout << "type:" << typeid(intFloatOp.getA()).name() << "- a=" << intFloatOp.getA() << 
            ", type:" << typeid(intFloatOp.getB()).name() << "- b= " << intFloatOp.getB() <<
            ", smallest is:" << getSmallest(intFloatOp.getA(),intFloatOp.getB()) << endl;
    
    return 0;
}