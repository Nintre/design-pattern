#ifndef IPHONE_PRODUCT_H
#define	IPHONE_PRODUCT_H
#include<iostream>
using namespace::std;
//�ֻ���Ʒ�ӿ�
class IphoneProduct
{
public:
	virtual void start() = 0;
	virtual void shutdown() = 0;
	virtual void callup() = 0;
	virtual void sendemil() = 0;
};

#endif // !IPHONE_PRODUCT_H

