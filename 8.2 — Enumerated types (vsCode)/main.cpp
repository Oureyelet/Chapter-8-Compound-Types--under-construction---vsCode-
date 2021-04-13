#include <iostream>

    /*-------------------------------------
                    enum
    ---------------------------------------*/
    // Define a new enumeration named Color
    enum Color
    {
        // Here are the enumerators
        // These define all the possible values this type can hold
        // Each enumerator is separated by a comma, not a semicolon
        color_black,
        color_red,
        color_blue,
        color_green,
        color_white,
        color_cyan,
        color_yellow,
        color_magenta,// there can be a comma after the last enumerator, but there doesn't have to be a comma

    };// however the enum itself must end with a semicolon

    /*-------------------------------------
        What are enumerators useful for?
    ---------------------------------------*/
    /*
    Enumerated types are incredibly useful for code documentation and readability purposes when 
    you need to represent a specific, predefined set of states.
    */

    enum ParseResult
    {
        // We don't need specific values for our enumerators.
        success,
        error_opening_file,
        error_reading_file,
        error_parsing_file
    };

    ParseResult readFileContents()
    {
        if(/*someething...*/)
            return error_opening_file;
        if(/*someething...*/)
            return error_reading_file;
        if(/*someething...*/)
            return error_parsing_file;
        
        return success;
    }
    /*
    This is much easier to read and understand than using magic number return values.
    Many languages use Enumerations to define booleans. A boolean is essentially just an enumeration 
    with 2 enumerators: false and true! However, in C++, true and false are defined as keywords 
    instead of enumerators.
    */

int main()
{
    std::cout << "Hello World\n";

    /*
    C++ contains capabilities that allow programmers to create their own data types. 
    These data types are called 'user-defined data types'.
    */

    /*-------------------------------------
                    enum
    ---------------------------------------*/

    Color paint = color_white;
    Color house(color_blue);
    Color apple { color_red };

    /*-------------------------------------
        What are enumerators useful for?
    ---------------------------------------*/
    /*
    Enumerated types are incredibly useful for code documentation and readability purposes when 
    you need to represent a specific, predefined set of states.
    */
    /*
    This is much easier to read and understand than using magic number return values.
    Many languages use Enumerations to define booleans. A boolean is essentially just an enumeration 
    with 2 enumerators: false and true! However, in C++, true and false are defined as keywords 
    instead of enumerators.
    */

    /*-------------------------------------
                    Quiz time
    ---------------------------------------*/
    /*
    Question #1

    Define an enumerated type to choose between the following monster races: 
    orcs, goblins, trolls, ogres, and skeletons.
    */

    enum MonsterRaces
    {
        orcs,
        goblins,
        trolls,
        ogres,
        skeletons
    };

    /*
    Question #2

    Define a variable of the enumerated type you defined in question 1 and initialize 
    it with the troll enumerator.
    */

    auto monsterRaces{MonsterRaces::orcs};

    /*
    Question #3

    True or false. Enumerators can be:
    3a) given an integer value T
    3b) not assigned a value T
    3c) given a floating point value F
    3d) negative T
    3e) non-unique T
    3f) initialized with the value of prior enumerators (e.g. color_magenta = color_red) T
    */
    //ANWSER:
    /*
    3a) True.
    3b) True. Enumerators not assigned a value will be implicitly assigned the integer value 
    of the previous enumerator + 1. If there is no previous enumerator, the enumerator will 
    assume value 0.
    3c) False.
    3d) True.
    3e) True.
    3f) True. Since enumerators evaluate to integers, and integers can be assigned to enumerators, 
    enumerators can be initialized with other enumerators (though there is typically little reason 
    to do so!).
    */



    return 0;
}