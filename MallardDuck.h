/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#pragma once
#include "Duck.h"

class MallardDuck : public Duck
{
public:
    MallardDuck();
    MallardDuck(FlyBehavior &flyBehavior);
    ~MallardDuck();

    std::string getID() const;
    std::string getVariableID() const;

    void setFlyBehavior(FlyBehavior &flyBehavior);
    void doFlyBehavior();

private:
    std::string variableID { "Mallard Duck ID" };
    FlyBehavior* flyBehavior;
};
