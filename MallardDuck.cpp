/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#include "MallardDuck.h"

MallardDuck::MallardDuck()
{
    std::cout << "A MallardDuck is born.\n";
}

MallardDuck::MallardDuck(FlyBehavior &flyBehavior) : flyBehavior { &flyBehavior }
{
    std::cout << "A MallardDuck is born.\n";
}

MallardDuck::~MallardDuck()
{
    std::cout << "Destroying MallardDuck.\n";
}

std::string MallardDuck::getID() const
{
    return "Mallard Duck";
}

std::string MallardDuck::getVariableID() const
{
    return variableID;
}

void MallardDuck::setFlyBehavior(FlyBehavior &flyBehavior)
{
    this->flyBehavior = &flyBehavior;
}

void MallardDuck::doFlyBehavior()
{
    if (flyBehavior) flyBehavior->fly();
}
