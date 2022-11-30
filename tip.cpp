#include <iostream>

int main()
{

    int tip = 0;

    std::cout << "Enter tip amount: ";
    //Including inputs with std::cin (standard input)
    std::cin >> tip;

    std::cout << "You paid " << tip << " dollars.\n";
}