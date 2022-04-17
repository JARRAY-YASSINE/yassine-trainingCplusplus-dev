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

template <typename U>
class Calculator
{
    public:
        template <typename Y>
        Calculator(Y x, Y y) : m_operation(x,y)
        {

        }

        U getOperation()
        {
            return m_operation;
        }
    private:    
        U m_operation;
};

int main()
{
    Calculator<MathOperation<float>> myCalculator(2.0f, 3.1f);
    return 0;
}