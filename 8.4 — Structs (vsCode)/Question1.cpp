#include <iostream>

struct Advertising
    {
        int how_many{};
        double precentage_of_ads{};
        double earned{};
    };
    
    Advertising getIfno()
    {
        Advertising x;
        std::cout << "How many ads was shown to readers: ";
        std::cin >> x.how_many ;
        std::cout << "What percentage of ads were clicked on by users: ";
        std::cin >> x.precentage_of_ads;
        std::cout << "How much you earned on average from each ad that was clicked: ";
        std::cin >> x.earned;
        return x;
    }
    
    void printInfo(Advertising x)
    {
        std::cout << "Was: " << x.how_many << " ads " << '\n';
        std::cout << "Precentage was: " << x.precentage_of_ads << '\n';
        std::cout << "Earned was: " << x.earned << '\n';
        std::cout << "You made today: " << x.earned * x.how_many * x.precentage_of_ads << '\n';

    }
    
int main()
{
    Advertising x{ getIfno() };
    printInfo(x);

    return 0;
}