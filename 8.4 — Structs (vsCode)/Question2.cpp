#include <iostream>

struct Fraction
{
    int numerator{};
    int denominator{};
};

Fraction userInput()
{
    Fraction user{};

    std::cout << "Enter numerator: ";
    std::cin >> user.numerator;
    std::cout << "Enter denominator: ";
    std::cin >> user.denominator;

    return user;
}

void multiply(Fraction user)
{
    std::cout << static_cast<double>(user.numerator) * static_cast<double>(user.denominator) << '\n';
}

int main()
{
    Fraction x{ userInput() };
    multiply(x);


    return 0;
}