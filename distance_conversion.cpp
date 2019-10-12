#include <iostream>

using namespace std;

class Distance2;
class Distance1
{
private:
    float mile;
public:
    void enter()
    {

        cout<<"\n enter distance";
        cin>>mile;
    }
    void display()
    {
        cout<<"\n distance in miles="<<mile;
    }
     friend void sum(Distance1&,Distance2&);
};

class Distance2
{
private:
    int km,m;
public:
    void enter()
    {
        cout<<"\n enter distance";
        cout<<"\n enter kilomwter";
        cin>>km;
        cout<<"\n enter meter";
        cin>>m;
    }
    void display()
    {
        cout<<"\n distance in kilometers and meters="<<km<<"km"<<m<<"m";
    }
    friend void sum(Distance1&,Distance2&);
};

void sum(Distance1& d1,Distance2 & d2)
{
    d1.mile=d1.mile+(d2.km+float(d2.m)/1000.0)/1.61;
    float k=d1.mile*1.61;
    d2.km=int(k);
    d2.m=(k-d2.km)*1000;
}
int main()
{
    cout << "Hello world!" << endl;
    Distance1 d1;
    d1.enter();
    d1.display();
    Distance2 d2;
    d2.enter();
    d2.display();
    sum(d1,d2);
    cout<<"\n after adding both distances";
    d1.display();
    d2.display();
    return 0;
}
