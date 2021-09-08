#include<vector>
//抽象观察者
class observer
{
public:
    //收到通知之后的动作
    virtual void action()=0;
};

//具体的观察者
class concreteobserver:public observer
{
public:
    void action()
    {
        //具体的动作
    }
};

//抽象的通知
class info
{
private:
    vector<observer*>observer_vec;
public:
    //抽象的通知方法
    virtual void notify()=0;
    void addobserver(observer* obs)
    {
        observer_vec.push_back(obs);
    }
    void deleteobserver(observer* obs)
    {
        observer_vec.remove(obs);
    }
};
//具体的通知
class concreteinfo:public info
{
public:
    //具体的通知方法：这里用的是全部观察者都通知
    virtual void notify()
    {
        for(auto i:observer_vec)
        {
            i->action();
        }
    }
};

int main()
{
    info* info_=new concreteinfo;
    observer* obs=new concreteobserver;
    info_->addobserver(obs);//添加到通知列表
    info_->notify();//这里会自动的通知观察者
}