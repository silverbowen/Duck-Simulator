/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/


#include "Duck.h"
#include "MallardDuck.h"
#include "NoFlyBehavior.h"
#include <memory>
#include <iostream>

int main()
{
    // Test 00 - does it compile?
    {
        // scope for easier test readability
        Duck duck; // Instantiate a generic duck?
        std::cout << "duck is a " << duck.getID() << ".\n"; // call getID with an instance?
    }
    {
        std::unique_ptr<Duck> duckPtr(new Duck);
        std::cout << "duckPtr points to a " << duckPtr->getID() << ".\n"; // call getID with a ptr?
    }
    {
        Duck* duckPtr = new Duck; // test with regular ptr
        std::cout << "duckPtr points to a " << duckPtr->getVariableID() << ".\n"; // call getVariableID with a ptr?
        delete duckPtr;
    }
    {
        MallardDuck mallardDuck; // instantiate a MallardDuck;
        std::cout << "mallardDuck is a " << mallardDuck.getID() << ".\n"; // call getID with an instance?
    }
    {
        std::unique_ptr<MallardDuck> mallardPtr(new MallardDuck);
        std::cout << "mallardPtr points to a " << mallardPtr->getID() << ".\n"; // call getID with a ptr?
    }
    {
        Duck* mallardPtr = new MallardDuck;
        std::cout << "mallardPtr points to a " << mallardPtr->getID() << ".\n"; // call getID polymorphically with a ptr?
        delete mallardPtr;
    }
    {
        MallardDuck* mallardPtr = new MallardDuck;
        std::cout << "mallardPtr points to a " << mallardPtr->getVariableID() << ".\n"; // call getVariableID with a ptr?
        delete mallardPtr;
    }
    {
        Duck* mallardPtr = new MallardDuck;
        std::cout << "mallardPtr points to a " << mallardPtr->getVariableID() << ".\n"; // call getVariableID polymorphically with a ptr?
        delete mallardPtr;
    }
    {
        MallardDuck mallardDuck;
        mallardDuck.doFlyBehavior(); // call doFlyBehavior with an instance?
    }
    {
        Duck* mallardPtr = new MallardDuck;
        mallardPtr->doFlyBehavior(); // call doFlyBehavior with a polymorphic ptr?
        delete mallardPtr;
    }
    {
        MallardDuck mallardDuck;
        NoFlyBehavior noFlyBehavior;
        mallardDuck.setFlyBehavior(noFlyBehavior); // change flyBehavior at runtime
        mallardDuck.doFlyBehavior(); // call new doFlyBehavior?
    }
    {
        Duck* mallardPtr = new MallardDuck;
        NoFlyBehavior noFlyBehavior;
        mallardPtr->setFlyBehavior(noFlyBehavior); // change flyBehavior polymorphically at runtime with a ptr
        mallardPtr->doFlyBehavior(); // call new doFlyBehavior?
        delete mallardPtr;
    }
    {
        Duck* mallardPtr = new MallardDuck;
        FlyBehavior* noFlyBehavior = new NoFlyBehavior;
        mallardPtr->setFlyBehavior(*noFlyBehavior); // change flyBehavior polymorpically at runtime with polymorphic behavior ptr
        mallardPtr->doFlyBehavior(); // call new doFlyBehavior?
        delete mallardPtr;
    }
}
