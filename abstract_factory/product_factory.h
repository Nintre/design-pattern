//���󹤳������������õ�
#ifndef PRODUCT_FACTORY_H
#define PRODUCT_FACTORY_H
#include"iphone_product.h"
#include"router_product.h"
class ProductFactory
{
public:
	//�����ֻ�
	virtual IphoneProduct* pp() = 0;
	//����·����
	virtual RouterProduct* rp() = 0;
};

#endif // !PRODUCT_FACTORY_H
