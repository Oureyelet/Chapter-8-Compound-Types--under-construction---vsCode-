#include <iostream>
#include <string>

enum class MonsterType
{
    spider,
    slime
};

struct Monster
{
    MonsterType type;
    std::string name;
    int hp{};
};

std::string getMonsterTypeString(MonsterType type)
{
    switch(type)
    {
        case MonsterType::slime:
            return "slime";
        case MonsterType::spider:
            return "spider";
    }
    return "Unknown";
}

void printMonster(Monster monster)
{
    std::cout << "This " << getMonsterTypeString(monster.type) << " is named " << monster.name <<
    " and has " << monster.hp << " health.\n";
}

int main()
{
    std::cout << "Hello World" << '\n';

    Monster slime{ MonsterType::slime, "slimak", 125 };
    Monster spider{ MonsterType::spider, "spajaczek", 127 };

    printMonster(slime);
    printMonster(spider);

    /*--------------------------------------
                Question #1
    --------------------------------------*/
    /*
    In designing a game, we decide we want to have monsters, because everyone likes fighting monsters. 
    Declare a struct that represents your monster. The monster should have a type that can be one 
    of the following: an ogre, a dragon, an orc, a giant spider, or a slime. Use an enum class for this.

    Each individual monster should also have a name (use a std::string), as well as an amount of health 
    that represents how much damage they can take before they die. Write a function named printMonster() 
    that prints out all of the struct’s members. Instantiate an ogre and a slime, initialize them using 
    an initializer list, and pass them to printMonster().

    Your program should produce the following output:

    This Ogre is named Torg and has 145 health.
    This Slime is named Blurp and has 23 health.
    */

    return 0;
}