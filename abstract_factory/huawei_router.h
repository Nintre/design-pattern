#ifndef HUAWEI_ROUTER_H
#define HUAWEI_ROUTER_H
#include"router_product.h"
//华为路由器具体实现
class HuaweiRouter :public RouterProduct
{
public:
	void start()
	{
		cout << "启动华为路由器" << endl;
	}
	void shutdown()
	{
		cout << "关闭华为路由器" << endl;
	}
	void openWiFi()
	{
		cout << "打开华为路由器WiFi" << endl;
	}
	void setting()
	{
		cout << "华为路由器设置" << endl;
	}
};

#endif // !HUAWEI_ROUTER_H

