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
            switch(m_type)
            {
                case intValue :
                    return (int) m_value.int_;
                case longValue:
                    return (int) m_value.long_;
                case floatValue:
                    return (int) m_value.float_;
                case doubleValue:
                    return (int) m_value.double_;
                case charValue:
                    return (int) m_value.char_;
                case booleanValue:
                    return (int) m_value.bool_;
                default:
                    return 0;
            }
        }

        long asLong()
        {
            switch(m_type)
            {
                case intValue :
                    return (long) m_value.int_;
                case longValue:
                    return (long) m_value.long_;
                case floatValue:
                    return (int) m_value.float_;
                case doubleValue:
                    return (long) m_value.double_;
                case charValue:
                    return (long) m_value.char_;
                case booleanValue:
                    return (long) m_value.bool_;
                default:
                    return 0;
            }
        }

        float asFloat()
        {
            switch(m_type)
            {
                case intValue :
                    return (float) m_value.int_;
                case longValue:
                    return (float) m_value.long_;
                case floatValue:
                    return (float) m_value.float_;
                case doubleValue:
                    return (float) m_value.double_;
                case charValue:
                    return (float) m_value.char_;
                case booleanValue:
                    return (float) m_value.bool_;
                default:
                    return 0.0;
            }
        }

        double asDouble()
        {
            switch(m_type)
            {
                case intValue :
                    return (double) m_value.int_;
                case longValue:
                    return (double) m_value.long_;
                case floatValue:
                    return (double) m_value.float_;
                case doubleValue:
                    return (double) m_value.double_;
                case charValue:
                    return (double) m_value.char_;
                case booleanValue:
                    return (double) m_value.bool_;
                default:
                    return 0.0;
            }
        }

        char asChar()
        {
            switch(m_type)
            {
                case intValue :
                    return (char) m_value.int_;
                case longValue:
                    return (char) m_value.long_;
                case floatValue:
                    return (char) m_value.float_;
                case doubleValue:
                    return (char) m_value.double_;
                case charValue:
                    return (char) m_value.char_;
                case booleanValue:
                    return (char) m_value.bool_;
                default:
                    return 0;
            }
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
    Value myBooleanObj = Value(true);

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
    cout << "boolean -> int => " << myBooleanObj.asInt() << "\n\n";

    cout << "int -> long => " << myIntObj.asLong() << "\n";
    cout << "long -> long => " << myLongObj.asLong() << "\n";
    cout << "float -> int => " << myFloatObj.asLong() << "\n";
    cout << "double -> long => " << myDoubleObj.asLong() << "\n";
    cout << "char -> long => " << myCharObj.asLong() << "\n";
    cout << "boolean -> long => " << myBooleanObj.asLong() << "\n\n";

    cout << "int -> float => " << myIntObj.asFloat() << "\n";
    cout << "long -> float => " << myLongObj.asFloat() << "\n";
    cout << "float -> float => " << myFloatObj.asFloat() << "\n";
    cout << "double -> float => " << myDoubleObj.asFloat() << "\n";
    cout << "char -> float => " << myCharObj.asFloat() << "\n";
    cout << "boolean -> float => " << myBooleanObj.asFloat() << "\n\n";

    cout << "int -> double => " << myIntObj.asDouble() << "\n";
    cout << "long -> double => " << myLongObj.asDouble() << "\n";
    cout << "float -> double => " << myFloatObj.asDouble() << "\n";
    cout << "double -> double => " << myDoubleObj.asDouble() << "\n";
    cout << "char -> double => " << myCharObj.asDouble() << "\n";
    cout << "boolean -> double => " << myBooleanObj.asDouble() << "\n\n";

    cout << "int -> char => " << myIntObj.asChar() << "\n";
    cout << "long -> char => " << myLongObj.asChar() << "\n";
    cout << "float -> char => " << myFloatObj.asChar() << "\n";
    cout << "double -> char => " << myDoubleObj.asChar() << "\n";
    cout << "char -> char => " << myCharObj.asChar() << "\n";
    cout << "boolean -> char => " << myBooleanObj.asChar() << "\n\n";
}