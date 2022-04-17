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

int main()
{
    MathOperation<int, float> intFloatOp(1, 3, 5.7f);
    MathOperation<float, int> floatIntOp(1.3f, 5.6f, 3);
    MathOperation<long, int> longIntOp(5, 8, 2);

    cout << "type:" << typeid(intFloatOp.getA()).name() << "- a=" << intFloatOp.getA() << 
            ", type:" << typeid(intFloatOp.getB()).name() << "- b= " << intFloatOp.getB() <<
            ", type:" << typeid(intFloatOp.getMemoryPlus()).name() << "- m= " << intFloatOp.getMemoryPlus() << endl;
    cout << "type:" << typeid(floatIntOp.getA()).name() << "- a=" << floatIntOp.getA() << 
            ", type:" << typeid(floatIntOp.getB()).name() << "- b= " << floatIntOp.getB() <<
            ", type:" << typeid(floatIntOp.getMemoryPlus()).name() << "- m= " << floatIntOp.getMemoryPlus() << endl;
    cout << "type:" << typeid(longIntOp.getA()).name() << "- a=" << longIntOp.getA() << 
            ", type:" << typeid(longIntOp.getB()).name() << "- b= " << longIntOp.getB() <<
            ", type:" << typeid(longIntOp.getMemoryPlus()).name() << "- m= " << longIntOp.getMemoryPlus() << endl;


    return 0;
}