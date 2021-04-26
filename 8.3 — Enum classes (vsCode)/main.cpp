#include <iostream>

int main()
{
    std::cout << "Hello World\n";

    /*
    C++11 defines a new concept, the enum class (also called a scoped enumeration), 
    which makes enumerations both strongly typed and strongly scoped. To make an enum class, 
    we use the keyword class after the enum keyword. Here’s an example:
    */

    enum class Color
    // "enum class" defines this as a scoped enumeration instead of a standard enumeration
    {
        red,// red is inside the scope of Color
        blue
    };

    enum class Fruit
    {
        banana,// banana is inside the scope of Fruit
        apple
    };

    Color whats_color_is { Color::red };
    //red is not directly accessible any more, we have to use Color::red
    Fruit what_fruit_is { Fruit::banana };
    // note: banana is not directly accessible any more, we have to use Fruit::banana

    return 0;
}