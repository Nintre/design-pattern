#ifndef XIAOMI_ROUTER_H
#define XIAOMI_ROUTER_H
#include"router_product.h"
//С��·��������ʵ��
class XiaomiRouter :public RouterProduct
{
public:
	void start()
	{
		cout << "����С��·����" << endl;
	}
	void shutdown()
	{
		cout << "�ر�С��·����" << endl;
	}
	void openWiFi()
	{
		cout << "��С��·����WiFi" << endl;
	}
	void setting()
	{
		cout << "С��·��������" << endl;
	}
};

#endif // !XIAOMI_ROUTER_H
