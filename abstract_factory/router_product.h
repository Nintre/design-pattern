#ifndef ROUTER_PRODUCT_H
#define ROUTER_PRODUCT_H
#include<iostream>
using namespace::std;
//路由器产品接口
class RouterProduct
{
public:
	virtual void start() = 0;
	virtual void shutdown() = 0;
	virtual void openWiFi() = 0;
	virtual void setting() = 0;
};

#endif // !ROUTER_PRODUCT_H


