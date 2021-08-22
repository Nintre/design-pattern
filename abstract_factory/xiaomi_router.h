#ifndef XIAOMI_ROUTER_H
#define XIAOMI_ROUTER_H
#include"router_product.h"
//小米路由器具体实现
class XiaomiRouter :public RouterProduct
{
public:
	void start()
	{
		cout << "启动小米路由器" << endl;
	}
	void shutdown()
	{
		cout << "关闭小米路由器" << endl;
	}
	void openWiFi()
	{
		cout << "打开小米路由器WiFi" << endl;
	}
	void setting()
	{
		cout << "小米路由器设置" << endl;
	}
};

#endif // !XIAOMI_ROUTER_H
