#include <iostream>

    /*---------------------------------------------------
                Non-static member initialization
    ---------------------------------------------------*/
    struct Rectangle
    {
        double length{ 1.0 };
        double width{ 1.0 };
    };

    /*---------------------------------------------------
                    Structs and functions
    ---------------------------------------------------*/
    struct Kacperscy
    {
        int id{};
        int age{};
        double hight{};
    };

    void printInformation(Kacperscy rodzinka)
    {
        std::cout << "ID: " << rodzinka.id << '\n';
        std::cout << "Age: " << rodzinka.age << '\n';
        std::cout << "Hight: " << rodzinka.hight << '\n';
    }

    /*---------------------------------------------------
            A function can also return a struct
    ---------------------------------------------------*/

    struct Point3d
    {   
        double x{};
        double y{};
        double z{};
    };

    Point3d getZeroPoint()
    {
        // We can create a variable and return the variable.
        Point3d temp{ 0.0, 0.0, 0.0, };
        return temp;
    }

    Point3d getZeroPoint2()
    {
        /*We can return directly. We already specified the type
        at the function declaration (Point3d), so we don't need
        it again here.
        */
        return { 0.0, 0.0, 0.0, };
    }

    Point3d getZeroPoint3()
    {
        //We can use empty curly braces to zero-initialize all members of `Point3d`.
        return {};
    }

int main()
{
    std::cout << "Hello World\n";

    /*
    Fortunately, C++ allows us to create our own user-defined aggregate data types. An aggregate data 
    type is a data type that groups multiple individual variables together. One of the simplest 
    aggregate data types is the struct. A struct (short for structure) allows us to group 
    variables of mixed data types together into a single unit.
    */

    /*---------------------------------------------------
                Declaring and defining structs
    ---------------------------------------------------*/
    struct Employee
    {
        int id{};
        int age{};
        double wage{};
    };

    //In order to use the Employee struct, we simply declare a variable of type Employee:

    //Employee joe{};// struct Employee is capitalized, variable joe is now
    //Employee frank{}; // create an Employee struct for Frank

    /*---------------------------------------------------
                Accessing struct members
    ---------------------------------------------------*/
    //Here is an example of using the member selection operator to initialize each member variable:

    Employee Ania{}; // create an Employee struct for Ania
    Ania.id = 14; // assign a value to member id within struct Ania
    Ania.age = 32; // assign a value to member age within struct Ania
    Ania.wage = 24.15; // assign a value to member wage within struct Ania

    Employee Mateusz{}; // create an Employee struct for Mateusz
    Mateusz.id = 15; // assign a value to member id within struct Mateusz
    Mateusz.age = 28; // assign a value to member age within struct Mateusz
    Mateusz.wage = 18.27; // assign a value to member wage within struct Mateusz
    //Struct member variables act just like normal variables, so it is possible to do normal operations on them:

    int totalAge{ Ania.age + Mateusz.age };

    if(Ania.wage > Mateusz.wage)
    {
        std::cout << "Ania makes more than Mateusz\n";
    }
    else if(Ania.wage < Mateusz.wage)
    {
        std::cout << "Ania makes less than Mateusz\n";
    }
    else
    {
        std::cout << "Ania and Mateusz make the same amount\n";
    }
    // Mateusz got a promotion
    Mateusz.wage += 2.50;

    // Today is Joe's birthday
    ++Ania.age;// use pre-increment to increment Joe's age by 1

    /*---------------------------------------------------
                    Initializing structs
    ---------------------------------------------------*/
    struct People
    {
        int id{};
        int age{};
        double wage{};
    };
    People joe{ 1, 32, 60000.0 };// joe.id = 1, joe.age = 32, joe.wage = 60000.0
    People frank{ 2, 28 };// frank.id = 2, frank.age = 28, frank.wage = 0.0 (default initialization)

    /*---------------------------------------------------
                Non-static member initialization
    ---------------------------------------------------*/
    //( look above 'main()' )
    Rectangle x{};// length = 1.0, width = 1.0
    x.length = 2.0;// you can assign other values like normal
    std::cout << x.length << '\n';

    /*---------------------------------------------------
                    Assigning to structs
    ---------------------------------------------------*/
    /*---------------------------------------------------
                    Structs and functions
    ---------------------------------------------------*/
    //( look above 'main()' )
    Kacperscy Klara{14, 30, 1.6};
    Kacperscy Tobiasz{14, 28, 1.8};

    // Print Ania's information
    printInformation(Klara);

    std::cout << '\n';

    // Print Mateusz's information
    printInformation(Tobiasz);

    /*
    if we ever decide to add new members to our Kacperscy struct, we will not have to 
    change the function declaration or function call!
    */

    /*---------------------------------------------------
            A function can also return a struct
    ---------------------------------------------------*/
    //( look above 'main()' )

    Point3d zero{ getZeroPoint() };

    if(zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
        std::cout << "The point is zero\n";
    else
        std::cout << "The point is not zero\n";

    /*---------------------------------------------------
                        Nested structs
    ---------------------------------------------------*/
    // /Structs can contain other structs. For example:

    struct Employee7
    {
        int id{};
        int age{};
        double wage{};
    };

    struct Company7
    {
        Employee7 CEO{};// Employee is a struct within the Company struct
        int numberOfEmployee{};
    };
    /*
    In this case, if we wanted to know what the CEO’s salary was, we simply use the member 
    selection operator twice: myCompany.CEO.wage;
    */
    //You can use nested initializer lists for nested structs:

    Company7 myCompany{{ 3, 33, 333 }, 5 };
    std::cout << myCompany.CEO.wage << '\n';    

    /*---------------------------------------------------
            Struct size and data structure alignment
    ---------------------------------------------------*/
    








    return 0;
}