#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T>
class MathOperation
{
    public:
        MathOperation(T a, T b)
        {
            m_a = a;
            m_b = b;
        }

        T getA()
        {
            return m_a;
        }

        T getB()
        {
            return m_b;
        }

    private:    
        T m_a = 0;
        T m_b = 0;
};

int main()
{
    MathOperation<int> intOp(1, 3);
    MathOperation<float> floatOp(1.3f, 5.6f);
    MathOperation<long> longOp(5, 8);

    cout << "type:" << typeid(intOp.getA()).name() << "- a=" << intOp.getA() << 
            ", type:" << typeid(intOp.getB()).name() << "- b= " << intOp.getB() << endl;
    cout << "type:" << typeid(floatOp.getA()).name() << "- a=" << floatOp.getA() << 
            ", type:" << typeid(floatOp.getB()).name() << "- b= " << floatOp.getB() << endl;
    cout << "type:" << typeid(longOp.getA()).name() << "- a=" << longOp.getA() << 
            ", type:" << typeid(longOp.getB()).name() << "- b= " << longOp.getB() << endl;

    return 0;
}