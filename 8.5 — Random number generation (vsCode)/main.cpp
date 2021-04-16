#include <iostream>

unsigned int PRNG();

int main()
{
    std::cout << "Hello World\n";

    /*----------------------------------------
        pseudo-random number generator (PRNG)
    ----------------------------------------*/
    //It’s actually fairly easy to write a PRNG. Here’s a short program that generates 100 pseudo-random numbers:
/*
    // Print 100 random numbers
    for(int count{ 1 }; count <= 100; ++count)
    {
        std::cout << PRNG() << '\t';

        if(count % 5 == 0)
            std::cout << '\n';
    }

*/
    std::cout << PRNG() << '\n';
    std::cout << PRNG() << '\n';
    std::cout << PRNG() << '\n';
    std::cout << PRNG() << '\n';
    std::cout << PRNG() << '\n';
    std::cout << PRNG() << '\n';
    
    return 0;
}

unsigned int PRNG()
{
    //A constant value cannot change. A static variable exists to a function, or class, rather than an instance or object.
    // our initial starting seed is 5323
    static unsigned int seed{ 5323 };

    // Take the current seed and generate a new value from it
    // Due to our use of large constants and overflow, it would be
    // hard for someone to casually predict what the next number is
    // going to be from the previous one.
    seed = 8253729 * seed + 2396403;

    // Take the seed and return a value between 0 and 32767
    return seed % 32768;
}