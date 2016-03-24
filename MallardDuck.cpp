/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#include "MallardDuck.h"

MallardDuck::MallardDuck()
{
    std::cout << "A MallardDuck is born.\n";
}

MallardDuck::MallardDuck(FlyBehavior &flyBehavior) : flyBehavior{&flyBehavior}
{
    std::cout << "A MallardDuck is born.\n";
}

MallardDuck::MallardDuck(const MallardDuck& other) : ID{other.ID}, flyBehavior{other.flyBehavior}
{
    std::cout << "A MallardDuck copy is born.\n";
}

MallardDuck::MallardDuck(MallardDuck&& other)
{
    std::cout << "A MallardDuck is moved.\n";
    ID = other.ID;
    flyBehavior = other.flyBehavior;
    other.ID = nullptr;
}

MallardDuck::~MallardDuck()
{
    delete defaultFlyBehavior;
    std::cout << "Destroying MallardDuck.\n";
}

MallardDuck& MallardDuck::operator =(MallardDuck other)
{
    std::cout << "A MallardDuck is assigned.\n";
    std::swap(ID, other.ID);
    std::swap(flyBehavior, other.flyBehavior);
    return *this;
}

std::string MallardDuck::getID() const
{
    return ID;
}

void MallardDuck::setFlyBehavior(FlyBehavior &flyBehavior)
{
    this->flyBehavior = &flyBehavior;
}

void MallardDuck::doFlyBehavior()
{
    if (flyBehavior) flyBehavior->fly();
}
