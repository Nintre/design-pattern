#ifndef ROUTER_PRODUCT_H
#define ROUTER_PRODUCT_H
#include<iostream>
using namespace::std;
//·������Ʒ�ӿ�
class RouterProduct
{
public:
	virtual void start() = 0;
	virtual void shutdown() = 0;
	virtual void openWiFi() = 0;
	virtual void setting() = 0;
};

#endif // !ROUTER_PRODUCT_H


