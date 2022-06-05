#include <iostream>
#include <exception>
#include <memory>

using namespace std;

int main()
{
    try
    {
        throw runtime_error("Error for specific handler");
    }
    catch(const std::exception& e) {
        std::cout << "Caught exception " << e.what() << '\n';
    } 
    catch(const std::system_error& e) {
        std::cout << "Caught system_error with code " << e.code() 
                  << " meaning " << e.what() << '\n';
    }
    catch(const std::logic_error& e) {
        std::cout << "Caught logic_error with code " << e.what() << '\n';
    } 
    catch(const std::runtime_error& e) {
        std::cout << "Caught runtime_error with code " << e.what() << '\n';
    }
    return 0;
}
