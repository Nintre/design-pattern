//抽象工厂，创建工厂用的
#ifndef PRODUCT_FACTORY_H
#define PRODUCT_FACTORY_H
#include"iphone_product.h"
#include"router_product.h"
class ProductFactory
{
public:
	//生产手机
	virtual IphoneProduct* pp() = 0;
	//生产路由器
	virtual RouterProduct* rp() = 0;
};

#endif // !PRODUCT_FACTORY_H
