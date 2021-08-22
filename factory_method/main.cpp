#include"wuling_Factory.h"
//#include"Car.h"
//#include"Car_factory.h"
using namespace::std;

int main()
{   
    CarFactory* wl_f = new wulingFactory;
    wl_f->product_factory();
    CarFactory* ad_f = new aodiFactory;
    ad_f->product_factory();
    delete wl_f;
    delete ad_f;
    system("pause");
    return 0;
}