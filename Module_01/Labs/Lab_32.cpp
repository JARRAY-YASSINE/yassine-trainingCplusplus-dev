#include <iostream>
#include <string>
using namespace std;

class Shape
{
    public:
        int surface = 0;
    protected:
        int rgbColor = 0;
    private:
        int numberOfSides = 0;
};

class Triangle : private Shape
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