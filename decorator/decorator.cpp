#include<iostream>
//抽象控件component类
class component
{
public:
    virtual void read(int number)=0;
    virtual void write(char data)=0;
};
//具体控件类
class concretecomponent:public component
{
public:
    //具体实现
    virtual void read(int number)
    {
        //...
    }
    virtual void write(char data)
    {
        //...
    }
};

//装饰控件类（当然也可也抽象一个装饰类出来）
class decorator1:public component
{
private:
    component* comp;
public:
    //默认构造函数
    decorator1(){}
    //构造器
    decorator1(component* com):comp(com)
    {

    }
    virtual void read(int number)
    {
        //额外的操作
    }
    virtual void write(char data)
    {
        //额外操作
    }
};
// 其他的装饰等等
//...
int main()
{
    component* com=new concretecomponent;
    decorator1* dec1=new decorator1(com);
    return 0;
}