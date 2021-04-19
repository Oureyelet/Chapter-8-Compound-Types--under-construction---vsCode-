#include <iostream>
#include <cstdlib> // for std::rand() and std::srand()
#include <ctime> // for std::time()


// Generate a random number between min and max (inclusive)
// Assumes std::srand() has already been called
// Assumes max - min <= RAND_MAX
int getRandomNumber(int min, int max)
{
    // static used for efficiency, so we only calculate this value once
    static constexpr double fraction { 1.0 / (RAND_MAX + 1.0) };

    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
    // set initial seed value to system clock
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for(int count { 1 }; count <= 50; ++count)
    {
        std::cout << getRandomNumber(1, 6) << '\t';

        if(count % 6 == 0)
            std::cout << '\n';
    }

    /*-----------------------------------------------------
    Optional reading: How does the previous function work?
    -----------------------------------------------------*/
    //go see:
    //https://www.learncpp.com/cpp-tutorial/random-number-generation/

    /*---------------------------------------------------------------------------------------
    Optional reading: Why don’t we use the modulus operator (%) in the previous function?
    ---------------------------------------------------------------------------------------*/
    //go see:
    //https://www.learncpp.com/cpp-tutorial/random-number-generation/

    
    return 0;
}