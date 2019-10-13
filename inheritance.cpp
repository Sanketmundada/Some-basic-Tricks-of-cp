#include <iostream>

using namespace std;

class publications
{
private:
        char title[100];
        float price;
public:
    void getdata()
    {
        cout<<"\n enter title:";
        cin>>title;
        cout<<"\n enter price:";
        cin>>price;
    }
    void putdata()
    {
        cout<<"\n title:"<<title;
        cout<<"\n price:"<<price;
    }

};

class book:public publications
{
    int pagecount;
public:
    void getdata()
    {
        publications::getdata();
        cout<<"\n enter page count:";
        cin>>pagecount;
    }
    void putdata()
    {
        publications::putdata();
        cout<<"\n page count:"<<pagecount;
    }
};

class tape:public publications
{
    int minutes;
public:
    void getdata()
    {
        publications::getdata();
        cout<<"\n enter time in minutes:";
        cin>>minutes;
    }
    void putdata()
    {
        publications::putdata();
        cout<<"\n time in minutes:"<<minutes;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    book b1;
    tape t1;
    b1.getdata();
    b1.putdata();
    t1.getdata();
    t1.putdata();
    return 0;
}
