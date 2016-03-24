/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#include "Duck.h"

Duck::Duck()
{
    std::cout << "A Duck is born.\n";
}

Duck::Duck(const Duck& other) : ID{other.ID}
{
    std::cout << "A Duck copy is born.\n";
}

Duck::Duck(Duck&& other)
{
    ID = other.ID;
    other.ID = nullptr;
}

Duck::~Duck()
{
    std::cout << "Destroying Duck.\n";
}

Duck& Duck::operator =(Duck other)
{
    std::swap(ID, other.ID);
    return *this;
}

std::string Duck::getID() const
{
    return ID;
}

void Duck::doQuack() {}
void Duck::doSwim() {}
void Duck::setQuack() {}
void Duck::setSwim() {}
