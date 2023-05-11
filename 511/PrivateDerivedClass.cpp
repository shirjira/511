#include "PrivateDerivedClass.h"

int PrivateDerivedClass::getProtectedValue()
{
    return protectedValue + 30;
}

int PrivateDerivedClass::getPublicValue()
{
    return publicValue + 30;
}
