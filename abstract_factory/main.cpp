#include"xiaomi_factory.h"

int main()
{
	ProductFactory* xiaomif = new XiaomiFactory;
	xiaomif->pp()->start();
	xiaomif->pp()->callup();
	xiaomif->pp()->sendemil();
	xiaomif->pp()->shutdown();
	
	xiaomif->rp()->openWiFi();
	xiaomif->rp()->start();
	xiaomif->rp()->setting();
	xiaomif->rp()->shutdown();
	system("pause");
	return 0;
}