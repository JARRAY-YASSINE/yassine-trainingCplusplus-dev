#include <iostream>
#include <system_error>
#include <cmath>

int main()
{
    try {
        throw "Catch me if you can";
    } catch(const std::exception& e) {
        std::cout << "Caught exception with code " << e.what() << '\n';
    }
}