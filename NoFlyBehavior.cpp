/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#include "NoFlyBehavior.h"
#include <iostream>

NoFlyBehavior::~NoFlyBehavior()
{
    std::cout << "NoFlyBehavior destructor called.\n";
};

void NoFlyBehavior::fly()
{
    std::cout << "This is a lame duck. It just waddles sadly.\n";
}
