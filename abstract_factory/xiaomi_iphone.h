#ifndef XIAOMI_IPHONE_H
#define XIAOMI_IPHONE_H
#include"iphone_product.h"
//С���ֻ�����ʵ��
class XiaomiIphone :public IphoneProduct
{
public:
	void start()
	{
		cout << "����С���ֻ�" << endl;
	}
	void shutdown()
	{
		cout << "�ر�С���ֻ�" << endl;
	}
	void callup()
	{
		cout << "С�״�绰" << endl;
	}
	void sendemil()
	{
		cout << "С�׷�����" << endl;
	}
};

#endif // !XIAOMI_IPHONE_H

