#include <iostream>
#include <string>
#include <limits>



int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "Press Enter to exit..." << std::endl;                 // Prompt to keep console open
    std::cin.clear();                                                   // Clear any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining input
    std::cin.get();                                                     // Wait for Enter key
    return 0;
}