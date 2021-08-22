#ifndef XIAOMI_IPHONE_H
#define XIAOMI_IPHONE_H
#include"iphone_product.h"
//小米手机具体实现
class XiaomiIphone :public IphoneProduct
{
public:
	void start()
	{
		cout << "开启小米手机" << endl;
	}
	void shutdown()
	{
		cout << "关闭小米手机" << endl;
	}
	void callup()
	{
		cout << "小米打电话" << endl;
	}
	void sendemil()
	{
		cout << "小米发短信" << endl;
	}
};

#endif // !XIAOMI_IPHONE_H

