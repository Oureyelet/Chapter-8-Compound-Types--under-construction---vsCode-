#include <iostream>
#include <cstdlib> // for std::rand() and std::srand()

/*
C (and by extension C++) comes with a built-in pseudo-random number generator. It is implemented as 
two separate functions that live in the cstdlib header:

std::srand() sets the initial seed value to a value that is passed in by the caller. std::srand() 
should only be called once at the beginning of your program. This is usually done at the top of main().

std::rand() generates the next random number in the sequence. That number will be a pseudo-random 
integer between 0 and RAND_MAX, a constant in cstdlib that is typically set to 32767.

Here’s a sample program using these functions:
*/

int main()
{
    std::srand(5323);// set initial seed value to 5323
    // Due to a flaw in some compilers, we need to call std::rand() once

    // here to get "better" random numbers.
    std::rand();

    // Print 100 random numbers
    for(int count { 1 }; count <= 100; ++count)
    {
        std::cout << std::rand() << '\t';

        if( count % 5 == 0 )
            std::cout << '\n';
    }

    return 0;
}