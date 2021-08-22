#ifndef WULING_FACTORY_H
#define	WULING_FACTORY_H
#include"Car.h"
#include"Car_factory.h"
class wuling:public Car
{
public:
	void Name()
	{
		cout << "wuling" << endl;
	}
};

class aodi :public Car
{
public:
	void Name()
	{
		cout << "aodi" << endl;
	}
};

class wulingFactory :public CarFactory
{
public:
	void product_factory()
	{
		Car* car = new wuling();
		return car->Name();
	}
};

class aodiFactory :public CarFactory
{
public:
	void product_factory()
	{
		Car* car = new aodi();
		return car->Name();
	}
};

#endif // !WULING_FACTORY_H
