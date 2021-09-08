class library
{
public:
    void run()
    {
        step1();
        if(step2())
        {
            step3();
        }
        step4();
        step5();
    }
protected:
    void step1(){}//稳定
    void step3(){}//稳定
    void step5(){}//稳定

    virtual bool step2()=0;//不稳定
    virtual void step4()=0;//不稳定
};