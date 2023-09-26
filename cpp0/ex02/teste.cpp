#include <iostream>
#include <iomanip>
#include <string>

int main ()
{
    std::string str = "H";

    std::cout << std::setfill('0') << std::setw(2) << std::endl;

    return 0;
}