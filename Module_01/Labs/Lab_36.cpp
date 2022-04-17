#include <iostream>
#include <string>
using namespace std;

// Code inspired from:
// Json-cpp amalgamated header (http://jsoncpp.sourceforge.net/).

enum ValueType {
    nullValue = 0,
    charValue,
    intValue,  
    uintValue, 
    longValue, 
    floatValue, 
    doubleValue,   
    stringValue,  
    booleanValue,  
    arrayValue,    
    objectValue    
};

union ValueHolder {
    char char_;
    int int_;
    long long_;
    float float_;
    double double_;
    bool bool_;
};

class Value
{
    public:
        Value(int value)
        {
            m_type = intValue;
            m_value.int_ = value;
        }

        Value(long value)
        {
            m_type = longValue;
            m_value.long_ = value;
        }

        Value(float value)
        {
            m_type = floatValue;
            m_value.float_ = value;
        }

        Value(double value)
        {
            m_type = doubleValue;
            m_value.double_ = value;
        }

        Value(char value)
        {
            m_type = charValue;
            m_value.char_ = value;
        }

        Value(bool value)
        {
            m_type = booleanValue;
            m_value.bool_ = value;
        }

        int getSize()
        {
            return sizeof(m_value);
        }

        int asInt()
        {
            return 0;
        }

        float asDouble()
        {
            return 0.0;
        }

        char asChar()
        {
            return 0;
        }
    private:
        ValueType m_type;
        ValueHolder m_value;
};

int main()
{
    Value myIntObj = Value(100);
    Value myLongObj = Value(15);
    Value myFloatObj = Value(13.7f);
    Value myDoubleObj = Value(10.3);
    Value myCharObj = Value(128);

    cout << "Size of int = " << sizeof(int) << "\n";
    cout << "Size of long = " << sizeof(long) << "\n";
    cout << "Size of float = " << sizeof(float) << "\n";
    cout << "Size of double = " << sizeof(double) << "\n";
    cout << "Size of char = " << sizeof(char) << "\n";
    cout << "Size of boolean = " << sizeof(bool) << "\n\n";

    cout << "int -> int => " << myIntObj.asInt() << "\n";
    cout << "long -> int => " << myLongObj.asInt() << "\n";
    cout << "float -> int => " << myFloatObj.asInt() << "\n";
    cout << "double -> int => " << myDoubleObj.asInt() << "\n";
    cout << "char -> int => " << myCharObj.asInt() << "\n";

    cout << "int -> double => " << myIntObj.asDouble() << "\n";
    cout << "long -> double => " << myLongObj.asDouble() << "\n";
    cout << "float -> double => " << myFloatObj.asDouble() << "\n";
    cout << "double -> double => " << myDoubleObj.asDouble() << "\n";
    cout << "char -> double => " << myCharObj.asDouble() << "\n";

    cout << "int -> char => " << myIntObj.asChar() << "\n";
    cout << "long -> char => " << myLongObj.asChar() << "\n";
    cout << "float -> char => " << myFloatObj.asChar() << "\n";
    cout << "double -> char => " << myDoubleObj.asChar() << "\n";
    cout << "char -> char => " << myCharObj.asChar() << "\n";
}