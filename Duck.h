/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#pragma once
#include "FlyBehavior.h"
#include <string>
#include <iostream>

class Duck
{
public:
    Duck();
    virtual ~Duck();

    virtual std::string getID() const;
    virtual std::string getVariableID() const;

    virtual void setFlyBehavior(FlyBehavior &flyBehavior) {};
    virtual void doFlyBehavior() {};

    virtual void quack() {};
    virtual void swim() {};
    void doQuack();
    void doSwim();
    void setQuack();
    void setSwim();

private:
    std::string variableID { "Generic Duck ID" };
};
