/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#include "Duck.h"

Duck::Duck()
{
    std::cout << "A Duck is born.\n";
}
Duck::~Duck()
{
    std::cout << "Destroying Duck.\n\n";
}

std::string Duck::getID() const
{
    return "Generic Duck";
}
std::string Duck::getVariableID() const
{
    return variableID;
}

void Duck::doQuack() {}
void Duck::doSwim() {}
void Duck::setQuack() {}
void Duck::setSwim() {}
