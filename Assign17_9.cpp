#include<iostream>

using namespace std;

class base
{
    public:
        int i;
        float f;
        double d;

        void fun()
        {

        }
        void gun()
        {

        }

};

class derived : public base
{
    public :
    int i;
    double d;

    void sun()
    {}

};

class derivedx : public derived
{
    public :
    int k;

    void run()
    {}
};

int main()
{
    base bobj;
    derived dobj;
    derivedx dobj1;

    cout<<sizeof(bobj)<<endl;
    cout<<sizeof(dobj)<<endl;
    cout<<sizeof(dobj1)<<endl;

    return 0;
}