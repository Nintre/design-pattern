#include"library.cpp"
class develop:public library
{
protected:
    virtual bool step2()
    {
        //子类进行重写
    }
    virtual void step4()
    {
        //子类进行重写
    }
};

int main()
{
    library* plib=new develop();
    plib->run();
    delete plib;
}