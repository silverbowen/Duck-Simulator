/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#pragma once
#include "FlyBehavior.h"

class GracefulFlyBehavior : public FlyBehavior
{
public:
    ~GracefulFlyBehavior();

    void fly();
};
