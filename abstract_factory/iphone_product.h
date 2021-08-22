#ifndef IPHONE_PRODUCT_H
#define	IPHONE_PRODUCT_H
#include<iostream>
using namespace::std;
//手机产品接口
class IphoneProduct
{
public:
	virtual void start() = 0;
	virtual void shutdown() = 0;
	virtual void callup() = 0;
	virtual void sendemil() = 0;
};

#endif // !IPHONE_PRODUCT_H

