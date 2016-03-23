/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/


#include "MallardDuck.h"
#include "GracefulFlyBehavior.h"
#include "RocketFlyBehavior.h"
#include "NoFlyBehavior.h"
#include <memory>
#include <iostream>


void testWithInstance(const Duck &duck);
void testWithPointer(Duck *duckPtr);
void testWithUniquePointer(std::unique_ptr<Duck> &duckPtr);
void testInstanceBehavior(Duck &duck);
void testPointerBehavior(Duck *duckPtr);
void testUniquePointerBehavior(std::unique_ptr<Duck> &duckPtr);

int main()
{
    // Test 00 - does it compile?

    Duck duck;
    testWithInstance(duck);

    MallardDuck mallard;
    testWithInstance(mallard);

    Duck* duckPtr = &duck;
    testWithPointer(duckPtr);

    duckPtr = &mallard;
    testWithPointer(duckPtr);

    std::unique_ptr<Duck> uniqueDuckPtr(new Duck);
    testWithUniquePointer(uniqueDuckPtr);

    std::unique_ptr<Duck> uniqueMallardPtr(new MallardDuck);
    testWithUniquePointer(uniqueMallardPtr);

    GracefulFlyBehavior gracefulFlyBehavior;
    MallardDuck gracefulMallard(gracefulFlyBehavior);
    testInstanceBehavior(gracefulMallard);

    RocketFlyBehavior rocketFlyBehavior;
    gracefulMallard.setFlyBehavior(rocketFlyBehavior);
    testInstanceBehavior(gracefulMallard);

    NoFlyBehavior noFlyBehavior;
    mallard.setFlyBehavior(noFlyBehavior);
    testInstanceBehavior(mallard);

    duckPtr->setFlyBehavior(gracefulFlyBehavior);
    testPointerBehavior(duckPtr);

    uniqueMallardPtr->setFlyBehavior(rocketFlyBehavior);
    testUniquePointerBehavior(uniqueMallardPtr);

    std::unique_ptr<NoFlyBehavior> noFlyBehaviorPtr(new NoFlyBehavior);
    uniqueMallardPtr->setFlyBehavior(*noFlyBehaviorPtr);
    testUniquePointerBehavior(uniqueMallardPtr);
}

void testWithInstance(const Duck &duck)
{
    std::cout << "This duck is a " << duck.getID() << ".\n";
    std::cout << '\n';
}

void testWithPointer(Duck *duckPtr)
{
    std::cout << "This duckPtr points to a " << duckPtr->getID() << ".\n";
    std::cout << '\n';
}

void testWithUniquePointer(std::unique_ptr<Duck> &uniqueDuckPtr)
{
    std::cout << "This unique uniqueDuckPtr points to a " << uniqueDuckPtr->getID() << ".\n";
    std::cout << '\n';
}

void testInstanceBehavior(Duck &duck)
{
    duck.doFlyBehavior();
    std::cout << '\n';
}

void testPointerBehavior(Duck *duckPtr)
{
    duckPtr->doFlyBehavior();
    std::cout << '\n';
}

void testUniquePointerBehavior(std::unique_ptr<Duck> &uniqueDuckPtr)
{
    uniqueDuckPtr->doFlyBehavior();
    std::cout << '\n';
}
