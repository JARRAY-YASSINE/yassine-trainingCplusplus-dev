#include <iostream>
#include <string>
using namespace std;

// Solution:
// 1- Public inheritance
// 2- Change access modifiers for class members
// 3- Create getters and setters

class Shape
{
    public:
        int surface = 0;
        int rgbColor = 0;
        int numberOfSides = 0;
    protected:
    private:
};

class Triangle : public Shape
{
    public:
        Triangle()
        {
            surface = 4;
            rgbColor = 0x660033;
            numberOfSides = 3;
        }
};

int main()
{
    Triangle triangle;
    cout << "Triangle surface:" << triangle.surface <<"\n";
    cout << "Triangle RGB color:" << triangle.rgbColor << "\n";
    cout << "Triangle number of sides:" << triangle.numberOfSides << "\n";
}