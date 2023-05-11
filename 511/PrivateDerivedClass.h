#pragma once
#include "BaseClass.h"
class PrivateDerivedClass :
    private BaseClass
{
public:
    int getProtectedValue();
    int getPublicValue();
};

