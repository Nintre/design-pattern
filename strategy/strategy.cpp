class algorithm
{
public:
    virtual void sort()=0;
};

class Asort:public algorithm
{
public:
    void sort()
    {
        //...
    }
};

class Asort:public algorithm
{
public:
    void sort()
    {
        //...
    }
};

//上下文类，聚合类
class context
{
private:
    algorithm* strategy;
public:
    context(){}
    void Set(algorithm* myalgorthm)
    {
        this->strategy=myalgorthm;
    }
    void sort()
    {
        this->strategy->sort();
    }
    ~context()
    {
        delete this->strategy;
    }
};

int main()
{
    context* con=new context;
    con->Set(new Asort);
    con->sort();
    delete con;    
}