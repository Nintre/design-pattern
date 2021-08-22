#ifndef XIAOMI_FACTORY_H
#define XIAOMI_FACTORY_H
#include"product_factory.h"
#include"xiaomi_iphone.h"
#include"xiaomi_router.h"
class XiaomiFactory :public ProductFactory
{
public:
	IphoneProduct* pp()
	{
		return new XiaomiIphone;
	}
	RouterProduct* rp()
	{
		return new XiaomiRouter;
	}
};

#endif // !XIAOMI_FACTORY_H
