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
    } catch() {
        
    }
}