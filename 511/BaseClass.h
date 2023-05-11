#pragma once
class BaseClass
{
private:
	int privateValue = 1;
protected:
	int protectedValue = 2;
public:
	int publicValue = 3;
	int getPriveatValue();
	int getProtectedValue();
};

