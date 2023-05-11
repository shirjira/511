#pragma once
#include "BaseClass.h"
class ProtectedDerivedClass :
    protected BaseClass
{
public:
    int getProtectedValue();
    int getPublicValue();
};

