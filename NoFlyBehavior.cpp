/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#include "NoFlyBehavior.h"
#include <iostream>

void NoFlyBehavior::fly()
{
    std::cout << "This is a lame Duck. It just waddles sadly.\n";
}
