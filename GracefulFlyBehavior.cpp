/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#include "GracefulFlyBehavior.h"
#include <iostream>

void GracefulFlyBehavior::fly()
{
    std::cout << "This Duck gracefully soars through the sky.\n";
}
