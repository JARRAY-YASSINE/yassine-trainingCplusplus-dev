#include <iostream>
#include <system_error>
#include <cmath>

int main()
{
    try {
        errno=0;
        double n = 0;
        printf("Enter a number: ");
        std::cin >> n;
        std::sqrt(n);
        if(errno)
        {
            std::error_code ec (errno, std::generic_category());
            throw std::system_error(ec, "Cannot perform sqrt operation");
        }
    } catch(const std::exception& e) {
        std::cout << "Caught exception with code " << e.what() << '\n';
    }
}