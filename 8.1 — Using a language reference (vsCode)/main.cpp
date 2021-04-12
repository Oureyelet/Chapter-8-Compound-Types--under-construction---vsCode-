#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    /*Question 2*/

    std::string first = "I saw a red car yesterday.";
    std::cout << first << '\n';

    first.erase(6, 6);
    std::cout << first << '\n';

    first.erase(std::find(first.begin(), first.end(), 'r'));
    std::cout << first << '\n';

    first.erase(first.find(' '));
    std::cout << first << '\n';

    std::cout << "-----------------------------------------------" << '\n';

    std::string secound{ "I saw a red car yesterday." };
    std::cout << secound << '\n';

    secound.erase(8, 4);
    std::cout << secound << '\n';

    secound.insert(8, 1, 'b');
    secound.insert(9, 1, 'l');
    secound.insert(10, 1, 'u');
    secound.insert(11, 1, 'e');
    secound.insert(12, 1, ' ');
    std::cout << secound << '\n';

    /* or... */

    secound.replace(8, 4, "red");
    std::cout << secound << '\n';
    
    return 0;
}