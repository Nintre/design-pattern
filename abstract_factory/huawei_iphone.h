#ifndef HUAWEI_IPHONE_H
#define HUAWEI_IPHONE_H
#include"iphone_product.h"
//华为手机具体实现
class HuaweiIphone :public IphoneProduct
{
public:
	void start()
	{
		cout << "开启华为手机" << endl;
	}
	void shutdown()
	{
		cout << "关闭华为手机" << endl;
	}
	void callup()
	{
		cout << "华为打电话" << endl;
	}
	void sendemil()
	{
		cout << "华为发短信" << endl;
	}
};

#endif // !HUAWEI_IPHONE_H


