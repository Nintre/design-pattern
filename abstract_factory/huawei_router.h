#ifndef HUAWEI_ROUTER_H
#define HUAWEI_ROUTER_H
#include"router_product.h"
//��Ϊ·��������ʵ��
class HuaweiRouter :public RouterProduct
{
public:
	void start()
	{
		cout << "������Ϊ·����" << endl;
	}
	void shutdown()
	{
		cout << "�رջ�Ϊ·����" << endl;
	}
	void openWiFi()
	{
		cout << "�򿪻�Ϊ·����WiFi" << endl;
	}
	void setting()
	{
		cout << "��Ϊ·��������" << endl;
	}
};

#endif // !HUAWEI_ROUTER_H

