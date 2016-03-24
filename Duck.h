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
    Duck(const Duck& other);
    Duck(Duck&& other);
    virtual ~Duck();
    Duck& operator =(Duck other);

    virtual std::string getID() const;

    virtual void setFlyBehavior(FlyBehavior &flyBehavior) {};
    virtual void doFlyBehavior() {};

    virtual void quack() {};
    virtual void swim() {};
    void doQuack();
    void doSwim();
    void setQuack();
    void setSwim();

private:
    std::string ID { "Generic Duck" };
};
