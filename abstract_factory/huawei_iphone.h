#ifndef HUAWEI_IPHONE_H
#define HUAWEI_IPHONE_H
#include"iphone_product.h"
//��Ϊ�ֻ�����ʵ��
class HuaweiIphone :public IphoneProduct
{
public:
	void start()
	{
		cout << "������Ϊ�ֻ�" << endl;
	}
	void shutdown()
	{
		cout << "�رջ�Ϊ�ֻ�" << endl;
	}
	void callup()
	{
		cout << "��Ϊ��绰" << endl;
	}
	void sendemil()
	{
		cout << "��Ϊ������" << endl;
	}
};

#endif // !HUAWEI_IPHONE_H


