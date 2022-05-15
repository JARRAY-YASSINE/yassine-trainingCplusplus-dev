#include <iostream>
#include <system_error>
#include <cmath>

int main()
{
    try {
        throw "Catch me if you can";
    } catch(...) {
        std::cout << "Caught exception with code " << '\n';
    }
}