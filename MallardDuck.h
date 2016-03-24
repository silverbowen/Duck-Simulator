/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#pragma once
#include "Duck.h"
#include "GracefulFlyBehavior.h"

class MallardDuck : public Duck
{
public:
    MallardDuck();
    MallardDuck(FlyBehavior &flyBehavior);
    MallardDuck(const MallardDuck& other);
    MallardDuck(MallardDuck&& other);
    ~MallardDuck();
    MallardDuck& operator =(MallardDuck other);


    std::string getID() const;

    void setFlyBehavior(FlyBehavior &flyBehavior);
    void doFlyBehavior();

private:
    std::string ID { "Mallard Duck" };
    FlyBehavior* defaultFlyBehavior{new GracefulFlyBehavior};
    FlyBehavior* flyBehavior{defaultFlyBehavior};
};
