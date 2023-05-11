#include "ProtectedDerivedClass.h"

int ProtectedDerivedClass::getProtectedValue()
{
    return protectedValue + 20;
}

int ProtectedDerivedClass::getPublicValue()
{
    return publicValue + 20;
}
