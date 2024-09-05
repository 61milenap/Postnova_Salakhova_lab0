// Postnova_Salakhova_Usynin_Khanevsky_Serbulova.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    short int x;
    std::cin >> x;

    if (x != 0)
        std::cout << 10 / x;
    else 
        std::cout << "error" << std::endl;
}
