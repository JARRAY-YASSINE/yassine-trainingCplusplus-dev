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

        MathOperation(const MathOperation& op)
        {
            m_a = op.m_a;
            m_b = op.m_b;
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
        template <typename T>
        Calculator(const T& op) : m_operation(op)
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
    Calculator<MathOperation<float>> myCalculator(MathOperation<float>(2.0f, 3.1f));
    return 0;
}